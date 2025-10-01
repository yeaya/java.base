#include <sun/security/x509/NameConstraintsExtension.h>

#include <java/io/IOException.h>
#include <java/io/OutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/cert/CertificateException.h>
#include <java/security/cert/X509Certificate.h>
#include <java/util/Enumeration.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <javax/security/auth/x500/X500Principal.h>
#include <sun/net/util/IPAddressUtil.h>
#include <sun/security/pkcs/PKCS9Attribute.h>
#include <sun/security/util/DerInputStream.h>
#include <sun/security/util/DerOutputStream.h>
#include <sun/security/util/DerValue.h>
#include <sun/security/util/ObjectIdentifier.h>
#include <sun/security/x509/AVA.h>
#include <sun/security/x509/AttributeNameEnumeration.h>
#include <sun/security/x509/DNSName.h>
#include <sun/security/x509/Extension.h>
#include <sun/security/x509/GeneralName.h>
#include <sun/security/x509/GeneralNameInterface.h>
#include <sun/security/x509/GeneralNames.h>
#include <sun/security/x509/GeneralSubtree.h>
#include <sun/security/x509/GeneralSubtrees.h>
#include <sun/security/x509/IPAddressName.h>
#include <sun/security/x509/PKIXExtensions.h>
#include <sun/security/x509/RFC822Name.h>
#include <sun/security/x509/SubjectAlternativeNameExtension.h>
#include <sun/security/x509/X500Name.h>
#include <sun/security/x509/X509CertImpl.h>
#include <jcpp.h>

#undef NAME_NARROWS
#undef EMAIL_ADDRESS_OID
#undef NAME_WIDENS
#undef EXCLUDED_SUBTREES
#undef NAME
#undef TAG_EXCLUDED
#undef NAME_MATCH
#undef IDENT
#undef NAME_IP
#undef SUBJECT_NAME
#undef TAG_CONTEXT
#undef NAME_SAME_TYPE
#undef TAG_PERMITTED
#undef NAME_DIFF_TYPE
#undef NAME_DNS
#undef PERMITTED_SUBTREES

using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $IOException = ::java::io::IOException;
using $OutputStream = ::java::io::OutputStream;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $Cloneable = ::java::lang::Cloneable;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $CertificateException = ::java::security::cert::CertificateException;
using $X509Certificate = ::java::security::cert::X509Certificate;
using $Enumeration = ::java::util::Enumeration;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Vector = ::java::util::Vector;
using $X500Principal = ::javax::security::auth::x500::X500Principal;
using $IPAddressUtil = ::sun::net::util::IPAddressUtil;
using $PKCS9Attribute = ::sun::security::pkcs::PKCS9Attribute;
using $DerInputStream = ::sun::security::util::DerInputStream;
using $DerOutputStream = ::sun::security::util::DerOutputStream;
using $DerValue = ::sun::security::util::DerValue;
using $ObjectIdentifier = ::sun::security::util::ObjectIdentifier;
using $AVA = ::sun::security::x509::AVA;
using $AttributeNameEnumeration = ::sun::security::x509::AttributeNameEnumeration;
using $CertAttrSet = ::sun::security::x509::CertAttrSet;
using $DNSName = ::sun::security::x509::DNSName;
using $Extension = ::sun::security::x509::Extension;
using $GeneralName = ::sun::security::x509::GeneralName;
using $GeneralNameInterface = ::sun::security::x509::GeneralNameInterface;
using $GeneralNames = ::sun::security::x509::GeneralNames;
using $GeneralSubtree = ::sun::security::x509::GeneralSubtree;
using $GeneralSubtrees = ::sun::security::x509::GeneralSubtrees;
using $IPAddressName = ::sun::security::x509::IPAddressName;
using $PKIXExtensions = ::sun::security::x509::PKIXExtensions;
using $RFC822Name = ::sun::security::x509::RFC822Name;
using $SubjectAlternativeNameExtension = ::sun::security::x509::SubjectAlternativeNameExtension;
using $X500Name = ::sun::security::x509::X500Name;
using $X509CertImpl = ::sun::security::x509::X509CertImpl;

