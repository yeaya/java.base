#include <sun/security/x509/CRLReasonCodeExtension.h>

#include <java/io/IOException.h>
#include <java/io/OutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/cert/CRLReason.h>
#include <java/util/Enumeration.h>
#include <sun/security/util/DerOutputStream.h>
#include <sun/security/util/DerValue.h>
#include <sun/security/util/ObjectIdentifier.h>
#include <sun/security/x509/AttributeNameEnumeration.h>
#include <sun/security/x509/Extension.h>
#include <sun/security/x509/PKIXExtensions.h>
#include <jcpp.h>

#undef NAME
#undef REASON
#undef UNSPECIFIED

using $CRLReasonArray = $Array<::java::security::cert::CRLReason>;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $IOException = ::java::io::IOException;
using $OutputStream = ::java::io::OutputStream;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $CRLReason = ::java::security::cert::CRLReason;
using $Enumeration = ::java::util::Enumeration;
using $Vector = ::java::util::Vector;
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

$FieldInfo _CRLReasonCodeExtension_FieldInfo_[] = {
	{"NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CRLReasonCodeExtension, NAME)},
	{"REASON", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CRLReasonCodeExtension, REASON)},
	{"values", "[Ljava/security/cert/CRLReason;", nullptr, $PRIVATE | $STATIC, $staticField(CRLReasonCodeExtension, values)},
	{"reasonCode", "I", nullptr, $PRIVATE, $field(CRLReasonCodeExtension, reasonCode)},
	{}
};

