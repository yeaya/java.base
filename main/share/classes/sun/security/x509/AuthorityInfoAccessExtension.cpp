#include <sun/security/x509/AuthorityInfoAccessExtension.h>

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
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Enumeration.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <sun/security/util/DerInputStream.h>
#include <sun/security/util/DerOutputStream.h>
#include <sun/security/util/DerValue.h>
#include <sun/security/util/ObjectIdentifier.h>
#include <sun/security/x509/AccessDescription.h>
#include <sun/security/x509/AttributeNameEnumeration.h>
#include <sun/security/x509/Extension.h>
#include <sun/security/x509/PKIXExtensions.h>
#include <jcpp.h>

#undef IDENT
#undef DESCRIPTIONS
#undef NAME

using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $IOException = ::java::io::IOException;
using $OutputStream = ::java::io::OutputStream;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Enumeration = ::java::util::Enumeration;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Vector = ::java::util::Vector;
using $DerInputStream = ::sun::security::util::DerInputStream;
using $DerOutputStream = ::sun::security::util::DerOutputStream;
using $DerValue = ::sun::security::util::DerValue;
using $ObjectIdentifier = ::sun::security::util::ObjectIdentifier;
using $AccessDescription = ::sun::security::x509::AccessDescription;
using $AttributeNameEnumeration = ::sun::security::x509::AttributeNameEnumeration;
using $CertAttrSet = ::sun::security::x509::CertAttrSet;
using $Extension = ::sun::security::x509::Extension;
using $PKIXExtensions = ::sun::security::x509::PKIXExtensions;

