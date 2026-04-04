#include <sun/security/provider/SHA5.h>
#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <java/util/Arrays.h>
#include <java/util/Objects.h>
#include <sun/security/provider/ByteArrayAccess.h>
#include <sun/security/provider/DigestBase.h>
#include <jcpp.h>

#undef ITERATION
#undef ROUND_CONSTS
#undef SHA5
#undef W

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
		$Arrays::fill(this->W, 0);
	}
}

void SHA5::resetHashes() {
	$System::arraycopy(this->initialHashes, 0, this->state, 0, $nc(this->state)->length);
}

void SHA5::implDigest($bytes* out, int32_t ofs) {
	int64_t bitsProcessed = this->bytesProcessed << 3;
	int32_t index = (int32_t)this->bytesProcessed & 0x7f;
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
	return (x & y) ^ ((~x) & z);
}

int64_t SHA5::lf_maj(int64_t x, int64_t y, int64_t z) {
	$init(SHA5);
	return ((x & y) ^ (x & z)) ^ (y & z);
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
		$nc(this->W)->set(t, var$0 + lf_delta0(this->W->get(t - 15)) + this->W->get(t - 16));
	}
	int64_t a = $nc(this->state)->get(0);
	int64_t b = this->state->get(1);
	int64_t c = this->state->get(2);
	int64_t d = this->state->get(3);
	int64_t e = this->state->get(4);
	int64_t f = this->state->get(5);
	int64_t g = this->state->get(6);
	int64_t h = this->state->get(7);
	for (int32_t i = 0; i < SHA5::ITERATION; ++i) {
		int64_t var$1 = h + lf_sigma1(e);
		int64_t T1 = var$1 + lf_ch(e, f, g) + SHA5::ROUND_CONSTS->get(i) + $nc(this->W)->get(i);
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
	(*this->state)[0] += a;
	(*this->state)[1] += b;
	(*this->state)[2] += c;
	(*this->state)[3] += d;
	(*this->state)[4] += e;
	(*this->state)[5] += f;
	(*this->state)[6] += g;
	(*this->state)[7] += h;
}

$Object* SHA5::clone() {
	$var(SHA5, copy, $cast(SHA5, $DigestBase::clone()));
	$set($nc(copy), state, $cast($longs, $nc($nc(copy)->state)->clone()));
	$set(copy, W, nullptr);
	return $of(copy);
}

void SHA5::clinit$($Class* clazz) {
	$assignStatic(SHA5::ROUND_CONSTS, $new($longs, {
		(int64_t)0x428a2f98d728ae22,
		(int64_t)0x7137449123ef65cd,
		(int64_t)0xb5c0fbcfec4d3b2f,
		(int64_t)0xe9b5dba58189dbbc,
		(int64_t)0x3956c25bf348b538,
		(int64_t)0x59f111f1b605d019,
		(int64_t)0x923f82a4af194f9b,
		(int64_t)0xab1c5ed5da6d8118,
		(int64_t)0xd807aa98a3030242,
		(int64_t)0x12835b0145706fbe,
		(int64_t)0x243185be4ee4b28c,
		(int64_t)0x550c7dc3d5ffb4e2,
		(int64_t)0x72be5d74f27b896f,
		(int64_t)0x80deb1fe3b1696b1,
		(int64_t)0x9bdc06a725c71235,
		(int64_t)0xc19bf174cf692694,
		(int64_t)0xe49b69c19ef14ad2,
		(int64_t)0xefbe4786384f25e3,
		(int64_t)0x0fc19dc68b8cd5b5,
		(int64_t)0x240ca1cc77ac9c65,
		(int64_t)0x2de92c6f592b0275,
		(int64_t)0x4a7484aa6ea6e483,
		(int64_t)0x5cb0a9dcbd41fbd4,
		(int64_t)0x76f988da831153b5,
		(int64_t)0x983e5152ee66dfab,
		(int64_t)0xa831c66d2db43210,
		(int64_t)0xb00327c898fb213f,
		(int64_t)0xbf597fc7beef0ee4,
		(int64_t)0xc6e00bf33da88fc2,
		(int64_t)0xd5a79147930aa725,
		(int64_t)0x06ca6351e003826f,
		(int64_t)0x142929670a0e6e70,
		(int64_t)0x27b70a8546d22ffc,
		(int64_t)0x2e1b21385c26c926,
		(int64_t)0x4d2c6dfc5ac42aed,
		(int64_t)0x53380d139d95b3df,
		(int64_t)0x650a73548baf63de,
		(int64_t)0x766a0abb3c77b2a8,
		(int64_t)0x81c2c92e47edaee6,
		(int64_t)0x92722c851482353b,
		(int64_t)0xa2bfe8a14cf10364,
		(int64_t)0xa81a664bbc423001,
		(int64_t)0xc24b8b70d0f89791,
		(int64_t)0xc76c51a30654be30,
		(int64_t)0xd192e819d6ef5218,
		(int64_t)0xd69906245565a910,
		(int64_t)0xf40e35855771202a,
		(int64_t)0x106aa07032bbd1b8,
		(int64_t)0x19a4c116b8d2d0c8,
		(int64_t)0x1e376c085141ab53,
		(int64_t)0x2748774cdf8eeb99,
		(int64_t)0x34b0bcb5e19b48a8,
		(int64_t)0x391c0cb3c5c95a63,
		(int64_t)0x4ed8aa4ae3418acb,
		(int64_t)0x5b9cca4f7763e373,
		(int64_t)0x682e6ff3d6b2b8a3,
		(int64_t)0x748f82ee5defb2fc,
		(int64_t)0x78a5636f43172f60,
		(int64_t)0x84c87814a1f0ab72,
		(int64_t)0x8cc702081a6439ec,
		(int64_t)0x90befffa23631e28,
		(int64_t)0xa4506cebde82bde9,
		(int64_t)0xbef9a3f7b2c67915,
		(int64_t)0xc67178f2e372532b,
		(int64_t)0xca273eceea26619c,
		(int64_t)0xd186b8c721c0c207,
		(int64_t)0xeada7dd6cde0eb1e,
		(int64_t)0xf57d4f7fee6ed178,
		(int64_t)0x06f067aa72176fba,
		(int64_t)0x0a637dc5a2c898a6,
		(int64_t)0x113f9804bef90dae,
		(int64_t)0x1b710b35131c471b,
		(int64_t)0x28db77f523047d84,
		(int64_t)0x32caab7b40c72493,
		(int64_t)0x3c9ebe0a15c9bebc,
		(int64_t)0x431d67c49c100d4c,
		(int64_t)0x4cc5d4becb3e42b6,
		(int64_t)0x597f299cfc657e2a,
		(int64_t)0x5fcb6fab3ad6faec,
		(int64_t)0x6c44198c4a475817
	}));
}

