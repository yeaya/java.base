#include <sun/security/provider/SHA2.h>
#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <java/util/Arrays.h>
#include <java/util/Objects.h>
#include <sun/security/provider/ByteArrayAccess.h>
#include <sun/security/provider/DigestBase.h>
#include <jcpp.h>

#undef ITERATION
#undef ROUND_CONSTS
#undef SHA2
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
	int32_t index = (int32_t)this->bytesProcessed & 0x3f;
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
		int32_t W_t15 = this->W->get(t - 15);
		int32_t delta0_W_t15 = ((((int32_t)((uint32_t)W_t15 >> 7)) | (W_t15 << 25)) ^ (((int32_t)((uint32_t)W_t15 >> 18)) | (W_t15 << 14))) ^ ((int32_t)((uint32_t)W_t15 >> 3));
		int32_t delta1_W_t2 = ((((int32_t)((uint32_t)W_t2 >> 17)) | (W_t2 << 15)) ^ (((int32_t)((uint32_t)W_t2 >> 19)) | (W_t2 << 13))) ^ ((int32_t)((uint32_t)W_t2 >> 10));
		this->W->set(t, delta0_W_t15 + delta1_W_t2 + this->W->get(t - 7) + this->W->get(t - 16));
	}
	int32_t a = $nc(this->state)->get(0);
	int32_t b = this->state->get(1);
	int32_t c = this->state->get(2);
	int32_t d = this->state->get(3);
	int32_t e = this->state->get(4);
	int32_t f = this->state->get(5);
	int32_t g = this->state->get(6);
	int32_t h = this->state->get(7);
	for (int32_t i = 0; i < SHA2::ITERATION; ++i) {
		int32_t sigma0_a = ((((int32_t)((uint32_t)a >> 2)) | (a << 30)) ^ (((int32_t)((uint32_t)a >> 13)) | (a << 19))) ^ (((int32_t)((uint32_t)a >> 22)) | (a << 10));
		int32_t sigma1_e = ((((int32_t)((uint32_t)e >> 6)) | (e << 26)) ^ (((int32_t)((uint32_t)e >> 11)) | (e << 21))) ^ (((int32_t)((uint32_t)e >> 25)) | (e << 7));
		int32_t ch_efg = (e & f) ^ ((~e) & g);
		int32_t maj_abc = ((a & b) ^ (a & c)) ^ (b & c);
		int32_t T1 = h + sigma1_e + ch_efg + SHA2::ROUND_CONSTS->get(i) + $nc(this->W)->get(i);
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
	(*this->state)[0] += a;
	(*this->state)[1] += b;
	(*this->state)[2] += c;
	(*this->state)[3] += d;
	(*this->state)[4] += e;
	(*this->state)[5] += f;
	(*this->state)[6] += g;
	(*this->state)[7] += h;
}

$Object* SHA2::clone() {
	$var(SHA2, copy, $cast(SHA2, $DigestBase::clone()));
	$set($nc(copy), state, $cast($ints, $nc($nc(copy)->state)->clone()));
	$set(copy, W, nullptr);
	return $of(copy);
}

void SHA2::clinit$($Class* clazz) {
	$assignStatic(SHA2::ROUND_CONSTS, $new($ints, {
		0x428a2f98,
		0x71374491,
		(int32_t)0xb5c0fbcf,
		(int32_t)0xe9b5dba5,
		0x3956c25b,
		0x59f111f1,
		(int32_t)0x923f82a4,
		(int32_t)0xab1c5ed5,
		(int32_t)0xd807aa98,
		0x12835b01,
		0x243185be,
		0x550c7dc3,
		0x72be5d74,
		(int32_t)0x80deb1fe,
		(int32_t)0x9bdc06a7,
		(int32_t)0xc19bf174,
		(int32_t)0xe49b69c1,
		(int32_t)0xefbe4786,
		0x0fc19dc6,
		0x240ca1cc,
		0x2de92c6f,
		0x4a7484aa,
		0x5cb0a9dc,
		0x76f988da,
		(int32_t)0x983e5152,
		(int32_t)0xa831c66d,
		(int32_t)0xb00327c8,
		(int32_t)0xbf597fc7,
		(int32_t)0xc6e00bf3,
		(int32_t)0xd5a79147,
		0x06ca6351,
		0x14292967,
		0x27b70a85,
		0x2e1b2138,
		0x4d2c6dfc,
		0x53380d13,
		0x650a7354,
		0x766a0abb,
		(int32_t)0x81c2c92e,
		(int32_t)0x92722c85,
		(int32_t)0xa2bfe8a1,
		(int32_t)0xa81a664b,
		(int32_t)0xc24b8b70,
		(int32_t)0xc76c51a3,
		(int32_t)0xd192e819,
		(int32_t)0xd6990624,
		(int32_t)0xf40e3585,
		0x106aa070,
		0x19a4c116,
		0x1e376c08,
		0x2748774c,
		0x34b0bcb5,
		0x391c0cb3,
		0x4ed8aa4a,
		0x5b9cca4f,
		0x682e6ff3,
		0x748f82ee,
		0x78a5636f,
		(int32_t)0x84c87814,
		(int32_t)0x8cc70208,
		(int32_t)0x90befffa,
		(int32_t)0xa4506ceb,
		(int32_t)0xbef9a3f7,
		(int32_t)0xc67178f2
	}));
}

SHA2::SHA2() {
}

$Class* SHA2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"ITERATION", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SHA2, ITERATION)},
		{"ROUND_CONSTS", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SHA2, ROUND_CONSTS)},
		{"W", "[I", nullptr, $PRIVATE, $field(SHA2, W)},
		{"state", "[I", nullptr, $PRIVATE, $field(SHA2, state)},
		{"initialHashes", "[I", nullptr, $PRIVATE | $FINAL, $field(SHA2, initialHashes)},
		{}
	};
	$CompoundAttribute implCompress0methodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;I[I)V", nullptr, 0, $method(SHA2, init$, void, $String*, int32_t, $ints*)},
		{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(SHA2, clone, $Object*), "java.lang.CloneNotSupportedException"},
		{"implCompress", "([BI)V", nullptr, 0, $virtualMethod(SHA2, implCompress, void, $bytes*, int32_t)},
		{"implCompress0", "([BI)V", nullptr, $PRIVATE, $method(SHA2, implCompress0, void, $bytes*, int32_t), nullptr, nullptr, implCompress0methodAnnotations$$},
		{"implCompressCheck", "([BI)V", nullptr, $PRIVATE, $method(SHA2, implCompressCheck, void, $bytes*, int32_t)},
		{"implDigest", "([BI)V", nullptr, 0, $virtualMethod(SHA2, implDigest, void, $bytes*, int32_t)},
		{"implReset", "()V", nullptr, 0, $virtualMethod(SHA2, implReset, void)},
		{"resetHashes", "()V", nullptr, $PRIVATE, $method(SHA2, resetHashes, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.provider.SHA2$SHA256", "sun.security.provider.SHA2", "SHA256", $PUBLIC | $STATIC | $FINAL},
		{"sun.security.provider.SHA2$SHA224", "sun.security.provider.SHA2", "SHA224", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"sun.security.provider.SHA2",
		"sun.security.provider.DigestBase",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.security.provider.SHA2$SHA256,sun.security.provider.SHA2$SHA224"
	};
	$loadClass(SHA2, name, initialize, &classInfo$$, SHA2::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(SHA2));
	});
	return class$;
}

$Class* SHA2::class$ = nullptr;

		} // provider
	} // security
} // sun