namespace sun {
	namespace security {
		namespace x509 {

$FieldInfo _AuthorityInfoAccessExtension_FieldInfo_[] = {
	{"IDENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AuthorityInfoAccessExtension, IDENT)},
	{"NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AuthorityInfoAccessExtension, NAME)},
	{"DESCRIPTIONS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AuthorityInfoAccessExtension, DESCRIPTIONS)},
	{"accessDescriptions", "Ljava/util/List;", "Ljava/util/List<Lsun/security/x509/AccessDescription;>;", $PRIVATE, $field(AuthorityInfoAccessExtension, accessDescriptions)},
	{}
};

$MethodInfo _AuthorityInfoAccessExtension_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(Ljava/util/List;)V", "(Ljava/util/List<Lsun/security/x509/AccessDescription;>;)V", $PUBLIC, $method(static_cast<void(AuthorityInfoAccessExtension::*)($List*)>(&AuthorityInfoAccessExtension::init$)), "java.io.IOException"},
	{"<init>", "(Ljava/lang/Boolean;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(AuthorityInfoAccessExtension::*)($Boolean*,Object$*)>(&AuthorityInfoAccessExtension::init$)), "java.io.IOException"},
	{"delete", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"encode", "(Ljava/io/OutputStream;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"encodeThis", "()V", nullptr, $PRIVATE, $method(static_cast<void(AuthorityInfoAccessExtension::*)()>(&AuthorityInfoAccessExtension::encodeThis)), "java.io.IOException"},
	{"get", "(Ljava/lang/String;)Ljava/util/List;", "(Ljava/lang/String;)Ljava/util/List<Lsun/security/x509/AccessDescription;>;", $PUBLIC, nullptr, "java.io.IOException"},
	{"getAccessDescriptions", "()Ljava/util/List;", "()Ljava/util/List<Lsun/security/x509/AccessDescription;>;", $PUBLIC},
	{"getElements", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljava/lang/String;>;", $PUBLIC},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"set", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _AuthorityInfoAccessExtension_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.x509.AuthorityInfoAccessExtension",
	"sun.security.x509.Extension",
	"sun.security.x509.CertAttrSet",
	_AuthorityInfoAccessExtension_FieldInfo_,
	_AuthorityInfoAccessExtension_MethodInfo_,
	"Lsun/security/x509/Extension;Lsun/security/x509/CertAttrSet<Ljava/lang/String;>;"
};

$Object* allocate$AuthorityInfoAccessExtension($Class* clazz) {
	return $of($alloc(AuthorityInfoAccessExtension));
}

int32_t AuthorityInfoAccessExtension::hashCode() {
	 return this->$Extension::hashCode();
}

bool AuthorityInfoAccessExtension::equals(Object$* other) {
	 return this->$Extension::equals(other);
}

$Object* AuthorityInfoAccessExtension::clone() {
	 return this->$Extension::clone();
}

void AuthorityInfoAccessExtension::finalize() {
	this->$Extension::finalize();
}


$String* AuthorityInfoAccessExtension::IDENT = nullptr;

$String* AuthorityInfoAccessExtension::NAME = nullptr;
$String* AuthorityInfoAccessExtension::DESCRIPTIONS = nullptr;

void AuthorityInfoAccessExtension::init$($List* accessDescriptions) {
	$Extension::init$();
	$init($PKIXExtensions);
	$set(this, extensionId, $PKIXExtensions::AuthInfoAccess_Id);
	this->critical = false;
	$set(this, accessDescriptions, accessDescriptions);
	encodeThis();
}

void AuthorityInfoAccessExtension::init$($Boolean* critical, Object$* value) {
	$Extension::init$();
	$init($PKIXExtensions);
	$set(this, extensionId, $PKIXExtensions::AuthInfoAccess_Id);
	this->critical = $nc(critical)->booleanValue();
	if (!($instanceOf($bytes, value))) {
		$throwNew($IOException, "Illegal argument type"_s);
	}
	$set(this, extensionValue, $cast($bytes, value));
	$var($DerValue, val, $new($DerValue, this->extensionValue));
	if (val->tag != $DerValue::tag_Sequence) {
		$throwNew($IOException, "Invalid encoding for AuthorityInfoAccessExtension."_s);
	}
	$set(this, accessDescriptions, $new($ArrayList));
	while ($nc(val->data$)->available() != 0) {
		$var($DerValue, seq, $nc(val->data$)->getDerValue());
		$var($AccessDescription, accessDescription, $new($AccessDescription, seq));
		$nc(this->accessDescriptions)->add(accessDescription);
	}
}

$List* AuthorityInfoAccessExtension::getAccessDescriptions() {
	return this->accessDescriptions;
}

$String* AuthorityInfoAccessExtension::getName() {
	return AuthorityInfoAccessExtension::NAME;
}

void AuthorityInfoAccessExtension::encode($OutputStream* out) {
	$var($DerOutputStream, tmp, $new($DerOutputStream));
	if (this->extensionValue == nullptr) {
		$init($PKIXExtensions);
		$set(this, extensionId, $PKIXExtensions::AuthInfoAccess_Id);
		this->critical = false;
		encodeThis();
	}
	$Extension::encode(tmp);
	$nc(out)->write($(tmp->toByteArray()));
}

void AuthorityInfoAccessExtension::set($String* name, Object$* obj) {
	if ($nc(name)->equalsIgnoreCase(AuthorityInfoAccessExtension::DESCRIPTIONS)) {
		if (!($instanceOf($List, obj))) {
			$throwNew($IOException, "Attribute value should be of type List."_s);
		}
		$set(this, accessDescriptions, $cast($List, obj));
	} else {
		$throwNew($IOException, $$str({"Attribute name ["_s, name, "] not recognized by CertAttrSet:AuthorityInfoAccessExtension."_s}));
	}
	encodeThis();
}

$Object* AuthorityInfoAccessExtension::get($String* name) {
	if ($nc(name)->equalsIgnoreCase(AuthorityInfoAccessExtension::DESCRIPTIONS)) {
		return $of(this->accessDescriptions);
	} else {
		$throwNew($IOException, $$str({"Attribute name ["_s, name, "] not recognized by CertAttrSet:AuthorityInfoAccessExtension."_s}));
	}
}

void AuthorityInfoAccessExtension::delete$($String* name) {
	if ($nc(name)->equalsIgnoreCase(AuthorityInfoAccessExtension::DESCRIPTIONS)) {
		$set(this, accessDescriptions, $new($ArrayList));
	} else {
		$throwNew($IOException, $$str({"Attribute name ["_s, name, "] not recognized by CertAttrSet:AuthorityInfoAccessExtension."_s}));
	}
	encodeThis();
}

$Enumeration* AuthorityInfoAccessExtension::getElements() {
	$var($AttributeNameEnumeration, elements, $new($AttributeNameEnumeration));
	elements->addElement(AuthorityInfoAccessExtension::DESCRIPTIONS);
	return elements->elements();
}

void AuthorityInfoAccessExtension::encodeThis() {
	if ($nc(this->accessDescriptions)->isEmpty()) {
		$set(this, extensionValue, nullptr);
	} else {
		$var($DerOutputStream, ads, $new($DerOutputStream));
		{
			$var($Iterator, i$, $nc(this->accessDescriptions)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($AccessDescription, accessDescription, $cast($AccessDescription, i$->next()));
				{
					$nc(accessDescription)->encode(ads);
				}
			}
		}
		$var($DerOutputStream, seq, $new($DerOutputStream));
		seq->write($DerValue::tag_Sequence, ads);
		$set(this, extensionValue, seq->toByteArray());
	}
}

$String* AuthorityInfoAccessExtension::toString() {
	return $str({$($Extension::toString()), "AuthorityInfoAccess [\n  "_s, this->accessDescriptions, "\n]\n"_s});
}

AuthorityInfoAccessExtension::AuthorityInfoAccessExtension() {
}

void clinit$AuthorityInfoAccessExtension($Class* class$) {
	$assignStatic(AuthorityInfoAccessExtension::IDENT, "x509.info.extensions.AuthorityInfoAccess"_s);
	$assignStatic(AuthorityInfoAccessExtension::NAME, "AuthorityInfoAccess"_s);
	$assignStatic(AuthorityInfoAccessExtension::DESCRIPTIONS, "descriptions"_s);
}

$Class* AuthorityInfoAccessExtension::load$($String* name, bool initialize) {
	$loadClass(AuthorityInfoAccessExtension, name, initialize, &_AuthorityInfoAccessExtension_ClassInfo_, clinit$AuthorityInfoAccessExtension, allocate$AuthorityInfoAccessExtension);
	return class$;
}

$Class* AuthorityInfoAccessExtension::class$ = nullptr;

		} // x509
	} // security
} // sun