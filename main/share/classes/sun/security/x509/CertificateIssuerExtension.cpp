#include <sun/security/x509/CertificateIssuerExtension.h>

#include <java/io/IOException.h>
#include <java/io/OutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Enumeration.h>
#include <sun/security/util/DerOutputStream.h>
#include <sun/security/util/DerValue.h>
#include <sun/security/util/ObjectIdentifier.h>
#include <sun/security/x509/AttributeNameEnumeration.h>
#include <sun/security/x509/Extension.h>
#include <sun/security/x509/GeneralNames.h>
#include <sun/security/x509/PKIXExtensions.h>
#include <jcpp.h>

#undef ISSUER
#undef NAME

using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $IOException = ::java::io::IOException;
using $OutputStream = ::java::io::OutputStream;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;
using $Vector = ::java::util::Vector;
using $DerOutputStream = ::sun::security::util::DerOutputStream;
using $DerValue = ::sun::security::util::DerValue;
using $ObjectIdentifier = ::sun::security::util::ObjectIdentifier;
using $AttributeNameEnumeration = ::sun::security::x509::AttributeNameEnumeration;
using $CertAttrSet = ::sun::security::x509::CertAttrSet;
using $Extension = ::sun::security::x509::Extension;
using $GeneralNames = ::sun::security::x509::GeneralNames;
using $PKIXExtensions = ::sun::security::x509::PKIXExtensions;

