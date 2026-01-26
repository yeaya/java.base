#include <sun/security/util/DerInputStream.h>

#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/math/BigInteger.h>
#include <java/util/Arrays.h>
#include <java/util/Date.h>
#include <sun/security/util/BitArray.h>
#include <sun/security/util/DerValue.h>
#include <sun/security/util/ObjectIdentifier.h>
#include <jcpp.h>

using $DerValueArray = $Array<::sun::security::util::DerValue>;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BigInteger = ::java::math::BigInteger;
using $Arrays = ::java::util::Arrays;
using $Date = ::java::util::Date;
using $BitArray = ::sun::security::util::BitArray;
using $DerValue = ::sun::security::util::DerValue;
using $ObjectIdentifier = ::sun::security::util::ObjectIdentifier;

namespace sun {
	namespace security {
		namespace util {

$FieldInfo _DerInputStream_FieldInfo_[] = {
	{"data", "[B", nullptr, $FINAL, $field(DerInputStream, data)},
	{"start", "I", nullptr, $FINAL, $field(DerInputStream, start)},
	{"end", "I", nullptr, $FINAL, $field(DerInputStream, end)},
	{"allowBER", "Z", nullptr, $FINAL, $field(DerInputStream, allowBER)},
	{"pos", "I", nullptr, 0, $field(DerInputStream, pos)},
	{"mark", "I", nullptr, 0, $field(DerInputStream, mark$)},
	{}
};

$MethodInfo _DerInputStream_MethodInfo_[] = {
	{"<init>", "([BIIZ)V", nullptr, $PUBLIC, $method(DerInputStream, init$, void, $bytes*, int32_t, int32_t, bool)},
	{"<init>", "([B)V", nullptr, $PUBLIC, $method(DerInputStream, init$, void, $bytes*), "java.io.IOException"},
	{"<init>", "([BII)V", nullptr, $PUBLIC, $method(DerInputStream, init$, void, $bytes*, int32_t, int32_t), "java.io.IOException"},
	{"available", "()I", nullptr, $PUBLIC, $virtualMethod(DerInputStream, available, int32_t)},
	{"getBMPString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DerInputStream, getBMPString, $String*), "java.io.IOException"},
	{"getBigInteger", "()Ljava/math/BigInteger;", nullptr, $PUBLIC, $virtualMethod(DerInputStream, getBigInteger, $BigInteger*), "java.io.IOException"},
	{"getBitString", "()[B", nullptr, $PUBLIC, $virtualMethod(DerInputStream, getBitString, $bytes*), "java.io.IOException"},
	{"getDefiniteLength", "(Ljava/io/InputStream;)I", nullptr, $STATIC, $staticMethod(DerInputStream, getDefiniteLength, int32_t, $InputStream*), "java.io.IOException"},
	{"getDerValue", "()Lsun/security/util/DerValue;", nullptr, $PUBLIC, $virtualMethod(DerInputStream, getDerValue, $DerValue*), "java.io.IOException"},
	{"getEnumerated", "()I", nullptr, $PUBLIC, $virtualMethod(DerInputStream, getEnumerated, int32_t), "java.io.IOException"},
	{"getGeneralString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DerInputStream, getGeneralString, $String*), "java.io.IOException"},
	{"getGeneralizedTime", "()Ljava/util/Date;", nullptr, $PUBLIC, $virtualMethod(DerInputStream, getGeneralizedTime, $Date*), "java.io.IOException"},
	{"getIA5String", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DerInputStream, getIA5String, $String*), "java.io.IOException"},
	{"getInteger", "()I", nullptr, $PUBLIC, $virtualMethod(DerInputStream, getInteger, int32_t), "java.io.IOException"},
	{"getLength", "(Ljava/io/InputStream;)I", nullptr, $STATIC, $staticMethod(DerInputStream, getLength, int32_t, $InputStream*), "java.io.IOException"},
	{"getNull", "()V", nullptr, $PUBLIC, $virtualMethod(DerInputStream, getNull, void), "java.io.IOException"},
	{"getOID", "()Lsun/security/util/ObjectIdentifier;", nullptr, $PUBLIC, $virtualMethod(DerInputStream, getOID, $ObjectIdentifier*), "java.io.IOException"},
	{"getOctetString", "()[B", nullptr, $PUBLIC, $virtualMethod(DerInputStream, getOctetString, $bytes*), "java.io.IOException"},
	{"getPositiveBigInteger", "()Ljava/math/BigInteger;", nullptr, $PUBLIC, $virtualMethod(DerInputStream, getPositiveBigInteger, $BigInteger*), "java.io.IOException"},
	{"getPrintableString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DerInputStream, getPrintableString, $String*), "java.io.IOException"},
	{"getSequence", "(I)[Lsun/security/util/DerValue;", nullptr, $PUBLIC, $virtualMethod(DerInputStream, getSequence, $DerValueArray*, int32_t), "java.io.IOException"},
	{"getSet", "(I)[Lsun/security/util/DerValue;", nullptr, $PUBLIC, $virtualMethod(DerInputStream, getSet, $DerValueArray*, int32_t), "java.io.IOException"},
	{"getSet", "(IZ)[Lsun/security/util/DerValue;", nullptr, $PUBLIC, $virtualMethod(DerInputStream, getSet, $DerValueArray*, int32_t, bool), "java.io.IOException"},
	{"getT61String", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DerInputStream, getT61String, $String*), "java.io.IOException"},
	{"getUTCTime", "()Ljava/util/Date;", nullptr, $PUBLIC, $virtualMethod(DerInputStream, getUTCTime, $Date*), "java.io.IOException"},
	{"getUTF8String", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DerInputStream, getUTF8String, $String*), "java.io.IOException"},
	{"getUnalignedBitString", "()Lsun/security/util/BitArray;", nullptr, $PUBLIC, $virtualMethod(DerInputStream, getUnalignedBitString, $BitArray*), "java.io.IOException"},
	{"mark", "(I)V", nullptr, $PUBLIC, $virtualMethod(DerInputStream, mark, void, int32_t)},
	{"peekByte", "()I", nullptr, $PUBLIC, $virtualMethod(DerInputStream, peekByte, int32_t), "java.io.IOException"},
	{"reset", "()V", nullptr, $PUBLIC, $virtualMethod(DerInputStream, reset, void)},
	{"toByteArray", "()[B", nullptr, $PUBLIC, $virtualMethod(DerInputStream, toByteArray, $bytes*)},
	{}
};

$ClassInfo _DerInputStream_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.util.DerInputStream",
	"java.lang.Object",
	nullptr,
	_DerInputStream_FieldInfo_,
	_DerInputStream_MethodInfo_
};

$Object* allocate$DerInputStream($Class* clazz) {
	return $of($alloc(DerInputStream));
}

void DerInputStream::init$($bytes* data, int32_t start, int32_t length, bool allowBER) {
	$set(this, data, data);
	this->start = start;
	this->end = start + length;
	this->allowBER = allowBER;
	this->pos = start;
	this->mark$ = start;
}

void DerInputStream::init$($bytes* data) {
	DerInputStream::init$(data, 0, $nc(data)->length, true);
}

void DerInputStream::init$($bytes* data, int32_t offset, int32_t len) {
	DerInputStream::init$(data, offset, len, true);
}

$bytes* DerInputStream::toByteArray() {
	return $Arrays::copyOfRange(this->data, this->pos, this->end);
}

$DerValue* DerInputStream::getDerValue() {
	$var($DerValue, result, $new($DerValue, this->data, this->pos, this->end - this->pos, this->allowBER, true));
	if (result->buffer != this->data) {
		int32_t unused = $nc(result->buffer)->length - result->end;
		this->pos = $nc(this->data)->length - unused;
	} else {
		this->pos = result->end;
	}
	return result;
}

int32_t DerInputStream::getInteger() {
	return $nc($(getDerValue()))->getInteger();
}

$BigInteger* DerInputStream::getBigInteger() {
	return $nc($(getDerValue()))->getBigInteger();
}

$BigInteger* DerInputStream::getPositiveBigInteger() {
	return $nc($(getDerValue()))->getPositiveBigInteger();
}

int32_t DerInputStream::getEnumerated() {
	return $nc($(getDerValue()))->getEnumerated();
}

$bytes* DerInputStream::getBitString() {
	return $nc($(getDerValue()))->getBitString();
}

$BitArray* DerInputStream::getUnalignedBitString() {
	return $nc($(getDerValue()))->getUnalignedBitString();
}

$bytes* DerInputStream::getOctetString() {
	$var($DerValue, v, getDerValue());
	if ($nc(v)->tag != $DerValue::tag_OctetString) {
		$throwNew($IOException, "DER input not an octet string"_s);
	}
	return $nc(v)->getOctetString();
}

void DerInputStream::getNull() {
	$nc($(getDerValue()))->getNull();
}

$ObjectIdentifier* DerInputStream::getOID() {
	return $nc($(getDerValue()))->getOID();
}

$String* DerInputStream::getUTF8String() {
	return $nc($(getDerValue()))->getUTF8String();
}

$String* DerInputStream::getPrintableString() {
	return $nc($(getDerValue()))->getPrintableString();
}

$String* DerInputStream::getT61String() {
	return $nc($(getDerValue()))->getT61String();
}

$String* DerInputStream::getBMPString() {
	return $nc($(getDerValue()))->getBMPString();
}

$String* DerInputStream::getIA5String() {
	return $nc($(getDerValue()))->getIA5String();
}

$String* DerInputStream::getGeneralString() {
	return $nc($(getDerValue()))->getGeneralString();
}

$Date* DerInputStream::getUTCTime() {
	return $nc($(getDerValue()))->getUTCTime();
}

$Date* DerInputStream::getGeneralizedTime() {
	return $nc($(getDerValue()))->getGeneralizedTime();
}

$DerValueArray* DerInputStream::getSequence(int32_t startLen) {
	return $nc($(getDerValue()))->subs($DerValue::tag_Sequence, startLen);
}

$DerValueArray* DerInputStream::getSet(int32_t startLen) {
	return $nc($(getDerValue()))->subs($DerValue::tag_Set, startLen);
}

$DerValueArray* DerInputStream::getSet(int32_t startLen, bool implicit) {
	if (implicit) {
		return $nc($(getDerValue()))->subs((int8_t)0, startLen);
	} else {
		return getSet(startLen);
	}
}

int32_t DerInputStream::peekByte() {
	if (this->pos == this->end) {
		$throwNew($IOException, "At end"_s);
	}
	return $nc(this->data)->get(this->pos);
}

int32_t DerInputStream::getLength($InputStream* in) {
	$useLocalCurrentObjectStackCache();
	int32_t lenByte = $nc(in)->read();
	if (lenByte == -1) {
		$throwNew($IOException, "Short read of DER length"_s);
	}
	if (lenByte == 128) {
		return -1;
	}
	int32_t value = 0;
	int32_t tmp = 0;
	$var($String, mdName, "DerInputStream.getLength(): "_s);
	tmp = lenByte;
	if (((int32_t)(tmp & (uint32_t)128)) == 0) {
		value = tmp;
	} else {
		tmp &= (uint32_t)127;
		if (tmp > 4) {
			$throwNew($IOException, $$str({mdName, "lengthTag="_s, $$str(tmp), ", too big."_s}));
		}
		value = (int32_t)(255 & (uint32_t)in->read());
		--tmp;
		if (value == 0) {
			$throwNew($IOException, $$str({mdName, "Redundant length bytes found"_s}));
		}
		while (tmp-- > 0) {
			value <<= 8;
			value += (int32_t)(255 & (uint32_t)in->read());
		}
		if (value < 0) {
			$throwNew($IOException, $$str({mdName, "Invalid length bytes"_s}));
		} else if (value <= 127) {
			$throwNew($IOException, $$str({mdName, "Should use short form for length"_s}));
		}
	}
	return value;
}

int32_t DerInputStream::getDefiniteLength($InputStream* in) {
	int32_t len = getLength(in);
	if (len < 0) {
		$throwNew($IOException, "Indefinite length encoding not supported"_s);
	}
	return len;
}

void DerInputStream::mark(int32_t readAheadLimit) {
	this->mark$ = this->pos;
}

void DerInputStream::reset() {
	this->pos = this->mark$;
}

int32_t DerInputStream::available() {
	return this->end - this->pos;
}

DerInputStream::DerInputStream() {
}

$Class* DerInputStream::load$($String* name, bool initialize) {
	$loadClass(DerInputStream, name, initialize, &_DerInputStream_ClassInfo_, allocate$DerInputStream);
	return class$;
}

$Class* DerInputStream::class$ = nullptr;

		} // util
	} // security
} // sun