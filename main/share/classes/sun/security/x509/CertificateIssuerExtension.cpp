#include <sun/security/x509/CertificateIssuerExtension.h>

#include <java/io/IOException.h>
#include <java/io/OutputStream.h>
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

using $IOException = ::java::io::IOException;
using $OutputStream = ::java::io::OutputStream;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;
using $DerOutputStream = ::sun::security::util::DerOutputStream;
using $DerValue = ::sun::security::util::DerValue;
using $AttributeNameEnumeration = ::sun::security::x509::AttributeNameEnumeration;
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
	{"<init>", "(Lsun/security/x509/GeneralNames;)V", nullptr, $PUBLIC, $method(CertificateIssuerExtension, init$, void, $GeneralNames*), "java.io.IOException"},
	{"<init>", "(Ljava/lang/Boolean;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(CertificateIssuerExtension, init$, void, $Boolean*, Object$*), "java.io.IOException"},
	{"delete", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(CertificateIssuerExtension, delete$, void, $String*), "java.io.IOException"},
	{"encode", "(Ljava/io/OutputStream;)V", nullptr, $PUBLIC, $virtualMethod(CertificateIssuerExtension, encode, void, $OutputStream*), "java.io.IOException"},
	{"encodeThis", "()V", nullptr, $PRIVATE, $method(CertificateIssuerExtension, encodeThis, void), "java.io.IOException"},
	{"get", "(Ljava/lang/String;)Lsun/security/x509/GeneralNames;", nullptr, $PUBLIC, $virtualMethod(CertificateIssuerExtension, get, $Object*, $String*), "java.io.IOException"},
	{"getElements", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljava/lang/String;>;", $PUBLIC, $virtualMethod(CertificateIssuerExtension, getElements, $Enumeration*)},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(CertificateIssuerExtension, getName, $String*)},
	{"set", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(CertificateIssuerExtension, set, void, $String*, Object$*), "java.io.IOException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(CertificateIssuerExtension, toString, $String*)},
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
	return $concat(var$0, "]\n"_s);
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