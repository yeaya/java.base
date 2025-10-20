#include <sun/security/x509/PolicyMappingsExtension.h>

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
#include <java/util/Collections.h>
#include <java/util/Enumeration.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <sun/security/util/DerInputStream.h>
#include <sun/security/util/DerOutputStream.h>
#include <sun/security/util/DerValue.h>
#include <sun/security/util/ObjectIdentifier.h>
#include <sun/security/x509/AttributeNameEnumeration.h>
#include <sun/security/x509/CertificatePolicyMap.h>
#include <sun/security/x509/Extension.h>
#include <sun/security/x509/PKIXExtensions.h>
#include <jcpp.h>

#undef IDENT
#undef MAP
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
using $Collections = ::java::util::Collections;
using $Enumeration = ::java::util::Enumeration;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Vector = ::java::util::Vector;
using $DerInputStream = ::sun::security::util::DerInputStream;
using $DerOutputStream = ::sun::security::util::DerOutputStream;
using $DerValue = ::sun::security::util::DerValue;
using $ObjectIdentifier = ::sun::security::util::ObjectIdentifier;
using $AttributeNameEnumeration = ::sun::security::x509::AttributeNameEnumeration;
using $CertAttrSet = ::sun::security::x509::CertAttrSet;
using $CertificatePolicyMap = ::sun::security::x509::CertificatePolicyMap;
using $Extension = ::sun::security::x509::Extension;
using $PKIXExtensions = ::sun::security::x509::PKIXExtensions;

