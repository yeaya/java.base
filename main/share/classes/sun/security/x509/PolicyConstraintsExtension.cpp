#include <sun/security/x509/PolicyConstraintsExtension.h>

#include <java/io/IOException.h>
#include <java/io/OutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Enumeration.h>
#include <sun/security/util/DerInputStream.h>
#include <sun/security/util/DerOutputStream.h>
#include <sun/security/util/DerValue.h>
#include <sun/security/util/ObjectIdentifier.h>
#include <sun/security/x509/AttributeNameEnumeration.h>
#include <sun/security/x509/Extension.h>
#include <sun/security/x509/PKIXExtensions.h>
#include <jcpp.h>

#undef IDENT
#undef INHIBIT
#undef NAME
#undef REQUIRE
#undef TAG_CONTEXT
#undef TAG_INHIBIT
#undef TAG_REQUIRE
#undef TRUE

using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $IOException = ::java::io::IOException;
using $OutputStream = ::java::io::OutputStream;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;
using $Vector = ::java::util::Vector;
using $DerInputStream = ::sun::security::util::DerInputStream;
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

$FieldInfo _PolicyConstraintsExtension_FieldInfo_[] = {
	{"IDENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PolicyConstraintsExtension, IDENT)},
	{"NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PolicyConstraintsExtension, NAME)},
	{"REQUIRE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PolicyConstraintsExtension, REQUIRE)},
	{"INHIBIT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PolicyConstraintsExtension, INHIBIT)},
	{"TAG_REQUIRE", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PolicyConstraintsExtension, TAG_REQUIRE)},
	{"TAG_INHIBIT", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PolicyConstraintsExtension, TAG_INHIBIT)},
	{"require", "I", nullptr, $PRIVATE, $field(PolicyConstraintsExtension, require)},
	{"inhibit", "I", nullptr, $PRIVATE, $field(PolicyConstraintsExtension, inhibit)},
	{}
};

$MethodInfo _PolicyConstraintsExtension_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(II)V", nullptr, $PUBLIC, $method(static_cast<void(PolicyConstraintsExtension::*)(int32_t,int32_t)>(&PolicyConstraintsExtension::init$)), "java.io.IOException"},
	{"<init>", "(Ljava/lang/Boolean;II)V", nullptr, $PUBLIC, $method(static_cast<void(PolicyConstraintsExtension::*)($Boolean*,int32_t,int32_t)>(&PolicyConstraintsExtension::init$)), "java.io.IOException"},
	{"<init>", "(Ljava/lang/Boolean;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(PolicyConstraintsExtension::*)($Boolean*,Object$*)>(&PolicyConstraintsExtension::init$)), "java.io.IOException"},
	{"delete", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"encode", "(Ljava/io/OutputStream;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"encodeThis", "()V", nullptr, $PRIVATE, $method(static_cast<void(PolicyConstraintsExtension::*)()>(&PolicyConstraintsExtension::encodeThis)), "java.io.IOException"},
	{"get", "(Ljava/lang/String;)Ljava/lang/Integer;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getElements", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljava/lang/String;>;", $PUBLIC},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"set", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _PolicyConstraintsExtension_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.x509.PolicyConstraintsExtension",
	"sun.security.x509.Extension",
	"sun.security.x509.CertAttrSet",
	_PolicyConstraintsExtension_FieldInfo_,
	_PolicyConstraintsExtension_MethodInfo_,
	"Lsun/security/x509/Extension;Lsun/security/x509/CertAttrSet<Ljava/lang/String;>;"
};

$Object* allocate$PolicyConstraintsExtension($Class* clazz) {
	return $of($alloc(PolicyConstraintsExtension));
}

int32_t PolicyConstraintsExtension::hashCode() {
	 return this->$Extension::hashCode();
}

bool PolicyConstraintsExtension::equals(Object$* other) {
	 return this->$Extension::equals(other);
}

$Object* PolicyConstraintsExtension::clone() {
	 return this->$Extension::clone();
}

void PolicyConstraintsExtension::finalize() {
	this->$Extension::finalize();
}


$String* PolicyConstraintsExtension::IDENT = nullptr;

$String* PolicyConstraintsExtension::NAME = nullptr;
$String* PolicyConstraintsExtension::REQUIRE = nullptr;
$String* PolicyConstraintsExtension::INHIBIT = nullptr;

void PolicyConstraintsExtension::encodeThis() {
	$useLocalCurrentObjectStackCache();
	if (this->require == -1 && this->inhibit == -1) {
		$set(this, extensionValue, nullptr);
		return;
	}
	$var($DerOutputStream, tagged, $new($DerOutputStream));
	$var($DerOutputStream, seq, $new($DerOutputStream));
	if (this->require != -1) {
		$var($DerOutputStream, tmp, $new($DerOutputStream));
		tmp->putInteger(this->require);
		tagged->writeImplicit($DerValue::createTag($DerValue::TAG_CONTEXT, false, PolicyConstraintsExtension::TAG_REQUIRE), tmp);
	}
	if (this->inhibit != -1) {
		$var($DerOutputStream, tmp, $new($DerOutputStream));
		tmp->putInteger(this->inhibit);
		tagged->writeImplicit($DerValue::createTag($DerValue::TAG_CONTEXT, false, PolicyConstraintsExtension::TAG_INHIBIT), tmp);
	}
	seq->write($DerValue::tag_Sequence, tagged);
	$set(this, extensionValue, seq->toByteArray());
}

void PolicyConstraintsExtension::init$(int32_t require, int32_t inhibit) {
	$init($Boolean);
	PolicyConstraintsExtension::init$($Boolean::TRUE, require, inhibit);
}

void PolicyConstraintsExtension::init$($Boolean* critical, int32_t require, int32_t inhibit) {
	$Extension::init$();
	this->require = -1;
	this->inhibit = -1;
	this->require = require;
	this->inhibit = inhibit;
	$init($PKIXExtensions);
	$set(this, extensionId, $PKIXExtensions::PolicyConstraints_Id);
	this->critical = $nc(critical)->booleanValue();
	encodeThis();
}

void PolicyConstraintsExtension::init$($Boolean* critical, Object$* value) {
	$useLocalCurrentObjectStackCache();
	$Extension::init$();
	this->require = -1;
	this->inhibit = -1;
	$init($PKIXExtensions);
	$set(this, extensionId, $PKIXExtensions::PolicyConstraints_Id);
	this->critical = $nc(critical)->booleanValue();
	$set(this, extensionValue, $cast($bytes, value));
	$var($DerValue, val, $new($DerValue, this->extensionValue));
	if (val->tag != $DerValue::tag_Sequence) {
		$throwNew($IOException, "Sequence tag missing for PolicyConstraint."_s);
	}
	$var($DerInputStream, in, val->data$);
	while (in != nullptr && in->available() != 0) {
		$var($DerValue, next, in->getDerValue());
		bool var$0 = $nc(next)->isContextSpecific(PolicyConstraintsExtension::TAG_REQUIRE);
		if (var$0 && !next->isConstructed()) {
			if (this->require != -1) {
				$throwNew($IOException, "Duplicate requireExplicitPolicyfound in the PolicyConstraintsExtension"_s);
			}
			next->resetTag($DerValue::tag_Integer);
			this->require = next->getInteger();
		} else {
			bool var$2 = next->isContextSpecific(PolicyConstraintsExtension::TAG_INHIBIT);
			if (var$2 && !next->isConstructed()) {
				if (this->inhibit != -1) {
					$throwNew($IOException, "Duplicate inhibitPolicyMappingfound in the PolicyConstraintsExtension"_s);
				}
				next->resetTag($DerValue::tag_Integer);
				this->inhibit = next->getInteger();
			} else {
				$throwNew($IOException, "Invalid encoding of PolicyConstraint"_s);
			}
		}
	}
}

$String* PolicyConstraintsExtension::toString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, sb, $new($StringBuilder));
	sb->append($($Extension::toString()))->append("PolicyConstraints: ["_s)->append("  Require: "_s);
	if (this->require == -1) {
		sb->append("unspecified;"_s);
	} else {
		sb->append(this->require)->append(u';');
	}
	sb->append("\tInhibit: "_s);
	if (this->inhibit == -1) {
		sb->append("unspecified"_s);
	} else {
		sb->append(this->inhibit);
	}
	sb->append(" ]\n"_s);
	return sb->toString();
}

void PolicyConstraintsExtension::encode($OutputStream* out) {
	$useLocalCurrentObjectStackCache();
	$var($DerOutputStream, tmp, $new($DerOutputStream));
	if (this->extensionValue == nullptr) {
		$init($PKIXExtensions);
		$set(this, extensionId, $PKIXExtensions::PolicyConstraints_Id);
		this->critical = true;
		encodeThis();
	}
	$Extension::encode(tmp);
	$nc(out)->write($(tmp->toByteArray()));
}

void PolicyConstraintsExtension::set($String* name, Object$* obj) {
	if (!($instanceOf($Integer, obj))) {
		$throwNew($IOException, "Attribute value should be of type Integer."_s);
	}
	if ($nc(name)->equalsIgnoreCase(PolicyConstraintsExtension::REQUIRE)) {
		this->require = $nc(($cast($Integer, obj)))->intValue();
	} else if (name->equalsIgnoreCase(PolicyConstraintsExtension::INHIBIT)) {
		this->inhibit = $nc(($cast($Integer, obj)))->intValue();
	} else {
		$throwNew($IOException, $$str({"Attribute name ["_s, name, "] not recognized by CertAttrSet:PolicyConstraints."_s}));
	}
	encodeThis();
}

$Object* PolicyConstraintsExtension::get($String* name) {
	if ($nc(name)->equalsIgnoreCase(PolicyConstraintsExtension::REQUIRE)) {
		return $of($Integer::valueOf(this->require));
	} else if (name->equalsIgnoreCase(PolicyConstraintsExtension::INHIBIT)) {
		return $of($Integer::valueOf(this->inhibit));
	} else {
		$throwNew($IOException, "Attribute name not recognized by CertAttrSet:PolicyConstraints."_s);
	}
}

void PolicyConstraintsExtension::delete$($String* name) {
	if ($nc(name)->equalsIgnoreCase(PolicyConstraintsExtension::REQUIRE)) {
		this->require = -1;
	} else if (name->equalsIgnoreCase(PolicyConstraintsExtension::INHIBIT)) {
		this->inhibit = -1;
	} else {
		$throwNew($IOException, "Attribute name not recognized by CertAttrSet:PolicyConstraints."_s);
	}
	encodeThis();
}

$Enumeration* PolicyConstraintsExtension::getElements() {
	$var($AttributeNameEnumeration, elements, $new($AttributeNameEnumeration));
	elements->addElement(PolicyConstraintsExtension::REQUIRE);
	elements->addElement(PolicyConstraintsExtension::INHIBIT);
	return (elements->elements());
}

$String* PolicyConstraintsExtension::getName() {
	return (PolicyConstraintsExtension::NAME);
}

PolicyConstraintsExtension::PolicyConstraintsExtension() {
}

void clinit$PolicyConstraintsExtension($Class* class$) {
	$assignStatic(PolicyConstraintsExtension::IDENT, "x509.info.extensions.PolicyConstraints"_s);
	$assignStatic(PolicyConstraintsExtension::NAME, "PolicyConstraints"_s);
	$assignStatic(PolicyConstraintsExtension::REQUIRE, "require"_s);
	$assignStatic(PolicyConstraintsExtension::INHIBIT, "inhibit"_s);
}

$Class* PolicyConstraintsExtension::load$($String* name, bool initialize) {
	$loadClass(PolicyConstraintsExtension, name, initialize, &_PolicyConstraintsExtension_ClassInfo_, clinit$PolicyConstraintsExtension, allocate$PolicyConstraintsExtension);
	return class$;
}

$Class* PolicyConstraintsExtension::class$ = nullptr;

		} // x509
	} // security
} // sun