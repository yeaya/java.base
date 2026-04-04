#include <sun/security/x509/CertificatePoliciesExtension.h>
#include <java/io/IOException.h>
#include <java/io/OutputStream.h>
#include <java/util/ArrayList.h>
#include <java/util/Enumeration.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <sun/security/util/DerInputStream.h>
#include <sun/security/util/DerOutputStream.h>
#include <sun/security/util/DerValue.h>
#include <sun/security/util/ObjectIdentifier.h>
#include <sun/security/x509/AttributeNameEnumeration.h>
#include <sun/security/x509/Extension.h>
#include <sun/security/x509/PKIXExtensions.h>
#include <sun/security/x509/PolicyInformation.h>
#include <jcpp.h>

#undef FALSE
#undef IDENT
#undef NAME
#undef POLICIES

using $IOException = ::java::io::IOException;
using $OutputStream = ::java::io::OutputStream;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayList = ::java::util::ArrayList;
using $Enumeration = ::java::util::Enumeration;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $DerOutputStream = ::sun::security::util::DerOutputStream;
using $DerValue = ::sun::security::util::DerValue;
using $AttributeNameEnumeration = ::sun::security::x509::AttributeNameEnumeration;
using $Extension = ::sun::security::x509::Extension;
using $PKIXExtensions = ::sun::security::x509::PKIXExtensions;
using $PolicyInformation = ::sun::security::x509::PolicyInformation;

