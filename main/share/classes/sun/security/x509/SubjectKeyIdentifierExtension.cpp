#include <sun/security/x509/SubjectKeyIdentifierExtension.h>

#include <java/io/IOException.h>
#include <java/io/OutputStream.h>
#include <java/util/Enumeration.h>
#include <sun/security/util/DerOutputStream.h>
#include <sun/security/util/DerValue.h>
#include <sun/security/util/ObjectIdentifier.h>
#include <sun/security/x509/AttributeNameEnumeration.h>
#include <sun/security/x509/Extension.h>
#include <sun/security/x509/KeyIdentifier.h>
#include <sun/security/x509/PKIXExtensions.h>
#include <jcpp.h>

#undef IDENT
#undef KEY_ID
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
using $KeyIdentifier = ::sun::security::x509::KeyIdentifier;
using $PKIXExtensions = ::sun::security::x509::PKIXExtensions;

namespace sun {
	namespace security {
		namespace x509 {

$FieldInfo _SubjectKeyIdentifierExtension_FieldInfo_[] = {
	{"IDENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SubjectKeyIdentifierExtension, IDENT)},
	{"NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SubjectKeyIdentifierExtension, NAME)},
	{"KEY_ID", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SubjectKeyIdentifierExtension, KEY_ID)},
	{"id", "Lsun/security/x509/KeyIdentifier;", nullptr, $PRIVATE, $field(SubjectKeyIdentifierExtension, id)},
	{}
};

$MethodInfo _SubjectKeyIdentifierExtension_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "([B)V", nullptr, $PUBLIC, $method(static_cast<void(SubjectKeyIdentifierExtension::*)($bytes*)>(&SubjectKeyIdentifierExtension::init$)), "java.io.IOException"},
	{"<init>", "(Ljava/lang/Boolean;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(SubjectKeyIdentifierExtension::*)($Boolean*,Object$*)>(&SubjectKeyIdentifierExtension::init$)), "java.io.IOException"},
	{"delete", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"encode", "(Ljava/io/OutputStream;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"encodeThis", "()V", nullptr, $PRIVATE, $method(static_cast<void(SubjectKeyIdentifierExtension::*)()>(&SubjectKeyIdentifierExtension::encodeThis)), "java.io.IOException"},
	{"get", "(Ljava/lang/String;)Lsun/security/x509/KeyIdentifier;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getElements", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljava/lang/String;>;", $PUBLIC},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"set", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _SubjectKeyIdentifierExtension_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.x509.SubjectKeyIdentifierExtension",
	"sun.security.x509.Extension",
	"sun.security.x509.CertAttrSet",
	_SubjectKeyIdentifierExtension_FieldInfo_,
	_SubjectKeyIdentifierExtension_MethodInfo_,
	"Lsun/security/x509/Extension;Lsun/security/x509/CertAttrSet<Ljava/lang/String;>;"
};

$Object* allocate$SubjectKeyIdentifierExtension($Class* clazz) {
	return $of($alloc(SubjectKeyIdentifierExtension));
}

int32_t SubjectKeyIdentifierExtension::hashCode() {
	 return this->$Extension::hashCode();
}

bool SubjectKeyIdentifierExtension::equals(Object$* other) {
	 return this->$Extension::equals(other);
}

$Object* SubjectKeyIdentifierExtension::clone() {
	 return this->$Extension::clone();
}

void SubjectKeyIdentifierExtension::finalize() {
	this->$Extension::finalize();
}

$String* SubjectKeyIdentifierExtension::IDENT = nullptr;
$String* SubjectKeyIdentifierExtension::NAME = nullptr;
$String* SubjectKeyIdentifierExtension::KEY_ID = nullptr;

void SubjectKeyIdentifierExtension::encodeThis() {
	if (this->id == nullptr) {
		$set(this, extensionValue, nullptr);
		return;
	}
	$var($DerOutputStream, os, $new($DerOutputStream));
	$nc(this->id)->encode(os);
	$set(this, extensionValue, os->toByteArray());
}

void SubjectKeyIdentifierExtension::init$($bytes* octetString) {
	$Extension::init$();
	$set(this, id, nullptr);
	$set(this, id, $new($KeyIdentifier, octetString));
	$init($PKIXExtensions);
	$set(this, extensionId, $PKIXExtensions::SubjectKey_Id);
	this->critical = false;
	encodeThis();
}

void SubjectKeyIdentifierExtension::init$($Boolean* critical, Object$* value) {
	$Extension::init$();
	$set(this, id, nullptr);
	$init($PKIXExtensions);
	$set(this, extensionId, $PKIXExtensions::SubjectKey_Id);
	this->critical = $nc(critical)->booleanValue();
	$set(this, extensionValue, $cast($bytes, value));
	$var($DerValue, val, $new($DerValue, this->extensionValue));
	$set(this, id, $new($KeyIdentifier, val));
}

$String* SubjectKeyIdentifierExtension::toString() {
	return $str({$($Extension::toString()), "SubjectKeyIdentifier [\n"_s, this->id, "]\n"_s});
}

void SubjectKeyIdentifierExtension::encode($OutputStream* out) {
	$useLocalCurrentObjectStackCache();
	$var($DerOutputStream, tmp, $new($DerOutputStream));
	if (this->extensionValue == nullptr) {
		$init($PKIXExtensions);
		$set(this, extensionId, $PKIXExtensions::SubjectKey_Id);
		this->critical = false;
		encodeThis();
	}
	$Extension::encode(tmp);
	$nc(out)->write($(tmp->toByteArray()));
}

void SubjectKeyIdentifierExtension::set($String* name, Object$* obj) {
	if ($nc(name)->equalsIgnoreCase(SubjectKeyIdentifierExtension::KEY_ID)) {
		if (!($instanceOf($KeyIdentifier, obj))) {
			$throwNew($IOException, "Attribute value should be of type KeyIdentifier."_s);
		}
		$set(this, id, $cast($KeyIdentifier, obj));
	} else {
		$throwNew($IOException, "Attribute name not recognized by CertAttrSet:SubjectKeyIdentifierExtension."_s);
	}
	encodeThis();
}

$Object* SubjectKeyIdentifierExtension::get($String* name) {
	if ($nc(name)->equalsIgnoreCase(SubjectKeyIdentifierExtension::KEY_ID)) {
		return $of((this->id));
	} else {
		$throwNew($IOException, "Attribute name not recognized by CertAttrSet:SubjectKeyIdentifierExtension."_s);
	}
}

void SubjectKeyIdentifierExtension::delete$($String* name) {
	if ($nc(name)->equalsIgnoreCase(SubjectKeyIdentifierExtension::KEY_ID)) {
		$set(this, id, nullptr);
	} else {
		$throwNew($IOException, "Attribute name not recognized by CertAttrSet:SubjectKeyIdentifierExtension."_s);
	}
	encodeThis();
}

$Enumeration* SubjectKeyIdentifierExtension::getElements() {
	$var($AttributeNameEnumeration, elements, $new($AttributeNameEnumeration));
	elements->addElement(SubjectKeyIdentifierExtension::KEY_ID);
	return (elements->elements());
}

$String* SubjectKeyIdentifierExtension::getName() {
	return (SubjectKeyIdentifierExtension::NAME);
}

SubjectKeyIdentifierExtension::SubjectKeyIdentifierExtension() {
}

void clinit$SubjectKeyIdentifierExtension($Class* class$) {
	$assignStatic(SubjectKeyIdentifierExtension::IDENT, "x509.info.extensions.SubjectKeyIdentifier"_s);
	$assignStatic(SubjectKeyIdentifierExtension::NAME, "SubjectKeyIdentifier"_s);
	$assignStatic(SubjectKeyIdentifierExtension::KEY_ID, "key_id"_s);
}

$Class* SubjectKeyIdentifierExtension::load$($String* name, bool initialize) {
	$loadClass(SubjectKeyIdentifierExtension, name, initialize, &_SubjectKeyIdentifierExtension_ClassInfo_, clinit$SubjectKeyIdentifierExtension, allocate$SubjectKeyIdentifierExtension);
	return class$;
}

$Class* SubjectKeyIdentifierExtension::class$ = nullptr;

		} // x509
	} // security
} // sun