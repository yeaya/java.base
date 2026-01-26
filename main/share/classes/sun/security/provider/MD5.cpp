#include <sun/security/provider/MD5.h>

#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <java/lang/invoke/VarHandle.h>
#include <java/util/Objects.h>
#include <sun/security/provider/ByteArrayAccess$LE.h>
#include <sun/security/provider/ByteArrayAccess.h>
#include <sun/security/provider/DigestBase.h>
#include <jcpp.h>

#undef FF
#undef GG
#undef HH
#undef II
#undef INT_ARRAY
#undef MD5

using $ArrayIndexOutOfBoundsException = ::java::lang::ArrayIndexOutOfBoundsException;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $VarHandle = ::java::lang::invoke::VarHandle;
using $Objects = ::java::util::Objects;
using $ByteArrayAccess = ::sun::security::provider::ByteArrayAccess;
using $ByteArrayAccess$LE = ::sun::security::provider::ByteArrayAccess$LE;
using $DigestBase = ::sun::security::provider::DigestBase;

namespace sun {
	namespace security {
		namespace provider {

$CompoundAttribute _MD5_MethodAnnotations_implCompress07[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$FieldInfo _MD5_FieldInfo_[] = {
	{"state", "[I", nullptr, $PRIVATE, $field(MD5, state)},
	{"S11", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MD5, S11)},
	{"S12", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MD5, S12)},
	{"S13", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MD5, S13)},
	{"S14", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MD5, S14)},
	{"S21", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MD5, S21)},
	{"S22", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MD5, S22)},
	{"S23", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MD5, S23)},
	{"S24", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MD5, S24)},
	{"S31", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MD5, S31)},
	{"S32", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MD5, S32)},
	{"S33", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MD5, S33)},
	{"S34", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MD5, S34)},
	{"S41", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MD5, S41)},
	{"S42", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MD5, S42)},
	{"S43", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MD5, S43)},
	{"S44", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MD5, S44)},
	{}
};

