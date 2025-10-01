#include <sun/security/x509/CRLNumberExtension.h>

#include <java/io/IOException.h>
#include <java/io/OutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/math/BigInteger.h>
#include <java/util/Enumeration.h>
#include <sun/security/util/Debug.h>
#include <sun/security/util/DerOutputStream.h>
#include <sun/security/util/DerValue.h>
#include <sun/security/util/ObjectIdentifier.h>
#include <sun/security/x509/AttributeNameEnumeration.h>
#include <sun/security/x509/Extension.h>
#include <sun/security/x509/PKIXExtensions.h>
#include <jcpp.h>

#undef NUMBER
#undef LABEL
#undef NAME

using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $IOException = ::java::io::IOException;
using $OutputStream = ::java::io::OutputStream;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BigInteger = ::java::math::BigInteger;
using $Enumeration = ::java::util::Enumeration;
using $Vector = ::java::util::Vector;
using $Debug = ::sun::security::util::Debug;
using $DerOutputStream = ::sun::security::util::DerOutputStream;
using $DerValue = ::sun::security::util::DerValue;
using $ObjectIdentifier = ::sun::security::util::ObjectIdentifier;
using $AttributeNameEnumeration = ::sun::security::x509::AttributeNameEnumeration;
using $CertAttrSet = ::sun::security::x509::CertAttrSet;
using $Extension = ::sun::security::x509::Extension;
using $PKIXExtensions = ::sun::security::x509::PKIXExtensions;

