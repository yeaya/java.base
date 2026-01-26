#include <sun/security/x509/CertificateSubjectName.h>

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

$FieldInfo _CertificateSubjectName_FieldInfo_[] = {
	{"IDENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CertificateSubjectName, IDENT)},
	{"NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CertificateSubjectName, NAME)},
	{"DN_NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CertificateSubjectName, DN_NAME)},
	{"DN_PRINCIPAL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CertificateSubjectName, DN_PRINCIPAL)},
	{"dnName", "Lsun/security/x509/X500Name;", nullptr, $PRIVATE, $field(CertificateSubjectName, dnName)},
	{"dnPrincipal", "Ljavax/security/auth/x500/X500Principal;", nullptr, $PRIVATE, $field(CertificateSubjectName, dnPrincipal)},
	{}
};

$MethodInfo _CertificateSubjectName_MethodInfo_[] = {
	{"<init>", "(Lsun/security/x509/X500Name;)V", nullptr, $PUBLIC, $method(CertificateSubjectName, init$, void, $X500Name*)},
	{"<init>", "(Lsun/security/util/DerInputStream;)V", nullptr, $PUBLIC, $method(CertificateSubjectName, init$, void, $DerInputStream*), "java.io.IOException"},
	{"<init>", "(Ljava/io/InputStream;)V", nullptr, $PUBLIC, $method(CertificateSubjectName, init$, void, $InputStream*), "java.io.IOException"},
	{"delete", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(CertificateSubjectName, delete$, void, $String*), "java.io.IOException"},
	{"encode", "(Ljava/io/OutputStream;)V", nullptr, $PUBLIC, $virtualMethod(CertificateSubjectName, encode, void, $OutputStream*), "java.io.IOException"},
	{"get", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(CertificateSubjectName, get, $Object*, $String*), "java.io.IOException"},
	{"getElements", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljava/lang/String;>;", $PUBLIC, $virtualMethod(CertificateSubjectName, getElements, $Enumeration*)},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(CertificateSubjectName, getName, $String*)},
	{"set", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(CertificateSubjectName, set, void, $String*, Object$*), "java.io.IOException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(CertificateSubjectName, toString, $String*)},
	{}
};

$ClassInfo _CertificateSubjectName_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.x509.CertificateSubjectName",
	"java.lang.Object",
	"sun.security.x509.CertAttrSet",
	_CertificateSubjectName_FieldInfo_,
	_CertificateSubjectName_MethodInfo_,
	"Ljava/lang/Object;Lsun/security/x509/CertAttrSet<Ljava/lang/String;>;"
};

$Object* allocate$CertificateSubjectName($Class* clazz) {
	return $of($alloc(CertificateSubjectName));
}

$String* CertificateSubjectName::IDENT = nullptr;
$String* CertificateSubjectName::NAME = nullptr;
$String* CertificateSubjectName::DN_NAME = nullptr;
$String* CertificateSubjectName::DN_PRINCIPAL = nullptr;

void CertificateSubjectName::init$($X500Name* name) {
	$set(this, dnName, name);
}

void CertificateSubjectName::init$($DerInputStream* in) {
	$set(this, dnName, $new($X500Name, in));
}

void CertificateSubjectName::init$($InputStream* in) {
	$var($DerValue, derVal, $new($DerValue, in));
	$set(this, dnName, $new($X500Name, derVal));
}

$String* CertificateSubjectName::toString() {
	if (this->dnName == nullptr) {
		return ""_s;
	}
	return ($nc(this->dnName)->toString());
}

void CertificateSubjectName::encode($OutputStream* out) {
	$useLocalCurrentObjectStackCache();
	$var($DerOutputStream, tmp, $new($DerOutputStream));
	$nc(this->dnName)->encode(tmp);
	$nc(out)->write($(tmp->toByteArray()));
}

void CertificateSubjectName::set($String* name, Object$* obj) {
	if (!($instanceOf($X500Name, obj))) {
		$throwNew($IOException, "Attribute must be of type X500Name."_s);
	}
	if ($nc(name)->equalsIgnoreCase(CertificateSubjectName::DN_NAME)) {
		$set(this, dnName, $cast($X500Name, obj));
		$set(this, dnPrincipal, nullptr);
	} else {
		$throwNew($IOException, "Attribute name not recognized by CertAttrSet:CertificateSubjectName."_s);
	}
}

$Object* CertificateSubjectName::get($String* name) {
	if ($nc(name)->equalsIgnoreCase(CertificateSubjectName::DN_NAME)) {
		return $of((this->dnName));
	} else if (name->equalsIgnoreCase(CertificateSubjectName::DN_PRINCIPAL)) {
		if ((this->dnPrincipal == nullptr) && (this->dnName != nullptr)) {
			$set(this, dnPrincipal, $nc(this->dnName)->asX500Principal());
		}
		return $of(this->dnPrincipal);
	} else {
		$throwNew($IOException, "Attribute name not recognized by CertAttrSet:CertificateSubjectName."_s);
	}
}

void CertificateSubjectName::delete$($String* name) {
	if ($nc(name)->equalsIgnoreCase(CertificateSubjectName::DN_NAME)) {
		$set(this, dnName, nullptr);
		$set(this, dnPrincipal, nullptr);
	} else {
		$throwNew($IOException, "Attribute name not recognized by CertAttrSet:CertificateSubjectName."_s);
	}
}

$Enumeration* CertificateSubjectName::getElements() {
	$var($AttributeNameEnumeration, elements, $new($AttributeNameEnumeration));
	elements->addElement(CertificateSubjectName::DN_NAME);
	return (elements->elements());
}

$String* CertificateSubjectName::getName() {
	return (CertificateSubjectName::NAME);
}

CertificateSubjectName::CertificateSubjectName() {
}

void clinit$CertificateSubjectName($Class* class$) {
	$assignStatic(CertificateSubjectName::IDENT, "x509.info.subject"_s);
	$assignStatic(CertificateSubjectName::NAME, "subject"_s);
	$assignStatic(CertificateSubjectName::DN_NAME, "dname"_s);
	$assignStatic(CertificateSubjectName::DN_PRINCIPAL, "x500principal"_s);
}

$Class* CertificateSubjectName::load$($String* name, bool initialize) {
	$loadClass(CertificateSubjectName, name, initialize, &_CertificateSubjectName_ClassInfo_, clinit$CertificateSubjectName, allocate$CertificateSubjectName);
	return class$;
}

$Class* CertificateSubjectName::class$ = nullptr;

		} // x509
	} // security
} // sun