SHA5::SHA5() {
}

$Class* SHA5::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"ITERATION", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SHA5, ITERATION)},
		{"ROUND_CONSTS", "[J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SHA5, ROUND_CONSTS)},
		{"W", "[J", nullptr, $PRIVATE, $field(SHA5, W)},
		{"state", "[J", nullptr, $PRIVATE, $field(SHA5, state)},
		{"initialHashes", "[J", nullptr, $PRIVATE | $FINAL, $field(SHA5, initialHashes)},
		{}
	};
	$CompoundAttribute implCompress0methodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;I[J)V", nullptr, 0, $method(SHA5, init$, void, $String*, int32_t, $longs*)},
		{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(SHA5, clone, $Object*), "java.lang.CloneNotSupportedException"},
		{"implCompress", "([BI)V", nullptr, $FINAL, $virtualMethod(SHA5, implCompress, void, $bytes*, int32_t)},
		{"implCompress0", "([BI)V", nullptr, $PRIVATE | $FINAL, $method(SHA5, implCompress0, void, $bytes*, int32_t), nullptr, nullptr, implCompress0methodAnnotations$$},
		{"implCompressCheck", "([BI)V", nullptr, $PRIVATE, $method(SHA5, implCompressCheck, void, $bytes*, int32_t)},
		{"implDigest", "([BI)V", nullptr, $FINAL, $virtualMethod(SHA5, implDigest, void, $bytes*, int32_t)},
		{"implReset", "()V", nullptr, $FINAL, $virtualMethod(SHA5, implReset, void)},
		{"lf_R", "(JI)J", nullptr, $PRIVATE | $STATIC, $staticMethod(SHA5, lf_R, int64_t, int64_t, int32_t)},
		{"lf_S", "(JI)J", nullptr, $PRIVATE | $STATIC, $staticMethod(SHA5, lf_S, int64_t, int64_t, int32_t)},
		{"lf_ch", "(JJJ)J", nullptr, $PRIVATE | $STATIC, $staticMethod(SHA5, lf_ch, int64_t, int64_t, int64_t, int64_t)},
		{"lf_delta0", "(J)J", nullptr, $PRIVATE | $STATIC, $staticMethod(SHA5, lf_delta0, int64_t, int64_t)},
		{"lf_delta1", "(J)J", nullptr, $PRIVATE | $STATIC, $staticMethod(SHA5, lf_delta1, int64_t, int64_t)},
		{"lf_maj", "(JJJ)J", nullptr, $PRIVATE | $STATIC, $staticMethod(SHA5, lf_maj, int64_t, int64_t, int64_t, int64_t)},
		{"lf_sigma0", "(J)J", nullptr, $PRIVATE | $STATIC, $staticMethod(SHA5, lf_sigma0, int64_t, int64_t)},
		{"lf_sigma1", "(J)J", nullptr, $PRIVATE | $STATIC, $staticMethod(SHA5, lf_sigma1, int64_t, int64_t)},
		{"resetHashes", "()V", nullptr, $PRIVATE, $method(SHA5, resetHashes, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.provider.SHA5$SHA512_256", "sun.security.provider.SHA5", "SHA512_256", $PUBLIC | $STATIC | $FINAL},
		{"sun.security.provider.SHA5$SHA512_224", "sun.security.provider.SHA5", "SHA512_224", $PUBLIC | $STATIC | $FINAL},
		{"sun.security.provider.SHA5$SHA384", "sun.security.provider.SHA5", "SHA384", $PUBLIC | $STATIC | $FINAL},
		{"sun.security.provider.SHA5$SHA512", "sun.security.provider.SHA5", "SHA512", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"sun.security.provider.SHA5",
		"sun.security.provider.DigestBase",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.security.provider.SHA5$SHA512_256,sun.security.provider.SHA5$SHA512_224,sun.security.provider.SHA5$SHA384,sun.security.provider.SHA5$SHA512"
	};
	$loadClass(SHA5, name, initialize, &classInfo$$, SHA5::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(SHA5));
	});
	return class$;
}

$Class* SHA5::class$ = nullptr;

		} // provider
	} // security
} // sun