namespace sun {
	namespace security {
		namespace x509 {

$FieldInfo _CertificateIssuerExtension_FieldInfo_[] = {
	{"NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CertificateIssuerExtension, NAME)},
	{"ISSUER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CertificateIssuerExtension, ISSUER)},
	{"names", "Lsun/security/x509/GeneralNames;", nullptr, $PRIVATE, $field(CertificateIssuerExtension, names)},
	{}
};

$MethodInfo _CertificateIssuerExtension_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(Lsun/security/x509/GeneralNames;)V", nullptr, $PUBLIC, $method(static_cast<void(CertificateIssuerExtension::*)($GeneralNames*)>(&CertificateIssuerExtension::init$)), "java.io.IOException"},
	{"<init>", "(Ljava/lang/Boolean;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(CertificateIssuerExtension::*)($Boolean*,Object$*)>(&CertificateIssuerExtension::init$)), "java.io.IOException"},
	{"delete", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"encode", "(Ljava/io/OutputStream;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"encodeThis", "()V", nullptr, $PRIVATE, $method(static_cast<void(CertificateIssuerExtension::*)()>(&CertificateIssuerExtension::encodeThis)), "java.io.IOException"},
	{"get", "(Ljava/lang/String;)Lsun/security/x509/GeneralNames;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getElements", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljava/lang/String;>;", $PUBLIC},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"set", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _CertificateIssuerExtension_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.x509.CertificateIssuerExtension",
	"sun.security.x509.Extension",
	"sun.security.x509.CertAttrSet",
	_CertificateIssuerExtension_FieldInfo_,
	_CertificateIssuerExtension_MethodInfo_,
	"Lsun/security/x509/Extension;Lsun/security/x509/CertAttrSet<Ljava/lang/String;>;"
};

$Object* allocate$CertificateIssuerExtension($Class* clazz) {
	return $of($alloc(CertificateIssuerExtension));
}

int32_t CertificateIssuerExtension::hashCode() {
	 return this->$Extension::hashCode();
}

bool CertificateIssuerExtension::equals(Object$* other) {
	 return this->$Extension::equals(other);
}

$Object* CertificateIssuerExtension::clone() {
	 return this->$Extension::clone();
}

void CertificateIssuerExtension::finalize() {
	this->$Extension::finalize();
}


$String* CertificateIssuerExtension::NAME = nullptr;
$String* CertificateIssuerExtension::ISSUER = nullptr;

void CertificateIssuerExtension::encodeThis() {
	if (this->names == nullptr || $nc(this->names)->isEmpty()) {
		$set(this, extensionValue, nullptr);
		return;
	}
	$var($DerOutputStream, os, $new($DerOutputStream));
	$nc(this->names)->encode(os);
	$set(this, extensionValue, os->toByteArray());
}

void CertificateIssuerExtension::init$($GeneralNames* issuer) {
	$Extension::init$();
	$init($PKIXExtensions);
	$set(this, extensionId, $PKIXExtensions::CertificateIssuer_Id);
	this->critical = true;
	$set(this, names, issuer);
	encodeThis();
}

void CertificateIssuerExtension::init$($Boolean* critical, Object$* value) {
	$Extension::init$();
	$init($PKIXExtensions);
	$set(this, extensionId, $PKIXExtensions::CertificateIssuer_Id);
	this->critical = $nc(critical)->booleanValue();
	$set(this, extensionValue, $cast($bytes, value));
	$var($DerValue, val, $new($DerValue, this->extensionValue));
	$set(this, names, $new($GeneralNames, val));
}

void CertificateIssuerExtension::set($String* name, Object$* obj) {
	if ($nc(name)->equalsIgnoreCase(CertificateIssuerExtension::ISSUER)) {
		if (!($instanceOf($GeneralNames, obj))) {
			$throwNew($IOException, "Attribute value must be of type GeneralNames"_s);
		}
		$set(this, names, $cast($GeneralNames, obj));
	} else {
		$throwNew($IOException, "Attribute name not recognized by CertAttrSet:CertificateIssuer"_s);
	}
	encodeThis();
}

$Object* CertificateIssuerExtension::get($String* name) {
	if ($nc(name)->equalsIgnoreCase(CertificateIssuerExtension::ISSUER)) {
		return $of(this->names);
	} else {
		$throwNew($IOException, "Attribute name not recognized by CertAttrSet:CertificateIssuer"_s);
	}
}

void CertificateIssuerExtension::delete$($String* name) {
	if ($nc(name)->equalsIgnoreCase(CertificateIssuerExtension::ISSUER)) {
		$set(this, names, nullptr);
	} else {
		$throwNew($IOException, "Attribute name not recognized by CertAttrSet:CertificateIssuer"_s);
	}
	encodeThis();
}

$String* CertificateIssuerExtension::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$1, $$str({$($Extension::toString()), "Certificate Issuer [\n"_s}));
	$var($String, var$0, $$concat(var$1, $($String::valueOf($of(this->names)))));
	return $concat(var$0, "]\n");
}

void CertificateIssuerExtension::encode($OutputStream* out) {
	$useLocalCurrentObjectStackCache();
	$var($DerOutputStream, tmp, $new($DerOutputStream));
	if (this->extensionValue == nullptr) {
		$init($PKIXExtensions);
		$set(this, extensionId, $PKIXExtensions::CertificateIssuer_Id);
		this->critical = true;
		encodeThis();
	}
	$Extension::encode(tmp);
	$nc(out)->write($(tmp->toByteArray()));
}

$Enumeration* CertificateIssuerExtension::getElements() {
	$var($AttributeNameEnumeration, elements, $new($AttributeNameEnumeration));
	elements->addElement(CertificateIssuerExtension::ISSUER);
	return elements->elements();
}

$String* CertificateIssuerExtension::getName() {
	return CertificateIssuerExtension::NAME;
}

CertificateIssuerExtension::CertificateIssuerExtension() {
}

void clinit$CertificateIssuerExtension($Class* class$) {
	$assignStatic(CertificateIssuerExtension::NAME, "CertificateIssuer"_s);
	$assignStatic(CertificateIssuerExtension::ISSUER, "issuer"_s);
}

$Class* CertificateIssuerExtension::load$($String* name, bool initialize) {
	$loadClass(CertificateIssuerExtension, name, initialize, &_CertificateIssuerExtension_ClassInfo_, clinit$CertificateIssuerExtension, allocate$CertificateIssuerExtension);
	return class$;
}

$Class* CertificateIssuerExtension::class$ = nullptr;

		} // x509
	} // security
} // sun