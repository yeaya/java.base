#include <sun/security/provider/SHA.h>

#include <java/lang/Array.h>
#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Arrays.h>
#include <java/util/Objects.h>
#include <sun/security/provider/ByteArrayAccess.h>
#include <sun/security/provider/DigestBase.h>
#include <jcpp.h>

#undef SHA
#undef W

using $ArrayIndexOutOfBoundsException = ::java::lang::ArrayIndexOutOfBoundsException;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;
using $Objects = ::java::util::Objects;
using $ByteArrayAccess = ::sun::security::provider::ByteArrayAccess;
using $DigestBase = ::sun::security::provider::DigestBase;

namespace sun {
	namespace security {
		namespace provider {

$CompoundAttribute _SHA_MethodAnnotations_implCompress03[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$FieldInfo _SHA_FieldInfo_[] = {
	{"W", "[I", nullptr, $PRIVATE, $field(SHA, W)},
	{"state", "[I", nullptr, $PRIVATE, $field(SHA, state)},
	{"round1_kt", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SHA, round1_kt)},
	{"round2_kt", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SHA, round2_kt)},
	{"round3_kt", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SHA, round3_kt)},
	{"round4_kt", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SHA, round4_kt)},
	{}
};

$MethodInfo _SHA_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SHA::*)()>(&SHA::init$))},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "java.lang.CloneNotSupportedException"},
	{"implCompress", "([BI)V", nullptr, 0},
	{"implCompress0", "([BI)V", nullptr, $PRIVATE, $method(static_cast<void(SHA::*)($bytes*,int32_t)>(&SHA::implCompress0)), nullptr, nullptr, _SHA_MethodAnnotations_implCompress03},
	{"implCompressCheck", "([BI)V", nullptr, $PRIVATE, $method(static_cast<void(SHA::*)($bytes*,int32_t)>(&SHA::implCompressCheck))},
	{"implDigest", "([BI)V", nullptr, 0},
	{"implReset", "()V", nullptr, 0},
	{"resetHashes", "()V", nullptr, $PRIVATE, $method(static_cast<void(SHA::*)()>(&SHA::resetHashes))},
	{}
};

$ClassInfo _SHA_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.security.provider.SHA",
	"sun.security.provider.DigestBase",
	nullptr,
	_SHA_FieldInfo_,
	_SHA_MethodInfo_
};

$Object* allocate$SHA($Class* clazz) {
	return $of($alloc(SHA));
}

void SHA::init$() {
	$DigestBase::init$("SHA-1"_s, 20, 64);
	$set(this, state, $new($ints, 5));
	resetHashes();
}

$Object* SHA::clone() {
	$var(SHA, copy, $cast(SHA, $DigestBase::clone()));
	$set($nc(copy), state, $cast($ints, $nc(copy->state)->clone()));
	$set(copy, W, nullptr);
	return $of(copy);
}

void SHA::implReset() {
	resetHashes();
	if (this->W != nullptr) {
		$Arrays::fill(this->W, 0);
	}
}

void SHA::resetHashes() {
	$nc(this->state)->set(0, 0x67452301);
	$nc(this->state)->set(1, (int32_t)0xEFCDAB89);
	$nc(this->state)->set(2, (int32_t)0x98BADCFE);
	$nc(this->state)->set(3, 0x10325476);
	$nc(this->state)->set(4, (int32_t)0xC3D2E1F0);
}

void SHA::implDigest($bytes* out, int32_t ofs) {
	int64_t bitsProcessed = this->bytesProcessed << 3;
	int32_t index = (int32_t)((int32_t)this->bytesProcessed & (uint32_t)63);
	int32_t padLen = (index < 56) ? (56 - index) : (120 - index);
	$init($DigestBase);
	engineUpdate($DigestBase::padding, 0, padLen);
	$ByteArrayAccess::i2bBig4((int32_t)((int64_t)((uint64_t)bitsProcessed >> 32)), this->buffer, 56);
	$ByteArrayAccess::i2bBig4((int32_t)bitsProcessed, this->buffer, 60);
	implCompress(this->buffer, 0);
	$ByteArrayAccess::i2bBig(this->state, 0, out, ofs, 20);
}

void SHA::implCompress($bytes* buf, int32_t ofs) {
	implCompressCheck(buf, ofs);
	implCompress0(buf, ofs);
}

void SHA::implCompressCheck($bytes* buf, int32_t ofs) {
	$Objects::requireNonNull(buf);
	if (ofs < 0 || (buf->length - ofs) < 64) {
		$throwNew($ArrayIndexOutOfBoundsException);
	}
}

void SHA::implCompress0($bytes* buf, int32_t ofs) {
	if (this->W == nullptr) {
		$set(this, W, $new($ints, 80));
	}
	$ByteArrayAccess::b2iBig64(buf, ofs, this->W);
	for (int32_t t = 16; t <= 79; ++t) {
		int32_t temp = (($nc(this->W)->get(t - 3) ^ $nc(this->W)->get(t - 8)) ^ $nc(this->W)->get(t - 14)) ^ $nc(this->W)->get(t - 16);
		$nc(this->W)->set(t, (temp << 1) | ((int32_t)((uint32_t)temp >> 31)));
	}
	int32_t a = $nc(this->state)->get(0);
	int32_t b = $nc(this->state)->get(1);
	int32_t c = $nc(this->state)->get(2);
	int32_t d = $nc(this->state)->get(3);
	int32_t e = $nc(this->state)->get(4);
	for (int32_t i = 0; i < 20; ++i) {
		int32_t temp = ((a << 5) | ($usr(a, 32 - 5))) + (((int32_t)(b & (uint32_t)c)) | ((int32_t)((~b) & (uint32_t)d))) + e + $nc(this->W)->get(i) + SHA::round1_kt;
		e = d;
		d = c;
		c = ((b << 30) | ($usr(b, 32 - 30)));
		b = a;
		a = temp;
	}
	for (int32_t i = 20; i < 40; ++i) {
		int32_t temp = ((a << 5) | ($usr(a, 32 - 5))) + ((b ^ c) ^ d) + e + $nc(this->W)->get(i) + SHA::round2_kt;
		e = d;
		d = c;
		c = ((b << 30) | ($usr(b, 32 - 30)));
		b = a;
		a = temp;
	}
	for (int32_t i = 40; i < 60; ++i) {
		int32_t temp = ((a << 5) | ($usr(a, 32 - 5))) + ((((int32_t)(b & (uint32_t)c)) | ((int32_t)(b & (uint32_t)d))) | ((int32_t)(c & (uint32_t)d))) + e + $nc(this->W)->get(i) + SHA::round3_kt;
		e = d;
		d = c;
		c = ((b << 30) | ($usr(b, 32 - 30)));
		b = a;
		a = temp;
	}
	for (int32_t i = 60; i < 80; ++i) {
		int32_t temp = ((a << 5) | ($usr(a, 32 - 5))) + ((b ^ c) ^ d) + e + $nc(this->W)->get(i) + SHA::round4_kt;
		e = d;
		d = c;
		c = ((b << 30) | ($usr(b, 32 - 30)));
		b = a;
		a = temp;
	}
	(*$nc(this->state))[0] += a;
	(*$nc(this->state))[1] += b;
	(*$nc(this->state))[2] += c;
	(*$nc(this->state))[3] += d;
	(*$nc(this->state))[4] += e;
}

SHA::SHA() {
}

$Class* SHA::load$($String* name, bool initialize) {
	$loadClass(SHA, name, initialize, &_SHA_ClassInfo_, allocate$SHA);
	return class$;
}

$Class* SHA::class$ = nullptr;

		} // provider
	} // security
} // sun