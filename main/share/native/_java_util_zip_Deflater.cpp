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

#include <stdio.h>
#include <stdlib.h>
#include "jlong.h"
#include "jni.h"
#include "_jni_util.h"
#include <java/util/zip/Deflater.h>
#include <java/util/zip/DataFormatException.h>
#include <zlib/zlib.h>
#include <jcpp.h>

using ::java::util::zip::DataFormatException;

#define DEF_MEM_LEVEL 8

int64_t _Java_java_util_zip_Deflater_init(int32_t level, int32_t strategy, bool nowrap) {
	z_stream* strm = (z_stream*)calloc(1, sizeof(z_stream));

	if (strm == 0) {
		_JNU_ThrowOutOfMemoryError(nullptr);
		return jlong_zero;
	} else {
		const char* msg;
		int ret = deflateInit2(strm, level, Z_DEFLATED,
			nowrap ? -MAX_WBITS : MAX_WBITS,
			DEF_MEM_LEVEL, strategy);
		switch (ret) {
		case Z_OK:
			return ptr_to_jlong(strm);
		case Z_MEM_ERROR:
			free(strm);
			_JNU_ThrowOutOfMemoryError(nullptr);
			return jlong_zero;
		case Z_STREAM_ERROR:
			free(strm);
			_JNU_ThrowIllegalArgumentException(nullptr);
			return jlong_zero;
		default:
			msg = ((strm->msg != NULL) ? strm->msg :
				(ret == Z_VERSION_ERROR) ?
				"zlib returned Z_VERSION_ERROR: "
				"compile time and runtime zlib implementations differ" :
				"unknown error initializing zlib library");
			free(strm);
			_JNU_ThrowInternalError(msg);
			return jlong_zero;
		}
	}
}

static void throwInternalErrorHelper(z_stream* strm, const char* fixmsg) {
	const char* msg = NULL;
	msg = (strm->msg != NULL) ? strm->msg : fixmsg;
	_JNU_ThrowInternalError(msg);
}

static void checkSetDictionaryResult(int64_t addr, int32_t res) {
	z_stream* strm = (z_stream*)jlong_to_ptr(addr);
	switch (res) {
	case Z_OK:
		break;
	case Z_STREAM_ERROR:
		_JNU_ThrowIllegalArgumentException(nullptr);
		break;
	default:
		throwInternalErrorHelper(strm, "unknown error in checkSetDictionaryResult");
		break;
	}
}

void _Java_java_util_zip_Deflater_setDictionary(int64_t addr, $bytes* b, int32_t off, int32_t len) {
	int res;
	Bytef* buf = (Bytef*)b->begin();
	if (buf == NULL) /* out of memory */
		return;
	res = deflateSetDictionary((z_streamp)jlong_to_ptr(addr), buf + off, len);
	checkSetDictionaryResult(addr, res);
}

void _Java_java_util_zip_Deflater_setDictionaryBuffer(int64_t addr, int64_t bufferAddr, int32_t len) {
	int res;
	Bytef* buf = (Bytef*)jlong_to_ptr(bufferAddr);
	res = deflateSetDictionary((z_streamp)jlong_to_ptr(addr), buf, len);
	checkSetDictionaryResult(addr, res);
}

static int32_t doDeflate(int64_t addr,
	int8_t* input, int32_t inputLen,
	int8_t* output, int32_t outputLen,
	int32_t flush, int32_t params) {
	z_stream* strm = (z_stream*)jlong_to_ptr(addr);
	int setParams = params & 1;
	int res;

	strm->next_in = (Bytef*)input;
	strm->next_out = (Bytef*)output;
	strm->avail_in = inputLen;
	strm->avail_out = outputLen;

	if (setParams) {
		int strategy = (params >> 1) & 3;
		int level = params >> 3;
		res = deflateParams(strm, level, strategy);
	} else {
		res = deflate(strm, flush);
	}
	return res;
}

