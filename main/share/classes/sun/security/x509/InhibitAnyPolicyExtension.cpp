#include <sun/security/x509/InhibitAnyPolicyExtension.h>

#include <java/io/IOException.h>
#include <java/io/OutputStream.h>
#include <java/util/Enumeration.h>
#include <sun/security/util/Debug.h>
#include <sun/security/util/DerInputStream.h>
#include <sun/security/util/DerOutputStream.h>
#include <sun/security/util/DerValue.h>
#include <sun/security/util/KnownOIDs.h>
#include <sun/security/util/ObjectIdentifier.h>
#include <sun/security/x509/AttributeNameEnumeration.h>
#include <sun/security/x509/Extension.h>
#include <sun/security/x509/PKIXExtensions.h>
#include <jcpp.h>

#undef CE_CERT_POLICIES_ANY
#undef IDENT
#undef MAX_VALUE
#undef NAME
#undef SKIP_CERTS

using $IOException = ::java::io::IOException;
using $OutputStream = ::java::io::OutputStream;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;
using $Debug = ::sun::security::util::Debug;
using $DerOutputStream = ::sun::security::util::DerOutputStream;
using $DerValue = ::sun::security::util::DerValue;
using $KnownOIDs = ::sun::security::util::KnownOIDs;
using $ObjectIdentifier = ::sun::security::util::ObjectIdentifier;
using $AttributeNameEnumeration = ::sun::security::x509::AttributeNameEnumeration;
using $Extension = ::sun::security::x509::Extension;
using $PKIXExtensions = ::sun::security::x509::PKIXExtensions;