namespace sun {
	namespace security {
		namespace x509 {

int32_t CertificatePoliciesExtension::hashCode() {
	 return this->$Extension::hashCode();
}

bool CertificatePoliciesExtension::equals(Object$* other) {
	 return this->$Extension::equals(other);
}

$Object* CertificatePoliciesExtension::clone() {
	 return this->$Extension::clone();
}

void CertificatePoliciesExtension::finalize() {
	this->$Extension::finalize();
}

$String* CertificatePoliciesExtension::IDENT = nullptr;
$String* CertificatePoliciesExtension::NAME = nullptr;
$String* CertificatePoliciesExtension::POLICIES = nullptr;

void CertificatePoliciesExtension::encodeThis() {
	$useLocalObjectStack();
	if (this->certPolicies == nullptr || this->certPolicies->isEmpty()) {
		$set(this, extensionValue, nullptr);
	} else {
		$var($DerOutputStream, os, $new($DerOutputStream));
		$var($DerOutputStream, tmp, $new($DerOutputStream));
		{
			$var($Iterator, i$, this->certPolicies->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($PolicyInformation, info, $cast($PolicyInformation, i$->next()));
				{
					$nc(info)->encode(tmp);
				}
			}
		}
		os->write($DerValue::tag_Sequence, tmp);
		$set(this, extensionValue, os->toByteArray());
	}
}

void CertificatePoliciesExtension::init$($List* certPolicies) {
	CertificatePoliciesExtension::init$($Boolean::FALSE, certPolicies);
}

void CertificatePoliciesExtension::init$($Boolean* critical, $List* certPolicies) {
	$Extension::init$();
	$set(this, certPolicies, certPolicies);
	$init($PKIXExtensions);
	$set(this, extensionId, $PKIXExtensions::CertificatePolicies_Id);
	this->critical = $nc(critical)->booleanValue();
	encodeThis();
}

void CertificatePoliciesExtension::init$($Boolean* critical, Object$* value) {
	$useLocalObjectStack();
	$Extension::init$();
	$init($PKIXExtensions);
	$set(this, extensionId, $PKIXExtensions::CertificatePolicies_Id);
	this->critical = $nc(critical)->booleanValue();
	$set(this, extensionValue, $cast($bytes, value));
	$var($DerValue, val, $new($DerValue, this->extensionValue));
	if (val->tag != $DerValue::tag_Sequence) {
		$throwNew($IOException, "Invalid encoding for CertificatePoliciesExtension."_s);
	}
	$set(this, certPolicies, $new($ArrayList));
	while ($nc(val->data$)->available() != 0) {
		$var($DerValue, seq, val->data$->getDerValue());
		$var($PolicyInformation, policy, $new($PolicyInformation, seq));
		this->certPolicies->add(policy);
	}
}

$String* CertificatePoliciesExtension::toString() {
	$useLocalObjectStack();
	if (this->certPolicies == nullptr) {
		return ""_s;
	}
	$var($StringBuilder, sb, $new($StringBuilder));
	sb->append($($Extension::toString()))->append("CertificatePolicies [\n"_s);
	{
		$var($Iterator, i$, $nc(this->certPolicies)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($PolicyInformation, info, $cast($PolicyInformation, i$->next()));
			{
				sb->append(info);
			}
		}
	}
	sb->append("]\n"_s);
	return sb->toString();
}

void CertificatePoliciesExtension::encode($OutputStream* out) {
	$useLocalObjectStack();
	$var($DerOutputStream, tmp, $new($DerOutputStream));
	if (this->extensionValue == nullptr) {
		$init($PKIXExtensions);
		$set(this, extensionId, $PKIXExtensions::CertificatePolicies_Id);
		this->critical = false;
		encodeThis();
	}
	$Extension::encode(tmp);
	$nc(out)->write($(tmp->toByteArray()));
}

void CertificatePoliciesExtension::set($String* name, Object$* obj) {
	if ($nc(name)->equalsIgnoreCase(CertificatePoliciesExtension::POLICIES)) {
		if (!($instanceOf($List, obj))) {
			$throwNew($IOException, "Attribute value should be of type List."_s);
		}
		$set(this, certPolicies, $cast($List, obj));
	} else {
		$throwNew($IOException, $$str({"Attribute name ["_s, name, "] not recognized by CertAttrSet:CertificatePoliciesExtension."_s}));
	}
	encodeThis();
}

$Object* CertificatePoliciesExtension::get($String* name) {
	if ($nc(name)->equalsIgnoreCase(CertificatePoliciesExtension::POLICIES)) {
		return this->certPolicies;
	} else {
		$throwNew($IOException, $$str({"Attribute name ["_s, name, "] not recognized by CertAttrSet:CertificatePoliciesExtension."_s}));
	}
}

void CertificatePoliciesExtension::delete$($String* name) {
	if ($nc(name)->equalsIgnoreCase(CertificatePoliciesExtension::POLICIES)) {
		$set(this, certPolicies, nullptr);
	} else {
		$throwNew($IOException, $$str({"Attribute name ["_s, name, "] not recognized by CertAttrSet:CertificatePoliciesExtension."_s}));
	}
	encodeThis();
}

$Enumeration* CertificatePoliciesExtension::getElements() {
	$var($AttributeNameEnumeration, elements, $new($AttributeNameEnumeration));
	elements->addElement(CertificatePoliciesExtension::POLICIES);
	return (elements->elements());
}

$String* CertificatePoliciesExtension::getName() {
	return (CertificatePoliciesExtension::NAME);
}

CertificatePoliciesExtension::CertificatePoliciesExtension() {
}

void CertificatePoliciesExtension::clinit$($Class* clazz) {
	$assignStatic(CertificatePoliciesExtension::IDENT, "x509.info.extensions.CertificatePolicies"_s);
	$assignStatic(CertificatePoliciesExtension::NAME, "CertificatePolicies"_s);
	$assignStatic(CertificatePoliciesExtension::POLICIES, "policies"_s);
}

$Class* CertificatePoliciesExtension::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"IDENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CertificatePoliciesExtension, IDENT)},
		{"NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CertificatePoliciesExtension, NAME)},
		{"POLICIES", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CertificatePoliciesExtension, POLICIES)},
		{"certPolicies", "Ljava/util/List;", "Ljava/util/List<Lsun/security/x509/PolicyInformation;>;", $PRIVATE, $field(CertificatePoliciesExtension, certPolicies)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC},
		{"<init>", "(Ljava/util/List;)V", "(Ljava/util/List<Lsun/security/x509/PolicyInformation;>;)V", $PUBLIC, $method(CertificatePoliciesExtension, init$, void, $List*), "java.io.IOException"},
		{"<init>", "(Ljava/lang/Boolean;Ljava/util/List;)V", "(Ljava/lang/Boolean;Ljava/util/List<Lsun/security/x509/PolicyInformation;>;)V", $PUBLIC, $method(CertificatePoliciesExtension, init$, void, $Boolean*, $List*), "java.io.IOException"},
		{"<init>", "(Ljava/lang/Boolean;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(CertificatePoliciesExtension, init$, void, $Boolean*, Object$*), "java.io.IOException"},
		{"delete", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(CertificatePoliciesExtension, delete$, void, $String*), "java.io.IOException"},
		{"encode", "(Ljava/io/OutputStream;)V", nullptr, $PUBLIC, $virtualMethod(CertificatePoliciesExtension, encode, void, $OutputStream*), "java.io.IOException"},
		{"encodeThis", "()V", nullptr, $PRIVATE, $method(CertificatePoliciesExtension, encodeThis, void), "java.io.IOException"},
		{"get", "(Ljava/lang/String;)Ljava/util/List;", "(Ljava/lang/String;)Ljava/util/List<Lsun/security/x509/PolicyInformation;>;", $PUBLIC, $virtualMethod(CertificatePoliciesExtension, get, $Object*, $String*), "java.io.IOException"},
		{"getElements", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljava/lang/String;>;", $PUBLIC, $virtualMethod(CertificatePoliciesExtension, getElements, $Enumeration*)},
		{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(CertificatePoliciesExtension, getName, $String*)},
		{"set", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(CertificatePoliciesExtension, set, void, $String*, Object$*), "java.io.IOException"},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(CertificatePoliciesExtension, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.security.x509.CertificatePoliciesExtension",
		"sun.security.x509.Extension",
		"sun.security.x509.CertAttrSet",
		fieldInfos$$,
		methodInfos$$,
		"Lsun/security/x509/Extension;Lsun/security/x509/CertAttrSet<Ljava/lang/String;>;"
	};
	$loadClass(CertificatePoliciesExtension, name, initialize, &classInfo$$, CertificatePoliciesExtension::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(CertificatePoliciesExtension));
	});
	return class$;
}

$Class* CertificatePoliciesExtension::class$ = nullptr;

		} // x509
	} // security
} // sun