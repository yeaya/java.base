#include <sun/security/provider/SHA2.h>

#include <java/lang/Array.h>
#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Arrays.h>
#include <java/util/Objects.h>
#include <sun/security/provider/ByteArrayAccess.h>
#include <sun/security/provider/DigestBase.h>
#include <jcpp.h>

#undef SHA2
#undef ITERATION
#undef W
#undef ROUND_CONSTS

using $ArrayIndexOutOfBoundsException = ::java::lang::ArrayIndexOutOfBoundsException;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;
using $Objects = ::java::util::Objects;
using $ByteArrayAccess = ::sun::security::provider::ByteArrayAccess;
using $DigestBase = ::sun::security::provider::DigestBase;

namespace sun {
	namespace security {
		namespace provider {

$CompoundAttribute _SHA2_MethodAnnotations_implCompress03[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$FieldInfo _SHA2_FieldInfo_[] = {
	{"ITERATION", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SHA2, ITERATION)},
	{"ROUND_CONSTS", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SHA2, ROUND_CONSTS)},
	{"W", "[I", nullptr, $PRIVATE, $field(SHA2, W)},
	{"state", "[I", nullptr, $PRIVATE, $field(SHA2, state)},
	{"initialHashes", "[I", nullptr, $PRIVATE | $FINAL, $field(SHA2, initialHashes)},
	{}
};

$MethodInfo _SHA2_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;I[I)V", nullptr, 0, $method(static_cast<void(SHA2::*)($String*,int32_t,$ints*)>(&SHA2::init$))},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "java.lang.CloneNotSupportedException"},
	{"implCompress", "([BI)V", nullptr, 0},
	{"implCompress0", "([BI)V", nullptr, $PRIVATE, $method(static_cast<void(SHA2::*)($bytes*,int32_t)>(&SHA2::implCompress0)), nullptr, nullptr, _SHA2_MethodAnnotations_implCompress03},
	{"implCompressCheck", "([BI)V", nullptr, $PRIVATE, $method(static_cast<void(SHA2::*)($bytes*,int32_t)>(&SHA2::implCompressCheck))},
	{"implDigest", "([BI)V", nullptr, 0},
	{"implReset", "()V", nullptr, 0},
	{"resetHashes", "()V", nullptr, $PRIVATE, $method(static_cast<void(SHA2::*)()>(&SHA2::resetHashes))},
	{}
};

$InnerClassInfo _SHA2_InnerClassesInfo_[] = {
	{"sun.security.provider.SHA2$SHA256", "sun.security.provider.SHA2", "SHA256", $PUBLIC | $STATIC | $FINAL},
	{"sun.security.provider.SHA2$SHA224", "sun.security.provider.SHA2", "SHA224", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _SHA2_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"sun.security.provider.SHA2",
	"sun.security.provider.DigestBase",
	nullptr,
	_SHA2_FieldInfo_,
	_SHA2_MethodInfo_,
	nullptr,
	nullptr,
	_SHA2_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.security.provider.SHA2$SHA256,sun.security.provider.SHA2$SHA224"
};

$Object* allocate$SHA2($Class* clazz) {
	return $of($alloc(SHA2));
}

$ints* SHA2::ROUND_CONSTS = nullptr;

void SHA2::init$($String* name, int32_t digestLength, $ints* initialHashes) {
	$DigestBase::init$(name, digestLength, 64);
	$set(this, initialHashes, initialHashes);
	$set(this, state, $new($ints, 8));
	resetHashes();
}

void SHA2::implReset() {
	resetHashes();
	if (this->W != nullptr) {
		$Arrays::fill(this->W, 0);
	}
}

void SHA2::resetHashes() {
	$System::arraycopy(this->initialHashes, 0, this->state, 0, $nc(this->state)->length);
}

void SHA2::implDigest($bytes* out, int32_t ofs) {
	int64_t bitsProcessed = this->bytesProcessed << 3;
	int32_t index = (int32_t)((int32_t)this->bytesProcessed & (uint32_t)63);
	int32_t padLen = (index < 56) ? (56 - index) : (120 - index);
	$init($DigestBase);
	engineUpdate($DigestBase::padding, 0, padLen);
	$ByteArrayAccess::i2bBig4((int32_t)((int64_t)((uint64_t)bitsProcessed >> 32)), this->buffer, 56);
	$ByteArrayAccess::i2bBig4((int32_t)bitsProcessed, this->buffer, 60);
	implCompress(this->buffer, 0);
	$ByteArrayAccess::i2bBig(this->state, 0, out, ofs, engineGetDigestLength());
}

void SHA2::implCompress($bytes* buf, int32_t ofs) {
	implCompressCheck(buf, ofs);
	implCompress0(buf, ofs);
}

void SHA2::implCompressCheck($bytes* buf, int32_t ofs) {
	$Objects::requireNonNull(buf);
	if (ofs < 0 || (buf->length - ofs) < 64) {
		$throwNew($ArrayIndexOutOfBoundsException);
	}
}

void SHA2::implCompress0($bytes* buf, int32_t ofs) {
	if (this->W == nullptr) {
		$set(this, W, $new($ints, 64));
	}
	$ByteArrayAccess::b2iBig64(buf, ofs, this->W);
	for (int32_t t = 16; t < SHA2::ITERATION; ++t) {
		int32_t W_t2 = $nc(this->W)->get(t - 2);
		int32_t W_t15 = $nc(this->W)->get(t - 15);
		int32_t delta0_W_t15 = ((((int32_t)((uint32_t)W_t15 >> 7)) | (W_t15 << 25)) ^ (((int32_t)((uint32_t)W_t15 >> 18)) | (W_t15 << 14))) ^ ((int32_t)((uint32_t)W_t15 >> 3));
		int32_t delta1_W_t2 = ((((int32_t)((uint32_t)W_t2 >> 17)) | (W_t2 << 15)) ^ (((int32_t)((uint32_t)W_t2 >> 19)) | (W_t2 << 13))) ^ ((int32_t)((uint32_t)W_t2 >> 10));
		$nc(this->W)->set(t, delta0_W_t15 + delta1_W_t2 + $nc(this->W)->get(t - 7) + $nc(this->W)->get(t - 16));
	}
	int32_t a = $nc(this->state)->get(0);
	int32_t b = $nc(this->state)->get(1);
	int32_t c = $nc(this->state)->get(2);
	int32_t d = $nc(this->state)->get(3);
	int32_t e = $nc(this->state)->get(4);
	int32_t f = $nc(this->state)->get(5);
	int32_t g = $nc(this->state)->get(6);
	int32_t h = $nc(this->state)->get(7);
	for (int32_t i = 0; i < SHA2::ITERATION; ++i) {
		int32_t sigma0_a = ((((int32_t)((uint32_t)a >> 2)) | (a << 30)) ^ (((int32_t)((uint32_t)a >> 13)) | (a << 19))) ^ (((int32_t)((uint32_t)a >> 22)) | (a << 10));
		int32_t sigma1_e = ((((int32_t)((uint32_t)e >> 6)) | (e << 26)) ^ (((int32_t)((uint32_t)e >> 11)) | (e << 21))) ^ (((int32_t)((uint32_t)e >> 25)) | (e << 7));
		int32_t ch_efg = ((int32_t)(e & (uint32_t)f)) ^ ((int32_t)((~e) & (uint32_t)g));
		int32_t maj_abc = (((int32_t)(a & (uint32_t)b)) ^ ((int32_t)(a & (uint32_t)c))) ^ ((int32_t)(b & (uint32_t)c));
		int32_t T1 = h + sigma1_e + ch_efg + $nc(SHA2::ROUND_CONSTS)->get(i) + $nc(this->W)->get(i);
		int32_t T2 = sigma0_a + maj_abc;
		h = g;
		g = f;
		f = e;
		e = d + T1;
		d = c;
		c = b;
		b = a;
		a = T1 + T2;
	}
	(*$nc(this->state))[0] += a;
	(*$nc(this->state))[1] += b;
	(*$nc(this->state))[2] += c;
	(*$nc(this->state))[3] += d;
	(*$nc(this->state))[4] += e;
	(*$nc(this->state))[5] += f;
	(*$nc(this->state))[6] += g;
	(*$nc(this->state))[7] += h;
}

$Object* SHA2::clone() {
	$var(SHA2, copy, $cast(SHA2, $DigestBase::clone()));
	$set($nc(copy), state, $cast($ints, $nc(copy->state)->clone()));
	$set(copy, W, nullptr);
	return $of(copy);
}

void clinit$SHA2($Class* class$) {
	$assignStatic(SHA2::ROUND_CONSTS, $new($ints, {
		0x428A2F98,
		0x71374491,
		(int32_t)0xB5C0FBCF,
		(int32_t)0xE9B5DBA5,
		0x3956C25B,
		0x59F111F1,
		(int32_t)0x923F82A4,
		(int32_t)0xAB1C5ED5,
		(int32_t)0xD807AA98,
		0x12835B01,
		0x243185BE,
		0x550C7DC3,
		0x72BE5D74,
		(int32_t)0x80DEB1FE,
		(int32_t)0x9BDC06A7,
		(int32_t)0xC19BF174,
		(int32_t)0xE49B69C1,
		(int32_t)0xEFBE4786,
		0x0FC19DC6,
		0x240CA1CC,
		0x2DE92C6F,
		0x4A7484AA,
		0x5CB0A9DC,
		0x76F988DA,
		(int32_t)0x983E5152,
		(int32_t)0xA831C66D,
		(int32_t)0xB00327C8,
		(int32_t)0xBF597FC7,
		(int32_t)0xC6E00BF3,
		(int32_t)0xD5A79147,
		0x06CA6351,
		0x14292967,
		0x27B70A85,
		0x2E1B2138,
		0x4D2C6DFC,
		0x53380D13,
		0x650A7354,
		0x766A0ABB,
		(int32_t)0x81C2C92E,
		(int32_t)0x92722C85,
		(int32_t)0xA2BFE8A1,
		(int32_t)0xA81A664B,
		(int32_t)0xC24B8B70,
		(int32_t)0xC76C51A3,
		(int32_t)0xD192E819,
		(int32_t)0xD6990624,
		(int32_t)0xF40E3585,
		0x106AA070,
		0x19A4C116,
		0x1E376C08,
		0x2748774C,
		0x34B0BCB5,
		0x391C0CB3,
		0x4ED8AA4A,
		0x5B9CCA4F,
		0x682E6FF3,
		0x748F82EE,
		0x78A5636F,
		(int32_t)0x84C87814,
		(int32_t)0x8CC70208,
		(int32_t)0x90BEFFFA,
		(int32_t)0xA4506CEB,
		(int32_t)0xBEF9A3F7,
		(int32_t)0xC67178F2
	}));
}

SHA2::SHA2() {
}

$Class* SHA2::load$($String* name, bool initialize) {
	$loadClass(SHA2, name, initialize, &_SHA2_ClassInfo_, clinit$SHA2, allocate$SHA2);
	return class$;
}

$Class* SHA2::class$ = nullptr;

		} // provider
	} // security
} // sun