namespace sun {
	namespace security {
		namespace x509 {

$FieldInfo _InhibitAnyPolicyExtension_FieldInfo_[] = {
	{"debug", "Lsun/security/util/Debug;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(InhibitAnyPolicyExtension, debug)},
	{"IDENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InhibitAnyPolicyExtension, IDENT)},
	{"AnyPolicy_Id", "Lsun/security/util/ObjectIdentifier;", nullptr, $PUBLIC | $STATIC, $staticField(InhibitAnyPolicyExtension, AnyPolicy_Id)},
	{"NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InhibitAnyPolicyExtension, NAME)},
	{"SKIP_CERTS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InhibitAnyPolicyExtension, SKIP_CERTS)},
	{"skipCerts", "I", nullptr, $PRIVATE, $field(InhibitAnyPolicyExtension, skipCerts)},
	{}
};

$MethodInfo _InhibitAnyPolicyExtension_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(InhibitAnyPolicyExtension, init$, void, int32_t), "java.io.IOException"},
	{"<init>", "(Ljava/lang/Boolean;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(InhibitAnyPolicyExtension, init$, void, $Boolean*, Object$*), "java.io.IOException"},
	{"delete", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(InhibitAnyPolicyExtension, delete$, void, $String*), "java.io.IOException"},
	{"encode", "(Ljava/io/OutputStream;)V", nullptr, $PUBLIC, $virtualMethod(InhibitAnyPolicyExtension, encode, void, $OutputStream*), "java.io.IOException"},
	{"encodeThis", "()V", nullptr, $PRIVATE, $method(InhibitAnyPolicyExtension, encodeThis, void), "java.io.IOException"},
	{"get", "(Ljava/lang/String;)Ljava/lang/Integer;", nullptr, $PUBLIC, $virtualMethod(InhibitAnyPolicyExtension, get, $Object*, $String*), "java.io.IOException"},
	{"getElements", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljava/lang/String;>;", $PUBLIC, $virtualMethod(InhibitAnyPolicyExtension, getElements, $Enumeration*)},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(InhibitAnyPolicyExtension, getName, $String*)},
	{"set", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(InhibitAnyPolicyExtension, set, void, $String*, Object$*), "java.io.IOException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(InhibitAnyPolicyExtension, toString, $String*)},
	{}
};

$ClassInfo _InhibitAnyPolicyExtension_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.x509.InhibitAnyPolicyExtension",
	"sun.security.x509.Extension",
	"sun.security.x509.CertAttrSet",
	_InhibitAnyPolicyExtension_FieldInfo_,
	_InhibitAnyPolicyExtension_MethodInfo_,
	"Lsun/security/x509/Extension;Lsun/security/x509/CertAttrSet<Ljava/lang/String;>;"
};

$Object* allocate$InhibitAnyPolicyExtension($Class* clazz) {
	return $of($alloc(InhibitAnyPolicyExtension));
}

int32_t InhibitAnyPolicyExtension::hashCode() {
	 return this->$Extension::hashCode();
}

bool InhibitAnyPolicyExtension::equals(Object$* other) {
	 return this->$Extension::equals(other);
}

$Object* InhibitAnyPolicyExtension::clone() {
	 return this->$Extension::clone();
}

void InhibitAnyPolicyExtension::finalize() {
	this->$Extension::finalize();
}

$Debug* InhibitAnyPolicyExtension::debug = nullptr;
$String* InhibitAnyPolicyExtension::IDENT = nullptr;
$ObjectIdentifier* InhibitAnyPolicyExtension::AnyPolicy_Id = nullptr;
$String* InhibitAnyPolicyExtension::NAME = nullptr;
$String* InhibitAnyPolicyExtension::SKIP_CERTS = nullptr;

void InhibitAnyPolicyExtension::encodeThis() {
	$var($DerOutputStream, out, $new($DerOutputStream));
	out->putInteger(this->skipCerts);
	$set(this, extensionValue, out->toByteArray());
}

void InhibitAnyPolicyExtension::init$(int32_t skipCerts) {
	$Extension::init$();
	this->skipCerts = $Integer::MAX_VALUE;
	if (skipCerts < -1) {
		$throwNew($IOException, "Invalid value for skipCerts"_s);
	}
	if (skipCerts == -1) {
		this->skipCerts = $Integer::MAX_VALUE;
	} else {
		this->skipCerts = skipCerts;
	}
	$init($PKIXExtensions);
	$set(this, extensionId, $PKIXExtensions::InhibitAnyPolicy_Id);
	this->critical = true;
	encodeThis();
}

void InhibitAnyPolicyExtension::init$($Boolean* critical, Object$* value) {
	$Extension::init$();
	this->skipCerts = $Integer::MAX_VALUE;
	$init($PKIXExtensions);
	$set(this, extensionId, $PKIXExtensions::InhibitAnyPolicy_Id);
	if (!$nc(critical)->booleanValue()) {
		$throwNew($IOException, "Criticality cannot be false for InhibitAnyPolicy"_s);
	}
	this->critical = $nc(critical)->booleanValue();
	$set(this, extensionValue, $cast($bytes, value));
	$var($DerValue, val, $new($DerValue, this->extensionValue));
	if (val->tag != $DerValue::tag_Integer) {
		$throwNew($IOException, "Invalid encoding of InhibitAnyPolicy: data not integer"_s);
	}
	if (val->data$ == nullptr) {
		$throwNew($IOException, "Invalid encoding of InhibitAnyPolicy: null data"_s);
	}
	int32_t skipCertsValue = val->getInteger();
	if (skipCertsValue < -1) {
		$throwNew($IOException, "Invalid value for skipCerts"_s);
	}
	if (skipCertsValue == -1) {
		this->skipCerts = $Integer::MAX_VALUE;
	} else {
		this->skipCerts = skipCertsValue;
	}
}

$String* InhibitAnyPolicyExtension::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, s, $str({$($Extension::toString()), "InhibitAnyPolicy: "_s, $$str(this->skipCerts), "\n"_s}));
	return s;
}

void InhibitAnyPolicyExtension::encode($OutputStream* out) {
	$useLocalCurrentObjectStackCache();
	$var($DerOutputStream, tmp, $new($DerOutputStream));
	if (this->extensionValue == nullptr) {
		$init($PKIXExtensions);
		$set(this, extensionId, $PKIXExtensions::InhibitAnyPolicy_Id);
		this->critical = true;
		encodeThis();
	}
	$Extension::encode(tmp);
	$nc(out)->write($(tmp->toByteArray()));
}

void InhibitAnyPolicyExtension::set($String* name, Object$* obj) {
	if ($nc(name)->equalsIgnoreCase(InhibitAnyPolicyExtension::SKIP_CERTS)) {
		if (!($instanceOf($Integer, obj))) {
			$throwNew($IOException, "Attribute value should be of type Integer."_s);
		}
		int32_t skipCertsValue = $nc(($cast($Integer, obj)))->intValue();
		if (skipCertsValue < -1) {
			$throwNew($IOException, "Invalid value for skipCerts"_s);
		}
		if (skipCertsValue == -1) {
			this->skipCerts = $Integer::MAX_VALUE;
		} else {
			this->skipCerts = skipCertsValue;
		}
	} else {
		$throwNew($IOException, "Attribute name not recognized by CertAttrSet:InhibitAnyPolicy."_s);
	}
	encodeThis();
}

$Object* InhibitAnyPolicyExtension::get($String* name) {
	if ($nc(name)->equalsIgnoreCase(InhibitAnyPolicyExtension::SKIP_CERTS)) {
		return $of($Integer::valueOf((this->skipCerts)));
	} else {
		$throwNew($IOException, "Attribute name not recognized by CertAttrSet:InhibitAnyPolicy."_s);
	}
}

void InhibitAnyPolicyExtension::delete$($String* name) {
	if ($nc(name)->equalsIgnoreCase(InhibitAnyPolicyExtension::SKIP_CERTS)) {
		$throwNew($IOException, $$str({"Attribute "_s, InhibitAnyPolicyExtension::SKIP_CERTS, " may not be deleted."_s}));
	} else {
		$throwNew($IOException, "Attribute name not recognized by CertAttrSet:InhibitAnyPolicy."_s);
	}
}

$Enumeration* InhibitAnyPolicyExtension::getElements() {
	$var($AttributeNameEnumeration, elements, $new($AttributeNameEnumeration));
	elements->addElement(InhibitAnyPolicyExtension::SKIP_CERTS);
	return (elements->elements());
}

$String* InhibitAnyPolicyExtension::getName() {
	return (InhibitAnyPolicyExtension::NAME);
}

void clinit$InhibitAnyPolicyExtension($Class* class$) {
	$assignStatic(InhibitAnyPolicyExtension::IDENT, "x509.info.extensions.InhibitAnyPolicy"_s);
	$assignStatic(InhibitAnyPolicyExtension::NAME, "InhibitAnyPolicy"_s);
	$assignStatic(InhibitAnyPolicyExtension::SKIP_CERTS, "skip_certs"_s);
	$assignStatic(InhibitAnyPolicyExtension::debug, $Debug::getInstance("certpath"_s));
	$init($KnownOIDs);
	$assignStatic(InhibitAnyPolicyExtension::AnyPolicy_Id, $ObjectIdentifier::of($KnownOIDs::CE_CERT_POLICIES_ANY));
}

InhibitAnyPolicyExtension::InhibitAnyPolicyExtension() {
}

$Class* InhibitAnyPolicyExtension::load$($String* name, bool initialize) {
	$loadClass(InhibitAnyPolicyExtension, name, initialize, &_InhibitAnyPolicyExtension_ClassInfo_, clinit$InhibitAnyPolicyExtension, allocate$InhibitAnyPolicyExtension);
	return class$;
}

$Class* InhibitAnyPolicyExtension::class$ = nullptr;

		} // x509
	} // security
} // sun