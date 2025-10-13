#include <sun/security/x509/CertificateSerialNumber.h>

#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/math/BigInteger.h>
#include <java/util/Enumeration.h>
#include <java/util/Random.h>
#include <sun/security/util/DerInputStream.h>
#include <sun/security/util/DerOutputStream.h>
#include <sun/security/util/DerValue.h>
#include <sun/security/x509/AttributeNameEnumeration.h>
#include <sun/security/x509/SerialNumber.h>
#include <jcpp.h>

#undef IDENT
#undef NAME
#undef NUMBER

using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BigInteger = ::java::math::BigInteger;
using $Enumeration = ::java::util::Enumeration;
using $Random = ::java::util::Random;
using $Vector = ::java::util::Vector;
using $DerInputStream = ::sun::security::util::DerInputStream;
using $DerOutputStream = ::sun::security::util::DerOutputStream;
using $DerValue = ::sun::security::util::DerValue;
using $AttributeNameEnumeration = ::sun::security::x509::AttributeNameEnumeration;
using $CertAttrSet = ::sun::security::x509::CertAttrSet;
using $SerialNumber = ::sun::security::x509::SerialNumber;

namespace sun {
	namespace security {
		namespace x509 {

$FieldInfo _CertificateSerialNumber_FieldInfo_[] = {
	{"IDENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CertificateSerialNumber, IDENT)},
	{"NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CertificateSerialNumber, NAME)},
	{"NUMBER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CertificateSerialNumber, NUMBER)},
	{"serial", "Lsun/security/x509/SerialNumber;", nullptr, $PRIVATE, $field(CertificateSerialNumber, serial)},
	{}
};

$MethodInfo _CertificateSerialNumber_MethodInfo_[] = {
	{"<init>", "(Ljava/math/BigInteger;)V", nullptr, $PUBLIC, $method(static_cast<void(CertificateSerialNumber::*)($BigInteger*)>(&CertificateSerialNumber::init$))},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(CertificateSerialNumber::*)(int32_t)>(&CertificateSerialNumber::init$))},
	{"<init>", "(Lsun/security/util/DerInputStream;)V", nullptr, $PUBLIC, $method(static_cast<void(CertificateSerialNumber::*)($DerInputStream*)>(&CertificateSerialNumber::init$)), "java.io.IOException"},
	{"<init>", "(Ljava/io/InputStream;)V", nullptr, $PUBLIC, $method(static_cast<void(CertificateSerialNumber::*)($InputStream*)>(&CertificateSerialNumber::init$)), "java.io.IOException"},
	{"<init>", "(Lsun/security/util/DerValue;)V", nullptr, $PUBLIC, $method(static_cast<void(CertificateSerialNumber::*)($DerValue*)>(&CertificateSerialNumber::init$)), "java.io.IOException"},
	{"delete", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"encode", "(Ljava/io/OutputStream;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"get", "(Ljava/lang/String;)Lsun/security/x509/SerialNumber;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getElements", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljava/lang/String;>;", $PUBLIC},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newRandom64bit", "(Ljava/util/Random;)Lsun/security/x509/CertificateSerialNumber;", nullptr, $PUBLIC | $STATIC, $method(static_cast<CertificateSerialNumber*(*)($Random*)>(&CertificateSerialNumber::newRandom64bit))},
	{"set", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _CertificateSerialNumber_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.x509.CertificateSerialNumber",
	"java.lang.Object",
	"sun.security.x509.CertAttrSet",
	_CertificateSerialNumber_FieldInfo_,
	_CertificateSerialNumber_MethodInfo_,
	"Ljava/lang/Object;Lsun/security/x509/CertAttrSet<Ljava/lang/String;>;"
};

$Object* allocate$CertificateSerialNumber($Class* clazz) {
	return $of($alloc(CertificateSerialNumber));
}


$String* CertificateSerialNumber::IDENT = nullptr;

$String* CertificateSerialNumber::NAME = nullptr;
$String* CertificateSerialNumber::NUMBER = nullptr;

void CertificateSerialNumber::init$($BigInteger* num) {
	$set(this, serial, $new($SerialNumber, num));
}

void CertificateSerialNumber::init$(int32_t num) {
	$set(this, serial, $new($SerialNumber, num));
}

void CertificateSerialNumber::init$($DerInputStream* in) {
	$set(this, serial, $new($SerialNumber, in));
}

void CertificateSerialNumber::init$($InputStream* in) {
	$set(this, serial, $new($SerialNumber, in));
}

void CertificateSerialNumber::init$($DerValue* val) {
	$set(this, serial, $new($SerialNumber, val));
}

$String* CertificateSerialNumber::toString() {
	if (this->serial == nullptr) {
		return ""_s;
	}
	return ($nc(this->serial)->toString());
}

void CertificateSerialNumber::encode($OutputStream* out) {
	$var($DerOutputStream, tmp, $new($DerOutputStream));
	$nc(this->serial)->encode(tmp);
	$nc(out)->write($(tmp->toByteArray()));
}

void CertificateSerialNumber::set($String* name, Object$* obj) {
	if (!($instanceOf($SerialNumber, obj))) {
		$throwNew($IOException, "Attribute must be of type SerialNumber."_s);
	}
	if ($nc(name)->equalsIgnoreCase(CertificateSerialNumber::NUMBER)) {
		$set(this, serial, $cast($SerialNumber, obj));
	} else {
		$throwNew($IOException, "Attribute name not recognized by CertAttrSet:CertificateSerialNumber."_s);
	}
}

$Object* CertificateSerialNumber::get($String* name) {
	if ($nc(name)->equalsIgnoreCase(CertificateSerialNumber::NUMBER)) {
		return $of((this->serial));
	} else {
		$throwNew($IOException, "Attribute name not recognized by CertAttrSet:CertificateSerialNumber."_s);
	}
}

void CertificateSerialNumber::delete$($String* name) {
	if ($nc(name)->equalsIgnoreCase(CertificateSerialNumber::NUMBER)) {
		$set(this, serial, nullptr);
	} else {
		$throwNew($IOException, "Attribute name not recognized by CertAttrSet:CertificateSerialNumber."_s);
	}
}

$Enumeration* CertificateSerialNumber::getElements() {
	$var($AttributeNameEnumeration, elements, $new($AttributeNameEnumeration));
	elements->addElement(CertificateSerialNumber::NUMBER);
	return (elements->elements());
}

$String* CertificateSerialNumber::getName() {
	return (CertificateSerialNumber::NAME);
}

CertificateSerialNumber* CertificateSerialNumber::newRandom64bit($Random* rand) {
	$init(CertificateSerialNumber);
	while (true) {
		$var($BigInteger, b, $new($BigInteger, 64, rand));
		if (b->signum() != 0) {
			return $new(CertificateSerialNumber, b);
		}
	}
}

CertificateSerialNumber::CertificateSerialNumber() {
}

void clinit$CertificateSerialNumber($Class* class$) {
	$assignStatic(CertificateSerialNumber::IDENT, "x509.info.serialNumber"_s);
	$assignStatic(CertificateSerialNumber::NAME, "serialNumber"_s);
	$assignStatic(CertificateSerialNumber::NUMBER, "number"_s);
}

$Class* CertificateSerialNumber::load$($String* name, bool initialize) {
	$loadClass(CertificateSerialNumber, name, initialize, &_CertificateSerialNumber_ClassInfo_, clinit$CertificateSerialNumber, allocate$CertificateSerialNumber);
	return class$;
}

$Class* CertificateSerialNumber::class$ = nullptr;

		} // x509
	} // security
} // sun