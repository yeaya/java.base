#include <sun/security/x509/CertificateIssuerName.h>

#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/util/Enumeration.h>
#include <javax/security/auth/x500/X500Principal.h>
#include <sun/security/util/DerInputStream.h>
#include <sun/security/util/DerOutputStream.h>
#include <sun/security/util/DerValue.h>
#include <sun/security/x509/AttributeNameEnumeration.h>
#include <sun/security/x509/X500Name.h>
#include <jcpp.h>

#undef DN_NAME
#undef DN_PRINCIPAL
#undef IDENT
#undef NAME

using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;
using $DerInputStream = ::sun::security::util::DerInputStream;
using $DerOutputStream = ::sun::security::util::DerOutputStream;
using $DerValue = ::sun::security::util::DerValue;
using $AttributeNameEnumeration = ::sun::security::x509::AttributeNameEnumeration;
using $X500Name = ::sun::security::x509::X500Name;

namespace sun {
	namespace security {
		namespace x509 {

$FieldInfo _CertificateIssuerName_FieldInfo_[] = {
	{"IDENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CertificateIssuerName, IDENT)},
	{"NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CertificateIssuerName, NAME)},
	{"DN_NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CertificateIssuerName, DN_NAME)},
	{"DN_PRINCIPAL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CertificateIssuerName, DN_PRINCIPAL)},
	{"dnName", "Lsun/security/x509/X500Name;", nullptr, $PRIVATE, $field(CertificateIssuerName, dnName)},
	{"dnPrincipal", "Ljavax/security/auth/x500/X500Principal;", nullptr, $PRIVATE, $field(CertificateIssuerName, dnPrincipal)},
	{}
};

$MethodInfo _CertificateIssuerName_MethodInfo_[] = {
	{"<init>", "(Lsun/security/x509/X500Name;)V", nullptr, $PUBLIC, $method(static_cast<void(CertificateIssuerName::*)($X500Name*)>(&CertificateIssuerName::init$))},
	{"<init>", "(Lsun/security/util/DerInputStream;)V", nullptr, $PUBLIC, $method(static_cast<void(CertificateIssuerName::*)($DerInputStream*)>(&CertificateIssuerName::init$)), "java.io.IOException"},
	{"<init>", "(Ljava/io/InputStream;)V", nullptr, $PUBLIC, $method(static_cast<void(CertificateIssuerName::*)($InputStream*)>(&CertificateIssuerName::init$)), "java.io.IOException"},
	{"delete", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"encode", "(Ljava/io/OutputStream;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"get", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getElements", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljava/lang/String;>;", $PUBLIC},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"set", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _CertificateIssuerName_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.x509.CertificateIssuerName",
	"java.lang.Object",
	"sun.security.x509.CertAttrSet",
	_CertificateIssuerName_FieldInfo_,
	_CertificateIssuerName_MethodInfo_,
	"Ljava/lang/Object;Lsun/security/x509/CertAttrSet<Ljava/lang/String;>;"
};

$Object* allocate$CertificateIssuerName($Class* clazz) {
	return $of($alloc(CertificateIssuerName));
}

$String* CertificateIssuerName::IDENT = nullptr;
$String* CertificateIssuerName::NAME = nullptr;
$String* CertificateIssuerName::DN_NAME = nullptr;
$String* CertificateIssuerName::DN_PRINCIPAL = nullptr;

void CertificateIssuerName::init$($X500Name* name) {
	$set(this, dnName, name);
}

void CertificateIssuerName::init$($DerInputStream* in) {
	$set(this, dnName, $new($X500Name, in));
}

void CertificateIssuerName::init$($InputStream* in) {
	$var($DerValue, derVal, $new($DerValue, in));
	$set(this, dnName, $new($X500Name, derVal));
}

$String* CertificateIssuerName::toString() {
	if (this->dnName == nullptr) {
		return ""_s;
	}
	return ($nc(this->dnName)->toString());
}

void CertificateIssuerName::encode($OutputStream* out) {
	$useLocalCurrentObjectStackCache();
	$var($DerOutputStream, tmp, $new($DerOutputStream));
	$nc(this->dnName)->encode(tmp);
	$nc(out)->write($(tmp->toByteArray()));
}

void CertificateIssuerName::set($String* name, Object$* obj) {
	if (!($instanceOf($X500Name, obj))) {
		$throwNew($IOException, "Attribute must be of type X500Name."_s);
	}
	if ($nc(name)->equalsIgnoreCase(CertificateIssuerName::DN_NAME)) {
		$set(this, dnName, $cast($X500Name, obj));
		$set(this, dnPrincipal, nullptr);
	} else {
		$throwNew($IOException, "Attribute name not recognized by CertAttrSet:CertificateIssuerName."_s);
	}
}

$Object* CertificateIssuerName::get($String* name) {
	if ($nc(name)->equalsIgnoreCase(CertificateIssuerName::DN_NAME)) {
		return $of((this->dnName));
	} else if (name->equalsIgnoreCase(CertificateIssuerName::DN_PRINCIPAL)) {
		if ((this->dnPrincipal == nullptr) && (this->dnName != nullptr)) {
			$set(this, dnPrincipal, $nc(this->dnName)->asX500Principal());
		}
		return $of(this->dnPrincipal);
	} else {
		$throwNew($IOException, "Attribute name not recognized by CertAttrSet:CertificateIssuerName."_s);
	}
}

void CertificateIssuerName::delete$($String* name) {
	if ($nc(name)->equalsIgnoreCase(CertificateIssuerName::DN_NAME)) {
		$set(this, dnName, nullptr);
		$set(this, dnPrincipal, nullptr);
	} else {
		$throwNew($IOException, "Attribute name not recognized by CertAttrSet:CertificateIssuerName."_s);
	}
}

$Enumeration* CertificateIssuerName::getElements() {
	$var($AttributeNameEnumeration, elements, $new($AttributeNameEnumeration));
	elements->addElement(CertificateIssuerName::DN_NAME);
	return (elements->elements());
}

$String* CertificateIssuerName::getName() {
	return (CertificateIssuerName::NAME);
}

CertificateIssuerName::CertificateIssuerName() {
}

void clinit$CertificateIssuerName($Class* class$) {
	$assignStatic(CertificateIssuerName::IDENT, "x509.info.issuer"_s);
	$assignStatic(CertificateIssuerName::NAME, "issuer"_s);
	$assignStatic(CertificateIssuerName::DN_NAME, "dname"_s);
	$assignStatic(CertificateIssuerName::DN_PRINCIPAL, "x500principal"_s);
}

$Class* CertificateIssuerName::load$($String* name, bool initialize) {
	$loadClass(CertificateIssuerName, name, initialize, &_CertificateIssuerName_ClassInfo_, clinit$CertificateIssuerName, allocate$CertificateIssuerName);
	return class$;
}

$Class* CertificateIssuerName::class$ = nullptr;

		} // x509
	} // security
} // sun