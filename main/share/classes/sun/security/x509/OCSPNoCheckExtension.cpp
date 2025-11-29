#include <sun/security/x509/OCSPNoCheckExtension.h>

#include <java/io/IOException.h>
#include <java/io/OutputStream.h>
#include <java/util/Enumeration.h>
#include <sun/security/util/ObjectIdentifier.h>
#include <sun/security/x509/AttributeNameEnumeration.h>
#include <sun/security/x509/Extension.h>
#include <sun/security/x509/PKIXExtensions.h>
#include <jcpp.h>

#undef IDENT
#undef NAME

using $IOException = ::java::io::IOException;
using $OutputStream = ::java::io::OutputStream;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;
using $AttributeNameEnumeration = ::sun::security::x509::AttributeNameEnumeration;
using $Extension = ::sun::security::x509::Extension;
using $PKIXExtensions = ::sun::security::x509::PKIXExtensions;

namespace sun {
	namespace security {
		namespace x509 {

$FieldInfo _OCSPNoCheckExtension_FieldInfo_[] = {
	{"IDENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(OCSPNoCheckExtension, IDENT)},
	{"NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(OCSPNoCheckExtension, NAME)},
	{}
};

$MethodInfo _OCSPNoCheckExtension_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*encode", "(Ljava/io/OutputStream;)V", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(OCSPNoCheckExtension::*)()>(&OCSPNoCheckExtension::init$)), "java.io.IOException"},
	{"<init>", "(Ljava/lang/Boolean;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(OCSPNoCheckExtension::*)($Boolean*,Object$*)>(&OCSPNoCheckExtension::init$)), "java.io.IOException"},
	{"delete", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"get", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getElements", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljava/lang/String;>;", $PUBLIC},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"set", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _OCSPNoCheckExtension_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.x509.OCSPNoCheckExtension",
	"sun.security.x509.Extension",
	"sun.security.x509.CertAttrSet",
	_OCSPNoCheckExtension_FieldInfo_,
	_OCSPNoCheckExtension_MethodInfo_,
	"Lsun/security/x509/Extension;Lsun/security/x509/CertAttrSet<Ljava/lang/String;>;"
};

$Object* allocate$OCSPNoCheckExtension($Class* clazz) {
	return $of($alloc(OCSPNoCheckExtension));
}

void OCSPNoCheckExtension::encode($OutputStream* out) {
	this->$Extension::encode(out);
}

$String* OCSPNoCheckExtension::toString() {
	 return this->$Extension::toString();
}

int32_t OCSPNoCheckExtension::hashCode() {
	 return this->$Extension::hashCode();
}

bool OCSPNoCheckExtension::equals(Object$* other) {
	 return this->$Extension::equals(other);
}

$Object* OCSPNoCheckExtension::clone() {
	 return this->$Extension::clone();
}

void OCSPNoCheckExtension::finalize() {
	this->$Extension::finalize();
}

$String* OCSPNoCheckExtension::IDENT = nullptr;
$String* OCSPNoCheckExtension::NAME = nullptr;

void OCSPNoCheckExtension::init$() {
	$Extension::init$();
	$init($PKIXExtensions);
	$set(this, extensionId, $PKIXExtensions::OCSPNoCheck_Id);
	this->critical = false;
	$set(this, extensionValue, $new($bytes, 0));
}

void OCSPNoCheckExtension::init$($Boolean* critical, Object$* value) {
	$Extension::init$();
	$init($PKIXExtensions);
	$set(this, extensionId, $PKIXExtensions::OCSPNoCheck_Id);
	this->critical = $nc(critical)->booleanValue();
	$set(this, extensionValue, $new($bytes, 0));
}

void OCSPNoCheckExtension::set($String* name, Object$* obj) {
	$throwNew($IOException, "No attribute is allowed by CertAttrSet:OCSPNoCheckExtension."_s);
}

$Object* OCSPNoCheckExtension::get($String* name) {
	$throwNew($IOException, "No attribute is allowed by CertAttrSet:OCSPNoCheckExtension."_s);
	$shouldNotReachHere();
}

void OCSPNoCheckExtension::delete$($String* name) {
	$throwNew($IOException, "No attribute is allowed by CertAttrSet:OCSPNoCheckExtension."_s);
}

$Enumeration* OCSPNoCheckExtension::getElements() {
	return ($$new($AttributeNameEnumeration))->elements();
}

$String* OCSPNoCheckExtension::getName() {
	return OCSPNoCheckExtension::NAME;
}

OCSPNoCheckExtension::OCSPNoCheckExtension() {
}

void clinit$OCSPNoCheckExtension($Class* class$) {
	$assignStatic(OCSPNoCheckExtension::IDENT, "x509.info.extensions.OCSPNoCheck"_s);
	$assignStatic(OCSPNoCheckExtension::NAME, "OCSPNoCheck"_s);
}

$Class* OCSPNoCheckExtension::load$($String* name, bool initialize) {
	$loadClass(OCSPNoCheckExtension, name, initialize, &_OCSPNoCheckExtension_ClassInfo_, clinit$OCSPNoCheckExtension, allocate$OCSPNoCheckExtension);
	return class$;
}

$Class* OCSPNoCheckExtension::class$ = nullptr;

		} // x509
	} // security
} // sun