namespace sun {
	namespace security {
		namespace x509 {

$FieldInfo _CRLNumberExtension_FieldInfo_[] = {
	{"NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CRLNumberExtension, NAME)},
	{"NUMBER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CRLNumberExtension, NUMBER)},
	{"LABEL", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CRLNumberExtension, LABEL)},
	{"crlNumber", "Ljava/math/BigInteger;", nullptr, $PRIVATE, $field(CRLNumberExtension, crlNumber)},
	{"extensionName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(CRLNumberExtension, extensionName)},
	{"extensionLabel", "Ljava/lang/String;", nullptr, $PRIVATE, $field(CRLNumberExtension, extensionLabel)},
	{}
};

$MethodInfo _CRLNumberExtension_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(CRLNumberExtension::*)(int32_t)>(&CRLNumberExtension::init$)), "java.io.IOException"},
	{"<init>", "(Ljava/math/BigInteger;)V", nullptr, $PUBLIC, $method(static_cast<void(CRLNumberExtension::*)($BigInteger*)>(&CRLNumberExtension::init$)), "java.io.IOException"},
	{"<init>", "(Lsun/security/util/ObjectIdentifier;ZLjava/math/BigInteger;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PROTECTED, $method(static_cast<void(CRLNumberExtension::*)($ObjectIdentifier*,bool,$BigInteger*,$String*,$String*)>(&CRLNumberExtension::init$)), "java.io.IOException"},
	{"<init>", "(Ljava/lang/Boolean;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(CRLNumberExtension::*)($Boolean*,Object$*)>(&CRLNumberExtension::init$)), "java.io.IOException"},
	{"<init>", "(Lsun/security/util/ObjectIdentifier;Ljava/lang/Boolean;Ljava/lang/Object;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PROTECTED, $method(static_cast<void(CRLNumberExtension::*)($ObjectIdentifier*,$Boolean*,Object$*,$String*,$String*)>(&CRLNumberExtension::init$)), "java.io.IOException"},
	{"delete", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"encode", "(Ljava/io/OutputStream;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"encode", "(Ljava/io/OutputStream;Lsun/security/util/ObjectIdentifier;Z)V", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"encodeThis", "()V", nullptr, $PRIVATE, $method(static_cast<void(CRLNumberExtension::*)()>(&CRLNumberExtension::encodeThis)), "java.io.IOException"},
	{"get", "(Ljava/lang/String;)Ljava/math/BigInteger;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getElements", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljava/lang/String;>;", $PUBLIC},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"set", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _CRLNumberExtension_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.x509.CRLNumberExtension",
	"sun.security.x509.Extension",
	"sun.security.x509.CertAttrSet",
	_CRLNumberExtension_FieldInfo_,
	_CRLNumberExtension_MethodInfo_,
	"Lsun/security/x509/Extension;Lsun/security/x509/CertAttrSet<Ljava/lang/String;>;"
};

$Object* allocate$CRLNumberExtension($Class* clazz) {
	return $of($alloc(CRLNumberExtension));
}

int32_t CRLNumberExtension::hashCode() {
	 return this->$Extension::hashCode();
}

bool CRLNumberExtension::equals(Object$* other) {
	 return this->$Extension::equals(other);
}

$Object* CRLNumberExtension::clone() {
	 return this->$Extension::clone();
}

void CRLNumberExtension::finalize() {
	this->$Extension::finalize();
}


$String* CRLNumberExtension::NAME = nullptr;
$String* CRLNumberExtension::NUMBER = nullptr;
$String* CRLNumberExtension::LABEL = nullptr;

void CRLNumberExtension::encodeThis() {
	if (this->crlNumber == nullptr) {
		$set(this, extensionValue, nullptr);
		return;
	}
	$var($DerOutputStream, os, $new($DerOutputStream));
	os->putInteger(this->crlNumber);
	$set(this, extensionValue, os->toByteArray());
}

void CRLNumberExtension::init$(int32_t crlNum) {
	$init($PKIXExtensions);
	CRLNumberExtension::init$($PKIXExtensions::CRLNumber_Id, false, $($BigInteger::valueOf((int64_t)crlNum)), CRLNumberExtension::NAME, CRLNumberExtension::LABEL);
}

void CRLNumberExtension::init$($BigInteger* crlNum) {
	$init($PKIXExtensions);
	CRLNumberExtension::init$($PKIXExtensions::CRLNumber_Id, false, crlNum, CRLNumberExtension::NAME, CRLNumberExtension::LABEL);
}

void CRLNumberExtension::init$($ObjectIdentifier* extensionId, bool isCritical, $BigInteger* crlNum, $String* extensionName, $String* extensionLabel) {
	$Extension::init$();
	$set(this, crlNumber, nullptr);
	$set(this, extensionId, extensionId);
	this->critical = isCritical;
	$set(this, crlNumber, crlNum);
	$set(this, extensionName, extensionName);
	$set(this, extensionLabel, extensionLabel);
	encodeThis();
}

void CRLNumberExtension::init$($Boolean* critical, Object$* value) {
	$init($PKIXExtensions);
	CRLNumberExtension::init$($PKIXExtensions::CRLNumber_Id, critical, value, CRLNumberExtension::NAME, CRLNumberExtension::LABEL);
}

void CRLNumberExtension::init$($ObjectIdentifier* extensionId, $Boolean* critical, Object$* value, $String* extensionName, $String* extensionLabel) {
	$Extension::init$();
	$set(this, crlNumber, nullptr);
	$set(this, extensionId, extensionId);
	this->critical = $nc(critical)->booleanValue();
	$set(this, extensionValue, $cast($bytes, value));
	$var($DerValue, val, $new($DerValue, this->extensionValue));
	$set(this, crlNumber, val->getBigInteger());
	$set(this, extensionName, extensionName);
	$set(this, extensionLabel, extensionLabel);
}

void CRLNumberExtension::set($String* name, Object$* obj) {
	if ($nc(name)->equalsIgnoreCase(CRLNumberExtension::NUMBER)) {
		if (!($instanceOf($BigInteger, obj))) {
			$throwNew($IOException, "Attribute must be of type BigInteger."_s);
		}
		$set(this, crlNumber, $cast($BigInteger, obj));
	} else {
		$throwNew($IOException, $$str({"Attribute name not recognized by CertAttrSet:"_s, this->extensionName, $$str(u'.')}));
	}
	encodeThis();
}

$Object* CRLNumberExtension::get($String* name) {
	if ($nc(name)->equalsIgnoreCase(CRLNumberExtension::NUMBER)) {
		return $of(this->crlNumber);
	} else {
		$throwNew($IOException, $$str({"Attribute name not recognized by CertAttrSet:"_s, this->extensionName, $$str(u'.')}));
	}
}

void CRLNumberExtension::delete$($String* name) {
	if ($nc(name)->equalsIgnoreCase(CRLNumberExtension::NUMBER)) {
		$set(this, crlNumber, nullptr);
	} else {
		$throwNew($IOException, $$str({"Attribute name not recognized by CertAttrSet:"_s, this->extensionName, $$str(u'.')}));
	}
	encodeThis();
}

$String* CRLNumberExtension::toString() {
	$var($StringBuilder, sb, $new($StringBuilder));
	sb->append($($Extension::toString()))->append(this->extensionLabel)->append(": "_s);
	if (this->crlNumber != nullptr) {
		sb->append($($Debug::toHexString(this->crlNumber)));
	}
	sb->append(u'\n');
	return sb->toString();
}

void CRLNumberExtension::encode($OutputStream* out) {
	$var($DerOutputStream, tmp, $new($DerOutputStream));
	$init($PKIXExtensions);
	encode(out, $PKIXExtensions::CRLNumber_Id, true);
}

void CRLNumberExtension::encode($OutputStream* out, $ObjectIdentifier* extensionId, bool isCritical) {
	$var($DerOutputStream, tmp, $new($DerOutputStream));
	if (this->extensionValue == nullptr) {
		$set(this, extensionId, extensionId);
		this->critical = isCritical;
		encodeThis();
	}
	$Extension::encode(tmp);
	$nc(out)->write($(tmp->toByteArray()));
}

$Enumeration* CRLNumberExtension::getElements() {
	$var($AttributeNameEnumeration, elements, $new($AttributeNameEnumeration));
	elements->addElement(CRLNumberExtension::NUMBER);
	return (elements->elements());
}

$String* CRLNumberExtension::getName() {
	return (this->extensionName);
}

CRLNumberExtension::CRLNumberExtension() {
}

void clinit$CRLNumberExtension($Class* class$) {
	$assignStatic(CRLNumberExtension::NAME, "CRLNumber"_s);
	$assignStatic(CRLNumberExtension::NUMBER, "value"_s);
	$assignStatic(CRLNumberExtension::LABEL, "CRL Number"_s);
}

$Class* CRLNumberExtension::load$($String* name, bool initialize) {
	$loadClass(CRLNumberExtension, name, initialize, &_CRLNumberExtension_ClassInfo_, clinit$CRLNumberExtension, allocate$CRLNumberExtension);
	return class$;
}

$Class* CRLNumberExtension::class$ = nullptr;

		} // x509
	} // security
} // sun