$MethodInfo _MD5_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(MD5, init$, void)},
	{"FF", "(IIIIIII)I", nullptr, $PRIVATE | $STATIC, $staticMethod(MD5, FF, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"GG", "(IIIIIII)I", nullptr, $PRIVATE | $STATIC, $staticMethod(MD5, GG, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"HH", "(IIIIIII)I", nullptr, $PRIVATE | $STATIC, $staticMethod(MD5, HH, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"II", "(IIIIIII)I", nullptr, $PRIVATE | $STATIC, $staticMethod(MD5, II, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(MD5, clone, $Object*), "java.lang.CloneNotSupportedException"},
	{"implCompress", "([BI)V", nullptr, 0, $virtualMethod(MD5, implCompress, void, $bytes*, int32_t)},
	{"implCompress0", "([BI)V", nullptr, 0, $method(MD5, implCompress0, void, $bytes*, int32_t), nullptr, nullptr, _MD5_MethodAnnotations_implCompress07},
	{"implCompressCheck", "([BI)V", nullptr, $PRIVATE, $method(MD5, implCompressCheck, void, $bytes*, int32_t)},
	{"implDigest", "([BI)V", nullptr, 0, $virtualMethod(MD5, implDigest, void, $bytes*, int32_t)},
	{"implReset", "()V", nullptr, 0, $virtualMethod(MD5, implReset, void)},
	{}
};

$ClassInfo _MD5_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.security.provider.MD5",
	"sun.security.provider.DigestBase",
	nullptr,
	_MD5_FieldInfo_,
	_MD5_MethodInfo_
};

$Object* allocate$MD5($Class* clazz) {
	return $of($alloc(MD5));
}

void MD5::init$() {
	$DigestBase::init$("MD5"_s, 16, 64);
	$set(this, state, $new($ints, 4));
	implReset();
}

$Object* MD5::clone() {
	$var(MD5, copy, $cast(MD5, $DigestBase::clone()));
	$set($nc(copy), state, $cast($ints, $nc(copy->state)->clone()));
	return $of(copy);
}

void MD5::implReset() {
	$nc(this->state)->set(0, 0x67452301);
	$nc(this->state)->set(1, (int32_t)0xEFCDAB89);
	$nc(this->state)->set(2, (int32_t)0x98BADCFE);
	$nc(this->state)->set(3, 0x10325476);
}

void MD5::implDigest($bytes* out, int32_t ofs) {
	int64_t bitsProcessed = this->bytesProcessed << 3;
	int32_t index = (int32_t)((int32_t)this->bytesProcessed & (uint32_t)63);
	int32_t padLen = (index < 56) ? (56 - index) : (120 - index);
	$init($DigestBase);
	engineUpdate($DigestBase::padding, 0, padLen);
	$ByteArrayAccess::i2bLittle4((int32_t)bitsProcessed, this->buffer, 56);
	$ByteArrayAccess::i2bLittle4((int32_t)((int64_t)((uint64_t)bitsProcessed >> 32)), this->buffer, 60);
	implCompress(this->buffer, 0);
	$ByteArrayAccess::i2bLittle(this->state, 0, out, ofs, 16);
}

int32_t MD5::FF(int32_t a, int32_t b, int32_t c, int32_t d, int32_t x, int32_t s, int32_t ac) {
	$init(MD5);
	a += (((int32_t)(b & (uint32_t)c)) | ((int32_t)((~b) & (uint32_t)d))) + x + ac;
	return (($sl(a, s)) | ($usr(a, 32 - s))) + b;
}

int32_t MD5::GG(int32_t a, int32_t b, int32_t c, int32_t d, int32_t x, int32_t s, int32_t ac) {
	$init(MD5);
	a += (((int32_t)(b & (uint32_t)d)) | ((int32_t)(c & (uint32_t)(~d)))) + x + ac;
	return (($sl(a, s)) | ($usr(a, 32 - s))) + b;
}

int32_t MD5::HH(int32_t a, int32_t b, int32_t c, int32_t d, int32_t x, int32_t s, int32_t ac) {
	$init(MD5);
	a += ((b ^ c) ^ d) + x + ac;
	return (($sl(a, s)) | ($usr(a, 32 - s))) + b;
}

int32_t MD5::II(int32_t a, int32_t b, int32_t c, int32_t d, int32_t x, int32_t s, int32_t ac) {
	$init(MD5);
	a += (c ^ (b | (~d))) + x + ac;
	return (($sl(a, s)) | ($usr(a, 32 - s))) + b;
}

void MD5::implCompress($bytes* buf, int32_t ofs) {
	implCompressCheck(buf, ofs);
	implCompress0(buf, ofs);
}

void MD5::implCompressCheck($bytes* buf, int32_t ofs) {
	$Objects::requireNonNull(buf);
	if ((ofs < 0) || ((buf->length - ofs) < 64)) {
		$throwNew($ArrayIndexOutOfBoundsException);
	}
}

void MD5::implCompress0($bytes* buf, int32_t ofs) {
	$useLocalCurrentObjectStackCache();
	int32_t a = $nc(this->state)->get(0);
	int32_t b = $nc(this->state)->get(1);
	int32_t c = $nc(this->state)->get(2);
	int32_t d = $nc(this->state)->get(3);
	$init($ByteArrayAccess$LE);
	int32_t x0 = $intValue($nc($ByteArrayAccess$LE::INT_ARRAY)->get($$new($ObjectArray, {$of(buf), $$of(ofs)})));
	int32_t x1 = $intValue($nc($ByteArrayAccess$LE::INT_ARRAY)->get($$new($ObjectArray, {$of(buf), $$of((ofs + 4))})));
	int32_t x2 = $intValue($nc($ByteArrayAccess$LE::INT_ARRAY)->get($$new($ObjectArray, {$of(buf), $$of((ofs + 8))})));
	int32_t x3 = $intValue($nc($ByteArrayAccess$LE::INT_ARRAY)->get($$new($ObjectArray, {$of(buf), $$of((ofs + 12))})));
	int32_t x4 = $intValue($nc($ByteArrayAccess$LE::INT_ARRAY)->get($$new($ObjectArray, {$of(buf), $$of((ofs + 16))})));
	int32_t x5 = $intValue($nc($ByteArrayAccess$LE::INT_ARRAY)->get($$new($ObjectArray, {$of(buf), $$of((ofs + 20))})));
	int32_t x6 = $intValue($nc($ByteArrayAccess$LE::INT_ARRAY)->get($$new($ObjectArray, {$of(buf), $$of((ofs + 24))})));
	int32_t x7 = $intValue($nc($ByteArrayAccess$LE::INT_ARRAY)->get($$new($ObjectArray, {$of(buf), $$of((ofs + 28))})));
	int32_t x8 = $intValue($nc($ByteArrayAccess$LE::INT_ARRAY)->get($$new($ObjectArray, {$of(buf), $$of((ofs + 32))})));
	int32_t x9 = $intValue($nc($ByteArrayAccess$LE::INT_ARRAY)->get($$new($ObjectArray, {$of(buf), $$of((ofs + 36))})));
	int32_t x10 = $intValue($nc($ByteArrayAccess$LE::INT_ARRAY)->get($$new($ObjectArray, {$of(buf), $$of((ofs + 40))})));
	int32_t x11 = $intValue($nc($ByteArrayAccess$LE::INT_ARRAY)->get($$new($ObjectArray, {$of(buf), $$of((ofs + 44))})));
	int32_t x12 = $intValue($nc($ByteArrayAccess$LE::INT_ARRAY)->get($$new($ObjectArray, {$of(buf), $$of((ofs + 48))})));
	int32_t x13 = $intValue($nc($ByteArrayAccess$LE::INT_ARRAY)->get($$new($ObjectArray, {$of(buf), $$of((ofs + 52))})));
	int32_t x14 = $intValue($nc($ByteArrayAccess$LE::INT_ARRAY)->get($$new($ObjectArray, {$of(buf), $$of((ofs + 56))})));
	int32_t x15 = $intValue($nc($ByteArrayAccess$LE::INT_ARRAY)->get($$new($ObjectArray, {$of(buf), $$of((ofs + 60))})));
	a = FF(a, b, c, d, x0, MD5::S11, (int32_t)0xD76AA478);
	d = FF(d, a, b, c, x1, MD5::S12, (int32_t)0xE8C7B756);
	c = FF(c, d, a, b, x2, MD5::S13, 0x242070DB);
	b = FF(b, c, d, a, x3, MD5::S14, (int32_t)0xC1BDCEEE);
	a = FF(a, b, c, d, x4, MD5::S11, (int32_t)0xF57C0FAF);
	d = FF(d, a, b, c, x5, MD5::S12, 0x4787C62A);
	c = FF(c, d, a, b, x6, MD5::S13, (int32_t)0xA8304613);
	b = FF(b, c, d, a, x7, MD5::S14, (int32_t)0xFD469501);
	a = FF(a, b, c, d, x8, MD5::S11, 0x698098D8);
	d = FF(d, a, b, c, x9, MD5::S12, (int32_t)0x8B44F7AF);
	c = FF(c, d, a, b, x10, MD5::S13, (int32_t)0xFFFF5BB1);
	b = FF(b, c, d, a, x11, MD5::S14, (int32_t)0x895CD7BE);
	a = FF(a, b, c, d, x12, MD5::S11, 0x6B901122);
	d = FF(d, a, b, c, x13, MD5::S12, (int32_t)0xFD987193);
	c = FF(c, d, a, b, x14, MD5::S13, (int32_t)0xA679438E);
	b = FF(b, c, d, a, x15, MD5::S14, 0x49B40821);
	a = GG(a, b, c, d, x1, MD5::S21, (int32_t)0xF61E2562);
	d = GG(d, a, b, c, x6, MD5::S22, (int32_t)0xC040B340);
	c = GG(c, d, a, b, x11, MD5::S23, 0x265E5A51);
	b = GG(b, c, d, a, x0, MD5::S24, (int32_t)0xE9B6C7AA);
	a = GG(a, b, c, d, x5, MD5::S21, (int32_t)0xD62F105D);
	d = GG(d, a, b, c, x10, MD5::S22, 0x02441453);
	c = GG(c, d, a, b, x15, MD5::S23, (int32_t)0xD8A1E681);
	b = GG(b, c, d, a, x4, MD5::S24, (int32_t)0xE7D3FBC8);
	a = GG(a, b, c, d, x9, MD5::S21, 0x21E1CDE6);
	d = GG(d, a, b, c, x14, MD5::S22, (int32_t)0xC33707D6);
	c = GG(c, d, a, b, x3, MD5::S23, (int32_t)0xF4D50D87);
	b = GG(b, c, d, a, x8, MD5::S24, 0x455A14ED);
	a = GG(a, b, c, d, x13, MD5::S21, (int32_t)0xA9E3E905);
	d = GG(d, a, b, c, x2, MD5::S22, (int32_t)0xFCEFA3F8);
	c = GG(c, d, a, b, x7, MD5::S23, 0x676F02D9);
	b = GG(b, c, d, a, x12, MD5::S24, (int32_t)0x8D2A4C8A);
	a = HH(a, b, c, d, x5, MD5::S31, (int32_t)0xFFFA3942);
	d = HH(d, a, b, c, x8, MD5::S32, (int32_t)0x8771F681);
	c = HH(c, d, a, b, x11, MD5::S33, 0x6D9D6122);
	b = HH(b, c, d, a, x14, MD5::S34, (int32_t)0xFDE5380C);
	a = HH(a, b, c, d, x1, MD5::S31, (int32_t)0xA4BEEA44);
	d = HH(d, a, b, c, x4, MD5::S32, 0x4BDECFA9);
	c = HH(c, d, a, b, x7, MD5::S33, (int32_t)0xF6BB4B60);
	b = HH(b, c, d, a, x10, MD5::S34, (int32_t)0xBEBFBC70);
	a = HH(a, b, c, d, x13, MD5::S31, 0x289B7EC6);
	d = HH(d, a, b, c, x0, MD5::S32, (int32_t)0xEAA127FA);
	c = HH(c, d, a, b, x3, MD5::S33, (int32_t)0xD4EF3085);
	b = HH(b, c, d, a, x6, MD5::S34, 0x04881D05);
	a = HH(a, b, c, d, x9, MD5::S31, (int32_t)0xD9D4D039);
	d = HH(d, a, b, c, x12, MD5::S32, (int32_t)0xE6DB99E5);
	c = HH(c, d, a, b, x15, MD5::S33, 0x1FA27CF8);
	b = HH(b, c, d, a, x2, MD5::S34, (int32_t)0xC4AC5665);
	a = II(a, b, c, d, x0, MD5::S41, (int32_t)0xF4292244);
	d = II(d, a, b, c, x7, MD5::S42, 0x432AFF97);
	c = II(c, d, a, b, x14, MD5::S43, (int32_t)0xAB9423A7);
	b = II(b, c, d, a, x5, MD5::S44, (int32_t)0xFC93A039);
	a = II(a, b, c, d, x12, MD5::S41, 0x655B59C3);
	d = II(d, a, b, c, x3, MD5::S42, (int32_t)0x8F0CCC92);
	c = II(c, d, a, b, x10, MD5::S43, (int32_t)0xFFEFF47D);
	b = II(b, c, d, a, x1, MD5::S44, (int32_t)0x85845DD1);
	a = II(a, b, c, d, x8, MD5::S41, 0x6FA87E4F);
	d = II(d, a, b, c, x15, MD5::S42, (int32_t)0xFE2CE6E0);
	c = II(c, d, a, b, x6, MD5::S43, (int32_t)0xA3014314);
	b = II(b, c, d, a, x13, MD5::S44, 0x4E0811A1);
	a = II(a, b, c, d, x4, MD5::S41, (int32_t)0xF7537E82);
	d = II(d, a, b, c, x11, MD5::S42, (int32_t)0xBD3AF235);
	c = II(c, d, a, b, x2, MD5::S43, 0x2AD7D2BB);
	b = II(b, c, d, a, x9, MD5::S44, (int32_t)0xEB86D391);
	(*$nc(this->state))[0] += a;
	(*$nc(this->state))[1] += b;
	(*$nc(this->state))[2] += c;
	(*$nc(this->state))[3] += d;
}

MD5::MD5() {
}

$Class* MD5::load$($String* name, bool initialize) {
	$loadClass(MD5, name, initialize, &_MD5_ClassInfo_, allocate$MD5);
	return class$;
}

$Class* MD5::class$ = nullptr;

		} // provider
	} // security
} // sun