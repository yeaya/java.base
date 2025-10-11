#include <sun/security/provider/SHA5.h>

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

#undef ITERATION
#undef W
#undef ROUND_CONSTS
#undef SHA5

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

$CompoundAttribute _SHA5_MethodAnnotations_implCompress03[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$FieldInfo _SHA5_FieldInfo_[] = {
	{"ITERATION", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SHA5, ITERATION)},
	{"ROUND_CONSTS", "[J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SHA5, ROUND_CONSTS)},
	{"W", "[J", nullptr, $PRIVATE, $field(SHA5, W)},
	{"state", "[J", nullptr, $PRIVATE, $field(SHA5, state)},
	{"initialHashes", "[J", nullptr, $PRIVATE | $FINAL, $field(SHA5, initialHashes)},
	{}
};

$MethodInfo _SHA5_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;I[J)V", nullptr, 0, $method(static_cast<void(SHA5::*)($String*,int32_t,$longs*)>(&SHA5::init$))},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "java.lang.CloneNotSupportedException"},
	{"implCompress", "([BI)V", nullptr, $FINAL},
	{"implCompress0", "([BI)V", nullptr, $PRIVATE | $FINAL, $method(static_cast<void(SHA5::*)($bytes*,int32_t)>(&SHA5::implCompress0)), nullptr, nullptr, _SHA5_MethodAnnotations_implCompress03},
	{"implCompressCheck", "([BI)V", nullptr, $PRIVATE, $method(static_cast<void(SHA5::*)($bytes*,int32_t)>(&SHA5::implCompressCheck))},
	{"implDigest", "([BI)V", nullptr, $FINAL},
	{"implReset", "()V", nullptr, $FINAL},
	{"lf_R", "(JI)J", nullptr, $PRIVATE | $STATIC, $method(static_cast<int64_t(*)(int64_t,int32_t)>(&SHA5::lf_R))},
	{"lf_S", "(JI)J", nullptr, $PRIVATE | $STATIC, $method(static_cast<int64_t(*)(int64_t,int32_t)>(&SHA5::lf_S))},
	{"lf_ch", "(JJJ)J", nullptr, $PRIVATE | $STATIC, $method(static_cast<int64_t(*)(int64_t,int64_t,int64_t)>(&SHA5::lf_ch))},
	{"lf_delta0", "(J)J", nullptr, $PRIVATE | $STATIC, $method(static_cast<int64_t(*)(int64_t)>(&SHA5::lf_delta0))},
	{"lf_delta1", "(J)J", nullptr, $PRIVATE | $STATIC, $method(static_cast<int64_t(*)(int64_t)>(&SHA5::lf_delta1))},
	{"lf_maj", "(JJJ)J", nullptr, $PRIVATE | $STATIC, $method(static_cast<int64_t(*)(int64_t,int64_t,int64_t)>(&SHA5::lf_maj))},
	{"lf_sigma0", "(J)J", nullptr, $PRIVATE | $STATIC, $method(static_cast<int64_t(*)(int64_t)>(&SHA5::lf_sigma0))},
	{"lf_sigma1", "(J)J", nullptr, $PRIVATE | $STATIC, $method(static_cast<int64_t(*)(int64_t)>(&SHA5::lf_sigma1))},
	{"resetHashes", "()V", nullptr, $PRIVATE, $method(static_cast<void(SHA5::*)()>(&SHA5::resetHashes))},
	{}
};

