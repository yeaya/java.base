/*
 * Copyright (c) 2025, Yao Yuan <yeaya@163.com>. All rights reserved.
 * DO NOT ALTER OR REMOVE COPYRIGHT NOTICES OR THIS FILE HEADER.
 *
 * This code is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 2 only, as
 * published by the Free Software Foundation.  This file as subject to the
 * "Classpath" exception in the LICENSE file that accompanied this code.
 *
 * This code is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * version 2 for more details (a copy is included in the LICENSE file that
 * accompanied this code).
 *
 * You should have received a copy of the GNU General Public License version
 * 2 along with this work; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include "jlong.h"
#include "jni.h"
#include "jvm.h"
#include "_jni_util.h"
#undef ERROR
#include <java/util/zip/Inflater.h>
#include <java/util/zip/DataFormatException.h>
#include <zlib/zlib.h>
#include <jcpp.h>

using ::java::util::zip::DataFormatException;

#define ThrowDataFormatException(msg) JNU_ThrowByName("java/util/zip/DataFormatException", msg)

int64_t _Java_java_util_zip_Inflater_init(bool nowrap) {
	z_stream* strm = (z_stream*)calloc(1, sizeof(z_stream));

	if (strm == NULL) {
		_JNU_ThrowOutOfMemoryError(nullptr);
		return 0;
	} else {
		const char* msg;
		int ret = inflateInit2(strm, nowrap ? -MAX_WBITS : MAX_WBITS);
		switch (ret) {
		case Z_OK:
			return ptr_to_jlong(strm);
		case Z_MEM_ERROR:
			free(strm);
			_JNU_ThrowOutOfMemoryError(nullptr);
			return 0;
		default:
			msg = ((strm->msg != NULL) ? strm->msg :
				(ret == Z_VERSION_ERROR) ?
				"zlib returned Z_VERSION_ERROR: "
				"compile time and runtime zlib implementations differ" :
				(ret == Z_STREAM_ERROR) ?
				"inflateInit2 returned Z_STREAM_ERROR" :
				"unknown error initializing zlib library");
			free(strm);
			_JNU_ThrowInternalError(msg);
			return 0;
		}
	}
}

static void checkSetDictionaryResult(int64_t addr, int res) {
	switch (res) {
	case Z_OK:
		break;
	case Z_STREAM_ERROR:
	case Z_DATA_ERROR:
		_JNU_ThrowIllegalArgumentException(((z_stream*)jlong_to_ptr(addr))->msg);
		break;
	default:
		_JNU_ThrowInternalError(((z_stream*)jlong_to_ptr(addr))->msg);
		break;
	}
}

void _Java_java_util_zip_Inflater_setDictionary(int64_t addr, $bytes* b, int32_t off, int32_t len) {
	int32_t res;
	Bytef* buf = (Bytef*)b->begin();
	if (buf == NULL) /* out of memory */
		return;
	res = inflateSetDictionary((z_streamp)jlong_to_ptr(addr), buf + off, len);
	checkSetDictionaryResult(addr, res);
}

void _Java_java_util_zip_Inflater_setDictionaryBuffer(int64_t addr, int64_t bufferAddr, int32_t len) {
	int32_t res;
	Bytef* buf = (Bytef*)jlong_to_ptr(bufferAddr);
	res = inflateSetDictionary((z_streamp)jlong_to_ptr(addr), buf, len);
	checkSetDictionaryResult(addr, res);
}

static int32_t doInflate(int64_t addr,
	int8_t* input, int32_t inputLen,
	int8_t* output, int32_t outputLen) {
	int32_t ret;
	z_stream* strm = (z_stream*)jlong_to_ptr(addr);

	strm->next_in = (Bytef*)input;
	strm->next_out = (Bytef*)output;
	strm->avail_in = inputLen;
	strm->avail_out = outputLen;

	ret = inflate(strm, Z_PARTIAL_FLUSH);
	return ret;
}

