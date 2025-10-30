#include <sun/security/x509/InvalidityDateExtension.h>

#include <java/io/IOException.h>
#include <java/io/OutputStream.h>
#include <java/security/cert/Extension.h>
#include <java/util/Date.h>
#include <java/util/Enumeration.h>
#include <sun/security/util/DerOutputStream.h>
#include <sun/security/util/DerValue.h>
#include <sun/security/util/ObjectIdentifier.h>
#include <sun/security/x509/AttributeNameEnumeration.h>
#include <sun/security/x509/Extension.h>
#include <sun/security/x509/PKIXExtensions.h>
#include <jcpp.h>

#undef DATE
#undef NAME

using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $IOException = ::java::io::IOException;
using $OutputStream = ::java::io::OutputStream;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $1Extension = ::java::security::cert::Extension;
using $Date = ::java::util::Date;
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

$FieldInfo _InvalidityDateExtension_FieldInfo_[] = {
	{"NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InvalidityDateExtension, NAME)},
	{"DATE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InvalidityDateExtension, DATE)},
	{"date", "Ljava/util/Date;", nullptr, $PRIVATE, $field(InvalidityDateExtension, date)},
	{}
};

$MethodInfo _InvalidityDateExtension_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(Ljava/util/Date;)V", nullptr, $PUBLIC, $method(static_cast<void(InvalidityDateExtension::*)($Date*)>(&InvalidityDateExtension::init$)), "java.io.IOException"},
	{"<init>", "(ZLjava/util/Date;)V", nullptr, $PUBLIC, $method(static_cast<void(InvalidityDateExtension::*)(bool,$Date*)>(&InvalidityDateExtension::init$)), "java.io.IOException"},
	{"<init>", "(Ljava/lang/Boolean;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(InvalidityDateExtension::*)($Boolean*,Object$*)>(&InvalidityDateExtension::init$)), "java.io.IOException"},
	{"delete", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"encode", "(Ljava/io/OutputStream;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"encodeThis", "()V", nullptr, $PRIVATE, $method(static_cast<void(InvalidityDateExtension::*)()>(&InvalidityDateExtension::encodeThis)), "java.io.IOException"},
	{"get", "(Ljava/lang/String;)Ljava/util/Date;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getElements", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljava/lang/String;>;", $PUBLIC},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"set", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"toImpl", "(Ljava/security/cert/Extension;)Lsun/security/x509/InvalidityDateExtension;", nullptr, $PUBLIC | $STATIC, $method(static_cast<InvalidityDateExtension*(*)($1Extension*)>(&InvalidityDateExtension::toImpl)), "java.io.IOException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _InvalidityDateExtension_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.x509.InvalidityDateExtension",
	"sun.security.x509.Extension",
	"sun.security.x509.CertAttrSet",
	_InvalidityDateExtension_FieldInfo_,
	_InvalidityDateExtension_MethodInfo_,
	"Lsun/security/x509/Extension;Lsun/security/x509/CertAttrSet<Ljava/lang/String;>;"
};

$Object* allocate$InvalidityDateExtension($Class* clazz) {
	return $of($alloc(InvalidityDateExtension));
}

int32_t InvalidityDateExtension::hashCode() {
	 return this->$Extension::hashCode();
}

bool InvalidityDateExtension::equals(Object$* other) {
	 return this->$Extension::equals(other);
}

$Object* InvalidityDateExtension::clone() {
	 return this->$Extension::clone();
}

void InvalidityDateExtension::finalize() {
	this->$Extension::finalize();
}

$String* InvalidityDateExtension::NAME = nullptr;
$String* InvalidityDateExtension::DATE = nullptr;

void InvalidityDateExtension::encodeThis() {
	if (this->date == nullptr) {
		$set(this, extensionValue, nullptr);
		return;
	}
	$var($DerOutputStream, dos, $new($DerOutputStream));
	dos->putGeneralizedTime(this->date);
	$set(this, extensionValue, dos->toByteArray());
}

void InvalidityDateExtension::init$($Date* date) {
	InvalidityDateExtension::init$(false, date);
}

void InvalidityDateExtension::init$(bool critical, $Date* date) {
	$Extension::init$();
	$init($PKIXExtensions);
	$set(this, extensionId, $PKIXExtensions::InvalidityDate_Id);
	this->critical = critical;
	$set(this, date, date);
	encodeThis();
}

void InvalidityDateExtension::init$($Boolean* critical, Object$* value) {
	$Extension::init$();
	$init($PKIXExtensions);
	$set(this, extensionId, $PKIXExtensions::InvalidityDate_Id);
	this->critical = $nc(critical)->booleanValue();
	$set(this, extensionValue, $cast($bytes, value));
	$var($DerValue, val, $new($DerValue, this->extensionValue));
	$set(this, date, val->getGeneralizedTime());
}

void InvalidityDateExtension::set($String* name, Object$* obj) {
	if (!($instanceOf($Date, obj))) {
		$throwNew($IOException, "Attribute must be of type Date."_s);
	}
	if ($nc(name)->equalsIgnoreCase(InvalidityDateExtension::DATE)) {
		$set(this, date, $cast($Date, obj));
	} else {
		$throwNew($IOException, "Name not supported by InvalidityDateExtension"_s);
	}
	encodeThis();
}

$Object* InvalidityDateExtension::get($String* name) {
	if ($nc(name)->equalsIgnoreCase(InvalidityDateExtension::DATE)) {
		if (this->date == nullptr) {
			return $of(nullptr);
		} else {
			return $of(($new($Date, $nc(this->date)->getTime())));
		}
	} else {
		$throwNew($IOException, "Name not supported by InvalidityDateExtension"_s);
	}
}

void InvalidityDateExtension::delete$($String* name) {
	if ($nc(name)->equalsIgnoreCase(InvalidityDateExtension::DATE)) {
		$set(this, date, nullptr);
	} else {
		$throwNew($IOException, "Name not supported by InvalidityDateExtension"_s);
	}
	encodeThis();
}

$String* InvalidityDateExtension::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, $$str({$($Extension::toString()), "    Invalidity Date: "_s}));
	return $concat(var$0, $($String::valueOf($of(this->date))));
}

void InvalidityDateExtension::encode($OutputStream* out) {
	$useLocalCurrentObjectStackCache();
	$var($DerOutputStream, tmp, $new($DerOutputStream));
	if (this->extensionValue == nullptr) {
		$init($PKIXExtensions);
		$set(this, extensionId, $PKIXExtensions::InvalidityDate_Id);
		this->critical = false;
		encodeThis();
	}
	$Extension::encode(tmp);
	$nc(out)->write($(tmp->toByteArray()));
}

$Enumeration* InvalidityDateExtension::getElements() {
	$var($AttributeNameEnumeration, elements, $new($AttributeNameEnumeration));
	elements->addElement(InvalidityDateExtension::DATE);
	return elements->elements();
}

$String* InvalidityDateExtension::getName() {
	return InvalidityDateExtension::NAME;
}

InvalidityDateExtension* InvalidityDateExtension::toImpl($1Extension* ext) {
	$init(InvalidityDateExtension);
	$useLocalCurrentObjectStackCache();
	if ($instanceOf(InvalidityDateExtension, ext)) {
		return $cast(InvalidityDateExtension, ext);
	} else {
		$var($Boolean, var$0, $Boolean::valueOf($nc(ext)->isCritical()));
		return $new(InvalidityDateExtension, var$0, $($of($nc(ext)->getValue())));
	}
}

InvalidityDateExtension::InvalidityDateExtension() {
}

void clinit$InvalidityDateExtension($Class* class$) {
	$assignStatic(InvalidityDateExtension::NAME, "InvalidityDate"_s);
	$assignStatic(InvalidityDateExtension::DATE, "date"_s);
}

$Class* InvalidityDateExtension::load$($String* name, bool initialize) {
	$loadClass(InvalidityDateExtension, name, initialize, &_InvalidityDateExtension_ClassInfo_, clinit$InvalidityDateExtension, allocate$InvalidityDateExtension);
	return class$;
}

$Class* InvalidityDateExtension::class$ = nullptr;

		} // x509
	} // security
} // sun