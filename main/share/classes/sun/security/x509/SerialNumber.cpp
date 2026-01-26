#include <sun/security/x509/SerialNumber.h>

#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/math/BigInteger.h>
#include <sun/security/util/Debug.h>
#include <sun/security/util/DerInputStream.h>
#include <sun/security/util/DerOutputStream.h>
#include <sun/security/util/DerValue.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BigInteger = ::java::math::BigInteger;
using $Debug = ::sun::security::util::Debug;
using $DerInputStream = ::sun::security::util::DerInputStream;
using $DerOutputStream = ::sun::security::util::DerOutputStream;
using $DerValue = ::sun::security::util::DerValue;

namespace sun {
	namespace security {
		namespace x509 {

$FieldInfo _SerialNumber_FieldInfo_[] = {
	{"serialNum", "Ljava/math/BigInteger;", nullptr, $PRIVATE, $field(SerialNumber, serialNum)},
	{}
};

$MethodInfo _SerialNumber_MethodInfo_[] = {
	{"<init>", "(Ljava/math/BigInteger;)V", nullptr, $PUBLIC, $method(SerialNumber, init$, void, $BigInteger*)},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(SerialNumber, init$, void, int32_t)},
	{"<init>", "(Lsun/security/util/DerInputStream;)V", nullptr, $PUBLIC, $method(SerialNumber, init$, void, $DerInputStream*), "java.io.IOException"},
	{"<init>", "(Lsun/security/util/DerValue;)V", nullptr, $PUBLIC, $method(SerialNumber, init$, void, $DerValue*), "java.io.IOException"},
	{"<init>", "(Ljava/io/InputStream;)V", nullptr, $PUBLIC, $method(SerialNumber, init$, void, $InputStream*), "java.io.IOException"},
	{"construct", "(Lsun/security/util/DerValue;)V", nullptr, $PRIVATE, $method(SerialNumber, construct, void, $DerValue*), "java.io.IOException"},
	{"encode", "(Lsun/security/util/DerOutputStream;)V", nullptr, $PUBLIC, $virtualMethod(SerialNumber, encode, void, $DerOutputStream*), "java.io.IOException"},
	{"getNumber", "()Ljava/math/BigInteger;", nullptr, $PUBLIC, $virtualMethod(SerialNumber, getNumber, $BigInteger*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SerialNumber, toString, $String*)},
	{}
};

$ClassInfo _SerialNumber_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.x509.SerialNumber",
	"java.lang.Object",
	nullptr,
	_SerialNumber_FieldInfo_,
	_SerialNumber_MethodInfo_
};

$Object* allocate$SerialNumber($Class* clazz) {
	return $of($alloc(SerialNumber));
}

void SerialNumber::construct($DerValue* derVal) {
	$set(this, serialNum, $nc(derVal)->getBigInteger());
	if ($nc(derVal->data$)->available() != 0) {
		$throwNew($IOException, "Excess SerialNumber data"_s);
	}
}

void SerialNumber::init$($BigInteger* num) {
	$set(this, serialNum, num);
}

void SerialNumber::init$(int32_t num) {
	$set(this, serialNum, $BigInteger::valueOf((int64_t)num));
}

void SerialNumber::init$($DerInputStream* in) {
	$var($DerValue, derVal, $nc(in)->getDerValue());
	construct(derVal);
}

void SerialNumber::init$($DerValue* val) {
	construct(val);
}

void SerialNumber::init$($InputStream* in) {
	$var($DerValue, derVal, $new($DerValue, in));
	construct(derVal);
}

$String* SerialNumber::toString() {
	$useLocalCurrentObjectStackCache();
	return $str({"SerialNumber: ["_s, $($Debug::toHexString(this->serialNum)), $$str(u']')});
}

void SerialNumber::encode($DerOutputStream* out) {
	$nc(out)->putInteger(this->serialNum);
}

$BigInteger* SerialNumber::getNumber() {
	return this->serialNum;
}

SerialNumber::SerialNumber() {
}

$Class* SerialNumber::load$($String* name, bool initialize) {
	$loadClass(SerialNumber, name, initialize, &_SerialNumber_ClassInfo_, allocate$SerialNumber);
	return class$;
}

$Class* SerialNumber::class$ = nullptr;

		} // x509
	} // security
} // sun