static int64_t checkInflateStatus(::java::util::zip::Inflater* this__, int64_t addr, int32_t inputLen, int32_t outputLen, int32_t ret) {
	z_stream* strm = (z_stream*)jlong_to_ptr(addr);
	int32_t inputUsed = 0, outputUsed = 0;
	int finished = 0;
	int needDict = 0;

	switch (ret) {
	case Z_STREAM_END:
		finished = 1;
		/* fall through */
	case Z_OK:
		inputUsed = inputLen - strm->avail_in;
		outputUsed = outputLen - strm->avail_out;
		break;
	case Z_NEED_DICT:
		needDict = 1;
		/* Might have consumed some input here! */
		inputUsed = inputLen - strm->avail_in;
		/* zlib is unclear about whether output may be produced */
		outputUsed = outputLen - strm->avail_out;
		break;
	case Z_BUF_ERROR:
		break;
	case Z_DATA_ERROR:
		inputUsed = inputLen - strm->avail_in;
		//   (*env)->SetIntField(env, this, inputConsumedID, inputUsed);
		this__->inputConsumed = inputUsed;
		outputUsed = outputLen - strm->avail_out;
		//	 (*env)->SetIntField(env, this, outputConsumedID, outputUsed);
		this__->outputConsumed = outputUsed;
		// ThrowDataFormatException(strm->msg);
		$throwNew(DataFormatException, $$str(strm->msg));

		break;
	case Z_MEM_ERROR:
		_JNU_ThrowOutOfMemoryError(nullptr);
		break;
	default:
		_JNU_ThrowInternalError(strm->msg);
		break;
	}
	return ((int64_t)inputUsed) | (((int64_t)outputUsed) << 31) | (((int64_t)finished) << 62) | (((int64_t)needDict) << 63);
}

int64_t _Java_java_util_zip_Inflater_inflateBytesBytes(::java::util::zip::Inflater* this__, int64_t addr,
	$bytes* inputArray, int32_t inputOff, int32_t inputLen,
	$bytes* outputArray, int32_t outputOff, int32_t outputLen) {
	int8_t* input = inputArray->begin();
	int8_t* output;
	int32_t ret;
	int64_t retVal;

	if (input == NULL) {
		if (inputLen != 0) {
			_JNU_ThrowOutOfMemoryError(nullptr);
		}
		return 0L;
	}
	output = outputArray->begin();
	if (output == NULL) {
		if (outputLen != 0) {
			_JNU_ThrowOutOfMemoryError(nullptr);
		}
		return 0L;
	}

	ret = doInflate(addr, input + inputOff, inputLen, output + outputOff,
		outputLen);

	retVal = checkInflateStatus(this__, addr, inputLen, outputLen, ret);
	return retVal;
}

int64_t _Java_java_util_zip_Inflater_inflateBytesBuffer(::java::util::zip::Inflater* this__, int64_t addr,
	$bytes* inputArray, int32_t inputOff, int32_t inputLen,
	int64_t outputBuffer, int32_t outputLen) {
	int8_t* input = inputArray->begin();
	int8_t* output;
	int32_t ret;
	int64_t retVal;

	if (input == NULL) {
		if (inputLen != 0) {
			_JNU_ThrowOutOfMemoryError(nullptr);
		}
		return 0L;
	}
	output = (int8_t*)jlong_to_ptr(outputBuffer);

	ret = doInflate(addr, input + inputOff, inputLen, output, outputLen);

	retVal = checkInflateStatus(this__, addr, inputLen, outputLen, ret);

	return retVal;
}

int64_t _Java_java_util_zip_Inflater_inflateBufferBytes(::java::util::zip::Inflater* this__, int64_t addr,
	int64_t inputBuffer, int32_t inputLen,
	$bytes* outputArray, int32_t outputOff, int32_t outputLen) {
	int8_t* input = (int8_t*)jlong_to_ptr(inputBuffer);
	int8_t* output = outputArray->begin();
	int32_t ret;
	int64_t retVal;

	if (output == NULL) {
		if (outputLen != 0) {
			_JNU_ThrowOutOfMemoryError(nullptr);
		}
		return 0L;
	}

	ret = doInflate(addr, input, inputLen, output + outputOff, outputLen);

	retVal = checkInflateStatus(this__, addr, inputLen, outputLen, ret);

	return retVal;
}

int64_t _Java_java_util_zip_Inflater_inflateBufferBuffer(::java::util::zip::Inflater* this__, int64_t addr,
	int64_t inputBuffer, int32_t inputLen,
	int64_t outputBuffer, int32_t outputLen) {
	int8_t* input = (int8_t*)jlong_to_ptr(inputBuffer);
	int8_t* output = (int8_t*)jlong_to_ptr(outputBuffer);
	int32_t ret;
	int64_t retVal;

	ret = doInflate(addr, input, inputLen, output, outputLen);
	retVal = checkInflateStatus(this__, addr, inputLen, outputLen, ret);
	return retVal;
}

int32_t _Java_java_util_zip_Inflater_getAdler(int64_t addr) {
	return ((z_stream*)jlong_to_ptr(addr))->adler;
}

void _Java_java_util_zip_Inflater_reset(int64_t addr) {
	if (inflateReset((z_streamp)jlong_to_ptr(addr)) != Z_OK) {
		_JNU_ThrowInternalError(nullptr);
	}
}

void _Java_java_util_zip_Inflater_end(int64_t addr) {
	if (inflateEnd((z_streamp)jlong_to_ptr(addr)) == Z_STREAM_ERROR) {
		_JNU_ThrowInternalError(nullptr);
	} else {
		free(jlong_to_ptr(addr));
	}
}