static int64_t checkDeflateStatus(int64_t addr,
	int32_t inputLen,
	int32_t outputLen,
	int32_t params, int res) {
	z_stream* strm = (z_stream*)jlong_to_ptr(addr);
	int32_t inputUsed = 0, outputUsed = 0;
	int finished = 0;
	int setParams = params & 1;

	if (setParams) {
		switch (res) {
		case Z_OK:
			setParams = 0;
			/* fall through */
		case Z_BUF_ERROR:
			inputUsed = inputLen - strm->avail_in;
			outputUsed = outputLen - strm->avail_out;
			break;
		default:
			throwInternalErrorHelper(strm, "unknown error in checkDeflateStatus, setParams case");
			return 0;
		}
	} else {
		switch (res) {
		case Z_STREAM_END:
			finished = 1;
			/* fall through */
		case Z_OK:
		case Z_BUF_ERROR:
			inputUsed = inputLen - strm->avail_in;
			outputUsed = outputLen - strm->avail_out;
			break;
		default:
			throwInternalErrorHelper(strm, "unknown error in checkDeflateStatus");
			return 0;
		}
	}
	return ((int64_t)inputUsed) | (((int64_t)outputUsed) << 31) | (((int64_t)finished) << 62) | (((int64_t)setParams) << 63);
}

int64_t _Java_java_util_zip_Deflater_deflateBytesBytes(::java::util::zip::Deflater* this__, int64_t addr,
	$bytes* inputArray, int32_t inputOff, int32_t inputLen,
	$bytes* outputArray, int32_t outputOff, int32_t outputLen,
	int32_t flush, int32_t params) {
	int8_t* input = inputArray->begin();
	int8_t* output;
	int64_t retVal;
	int32_t res;

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

	res = doDeflate(addr, input + inputOff, inputLen, output + outputOff,
		outputLen, flush, params);

	retVal = checkDeflateStatus(addr, inputLen, outputLen, params, res);
	return retVal;
}

int64_t _Java_java_util_zip_Deflater_deflateBytesBuffer(::java::util::zip::Deflater* this__, int64_t addr,
	$bytes* inputArray, int32_t inputOff, int32_t inputLen,
	int64_t outputBuffer, int32_t outputLen,
	int32_t flush, int32_t params) {
	int8_t* input = inputArray->begin();
	int8_t* output;
	int64_t retVal;
	int32_t res;
	if (input == NULL) {
		if (inputLen != 0) {
			_JNU_ThrowOutOfMemoryError(nullptr);
		}
		return 0L;
	}
	output = (int8_t*)jlong_to_ptr(outputBuffer);

	res = doDeflate(addr, input + inputOff, inputLen, output, outputLen,
		flush, params);

	retVal = checkDeflateStatus(addr, inputLen, outputLen, params, res);
	return retVal;
}

int64_t _Java_java_util_zip_Deflater_deflateBufferBytes(::java::util::zip::Deflater* this__, int64_t addr,
	int64_t inputBuffer, int32_t inputLen,
	$bytes* outputArray, int32_t outputOff, int32_t outputLen,
	int32_t flush, int32_t params) {
	int8_t* input = (int8_t*)jlong_to_ptr(inputBuffer);
	int8_t* output = outputArray->begin();
	int64_t retVal;
	int32_t res;
	if (output == NULL) {
		if (outputLen != 0) {
			_JNU_ThrowOutOfMemoryError(nullptr);
		}
		return 0L;
	}

	res = doDeflate(addr, input, inputLen, output + outputOff, outputLen,
		flush, params);

	retVal = checkDeflateStatus(addr, inputLen, outputLen, params, res);
	return retVal;
}

int64_t _Java_java_util_zip_Deflater_deflateBufferBuffer(::java::util::zip::Deflater* this__, int64_t addr,
	int64_t inputBuffer, int32_t inputLen,
	int64_t outputBuffer, int32_t outputLen,
	int32_t flush, int32_t params) {
	int8_t* input = (int8_t*)jlong_to_ptr(inputBuffer);
	int8_t* output = (int8_t*)jlong_to_ptr(outputBuffer);
	int64_t retVal;
	int32_t res;

	res = doDeflate(addr, input, inputLen, output, outputLen, flush, params);
	retVal = checkDeflateStatus(addr, inputLen, outputLen, params, res);
	return retVal;
}

int32_t _Java_java_util_zip_Deflater_getAdler(int64_t addr) {
	return ((z_stream*)jlong_to_ptr(addr))->adler;
}

void _Java_java_util_zip_Deflater_reset(int64_t addr) {
	if (deflateReset((z_stream*)jlong_to_ptr(addr)) != Z_OK) {
		_JNU_ThrowInternalError("deflateReset failed");
	}
}

void _Java_java_util_zip_Deflater_end(int64_t addr) {
	if (deflateEnd((z_stream*)jlong_to_ptr(addr)) == Z_STREAM_ERROR) {
		_JNU_ThrowInternalError("deflateEnd failed");
	} else {
		free((z_stream*)jlong_to_ptr(addr));
	}
}