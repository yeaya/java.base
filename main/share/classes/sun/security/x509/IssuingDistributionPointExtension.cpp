#include <sun/security/x509/IssuingDistributionPointExtension.h>

#include <java/io/IOException.h>
#include <java/io/OutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
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
#include <sun/security/x509/DistributionPointName.h>
#include <sun/security/x509/Extension.h>
#include <sun/security/x509/PKIXExtensions.h>
#include <sun/security/x509/ReasonFlags.h>
#include <jcpp.h>

#undef IDENT
#undef INDIRECT_CRL
#undef NAME
#undef ONLY_ATTRIBUTE_CERTS
#undef ONLY_CA_CERTS
#undef ONLY_USER_CERTS
#undef POINT
#undef REASONS
#undef TAG_CONTEXT
#undef TAG_DISTRIBUTION_POINT
#undef TAG_INDIRECT_CRL
#undef TAG_ONLY_ATTRIBUTE_CERTS
#undef TAG_ONLY_CA_CERTS
#undef TAG_ONLY_SOME_REASONS
#undef TAG_ONLY_USER_CERTS

using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $IOException = ::java::io::IOException;
using $OutputStream = ::java::io::OutputStream;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;
using $Vector = ::java::util::Vector;
using $DerInputStream = ::sun::security::util::DerInputStream;
using $DerOutputStream = ::sun::security::util::DerOutputStream;
using $DerValue = ::sun::security::util::DerValue;
using $ObjectIdentifier = ::sun::security::util::ObjectIdentifier;
using $AttributeNameEnumeration = ::sun::security::x509::AttributeNameEnumeration;
using $CertAttrSet = ::sun::security::x509::CertAttrSet;
using $DistributionPointName = ::sun::security::x509::DistributionPointName;
using $Extension = ::sun::security::x509::Extension;
using $PKIXExtensions = ::sun::security::x509::PKIXExtensions;
using $ReasonFlags = ::sun::security::x509::ReasonFlags;