$InnerClassInfo _SHA5_InnerClassesInfo_[] = {
	{"sun.security.provider.SHA5$SHA512_256", "sun.security.provider.SHA5", "SHA512_256", $PUBLIC | $STATIC | $FINAL},
	{"sun.security.provider.SHA5$SHA512_224", "sun.security.provider.SHA5", "SHA512_224", $PUBLIC | $STATIC | $FINAL},
	{"sun.security.provider.SHA5$SHA384", "sun.security.provider.SHA5", "SHA384", $PUBLIC | $STATIC | $FINAL},
	{"sun.security.provider.SHA5$SHA512", "sun.security.provider.SHA5", "SHA512", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _SHA5_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"sun.security.provider.SHA5",
	"sun.security.provider.DigestBase",
	nullptr,
	_SHA5_FieldInfo_,
	_SHA5_MethodInfo_,
	nullptr,
	nullptr,
	_SHA5_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.security.provider.SHA5$SHA512_256,sun.security.provider.SHA5$SHA512_224,sun.security.provider.SHA5$SHA384,sun.security.provider.SHA5$SHA512"
};

$Object* allocate$SHA5($Class* clazz) {
	return $of($alloc(SHA5));
}

$longs* SHA5::ROUND_CONSTS = nullptr;

void SHA5::init$($String* name, int32_t digestLength, $longs* initialHashes) {
	$DigestBase::init$(name, digestLength, 128);
	$set(this, initialHashes, initialHashes);
	$set(this, state, $new($longs, 8));
	resetHashes();
}

void SHA5::implReset() {
	resetHashes();
	if (this->W != nullptr) {
		$Arrays::fill(this->W, (int64_t)0);
	}
}

void SHA5::resetHashes() {
	$System::arraycopy(this->initialHashes, 0, this->state, 0, $nc(this->state)->length);
}

void SHA5::implDigest($bytes* out, int32_t ofs) {
	int64_t bitsProcessed = this->bytesProcessed << 3;
	int32_t index = (int32_t)((int32_t)this->bytesProcessed & (uint32_t)127);
	int32_t padLen = (index < 112) ? (112 - index) : (240 - index);
	$init($DigestBase);
	engineUpdate($DigestBase::padding, 0, padLen + 8);
	$ByteArrayAccess::i2bBig4((int32_t)((int64_t)((uint64_t)bitsProcessed >> 32)), this->buffer, 120);
	$ByteArrayAccess::i2bBig4((int32_t)bitsProcessed, this->buffer, 124);
	implCompress(this->buffer, 0);
	int32_t len = engineGetDigestLength();
	if (len == 28) {
		$ByteArrayAccess::l2bBig(this->state, 0, out, ofs, 24);
		$ByteArrayAccess::i2bBig4((int32_t)($nc(this->state)->get(3) >> 32), out, ofs + 24);
	} else {
		$ByteArrayAccess::l2bBig(this->state, 0, out, ofs, len);
	}
}

int64_t SHA5::lf_ch(int64_t x, int64_t y, int64_t z) {
	$init(SHA5);
	return ((int64_t)(x & (uint64_t)y)) ^ ((int64_t)((~x) & (uint64_t)z));
}

int64_t SHA5::lf_maj(int64_t x, int64_t y, int64_t z) {
	$init(SHA5);
	return (((int64_t)(x & (uint64_t)y)) ^ ((int64_t)(x & (uint64_t)z))) ^ ((int64_t)(y & (uint64_t)z));
}

int64_t SHA5::lf_R(int64_t x, int32_t s) {
	$init(SHA5);
	return ($usr(x, s));
}

int64_t SHA5::lf_S(int64_t x, int32_t s) {
	$init(SHA5);
	return ($usr(x, s)) | ($sl(x, 64 - s));
}

int64_t SHA5::lf_sigma0(int64_t x) {
	$init(SHA5);
	int64_t var$1 = lf_S(x, 28);
	int64_t var$0 = var$1 ^ lf_S(x, 34);
	return var$0 ^ lf_S(x, 39);
}

int64_t SHA5::lf_sigma1(int64_t x) {
	$init(SHA5);
	int64_t var$1 = lf_S(x, 14);
	int64_t var$0 = var$1 ^ lf_S(x, 18);
	return var$0 ^ lf_S(x, 41);
}

int64_t SHA5::lf_delta0(int64_t x) {
	$init(SHA5);
	int64_t var$1 = lf_S(x, 1);
	int64_t var$0 = var$1 ^ lf_S(x, 8);
	return var$0 ^ lf_R(x, 7);
}

int64_t SHA5::lf_delta1(int64_t x) {
	$init(SHA5);
	int64_t var$1 = lf_S(x, 19);
	int64_t var$0 = var$1 ^ lf_S(x, 61);
	return var$0 ^ lf_R(x, 6);
}

void SHA5::implCompress($bytes* buf, int32_t ofs) {
	implCompressCheck(buf, ofs);
	implCompress0(buf, ofs);
}

void SHA5::implCompressCheck($bytes* buf, int32_t ofs) {
	$Objects::requireNonNull(buf);
	if (ofs < 0 || (buf->length - ofs) < 128) {
		$throwNew($ArrayIndexOutOfBoundsException);
	}
}

void SHA5::implCompress0($bytes* buf, int32_t ofs) {
	if (this->W == nullptr) {
		$set(this, W, $new($longs, 80));
	}
	$ByteArrayAccess::b2lBig128(buf, ofs, this->W);
	for (int32_t t = 16; t < SHA5::ITERATION; ++t) {
		int64_t var$0 = lf_delta1($nc(this->W)->get(t - 2)) + $nc(this->W)->get(t - 7);
		$nc(this->W)->set(t, var$0 + lf_delta0($nc(this->W)->get(t - 15)) + $nc(this->W)->get(t - 16));
	}
	int64_t a = $nc(this->state)->get(0);
	int64_t b = $nc(this->state)->get(1);
	int64_t c = $nc(this->state)->get(2);
	int64_t d = $nc(this->state)->get(3);
	int64_t e = $nc(this->state)->get(4);
	int64_t f = $nc(this->state)->get(5);
	int64_t g = $nc(this->state)->get(6);
	int64_t h = $nc(this->state)->get(7);
	for (int32_t i = 0; i < SHA5::ITERATION; ++i) {
		int64_t var$1 = h + lf_sigma1(e);
		int64_t T1 = var$1 + lf_ch(e, f, g) + $nc(SHA5::ROUND_CONSTS)->get(i) + $nc(this->W)->get(i);
		int64_t var$2 = lf_sigma0(a);
		int64_t T2 = var$2 + lf_maj(a, b, c);
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

$Object* SHA5::clone() {
	$var(SHA5, copy, $cast(SHA5, $DigestBase::clone()));
	$set($nc(copy), state, $cast($longs, $nc(copy->state)->clone()));
	$set(copy, W, nullptr);
	return $of(copy);
}

void clinit$SHA5($Class* class$) {
	$assignStatic(SHA5::ROUND_CONSTS, $new($longs, {
		(int64_t)0x428A2F98D728AE22,
		(int64_t)0x7137449123EF65CD,
		(int64_t)0xB5C0FBCFEC4D3B2F,
		(int64_t)0xE9B5DBA58189DBBC,
		(int64_t)0x3956C25BF348B538,
		(int64_t)0x59F111F1B605D019,
		(int64_t)0x923F82A4AF194F9B,
		(int64_t)0xAB1C5ED5DA6D8118,
		(int64_t)0xD807AA98A3030242,
		(int64_t)0x12835B0145706FBE,
		(int64_t)0x243185BE4EE4B28C,
		(int64_t)0x550C7DC3D5FFB4E2,
		(int64_t)0x72BE5D74F27B896F,
		(int64_t)0x80DEB1FE3B1696B1,
		(int64_t)0x9BDC06A725C71235,
		(int64_t)0xC19BF174CF692694,
		(int64_t)0xE49B69C19EF14AD2,
		(int64_t)0xEFBE4786384F25E3,
		(int64_t)0x0FC19DC68B8CD5B5,
		(int64_t)0x240CA1CC77AC9C65,
		(int64_t)0x2DE92C6F592B0275,
		(int64_t)0x4A7484AA6EA6E483,
		(int64_t)0x5CB0A9DCBD41FBD4,
		(int64_t)0x76F988DA831153B5,
		(int64_t)0x983E5152EE66DFAB,
		(int64_t)0xA831C66D2DB43210,
		(int64_t)0xB00327C898FB213F,
		(int64_t)0xBF597FC7BEEF0EE4,
		(int64_t)0xC6E00BF33DA88FC2,
		(int64_t)0xD5A79147930AA725,
		(int64_t)0x06CA6351E003826F,
		(int64_t)0x142929670A0E6E70,
		(int64_t)0x27B70A8546D22FFC,
		(int64_t)0x2E1B21385C26C926,
		(int64_t)0x4D2C6DFC5AC42AED,
		(int64_t)0x53380D139D95B3DF,
		(int64_t)0x650A73548BAF63DE,
		(int64_t)0x766A0ABB3C77B2A8,
		(int64_t)0x81C2C92E47EDAEE6,
		(int64_t)0x92722C851482353B,
		(int64_t)0xA2BFE8A14CF10364,
		(int64_t)0xA81A664BBC423001,
		(int64_t)0xC24B8B70D0F89791,
		(int64_t)0xC76C51A30654BE30,
		(int64_t)0xD192E819D6EF5218,
		(int64_t)0xD69906245565A910,
		(int64_t)0xF40E35855771202A,
		(int64_t)0x106AA07032BBD1B8,
		(int64_t)0x19A4C116B8D2D0C8,
		(int64_t)0x1E376C085141AB53,
		(int64_t)0x2748774CDF8EEB99,
		(int64_t)0x34B0BCB5E19B48A8,
		(int64_t)0x391C0CB3C5C95A63,
		(int64_t)0x4ED8AA4AE3418ACB,
		(int64_t)0x5B9CCA4F7763E373,
		(int64_t)0x682E6FF3D6B2B8A3,
		(int64_t)0x748F82EE5DEFB2FC,
		(int64_t)0x78A5636F43172F60,
		(int64_t)0x84C87814A1F0AB72,
		(int64_t)0x8CC702081A6439EC,
		(int64_t)0x90BEFFFA23631E28,
		(int64_t)0xA4506CEBDE82BDE9,
		(int64_t)0xBEF9A3F7B2C67915,
		(int64_t)0xC67178F2E372532B,
		(int64_t)0xCA273ECEEA26619C,
		(int64_t)0xD186B8C721C0C207,
		(int64_t)0xEADA7DD6CDE0EB1E,
		(int64_t)0xF57D4F7FEE6ED178,
		(int64_t)0x06F067AA72176FBA,
		(int64_t)0x0A637DC5A2C898A6,
		(int64_t)0x113F9804BEF90DAE,
		(int64_t)0x1B710B35131C471B,
		(int64_t)0x28DB77F523047D84,
		(int64_t)0x32CAAB7B40C72493,
		(int64_t)0x3C9EBE0A15C9BEBC,
		(int64_t)0x431D67C49C100D4C,
		(int64_t)0x4CC5D4BECB3E42B6,
		(int64_t)0x597F299CFC657E2A,
		(int64_t)0x5FCB6FAB3AD6FAEC,
		(int64_t)0x6C44198C4A475817
	}));
}

SHA5::SHA5() {
}

$Class* SHA5::load$($String* name, bool initialize) {
	$loadClass(SHA5, name, initialize, &_SHA5_ClassInfo_, clinit$SHA5, allocate$SHA5);
	return class$;
}

$Class* SHA5::class$ = nullptr;

		} // provider
	} // security
} // sun