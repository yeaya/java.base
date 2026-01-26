#include <sun/security/provider/SHA3.h>

#include <java/security/ProviderException.h>
#include <java/util/Arrays.h>
#include <java/util/Objects.h>
#include <sun/security/provider/ByteArrayAccess.h>
#include <sun/security/provider/DigestBase.h>
#include <jcpp.h>

#undef DM
#undef NR
#undef RC_CONSTANTS
#undef SHA3
#undef WIDTH

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $ProviderException = ::java::security::ProviderException;
using $Arrays = ::java::util::Arrays;
using $Objects = ::java::util::Objects;
using $ByteArrayAccess = ::sun::security::provider::ByteArrayAccess;
using $DigestBase = ::sun::security::provider::DigestBase;

namespace sun {
	namespace security {
		namespace provider {

$CompoundAttribute _SHA3_MethodAnnotations_implCompress04[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$FieldInfo _SHA3_FieldInfo_[] = {
	{"WIDTH", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SHA3, WIDTH)},
	{"DM", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SHA3, DM)},
	{"NR", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SHA3, NR)},
	{"RC_CONSTANTS", "[J", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SHA3, RC_CONSTANTS)},
	{"suffix", "B", nullptr, $PRIVATE | $FINAL, $field(SHA3, suffix)},
	{"state", "[B", nullptr, $PRIVATE, $field(SHA3, state)},
	{"lanes", "[J", nullptr, $PRIVATE, $field(SHA3, lanes)},
	{}
};

$MethodInfo _SHA3_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;IBI)V", nullptr, 0, $method(SHA3, init$, void, $String*, int32_t, int8_t, int32_t)},
	{"bytes2Lanes", "([B[J)V", nullptr, $PRIVATE | $STATIC, $staticMethod(SHA3, bytes2Lanes, void, $bytes*, $longs*)},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(SHA3, clone, $Object*), "java.lang.CloneNotSupportedException"},
	{"implCompress", "([BI)V", nullptr, 0, $virtualMethod(SHA3, implCompress, void, $bytes*, int32_t)},
	{"implCompress0", "([BI)V", nullptr, $PRIVATE, $method(SHA3, implCompress0, void, $bytes*, int32_t), nullptr, nullptr, _SHA3_MethodAnnotations_implCompress04},
	{"implCompressCheck", "([BI)V", nullptr, $PRIVATE, $method(SHA3, implCompressCheck, void, $bytes*, int32_t)},
	{"implDigest", "([BI)V", nullptr, 0, $virtualMethod(SHA3, implDigest, void, $bytes*, int32_t)},
	{"implReset", "()V", nullptr, 0, $virtualMethod(SHA3, implReset, void)},
	{"keccak", "()V", nullptr, $PRIVATE, $method(SHA3, keccak, void)},
	{"lanes2Bytes", "([J[B)V", nullptr, $PRIVATE | $STATIC, $staticMethod(SHA3, lanes2Bytes, void, $longs*, $bytes*)},
	{"setPaddingBytes", "(B[BI)I", nullptr, $PRIVATE | $STATIC, $staticMethod(SHA3, setPaddingBytes, int32_t, int8_t, $bytes*, int32_t)},
	{"smChi", "([J)[J", nullptr, $PRIVATE | $STATIC, $staticMethod(SHA3, smChi, $longs*, $longs*)},
	{"smIota", "([JI)[J", nullptr, $PRIVATE | $STATIC, $staticMethod(SHA3, smIota, $longs*, $longs*, int32_t)},
	{"smPiRho", "([J)[J", nullptr, $PRIVATE | $STATIC, $staticMethod(SHA3, smPiRho, $longs*, $longs*)},
	{"smTheta", "([J)[J", nullptr, $PRIVATE | $STATIC, $staticMethod(SHA3, smTheta, $longs*, $longs*)},
	{}
};