$MethodInfo _CRLReasonCodeExtension_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(CRLReasonCodeExtension::*)(int32_t)>(&CRLReasonCodeExtension::init$)), "java.io.IOException"},
	{"<init>", "(ZI)V", nullptr, $PUBLIC, $method(static_cast<void(CRLReasonCodeExtension::*)(bool,int32_t)>(&CRLReasonCodeExtension::init$)), "java.io.IOException"},
	{"<init>", "(Ljava/lang/Boolean;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(CRLReasonCodeExtension::*)($Boolean*,Object$*)>(&CRLReasonCodeExtension::init$)), "java.io.IOException"},
	{"delete", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"encode", "(Ljava/io/OutputStream;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"encodeThis", "()V", nullptr, $PRIVATE, $method(static_cast<void(CRLReasonCodeExtension::*)()>(&CRLReasonCodeExtension::encodeThis)), "java.io.IOException"},
	{"get", "(Ljava/lang/String;)Ljava/lang/Integer;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getElements", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljava/lang/String;>;", $PUBLIC},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getReasonCode", "()Ljava/security/cert/CRLReason;", nullptr, $PUBLIC},
	{"set", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _CRLReasonCodeExtension_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.x509.CRLReasonCodeExtension",
	"sun.security.x509.Extension",
	"sun.security.x509.CertAttrSet",
	_CRLReasonCodeExtension_FieldInfo_,
	_CRLReasonCodeExtension_MethodInfo_,
	"Lsun/security/x509/Extension;Lsun/security/x509/CertAttrSet<Ljava/lang/String;>;"
};

$Object* allocate$CRLReasonCodeExtension($Class* clazz) {
	return $of($alloc(CRLReasonCodeExtension));
}

int32_t CRLReasonCodeExtension::hashCode() {
	 return this->$Extension::hashCode();
}

bool CRLReasonCodeExtension::equals(Object$* other) {
	 return this->$Extension::equals(other);
}

$Object* CRLReasonCodeExtension::clone() {
	 return this->$Extension::clone();
}

void CRLReasonCodeExtension::finalize() {
	this->$Extension::finalize();
}


$String* CRLReasonCodeExtension::NAME = nullptr;
$String* CRLReasonCodeExtension::REASON = nullptr;
$CRLReasonArray* CRLReasonCodeExtension::values = nullptr;

void CRLReasonCodeExtension::encodeThis() {
	if (this->reasonCode == 0) {
		$set(this, extensionValue, nullptr);
		return;
	}
	$var($DerOutputStream, dos, $new($DerOutputStream));
	dos->putEnumerated(this->reasonCode);
	$set(this, extensionValue, dos->toByteArray());
}

void CRLReasonCodeExtension::init$(int32_t reason) {
	CRLReasonCodeExtension::init$(false, reason);
}

void CRLReasonCodeExtension::init$(bool critical, int32_t reason) {
	$Extension::init$();
	this->reasonCode = 0;
	$init($PKIXExtensions);
	$set(this, extensionId, $PKIXExtensions::ReasonCode_Id);
	this->critical = critical;
	this->reasonCode = reason;
	encodeThis();
}

void CRLReasonCodeExtension::init$($Boolean* critical, Object$* value) {
	$Extension::init$();
	this->reasonCode = 0;
	$init($PKIXExtensions);
	$set(this, extensionId, $PKIXExtensions::ReasonCode_Id);
	this->critical = $nc(critical)->booleanValue();
	$set(this, extensionValue, $cast($bytes, value));
	$var($DerValue, val, $new($DerValue, this->extensionValue));
	this->reasonCode = val->getEnumerated();
}

void CRLReasonCodeExtension::set($String* name, Object$* obj) {
	if (!($instanceOf($Integer, obj))) {
		$throwNew($IOException, "Attribute must be of type Integer."_s);
	}
	if ($nc(name)->equalsIgnoreCase(CRLReasonCodeExtension::REASON)) {
		this->reasonCode = $nc(($cast($Integer, obj)))->intValue();
	} else {
		$throwNew($IOException, "Name not supported by CRLReasonCodeExtension"_s);
	}
	encodeThis();
}

$Object* CRLReasonCodeExtension::get($String* name) {
	if ($nc(name)->equalsIgnoreCase(CRLReasonCodeExtension::REASON)) {
		return $of($Integer::valueOf(this->reasonCode));
	} else {
		$throwNew($IOException, "Name not supported by CRLReasonCodeExtension"_s);
	}
}

void CRLReasonCodeExtension::delete$($String* name) {
	if ($nc(name)->equalsIgnoreCase(CRLReasonCodeExtension::REASON)) {
		this->reasonCode = 0;
	} else {
		$throwNew($IOException, "Name not supported by CRLReasonCodeExtension"_s);
	}
	encodeThis();
}

$String* CRLReasonCodeExtension::toString() {
	$var($String, var$0, $$str({$($Extension::toString()), "    Reason Code: "_s}));
	return $concat(var$0, $(getReasonCode()));
}

void CRLReasonCodeExtension::encode($OutputStream* out) {
	$var($DerOutputStream, tmp, $new($DerOutputStream));
	if (this->extensionValue == nullptr) {
		$init($PKIXExtensions);
		$set(this, extensionId, $PKIXExtensions::ReasonCode_Id);
		this->critical = false;
		encodeThis();
	}
	$Extension::encode(tmp);
	$nc(out)->write($(tmp->toByteArray()));
}

$Enumeration* CRLReasonCodeExtension::getElements() {
	$var($AttributeNameEnumeration, elements, $new($AttributeNameEnumeration));
	elements->addElement(CRLReasonCodeExtension::REASON);
	return elements->elements();
}

$String* CRLReasonCodeExtension::getName() {
	return CRLReasonCodeExtension::NAME;
}

$CRLReason* CRLReasonCodeExtension::getReasonCode() {
	if (this->reasonCode > 0 && this->reasonCode < $nc(CRLReasonCodeExtension::values)->length) {
		return $nc(CRLReasonCodeExtension::values)->get(this->reasonCode);
	} else {
		$init($CRLReason);
		return $CRLReason::UNSPECIFIED;
	}
}

void clinit$CRLReasonCodeExtension($Class* class$) {
	$assignStatic(CRLReasonCodeExtension::NAME, "CRLReasonCode"_s);
	$assignStatic(CRLReasonCodeExtension::REASON, "reason"_s);
	$assignStatic(CRLReasonCodeExtension::values, $CRLReason::values());
}

CRLReasonCodeExtension::CRLReasonCodeExtension() {
}

$Class* CRLReasonCodeExtension::load$($String* name, bool initialize) {
	$loadClass(CRLReasonCodeExtension, name, initialize, &_CRLReasonCodeExtension_ClassInfo_, clinit$CRLReasonCodeExtension, allocate$CRLReasonCodeExtension);
	return class$;
}

$Class* CRLReasonCodeExtension::class$ = nullptr;

		} // x509
	} // security
} // sun