namespace sun {
	namespace security {
		namespace x509 {

$FieldInfo _NameConstraintsExtension_FieldInfo_[] = {
	{"IDENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(NameConstraintsExtension, IDENT)},
	{"NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(NameConstraintsExtension, NAME)},
	{"PERMITTED_SUBTREES", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(NameConstraintsExtension, PERMITTED_SUBTREES)},
	{"EXCLUDED_SUBTREES", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(NameConstraintsExtension, EXCLUDED_SUBTREES)},
	{"TAG_PERMITTED", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NameConstraintsExtension, TAG_PERMITTED)},
	{"TAG_EXCLUDED", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NameConstraintsExtension, TAG_EXCLUDED)},
	{"permitted", "Lsun/security/x509/GeneralSubtrees;", nullptr, $PRIVATE, $field(NameConstraintsExtension, permitted)},
	{"excluded", "Lsun/security/x509/GeneralSubtrees;", nullptr, $PRIVATE, $field(NameConstraintsExtension, excluded)},
	{"hasMin", "Z", nullptr, $PRIVATE, $field(NameConstraintsExtension, hasMin)},
	{"hasMax", "Z", nullptr, $PRIVATE, $field(NameConstraintsExtension, hasMax)},
	{"minMaxValid", "Z", nullptr, $PRIVATE, $field(NameConstraintsExtension, minMaxValid)},
	{}
};

$MethodInfo _NameConstraintsExtension_MethodInfo_[] = {
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(Lsun/security/x509/GeneralSubtrees;Lsun/security/x509/GeneralSubtrees;)V", nullptr, $PUBLIC, $method(static_cast<void(NameConstraintsExtension::*)($GeneralSubtrees*,$GeneralSubtrees*)>(&NameConstraintsExtension::init$)), "java.io.IOException"},
	{"<init>", "(Ljava/lang/Boolean;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(NameConstraintsExtension::*)($Boolean*,Object$*)>(&NameConstraintsExtension::init$)), "java.io.IOException"},
	{"calcMinMax", "()V", nullptr, $PRIVATE, $method(static_cast<void(NameConstraintsExtension::*)()>(&NameConstraintsExtension::calcMinMax)), "java.io.IOException"},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"delete", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"encode", "(Ljava/io/OutputStream;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"encodeThis", "()V", nullptr, $PRIVATE, $method(static_cast<void(NameConstraintsExtension::*)()>(&NameConstraintsExtension::encodeThis)), "java.io.IOException"},
	{"get", "(Ljava/lang/String;)Lsun/security/x509/GeneralSubtrees;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getElements", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljava/lang/String;>;", $PUBLIC},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"hasNameType", "(Lsun/security/x509/GeneralNames;I)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($GeneralNames*,int32_t)>(&NameConstraintsExtension::hasNameType))},
	{"merge", "(Lsun/security/x509/NameConstraintsExtension;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"set", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"verify", "(Ljava/security/cert/X509Certificate;)Z", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"verify", "(Lsun/security/x509/GeneralNameInterface;)Z", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _NameConstraintsExtension_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.x509.NameConstraintsExtension",
	"sun.security.x509.Extension",
	"sun.security.x509.CertAttrSet,java.lang.Cloneable",
	_NameConstraintsExtension_FieldInfo_,
	_NameConstraintsExtension_MethodInfo_,
	"Lsun/security/x509/Extension;Lsun/security/x509/CertAttrSet<Ljava/lang/String;>;Ljava/lang/Cloneable;"
};

$Object* allocate$NameConstraintsExtension($Class* clazz) {
	return $of($alloc(NameConstraintsExtension));
}

int32_t NameConstraintsExtension::hashCode() {
	 return this->$Extension::hashCode();
}

bool NameConstraintsExtension::equals(Object$* other) {
	 return this->$Extension::equals(other);
}

void NameConstraintsExtension::finalize() {
	this->$Extension::finalize();
}


$String* NameConstraintsExtension::IDENT = nullptr;

$String* NameConstraintsExtension::NAME = nullptr;
$String* NameConstraintsExtension::PERMITTED_SUBTREES = nullptr;
$String* NameConstraintsExtension::EXCLUDED_SUBTREES = nullptr;

void NameConstraintsExtension::calcMinMax() {
	this->hasMin = false;
	this->hasMax = false;
	if (this->excluded != nullptr) {
		for (int32_t i = 0; i < $nc(this->excluded)->size(); ++i) {
			$var($GeneralSubtree, subtree, $nc(this->excluded)->get(i));
			if ($nc(subtree)->getMinimum() != 0) {
				this->hasMin = true;
			}
			if ($nc(subtree)->getMaximum() != -1) {
				this->hasMax = true;
			}
		}
	}
	if (this->permitted != nullptr) {
		for (int32_t i = 0; i < $nc(this->permitted)->size(); ++i) {
			$var($GeneralSubtree, subtree, $nc(this->permitted)->get(i));
			if ($nc(subtree)->getMinimum() != 0) {
				this->hasMin = true;
			}
			if ($nc(subtree)->getMaximum() != -1) {
				this->hasMax = true;
			}
		}
	}
	this->minMaxValid = true;
}

void NameConstraintsExtension::encodeThis() {
	this->minMaxValid = false;
	if (this->permitted == nullptr && this->excluded == nullptr) {
		$set(this, extensionValue, nullptr);
		return;
	}
	$var($DerOutputStream, seq, $new($DerOutputStream));
	$var($DerOutputStream, tagged, $new($DerOutputStream));
	if (this->permitted != nullptr) {
		$var($DerOutputStream, tmp, $new($DerOutputStream));
		$nc(this->permitted)->encode(tmp);
		tagged->writeImplicit($DerValue::createTag($DerValue::TAG_CONTEXT, true, NameConstraintsExtension::TAG_PERMITTED), tmp);
	}
	if (this->excluded != nullptr) {
		$var($DerOutputStream, tmp, $new($DerOutputStream));
		$nc(this->excluded)->encode(tmp);
		tagged->writeImplicit($DerValue::createTag($DerValue::TAG_CONTEXT, true, NameConstraintsExtension::TAG_EXCLUDED), tmp);
	}
	seq->write($DerValue::tag_Sequence, tagged);
	$set(this, extensionValue, seq->toByteArray());
}

void NameConstraintsExtension::init$($GeneralSubtrees* permitted, $GeneralSubtrees* excluded) {
	$Extension::init$();
	$set(this, permitted, nullptr);
	$set(this, excluded, nullptr);
	this->minMaxValid = false;
	$set(this, permitted, permitted);
	$set(this, excluded, excluded);
	$init($PKIXExtensions);
	$set(this, extensionId, $PKIXExtensions::NameConstraints_Id);
	this->critical = true;
	encodeThis();
}

void NameConstraintsExtension::init$($Boolean* critical, Object$* value) {
	$Extension::init$();
	$set(this, permitted, nullptr);
	$set(this, excluded, nullptr);
	this->minMaxValid = false;
	$init($PKIXExtensions);
	$set(this, extensionId, $PKIXExtensions::NameConstraints_Id);
	this->critical = $nc(critical)->booleanValue();
	$set(this, extensionValue, $cast($bytes, value));
	$var($DerValue, val, $new($DerValue, this->extensionValue));
	if (val->tag != $DerValue::tag_Sequence) {
		$throwNew($IOException, "Invalid encoding for NameConstraintsExtension."_s);
	}
	if (val->data$ == nullptr) {
		return;
	}
	while ($nc(val->data$)->available() != 0) {
		$var($DerValue, opt, $nc(val->data$)->getDerValue());
		bool var$0 = $nc(opt)->isContextSpecific(NameConstraintsExtension::TAG_PERMITTED);
		if (var$0 && opt->isConstructed()) {
			if (this->permitted != nullptr) {
				$throwNew($IOException, "Duplicate permitted GeneralSubtrees in NameConstraintsExtension."_s);
			}
			opt->resetTag($DerValue::tag_Sequence);
			$set(this, permitted, $new($GeneralSubtrees, opt));
		} else {
			bool var$2 = opt->isContextSpecific(NameConstraintsExtension::TAG_EXCLUDED);
			if (var$2 && opt->isConstructed()) {
				if (this->excluded != nullptr) {
					$throwNew($IOException, "Duplicate excluded GeneralSubtrees in NameConstraintsExtension."_s);
				}
				opt->resetTag($DerValue::tag_Sequence);
				$set(this, excluded, $new($GeneralSubtrees, opt));
			} else {
				$throwNew($IOException, "Invalid encoding of NameConstraintsExtension."_s);
			}
		}
	}
	this->minMaxValid = false;
}

$String* NameConstraintsExtension::toString() {
	$var($StringBuilder, sb, $new($StringBuilder));
	sb->append($($Extension::toString()))->append("NameConstraints: ["_s);
	if (this->permitted != nullptr) {
		sb->append("\n    Permitted:"_s)->append($of(this->permitted));
	}
	if (this->excluded != nullptr) {
		sb->append("\n    Excluded:"_s)->append($of(this->excluded));
	}
	sb->append("   ]\n"_s);
	return sb->toString();
}

void NameConstraintsExtension::encode($OutputStream* out) {
	$var($DerOutputStream, tmp, $new($DerOutputStream));
	if (this->extensionValue == nullptr) {
		$init($PKIXExtensions);
		$set(this, extensionId, $PKIXExtensions::NameConstraints_Id);
		this->critical = true;
		encodeThis();
	}
	$Extension::encode(tmp);
	$nc(out)->write($(tmp->toByteArray()));
}

void NameConstraintsExtension::set($String* name, Object$* obj) {
	if ($nc(name)->equalsIgnoreCase(NameConstraintsExtension::PERMITTED_SUBTREES)) {
		if (!($instanceOf($GeneralSubtrees, obj))) {
			$throwNew($IOException, "Attribute value should be of type GeneralSubtrees."_s);
		}
		$set(this, permitted, $cast($GeneralSubtrees, obj));
	} else if ($nc(name)->equalsIgnoreCase(NameConstraintsExtension::EXCLUDED_SUBTREES)) {
		if (!($instanceOf($GeneralSubtrees, obj))) {
			$throwNew($IOException, "Attribute value should be of type GeneralSubtrees."_s);
		}
		$set(this, excluded, $cast($GeneralSubtrees, obj));
	} else {
		$throwNew($IOException, "Attribute name not recognized by CertAttrSet:NameConstraintsExtension."_s);
	}
	encodeThis();
}

$Object* NameConstraintsExtension::get($String* name) {
	if ($nc(name)->equalsIgnoreCase(NameConstraintsExtension::PERMITTED_SUBTREES)) {
		return $of((this->permitted));
	} else if ($nc(name)->equalsIgnoreCase(NameConstraintsExtension::EXCLUDED_SUBTREES)) {
		return $of((this->excluded));
	} else {
		$throwNew($IOException, "Attribute name not recognized by CertAttrSet:NameConstraintsExtension."_s);
	}
}

void NameConstraintsExtension::delete$($String* name) {
	if ($nc(name)->equalsIgnoreCase(NameConstraintsExtension::PERMITTED_SUBTREES)) {
		$set(this, permitted, nullptr);
	} else if ($nc(name)->equalsIgnoreCase(NameConstraintsExtension::EXCLUDED_SUBTREES)) {
		$set(this, excluded, nullptr);
	} else {
		$throwNew($IOException, "Attribute name not recognized by CertAttrSet:NameConstraintsExtension."_s);
	}
	encodeThis();
}

$Enumeration* NameConstraintsExtension::getElements() {
	$var($AttributeNameEnumeration, elements, $new($AttributeNameEnumeration));
	elements->addElement(NameConstraintsExtension::PERMITTED_SUBTREES);
	elements->addElement(NameConstraintsExtension::EXCLUDED_SUBTREES);
	return (elements->elements());
}

$String* NameConstraintsExtension::getName() {
	return (NameConstraintsExtension::NAME);
}

void NameConstraintsExtension::merge(NameConstraintsExtension* newConstraints) {
	if (newConstraints == nullptr) {
		return;
	}
	$var($GeneralSubtrees, newExcluded, $cast($GeneralSubtrees, $nc(newConstraints)->get(NameConstraintsExtension::EXCLUDED_SUBTREES)));
	if (this->excluded == nullptr) {
		$set(this, excluded, (newExcluded != nullptr) ? $cast($GeneralSubtrees, $nc(newExcluded)->clone()) : ($GeneralSubtrees*)nullptr);
	} else if (newExcluded != nullptr) {
		$nc(this->excluded)->union$(newExcluded);
	}
	$var($GeneralSubtrees, newPermitted, $cast($GeneralSubtrees, newConstraints->get(NameConstraintsExtension::PERMITTED_SUBTREES)));
	if (this->permitted == nullptr) {
		$set(this, permitted, (newPermitted != nullptr) ? $cast($GeneralSubtrees, $nc(newPermitted)->clone()) : ($GeneralSubtrees*)nullptr);
	} else if (newPermitted != nullptr) {
		$assign(newExcluded, $nc(this->permitted)->intersect(newPermitted));
		if (newExcluded != nullptr) {
			if (this->excluded != nullptr) {
				$nc(this->excluded)->union$(newExcluded);
			} else {
				$set(this, excluded, $cast($GeneralSubtrees, newExcluded->clone()));
			}
		}
	}
	if (this->permitted != nullptr) {
		$nc(this->permitted)->reduce(this->excluded);
	}
	encodeThis();
}

bool NameConstraintsExtension::verify($X509Certificate* cert) {
	if (cert == nullptr) {
		$throwNew($IOException, "Certificate is null"_s);
	}
	if (!this->minMaxValid) {
		calcMinMax();
	}
	if (this->hasMin) {
		$throwNew($IOException, "Non-zero minimum BaseDistance in name constraints not supported"_s);
	}
	if (this->hasMax) {
		$throwNew($IOException, "Maximum BaseDistance in name constraints not supported"_s);
	}
	$var($X500Principal, subjectPrincipal, $nc(cert)->getSubjectX500Principal());
	$var($X500Name, subject, $X500Name::asX500Name(subjectPrincipal));
	if ($nc(subject)->isEmpty() == false) {
		if (verify(static_cast<$GeneralNameInterface*>(subject)) == false) {
			return false;
		}
	}
	$var($GeneralNames, altNames, nullptr);
	try {
		$var($X509CertImpl, certImpl, $X509CertImpl::toImpl(cert));
		$var($SubjectAlternativeNameExtension, altNameExt, $nc(certImpl)->getSubjectAlternativeNameExtension());
		if (altNameExt != nullptr) {
			$init($SubjectAlternativeNameExtension);
			$assign(altNames, $cast($GeneralNames, altNameExt->get($SubjectAlternativeNameExtension::SUBJECT_NAME)));
		}
	} catch ($CertificateException&) {
		$var($CertificateException, ce, $catch());
		$throwNew($IOException, $$str({"Unable to extract extensions from certificate: "_s, $(ce->getMessage())}));
	}
	if (altNames == nullptr) {
		$assign(altNames, $new($GeneralNames));
		{
			$var($Iterator, i$, $nc($($nc(subject)->allAvas()))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($AVA, ava, $cast($AVA, i$->next()));
				{
					$var($ObjectIdentifier, attrOID, $nc(ava)->getObjectIdentifier());
					$init($PKCS9Attribute);
					if ($nc(attrOID)->equals($PKCS9Attribute::EMAIL_ADDRESS_OID)) {
						$var($String, attrValue, ava->getValueString());
						if (attrValue != nullptr) {
							try {
								altNames->add($$new($GeneralName, static_cast<$GeneralNameInterface*>($$new($RFC822Name, attrValue))));
							} catch ($IOException&) {
								$var($IOException, ioe, $catch());
								continue;
							}
						}
					}
				}
			}
		}
	}
	$var($DerValue, derValue, $nc(subject)->findMostSpecificAttribute($X500Name::commonName_oid));
	$var($String, cn, derValue == nullptr ? ($String*)nullptr : $nc(derValue)->getAsString());
	if (cn != nullptr) {
		try {
			bool var$0 = $IPAddressUtil::isIPv4LiteralAddress(cn);
			if (var$0 || $IPAddressUtil::isIPv6LiteralAddress(cn)) {
				if (!hasNameType(altNames, $GeneralNameInterface::NAME_IP)) {
					$nc(altNames)->add($$new($GeneralName, static_cast<$GeneralNameInterface*>($$new($IPAddressName, cn))));
				}
			} else if (!hasNameType(altNames, $GeneralNameInterface::NAME_DNS)) {
				$nc(altNames)->add($$new($GeneralName, static_cast<$GeneralNameInterface*>($$new($DNSName, cn))));
			}
		} catch ($IOException&) {
			$catch();
		}
	}
	for (int32_t i = 0; i < $nc(altNames)->size(); ++i) {
		$var($GeneralNameInterface, altGNI, $nc($(altNames->get(i)))->getName());
		if (!verify(altGNI)) {
			return false;
		}
	}
	return true;
}

bool NameConstraintsExtension::hasNameType($GeneralNames* names, int32_t type) {
	$init(NameConstraintsExtension);
	{
		$var($Iterator, i$, $nc($($nc(names)->names()))->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($GeneralName, name, $cast($GeneralName, i$->next()));
			{
				if ($nc(name)->getType() == type) {
					return true;
				}
			}
		}
	}
	return false;
}

bool NameConstraintsExtension::verify($GeneralNameInterface* name) {
	if (name == nullptr) {
		$throwNew($IOException, "name is null"_s);
	}
	if (this->excluded != nullptr && $nc(this->excluded)->size() > 0) {
		for (int32_t i = 0; i < $nc(this->excluded)->size(); ++i) {
			$var($GeneralSubtree, gs, $nc(this->excluded)->get(i));
			if (gs == nullptr) {
				continue;
			}
			$var($GeneralName, gn, $nc(gs)->getName());
			if (gn == nullptr) {
				continue;
			}
			$var($GeneralNameInterface, exName, $nc(gn)->getName());
			if (exName == nullptr) {
				continue;
			}
			switch ($nc(exName)->constrains(name)) {
			case $GeneralNameInterface::NAME_DIFF_TYPE:
				{}
			case $GeneralNameInterface::NAME_WIDENS:
				{}
			case $GeneralNameInterface::NAME_SAME_TYPE:
				{
					break;
				}
			case $GeneralNameInterface::NAME_MATCH:
				{}
			case $GeneralNameInterface::NAME_NARROWS:
				{
					return false;
				}
			}
		}
	}
	if (this->permitted != nullptr && $nc(this->permitted)->size() > 0) {
		bool sameType = false;
		for (int32_t i = 0; i < $nc(this->permitted)->size(); ++i) {
			$var($GeneralSubtree, gs, $nc(this->permitted)->get(i));
			if (gs == nullptr) {
				continue;
			}
			$var($GeneralName, gn, $nc(gs)->getName());
			if (gn == nullptr) {
				continue;
			}
			$var($GeneralNameInterface, perName, $nc(gn)->getName());
			if (perName == nullptr) {
				continue;
			}
			switch ($nc(perName)->constrains(name)) {
			case $GeneralNameInterface::NAME_DIFF_TYPE:
				{
					continue;
				}
			case $GeneralNameInterface::NAME_WIDENS:
				{}
			case $GeneralNameInterface::NAME_SAME_TYPE:
				{
					sameType = true;
					continue;
				}
			case $GeneralNameInterface::NAME_MATCH:
				{}
			case $GeneralNameInterface::NAME_NARROWS:
				{
					return true;
				}
			}
		}
		if (sameType) {
			return false;
		}
	}
	return true;
}

$Object* NameConstraintsExtension::clone() {
	try {
		$var(NameConstraintsExtension, newNCE, $cast(NameConstraintsExtension, $Extension::clone()));
		if (this->permitted != nullptr) {
			$set($nc(newNCE), permitted, $cast($GeneralSubtrees, $nc(this->permitted)->clone()));
		}
		if (this->excluded != nullptr) {
			$set($nc(newNCE), excluded, $cast($GeneralSubtrees, $nc(this->excluded)->clone()));
		}
		return $of(newNCE);
	} catch ($CloneNotSupportedException&) {
		$var($CloneNotSupportedException, cnsee, $catch());
		$throwNew($RuntimeException, "CloneNotSupportedException while cloning NameConstraintsException. This should never happen."_s);
	}
	$shouldNotReachHere();
}

NameConstraintsExtension::NameConstraintsExtension() {
}

void clinit$NameConstraintsExtension($Class* class$) {
	$assignStatic(NameConstraintsExtension::IDENT, "x509.info.extensions.NameConstraints"_s);
	$assignStatic(NameConstraintsExtension::NAME, "NameConstraints"_s);
	$assignStatic(NameConstraintsExtension::PERMITTED_SUBTREES, "permitted_subtrees"_s);
	$assignStatic(NameConstraintsExtension::EXCLUDED_SUBTREES, "excluded_subtrees"_s);
}

$Class* NameConstraintsExtension::load$($String* name, bool initialize) {
	$loadClass(NameConstraintsExtension, name, initialize, &_NameConstraintsExtension_ClassInfo_, clinit$NameConstraintsExtension, allocate$NameConstraintsExtension);
	return class$;
}

$Class* NameConstraintsExtension::class$ = nullptr;

		} // x509
	} // security
} // sun