$InnerClassInfo _SHA3_InnerClassesInfo_[] = {
	{"sun.security.provider.SHA3$SHA512", "sun.security.provider.SHA3", "SHA512", $PUBLIC | $STATIC | $FINAL},
	{"sun.security.provider.SHA3$SHA384", "sun.security.provider.SHA3", "SHA384", $PUBLIC | $STATIC | $FINAL},
	{"sun.security.provider.SHA3$SHA256", "sun.security.provider.SHA3", "SHA256", $PUBLIC | $STATIC | $FINAL},
	{"sun.security.provider.SHA3$SHA224", "sun.security.provider.SHA3", "SHA224", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _SHA3_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"sun.security.provider.SHA3",
	"sun.security.provider.DigestBase",
	nullptr,
	_SHA3_FieldInfo_,
	_SHA3_MethodInfo_,
	nullptr,
	nullptr,
	_SHA3_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.security.provider.SHA3$SHA512,sun.security.provider.SHA3$SHA384,sun.security.provider.SHA3$SHA256,sun.security.provider.SHA3$SHA224"
};

$Object* allocate$SHA3($Class* clazz) {
	return $of($alloc(SHA3));
}

$longs* SHA3::RC_CONSTANTS = nullptr;

void SHA3::init$($String* name, int32_t digestLength, int8_t suffix, int32_t c) {
	$DigestBase::init$(name, digestLength, (SHA3::WIDTH - c));
	$set(this, state, $new($bytes, SHA3::WIDTH));
	$set(this, lanes, $new($longs, SHA3::DM * SHA3::DM));
	this->suffix = suffix;
}

void SHA3::implCompressCheck($bytes* b, int32_t ofs) {
	$Objects::requireNonNull(b);
}

void SHA3::implCompress($bytes* b, int32_t ofs) {
	implCompressCheck(b, ofs);
	implCompress0(b, ofs);
}

void SHA3::implCompress0($bytes* b, int32_t ofs) {
	for (int32_t i = 0; i < $nc(this->buffer)->length; ++i) {
		(*$nc(this->state))[i] ^= $nc(b)->get(ofs++);
	}
	keccak();
}

void SHA3::implDigest($bytes* out, int32_t ofs) {
	$useLocalCurrentObjectStackCache();
	int32_t numOfPadding = setPaddingBytes(this->suffix, this->buffer, (int32_t)($mod(this->bytesProcessed, $nc(this->buffer)->length)));
	if (numOfPadding < 1) {
		$throwNew($ProviderException, $$str({"Incorrect pad size: "_s, $$str(numOfPadding)}));
	}
	implCompress(this->buffer, 0);
	$System::arraycopy(this->state, 0, out, ofs, engineGetDigestLength());
}

void SHA3::implReset() {
	$Arrays::fill(this->state, (int8_t)0);
	$Arrays::fill(this->lanes, (int64_t)0);
}

int32_t SHA3::setPaddingBytes(int8_t suffix, $bytes* in, int32_t len) {
	$init(SHA3);
	if (len != $nc(in)->length) {
		$Arrays::fill(in, len, in->length, (int8_t)0);
		(*in)[len] |= suffix;
		(*in)[in->length - 1] |= (int8_t)128;
	}
	return ($nc(in)->length - len);
}

void SHA3::bytes2Lanes($bytes* s, $longs* m) {
	$init(SHA3);
	int32_t sOfs = 0;
	for (int32_t y = 0; y < SHA3::DM; ++y, sOfs += 40) {
		$ByteArrayAccess::b2lLittle(s, sOfs, m, SHA3::DM * y, 40);
	}
}

void SHA3::lanes2Bytes($longs* m, $bytes* s) {
	$init(SHA3);
	int32_t sOfs = 0;
	for (int32_t y = 0; y < SHA3::DM; ++y, sOfs += 40) {
		$ByteArrayAccess::l2bLittle(m, SHA3::DM * y, s, sOfs, 40);
	}
}

$longs* SHA3::smTheta($longs* a) {
	$init(SHA3);
	int64_t c0 = ((($nc(a)->get(0) ^ a->get(5)) ^ a->get(10)) ^ a->get(15)) ^ a->get(20);
	int64_t c1 = (((a->get(1) ^ a->get(6)) ^ a->get(11)) ^ a->get(16)) ^ a->get(21);
	int64_t c2 = (((a->get(2) ^ a->get(7)) ^ a->get(12)) ^ a->get(17)) ^ a->get(22);
	int64_t c3 = (((a->get(3) ^ a->get(8)) ^ a->get(13)) ^ a->get(18)) ^ a->get(23);
	int64_t c4 = (((a->get(4) ^ a->get(9)) ^ a->get(14)) ^ a->get(19)) ^ a->get(24);
	int64_t d0 = c4 ^ $Long::rotateLeft(c1, 1);
	int64_t d1 = c0 ^ $Long::rotateLeft(c2, 1);
	int64_t d2 = c1 ^ $Long::rotateLeft(c3, 1);
	int64_t d3 = c2 ^ $Long::rotateLeft(c4, 1);
	int64_t d4 = c3 ^ $Long::rotateLeft(c0, 1);
	for (int32_t y = 0; y < a->length; y += SHA3::DM) {
		(*a)[y] ^= d0;
		(*a)[y + 1] ^= d1;
		(*a)[y + 2] ^= d2;
		(*a)[y + 3] ^= d3;
		(*a)[y + 4] ^= d4;
	}
	return a;
}

$longs* SHA3::smPiRho($longs* a) {
	$init(SHA3);
	int64_t tmp = $Long::rotateLeft($nc(a)->get(10), 3);
	$nc(a)->set(10, $Long::rotateLeft(a->get(1), 1));
	a->set(1, $Long::rotateLeft(a->get(6), 44));
	a->set(6, $Long::rotateLeft(a->get(9), 20));
	a->set(9, $Long::rotateLeft(a->get(22), 61));
	a->set(22, $Long::rotateLeft(a->get(14), 39));
	a->set(14, $Long::rotateLeft(a->get(20), 18));
	a->set(20, $Long::rotateLeft(a->get(2), 62));
	a->set(2, $Long::rotateLeft(a->get(12), 43));
	a->set(12, $Long::rotateLeft(a->get(13), 25));
	a->set(13, $Long::rotateLeft(a->get(19), 8));
	a->set(19, $Long::rotateLeft(a->get(23), 56));
	a->set(23, $Long::rotateLeft(a->get(15), 41));
	a->set(15, $Long::rotateLeft(a->get(4), 27));
	a->set(4, $Long::rotateLeft(a->get(24), 14));
	a->set(24, $Long::rotateLeft(a->get(21), 2));
	a->set(21, $Long::rotateLeft(a->get(8), 55));
	a->set(8, $Long::rotateLeft(a->get(16), 45));
	a->set(16, $Long::rotateLeft(a->get(5), 36));
	a->set(5, $Long::rotateLeft(a->get(3), 28));
	a->set(3, $Long::rotateLeft(a->get(18), 21));
	a->set(18, $Long::rotateLeft(a->get(17), 15));
	a->set(17, $Long::rotateLeft(a->get(11), 10));
	a->set(11, $Long::rotateLeft(a->get(7), 6));
	a->set(7, tmp);
	return a;
}

$longs* SHA3::smChi($longs* a) {
	$init(SHA3);
	for (int32_t y = 0; y < $nc(a)->length; y += SHA3::DM) {
		int64_t ay0 = a->get(y);
		int64_t ay1 = a->get(y + 1);
		int64_t ay2 = a->get(y + 2);
		int64_t ay3 = a->get(y + 3);
		int64_t ay4 = a->get(y + 4);
		a->set(y, ay0 ^ ((int64_t)((~ay1) & (uint64_t)ay2)));
		a->set(y + 1, ay1 ^ ((int64_t)((~ay2) & (uint64_t)ay3)));
		a->set(y + 2, ay2 ^ ((int64_t)((~ay3) & (uint64_t)ay4)));
		a->set(y + 3, ay3 ^ ((int64_t)((~ay4) & (uint64_t)ay0)));
		a->set(y + 4, ay4 ^ ((int64_t)((~ay0) & (uint64_t)ay1)));
	}
	return a;
}

$longs* SHA3::smIota($longs* a, int32_t rndIndex) {
	$init(SHA3);
	(*$nc(a))[0] ^= $nc(SHA3::RC_CONSTANTS)->get(rndIndex);
	return a;
}

void SHA3::keccak() {
	$useLocalCurrentObjectStackCache();
	bytes2Lanes(this->state, this->lanes);
	for (int32_t ir = 0; ir < SHA3::NR; ++ir) {
		smIota($(smChi($(smPiRho($(smTheta(this->lanes)))))), ir);
	}
	lanes2Bytes(this->lanes, this->state);
}

$Object* SHA3::clone() {
	$var(SHA3, copy, $cast(SHA3, $DigestBase::clone()));
	$set($nc(copy), state, $cast($bytes, $nc(copy->state)->clone()));
	$set(copy, lanes, $new($longs, SHA3::DM * SHA3::DM));
	return $of(copy);
}

void clinit$SHA3($Class* class$) {
	$assignStatic(SHA3::RC_CONSTANTS, $new($longs, {
		(int64_t)1,
		(int64_t)32898,
		(int64_t)0x800000000000808A,
		(int64_t)0x8000000080008000,
		(int64_t)32907,
		(int64_t)0x0000000080000001,
		(int64_t)0x8000000080008081,
		(int64_t)0x8000000000008009,
		(int64_t)138,
		(int64_t)136,
		(int64_t)0x0000000080008009,
		(int64_t)0x000000008000000A,
		(int64_t)0x000000008000808B,
		(int64_t)0x800000000000008B,
		(int64_t)0x8000000000008089,
		(int64_t)0x8000000000008003,
		(int64_t)0x8000000000008002,
		(int64_t)0x8000000000000080,
		(int64_t)32778,
		(int64_t)0x800000008000000A,
		(int64_t)0x8000000080008081,
		(int64_t)0x8000000000008080,
		(int64_t)0x0000000080000001,
		(int64_t)0x8000000080008008
	}));
}

SHA3::SHA3() {
}

$Class* SHA3::load$($String* name, bool initialize) {
	$loadClass(SHA3, name, initialize, &_SHA3_ClassInfo_, clinit$SHA3, allocate$SHA3);
	return class$;
}

$Class* SHA3::class$ = nullptr;

		} // provider
	} // security
} // sun