namespace sun {
	namespace security {
		namespace x509 {

$FieldInfo _PolicyMappingsExtension_FieldInfo_[] = {
	{"IDENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PolicyMappingsExtension, IDENT)},
	{"NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PolicyMappingsExtension, NAME)},
	{"MAP", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PolicyMappingsExtension, MAP)},
	{"maps", "Ljava/util/List;", "Ljava/util/List<Lsun/security/x509/CertificatePolicyMap;>;", $PRIVATE, $field(PolicyMappingsExtension, maps)},
	{}
};

$MethodInfo _PolicyMappingsExtension_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(Ljava/util/List;)V", "(Ljava/util/List<Lsun/security/x509/CertificatePolicyMap;>;)V", $PUBLIC, $method(static_cast<void(PolicyMappingsExtension::*)($List*)>(&PolicyMappingsExtension::init$)), "java.io.IOException"},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PolicyMappingsExtension::*)()>(&PolicyMappingsExtension::init$))},
	{"<init>", "(Ljava/lang/Boolean;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(PolicyMappingsExtension::*)($Boolean*,Object$*)>(&PolicyMappingsExtension::init$)), "java.io.IOException"},
	{"delete", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"encode", "(Ljava/io/OutputStream;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"encodeThis", "()V", nullptr, $PRIVATE, $method(static_cast<void(PolicyMappingsExtension::*)()>(&PolicyMappingsExtension::encodeThis)), "java.io.IOException"},
	{"get", "(Ljava/lang/String;)Ljava/util/List;", "(Ljava/lang/String;)Ljava/util/List<Lsun/security/x509/CertificatePolicyMap;>;", $PUBLIC, nullptr, "java.io.IOException"},
	{"getElements", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljava/lang/String;>;", $PUBLIC},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"set", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _PolicyMappingsExtension_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.x509.PolicyMappingsExtension",
	"sun.security.x509.Extension",
	"sun.security.x509.CertAttrSet",
	_PolicyMappingsExtension_FieldInfo_,
	_PolicyMappingsExtension_MethodInfo_,
	"Lsun/security/x509/Extension;Lsun/security/x509/CertAttrSet<Ljava/lang/String;>;"
};

$Object* allocate$PolicyMappingsExtension($Class* clazz) {
	return $of($alloc(PolicyMappingsExtension));
}

int32_t PolicyMappingsExtension::hashCode() {
	 return this->$Extension::hashCode();
}

bool PolicyMappingsExtension::equals(Object$* other) {
	 return this->$Extension::equals(other);
}

$Object* PolicyMappingsExtension::clone() {
	 return this->$Extension::clone();
}

void PolicyMappingsExtension::finalize() {
	this->$Extension::finalize();
}


$String* PolicyMappingsExtension::IDENT = nullptr;

$String* PolicyMappingsExtension::NAME = nullptr;
$String* PolicyMappingsExtension::MAP = nullptr;

void PolicyMappingsExtension::encodeThis() {
	$useLocalCurrentObjectStackCache();
	if (this->maps == nullptr || $nc(this->maps)->isEmpty()) {
		$set(this, extensionValue, nullptr);
		return;
	}
	$var($DerOutputStream, os, $new($DerOutputStream));
	$var($DerOutputStream, tmp, $new($DerOutputStream));
	{
		$var($Iterator, i$, $nc(this->maps)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($CertificatePolicyMap, map, $cast($CertificatePolicyMap, i$->next()));
			{
				$nc(map)->encode(tmp);
			}
		}
	}
	os->write($DerValue::tag_Sequence, tmp);
	$set(this, extensionValue, os->toByteArray());
}

void PolicyMappingsExtension::init$($List* maps) {
	$Extension::init$();
	$set(this, maps, maps);
	$init($PKIXExtensions);
	$set(this, extensionId, $PKIXExtensions::PolicyMappings_Id);
	this->critical = true;
	encodeThis();
}

void PolicyMappingsExtension::init$() {
	$Extension::init$();
	$init($PKIXExtensions);
	$set(this, extensionId, $PKIXExtensions::PolicyMappings_Id);
	this->critical = true;
	$set(this, maps, $Collections::emptyList());
}

void PolicyMappingsExtension::init$($Boolean* critical, Object$* value) {
	$useLocalCurrentObjectStackCache();
	$Extension::init$();
	$init($PKIXExtensions);
	$set(this, extensionId, $PKIXExtensions::PolicyMappings_Id);
	this->critical = $nc(critical)->booleanValue();
	$set(this, extensionValue, $cast($bytes, value));
	$var($DerValue, val, $new($DerValue, this->extensionValue));
	if (val->tag != $DerValue::tag_Sequence) {
		$throwNew($IOException, "Invalid encoding for PolicyMappingsExtension."_s);
	}
	$set(this, maps, $new($ArrayList));
	while ($nc(val->data$)->available() != 0) {
		$var($DerValue, seq, $nc(val->data$)->getDerValue());
		$var($CertificatePolicyMap, map, $new($CertificatePolicyMap, seq));
		$nc(this->maps)->add(map);
	}
}

$String* PolicyMappingsExtension::toString() {
	$useLocalCurrentObjectStackCache();
	if (this->maps == nullptr) {
		return ""_s;
	}
	$var($String, var$1, $$str({$($Extension::toString()), "PolicyMappings [\n"_s}));
	$var($String, var$0, $$concat(var$1, $($nc($of(this->maps))->toString())));
	$var($String, s, $concat(var$0, "]\n"));
	return (s);
}

void PolicyMappingsExtension::encode($OutputStream* out) {
	$useLocalCurrentObjectStackCache();
	$var($DerOutputStream, tmp, $new($DerOutputStream));
	if (this->extensionValue == nullptr) {
		$init($PKIXExtensions);
		$set(this, extensionId, $PKIXExtensions::PolicyMappings_Id);
		this->critical = true;
		encodeThis();
	}
	$Extension::encode(tmp);
	$nc(out)->write($(tmp->toByteArray()));
}

void PolicyMappingsExtension::set($String* name, Object$* obj) {
	if ($nc(name)->equalsIgnoreCase(PolicyMappingsExtension::MAP)) {
		if (!($instanceOf($List, obj))) {
			$throwNew($IOException, "Attribute value should be of type List."_s);
		}
		$set(this, maps, $cast($List, obj));
	} else {
		$throwNew($IOException, "Attribute name not recognized by CertAttrSet:PolicyMappingsExtension."_s);
	}
	encodeThis();
}

$Object* PolicyMappingsExtension::get($String* name) {
	if ($nc(name)->equalsIgnoreCase(PolicyMappingsExtension::MAP)) {
		return $of((this->maps));
	} else {
		$throwNew($IOException, "Attribute name not recognized by CertAttrSet:PolicyMappingsExtension."_s);
	}
}

void PolicyMappingsExtension::delete$($String* name) {
	if ($nc(name)->equalsIgnoreCase(PolicyMappingsExtension::MAP)) {
		$set(this, maps, nullptr);
	} else {
		$throwNew($IOException, "Attribute name not recognized by CertAttrSet:PolicyMappingsExtension."_s);
	}
	encodeThis();
}

$Enumeration* PolicyMappingsExtension::getElements() {
	$var($AttributeNameEnumeration, elements, $new($AttributeNameEnumeration));
	elements->addElement(PolicyMappingsExtension::MAP);
	return elements->elements();
}

$String* PolicyMappingsExtension::getName() {
	return (PolicyMappingsExtension::NAME);
}

PolicyMappingsExtension::PolicyMappingsExtension() {
}

void clinit$PolicyMappingsExtension($Class* class$) {
	$assignStatic(PolicyMappingsExtension::IDENT, "x509.info.extensions.PolicyMappings"_s);
	$assignStatic(PolicyMappingsExtension::NAME, "PolicyMappings"_s);
	$assignStatic(PolicyMappingsExtension::MAP, "map"_s);
}

$Class* PolicyMappingsExtension::load$($String* name, bool initialize) {
	$loadClass(PolicyMappingsExtension, name, initialize, &_PolicyMappingsExtension_ClassInfo_, clinit$PolicyMappingsExtension, allocate$PolicyMappingsExtension);
	return class$;
}

$Class* PolicyMappingsExtension::class$ = nullptr;

		} // x509
	} // security
} // sun