namespace sun {
	namespace security {
		namespace x509 {

$FieldInfo _IssuingDistributionPointExtension_FieldInfo_[] = {
	{"IDENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(IssuingDistributionPointExtension, IDENT)},
	{"NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(IssuingDistributionPointExtension, NAME)},
	{"POINT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(IssuingDistributionPointExtension, POINT)},
	{"REASONS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(IssuingDistributionPointExtension, REASONS)},
	{"ONLY_USER_CERTS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(IssuingDistributionPointExtension, ONLY_USER_CERTS)},
	{"ONLY_CA_CERTS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(IssuingDistributionPointExtension, ONLY_CA_CERTS)},
	{"ONLY_ATTRIBUTE_CERTS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(IssuingDistributionPointExtension, ONLY_ATTRIBUTE_CERTS)},
	{"INDIRECT_CRL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(IssuingDistributionPointExtension, INDIRECT_CRL)},
	{"distributionPoint", "Lsun/security/x509/DistributionPointName;", nullptr, $PRIVATE, $field(IssuingDistributionPointExtension, distributionPoint)},
	{"revocationReasons", "Lsun/security/x509/ReasonFlags;", nullptr, $PRIVATE, $field(IssuingDistributionPointExtension, revocationReasons)},
	{"hasOnlyUserCerts", "Z", nullptr, $PRIVATE, $field(IssuingDistributionPointExtension, hasOnlyUserCerts)},
	{"hasOnlyCACerts", "Z", nullptr, $PRIVATE, $field(IssuingDistributionPointExtension, hasOnlyCACerts)},
	{"hasOnlyAttributeCerts", "Z", nullptr, $PRIVATE, $field(IssuingDistributionPointExtension, hasOnlyAttributeCerts)},
	{"isIndirectCRL", "Z", nullptr, $PRIVATE, $field(IssuingDistributionPointExtension, isIndirectCRL)},
	{"TAG_DISTRIBUTION_POINT", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IssuingDistributionPointExtension, TAG_DISTRIBUTION_POINT)},
	{"TAG_ONLY_USER_CERTS", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IssuingDistributionPointExtension, TAG_ONLY_USER_CERTS)},
	{"TAG_ONLY_CA_CERTS", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IssuingDistributionPointExtension, TAG_ONLY_CA_CERTS)},
	{"TAG_ONLY_SOME_REASONS", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IssuingDistributionPointExtension, TAG_ONLY_SOME_REASONS)},
	{"TAG_INDIRECT_CRL", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IssuingDistributionPointExtension, TAG_INDIRECT_CRL)},
	{"TAG_ONLY_ATTRIBUTE_CERTS", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IssuingDistributionPointExtension, TAG_ONLY_ATTRIBUTE_CERTS)},
	{}
};

$MethodInfo _IssuingDistributionPointExtension_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(Lsun/security/x509/DistributionPointName;Lsun/security/x509/ReasonFlags;ZZZZ)V", nullptr, $PUBLIC, $method(static_cast<void(IssuingDistributionPointExtension::*)($DistributionPointName*,$ReasonFlags*,bool,bool,bool,bool)>(&IssuingDistributionPointExtension::init$)), "java.io.IOException"},
	{"<init>", "(Ljava/lang/Boolean;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(IssuingDistributionPointExtension::*)($Boolean*,Object$*)>(&IssuingDistributionPointExtension::init$)), "java.io.IOException"},
	{"delete", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"encode", "(Ljava/io/OutputStream;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"encodeThis", "()V", nullptr, $PRIVATE, $method(static_cast<void(IssuingDistributionPointExtension::*)()>(&IssuingDistributionPointExtension::encodeThis)), "java.io.IOException"},
	{"get", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getElements", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljava/lang/String;>;", $PUBLIC},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"set", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _IssuingDistributionPointExtension_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.x509.IssuingDistributionPointExtension",
	"sun.security.x509.Extension",
	"sun.security.x509.CertAttrSet",
	_IssuingDistributionPointExtension_FieldInfo_,
	_IssuingDistributionPointExtension_MethodInfo_,
	"Lsun/security/x509/Extension;Lsun/security/x509/CertAttrSet<Ljava/lang/String;>;"
};

$Object* allocate$IssuingDistributionPointExtension($Class* clazz) {
	return $of($alloc(IssuingDistributionPointExtension));
}

int32_t IssuingDistributionPointExtension::hashCode() {
	 return this->$Extension::hashCode();
}

bool IssuingDistributionPointExtension::equals(Object$* other) {
	 return this->$Extension::equals(other);
}

$Object* IssuingDistributionPointExtension::clone() {
	 return this->$Extension::clone();
}

void IssuingDistributionPointExtension::finalize() {
	this->$Extension::finalize();
}


$String* IssuingDistributionPointExtension::IDENT = nullptr;

$String* IssuingDistributionPointExtension::NAME = nullptr;
$String* IssuingDistributionPointExtension::POINT = nullptr;
$String* IssuingDistributionPointExtension::REASONS = nullptr;
$String* IssuingDistributionPointExtension::ONLY_USER_CERTS = nullptr;
$String* IssuingDistributionPointExtension::ONLY_CA_CERTS = nullptr;
$String* IssuingDistributionPointExtension::ONLY_ATTRIBUTE_CERTS = nullptr;
$String* IssuingDistributionPointExtension::INDIRECT_CRL = nullptr;

void IssuingDistributionPointExtension::init$($DistributionPointName* distributionPoint, $ReasonFlags* revocationReasons, bool hasOnlyUserCerts, bool hasOnlyCACerts, bool hasOnlyAttributeCerts, bool isIndirectCRL) {
	$Extension::init$();
	$set(this, distributionPoint, nullptr);
	$set(this, revocationReasons, nullptr);
	this->hasOnlyUserCerts = false;
	this->hasOnlyCACerts = false;
	this->hasOnlyAttributeCerts = false;
	this->isIndirectCRL = false;
	if ((hasOnlyUserCerts && (hasOnlyCACerts || hasOnlyAttributeCerts)) || (hasOnlyCACerts && (hasOnlyUserCerts || hasOnlyAttributeCerts)) || (hasOnlyAttributeCerts && (hasOnlyUserCerts || hasOnlyCACerts))) {
		$throwNew($IllegalArgumentException, "Only one of hasOnlyUserCerts, hasOnlyCACerts, hasOnlyAttributeCerts may be set to true"_s);
	}
	$init($PKIXExtensions);
	$set(this, extensionId, $PKIXExtensions::IssuingDistributionPoint_Id);
	this->critical = true;
	$set(this, distributionPoint, distributionPoint);
	$set(this, revocationReasons, revocationReasons);
	this->hasOnlyUserCerts = hasOnlyUserCerts;
	this->hasOnlyCACerts = hasOnlyCACerts;
	this->hasOnlyAttributeCerts = hasOnlyAttributeCerts;
	this->isIndirectCRL = isIndirectCRL;
	encodeThis();
}

void IssuingDistributionPointExtension::init$($Boolean* critical, Object$* value) {
	$Extension::init$();
	$set(this, distributionPoint, nullptr);
	$set(this, revocationReasons, nullptr);
	this->hasOnlyUserCerts = false;
	this->hasOnlyCACerts = false;
	this->hasOnlyAttributeCerts = false;
	this->isIndirectCRL = false;
	$init($PKIXExtensions);
	$set(this, extensionId, $PKIXExtensions::IssuingDistributionPoint_Id);
	this->critical = $nc(critical)->booleanValue();
	if (!($instanceOf($bytes, value))) {
		$throwNew($IOException, "Illegal argument type"_s);
	}
	$set(this, extensionValue, $cast($bytes, value));
	$var($DerValue, val, $new($DerValue, this->extensionValue));
	if (val->tag != $DerValue::tag_Sequence) {
		$throwNew($IOException, "Invalid encoding for IssuingDistributionPointExtension."_s);
	}
	if ((val->data$ == nullptr) || ($nc(val->data$)->available() == 0)) {
		return;
	}
	$var($DerInputStream, in, val->data$);
	while (in != nullptr && in->available() != 0) {
		$var($DerValue, opt, in->getDerValue());
		bool var$0 = $nc(opt)->isContextSpecific(IssuingDistributionPointExtension::TAG_DISTRIBUTION_POINT);
		if (var$0 && opt->isConstructed()) {
			$set(this, distributionPoint, $new($DistributionPointName, $($nc(opt->data$)->getDerValue())));
		} else {
			bool var$2 = opt->isContextSpecific(IssuingDistributionPointExtension::TAG_ONLY_USER_CERTS);
			if (var$2 && !opt->isConstructed()) {
				opt->resetTag($DerValue::tag_Boolean);
				this->hasOnlyUserCerts = opt->getBoolean();
			} else {
				bool var$4 = opt->isContextSpecific(IssuingDistributionPointExtension::TAG_ONLY_CA_CERTS);
				if (var$4 && !opt->isConstructed()) {
					opt->resetTag($DerValue::tag_Boolean);
					this->hasOnlyCACerts = opt->getBoolean();
				} else {
					bool var$6 = opt->isContextSpecific(IssuingDistributionPointExtension::TAG_ONLY_SOME_REASONS);
					if (var$6 && !opt->isConstructed()) {
						$set(this, revocationReasons, $new($ReasonFlags, opt));
					} else {
						bool var$8 = opt->isContextSpecific(IssuingDistributionPointExtension::TAG_INDIRECT_CRL);
						if (var$8 && !opt->isConstructed()) {
							opt->resetTag($DerValue::tag_Boolean);
							this->isIndirectCRL = opt->getBoolean();
						} else {
							bool var$10 = opt->isContextSpecific(IssuingDistributionPointExtension::TAG_ONLY_ATTRIBUTE_CERTS);
							if (var$10 && !opt->isConstructed()) {
								opt->resetTag($DerValue::tag_Boolean);
								this->hasOnlyAttributeCerts = opt->getBoolean();
							} else {
								$throwNew($IOException, "Invalid encoding of IssuingDistributionPoint"_s);
							}
						}
					}
				}
			}
		}
	}
}

$String* IssuingDistributionPointExtension::getName() {
	return IssuingDistributionPointExtension::NAME;
}

void IssuingDistributionPointExtension::encode($OutputStream* out) {
	$var($DerOutputStream, tmp, $new($DerOutputStream));
	if (this->extensionValue == nullptr) {
		$init($PKIXExtensions);
		$set(this, extensionId, $PKIXExtensions::IssuingDistributionPoint_Id);
		this->critical = false;
		encodeThis();
	}
	$Extension::encode(tmp);
	$nc(out)->write($(tmp->toByteArray()));
}

void IssuingDistributionPointExtension::set($String* name, Object$* obj) {
	if ($nc(name)->equalsIgnoreCase(IssuingDistributionPointExtension::POINT)) {
		if (!($instanceOf($DistributionPointName, obj))) {
			$throwNew($IOException, "Attribute value should be of type DistributionPointName."_s);
		}
		$set(this, distributionPoint, $cast($DistributionPointName, obj));
	} else if (name->equalsIgnoreCase(IssuingDistributionPointExtension::REASONS)) {
		if (!($instanceOf($ReasonFlags, obj))) {
			$throwNew($IOException, "Attribute value should be of type ReasonFlags."_s);
		}
		$set(this, revocationReasons, $cast($ReasonFlags, obj));
	} else if (name->equalsIgnoreCase(IssuingDistributionPointExtension::INDIRECT_CRL)) {
		if (!($instanceOf($Boolean, obj))) {
			$throwNew($IOException, "Attribute value should be of type Boolean."_s);
		}
		this->isIndirectCRL = $nc(($cast($Boolean, obj)))->booleanValue();
	} else if (name->equalsIgnoreCase(IssuingDistributionPointExtension::ONLY_USER_CERTS)) {
		if (!($instanceOf($Boolean, obj))) {
			$throwNew($IOException, "Attribute value should be of type Boolean."_s);
		}
		this->hasOnlyUserCerts = $nc(($cast($Boolean, obj)))->booleanValue();
	} else if (name->equalsIgnoreCase(IssuingDistributionPointExtension::ONLY_CA_CERTS)) {
		if (!($instanceOf($Boolean, obj))) {
			$throwNew($IOException, "Attribute value should be of type Boolean."_s);
		}
		this->hasOnlyCACerts = $nc(($cast($Boolean, obj)))->booleanValue();
	} else if (name->equalsIgnoreCase(IssuingDistributionPointExtension::ONLY_ATTRIBUTE_CERTS)) {
		if (!($instanceOf($Boolean, obj))) {
			$throwNew($IOException, "Attribute value should be of type Boolean."_s);
		}
		this->hasOnlyAttributeCerts = $nc(($cast($Boolean, obj)))->booleanValue();
	} else {
		$throwNew($IOException, $$str({"Attribute name ["_s, name, "] not recognized by CertAttrSet:IssuingDistributionPointExtension."_s}));
	}
	encodeThis();
}

$Object* IssuingDistributionPointExtension::get($String* name) {
	if ($nc(name)->equalsIgnoreCase(IssuingDistributionPointExtension::POINT)) {
		return $of(this->distributionPoint);
	} else if (name->equalsIgnoreCase(IssuingDistributionPointExtension::INDIRECT_CRL)) {
		return $of($Boolean::valueOf(this->isIndirectCRL));
	} else if (name->equalsIgnoreCase(IssuingDistributionPointExtension::REASONS)) {
		return $of(this->revocationReasons);
	} else if (name->equalsIgnoreCase(IssuingDistributionPointExtension::ONLY_USER_CERTS)) {
		return $of($Boolean::valueOf(this->hasOnlyUserCerts));
	} else if (name->equalsIgnoreCase(IssuingDistributionPointExtension::ONLY_CA_CERTS)) {
		return $of($Boolean::valueOf(this->hasOnlyCACerts));
	} else if (name->equalsIgnoreCase(IssuingDistributionPointExtension::ONLY_ATTRIBUTE_CERTS)) {
		return $of($Boolean::valueOf(this->hasOnlyAttributeCerts));
	} else {
		$throwNew($IOException, $$str({"Attribute name ["_s, name, "] not recognized by CertAttrSet:IssuingDistributionPointExtension."_s}));
	}
}

void IssuingDistributionPointExtension::delete$($String* name) {
	if ($nc(name)->equalsIgnoreCase(IssuingDistributionPointExtension::POINT)) {
		$set(this, distributionPoint, nullptr);
	} else if (name->equalsIgnoreCase(IssuingDistributionPointExtension::INDIRECT_CRL)) {
		this->isIndirectCRL = false;
	} else if (name->equalsIgnoreCase(IssuingDistributionPointExtension::REASONS)) {
		$set(this, revocationReasons, nullptr);
	} else if (name->equalsIgnoreCase(IssuingDistributionPointExtension::ONLY_USER_CERTS)) {
		this->hasOnlyUserCerts = false;
	} else if (name->equalsIgnoreCase(IssuingDistributionPointExtension::ONLY_CA_CERTS)) {
		this->hasOnlyCACerts = false;
	} else if (name->equalsIgnoreCase(IssuingDistributionPointExtension::ONLY_ATTRIBUTE_CERTS)) {
		this->hasOnlyAttributeCerts = false;
	} else {
		$throwNew($IOException, $$str({"Attribute name ["_s, name, "] not recognized by CertAttrSet:IssuingDistributionPointExtension."_s}));
	}
	encodeThis();
}

$Enumeration* IssuingDistributionPointExtension::getElements() {
	$var($AttributeNameEnumeration, elements, $new($AttributeNameEnumeration));
	elements->addElement(IssuingDistributionPointExtension::POINT);
	elements->addElement(IssuingDistributionPointExtension::REASONS);
	elements->addElement(IssuingDistributionPointExtension::ONLY_USER_CERTS);
	elements->addElement(IssuingDistributionPointExtension::ONLY_CA_CERTS);
	elements->addElement(IssuingDistributionPointExtension::ONLY_ATTRIBUTE_CERTS);
	elements->addElement(IssuingDistributionPointExtension::INDIRECT_CRL);
	return elements->elements();
}

void IssuingDistributionPointExtension::encodeThis() {
	if (this->distributionPoint == nullptr && this->revocationReasons == nullptr && !this->hasOnlyUserCerts && !this->hasOnlyCACerts && !this->hasOnlyAttributeCerts && !this->isIndirectCRL) {
		$set(this, extensionValue, nullptr);
		return;
	}
	$var($DerOutputStream, tagged, $new($DerOutputStream));
	if (this->distributionPoint != nullptr) {
		$var($DerOutputStream, tmp, $new($DerOutputStream));
		$nc(this->distributionPoint)->encode(tmp);
		tagged->writeImplicit($DerValue::createTag($DerValue::TAG_CONTEXT, true, IssuingDistributionPointExtension::TAG_DISTRIBUTION_POINT), tmp);
	}
	if (this->hasOnlyUserCerts) {
		$var($DerOutputStream, tmp, $new($DerOutputStream));
		tmp->putBoolean(this->hasOnlyUserCerts);
		tagged->writeImplicit($DerValue::createTag($DerValue::TAG_CONTEXT, false, IssuingDistributionPointExtension::TAG_ONLY_USER_CERTS), tmp);
	}
	if (this->hasOnlyCACerts) {
		$var($DerOutputStream, tmp, $new($DerOutputStream));
		tmp->putBoolean(this->hasOnlyCACerts);
		tagged->writeImplicit($DerValue::createTag($DerValue::TAG_CONTEXT, false, IssuingDistributionPointExtension::TAG_ONLY_CA_CERTS), tmp);
	}
	if (this->revocationReasons != nullptr) {
		$var($DerOutputStream, tmp, $new($DerOutputStream));
		$nc(this->revocationReasons)->encode(tmp);
		tagged->writeImplicit($DerValue::createTag($DerValue::TAG_CONTEXT, false, IssuingDistributionPointExtension::TAG_ONLY_SOME_REASONS), tmp);
	}
	if (this->isIndirectCRL) {
		$var($DerOutputStream, tmp, $new($DerOutputStream));
		tmp->putBoolean(this->isIndirectCRL);
		tagged->writeImplicit($DerValue::createTag($DerValue::TAG_CONTEXT, false, IssuingDistributionPointExtension::TAG_INDIRECT_CRL), tmp);
	}
	if (this->hasOnlyAttributeCerts) {
		$var($DerOutputStream, tmp, $new($DerOutputStream));
		tmp->putBoolean(this->hasOnlyAttributeCerts);
		tagged->writeImplicit($DerValue::createTag($DerValue::TAG_CONTEXT, false, IssuingDistributionPointExtension::TAG_ONLY_ATTRIBUTE_CERTS), tmp);
	}
	$var($DerOutputStream, seq, $new($DerOutputStream));
	seq->write($DerValue::tag_Sequence, tagged);
	$set(this, extensionValue, seq->toByteArray());
}

$String* IssuingDistributionPointExtension::toString() {
	$var($StringBuilder, sb, $new($StringBuilder));
	sb->append($($Extension::toString()))->append("IssuingDistributionPoint [\n  "_s);
	if (this->distributionPoint != nullptr) {
		sb->append($of(this->distributionPoint));
	}
	if (this->revocationReasons != nullptr) {
		sb->append($of(this->revocationReasons));
	}
	sb->append("  Only contains user certs: "_s)->append(this->hasOnlyUserCerts)->append(u'\n')->append("  Only contains CA certs: "_s)->append(this->hasOnlyCACerts)->append(u'\n')->append("  Only contains attribute certs: "_s)->append(this->hasOnlyAttributeCerts)->append(u'\n')->append("  Indirect CRL: "_s)->append(this->isIndirectCRL)->append("\n]\n"_s);
	return sb->toString();
}

IssuingDistributionPointExtension::IssuingDistributionPointExtension() {
}

void clinit$IssuingDistributionPointExtension($Class* class$) {
	$assignStatic(IssuingDistributionPointExtension::IDENT, "x509.info.extensions.IssuingDistributionPoint"_s);
	$assignStatic(IssuingDistributionPointExtension::NAME, "IssuingDistributionPoint"_s);
	$assignStatic(IssuingDistributionPointExtension::POINT, "point"_s);
	$assignStatic(IssuingDistributionPointExtension::REASONS, "reasons"_s);
	$assignStatic(IssuingDistributionPointExtension::ONLY_USER_CERTS, "only_user_certs"_s);
	$assignStatic(IssuingDistributionPointExtension::ONLY_CA_CERTS, "only_ca_certs"_s);
	$assignStatic(IssuingDistributionPointExtension::ONLY_ATTRIBUTE_CERTS, "only_attribute_certs"_s);
	$assignStatic(IssuingDistributionPointExtension::INDIRECT_CRL, "indirect_crl"_s);
}

$Class* IssuingDistributionPointExtension::load$($String* name, bool initialize) {
	$loadClass(IssuingDistributionPointExtension, name, initialize, &_IssuingDistributionPointExtension_ClassInfo_, clinit$IssuingDistributionPointExtension, allocate$IssuingDistributionPointExtension);
	return class$;
}

$Class* IssuingDistributionPointExtension::class$ = nullptr;

		} // x509
	} // security
} // sun