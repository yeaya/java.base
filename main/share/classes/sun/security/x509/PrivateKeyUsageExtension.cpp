#include <sun/security/x509/PrivateKeyUsageExtension.h>

#include <java/io/IOException.h>
#include <java/io/OutputStream.h>
#include <java/security/cert/CertificateException.h>
#include <java/security/cert/CertificateExpiredException.h>
#include <java/security/cert/CertificateNotYetValidException.h>
#include <java/security/cert/CertificateParsingException.h>
#include <java/util/Date.h>
#include <java/util/Enumeration.h>
#include <java/util/Objects.h>
#include <sun/security/util/DerInputStream.h>
#include <sun/security/util/DerOutputStream.h>
#include <sun/security/util/DerValue.h>
#include <sun/security/util/ObjectIdentifier.h>
#include <sun/security/x509/AttributeNameEnumeration.h>
#include <sun/security/x509/Extension.h>
#include <sun/security/x509/PKIXExtensions.h>
#include <jcpp.h>

#undef IDENT
#undef NAME
#undef NOT_AFTER
#undef NOT_BEFORE
#undef TAG_AFTER
#undef TAG_BEFORE
#undef TAG_CONTEXT

using $DerValueArray = $Array<::sun::security::util::DerValue>;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $IOException = ::java::io::IOException;
using $OutputStream = ::java::io::OutputStream;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CertificateException = ::java::security::cert::CertificateException;
using $CertificateExpiredException = ::java::security::cert::CertificateExpiredException;
using $CertificateNotYetValidException = ::java::security::cert::CertificateNotYetValidException;
using $CertificateParsingException = ::java::security::cert::CertificateParsingException;
using $Date = ::java::util::Date;
using $Enumeration = ::java::util::Enumeration;
using $Objects = ::java::util::Objects;
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

$FieldInfo _PrivateKeyUsageExtension_FieldInfo_[] = {
	{"IDENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PrivateKeyUsageExtension, IDENT)},
	{"NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PrivateKeyUsageExtension, NAME)},
	{"NOT_BEFORE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PrivateKeyUsageExtension, NOT_BEFORE)},
	{"NOT_AFTER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PrivateKeyUsageExtension, NOT_AFTER)},
	{"TAG_BEFORE", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PrivateKeyUsageExtension, TAG_BEFORE)},
	{"TAG_AFTER", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PrivateKeyUsageExtension, TAG_AFTER)},
	{"notBefore", "Ljava/util/Date;", nullptr, $PRIVATE, $field(PrivateKeyUsageExtension, notBefore)},
	{"notAfter", "Ljava/util/Date;", nullptr, $PRIVATE, $field(PrivateKeyUsageExtension, notAfter)},
	{}
};

$MethodInfo _PrivateKeyUsageExtension_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(Ljava/util/Date;Ljava/util/Date;)V", nullptr, $PUBLIC, $method(static_cast<void(PrivateKeyUsageExtension::*)($Date*,$Date*)>(&PrivateKeyUsageExtension::init$)), "java.io.IOException"},
	{"<init>", "(Ljava/lang/Boolean;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(PrivateKeyUsageExtension::*)($Boolean*,Object$*)>(&PrivateKeyUsageExtension::init$)), "java.security.cert.CertificateException,java.io.IOException"},
	{"delete", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "java.security.cert.CertificateException,java.io.IOException"},
	{"encode", "(Ljava/io/OutputStream;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"encodeThis", "()V", nullptr, $PRIVATE, $method(static_cast<void(PrivateKeyUsageExtension::*)()>(&PrivateKeyUsageExtension::encodeThis)), "java.io.IOException"},
	{"get", "(Ljava/lang/String;)Ljava/util/Date;", nullptr, $PUBLIC, nullptr, "java.security.cert.CertificateException"},
	{"getElements", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljava/lang/String;>;", $PUBLIC},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"set", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, nullptr, "java.security.cert.CertificateException,java.io.IOException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"valid", "()V", nullptr, $PUBLIC, nullptr, "java.security.cert.CertificateNotYetValidException,java.security.cert.CertificateExpiredException"},
	{"valid", "(Ljava/util/Date;)V", nullptr, $PUBLIC, nullptr, "java.security.cert.CertificateNotYetValidException,java.security.cert.CertificateExpiredException"},
	{}
};

$ClassInfo _PrivateKeyUsageExtension_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.x509.PrivateKeyUsageExtension",
	"sun.security.x509.Extension",
	"sun.security.x509.CertAttrSet",
	_PrivateKeyUsageExtension_FieldInfo_,
	_PrivateKeyUsageExtension_MethodInfo_,
	"Lsun/security/x509/Extension;Lsun/security/x509/CertAttrSet<Ljava/lang/String;>;"
};

$Object* allocate$PrivateKeyUsageExtension($Class* clazz) {
	return $of($alloc(PrivateKeyUsageExtension));
}

int32_t PrivateKeyUsageExtension::hashCode() {
	 return this->$Extension::hashCode();
}

bool PrivateKeyUsageExtension::equals(Object$* other) {
	 return this->$Extension::equals(other);
}

$Object* PrivateKeyUsageExtension::clone() {
	 return this->$Extension::clone();
}

void PrivateKeyUsageExtension::finalize() {
	this->$Extension::finalize();
}

$String* PrivateKeyUsageExtension::IDENT = nullptr;
$String* PrivateKeyUsageExtension::NAME = nullptr;
$String* PrivateKeyUsageExtension::NOT_BEFORE = nullptr;
$String* PrivateKeyUsageExtension::NOT_AFTER = nullptr;

void PrivateKeyUsageExtension::encodeThis() {
	$useLocalCurrentObjectStackCache();
	if (this->notBefore == nullptr && this->notAfter == nullptr) {
		$set(this, extensionValue, nullptr);
		return;
	}
	$var($DerOutputStream, seq, $new($DerOutputStream));
	$var($DerOutputStream, tagged, $new($DerOutputStream));
	if (this->notBefore != nullptr) {
		$var($DerOutputStream, tmp, $new($DerOutputStream));
		tmp->putGeneralizedTime(this->notBefore);
		tagged->writeImplicit($DerValue::createTag($DerValue::TAG_CONTEXT, false, PrivateKeyUsageExtension::TAG_BEFORE), tmp);
	}
	if (this->notAfter != nullptr) {
		$var($DerOutputStream, tmp, $new($DerOutputStream));
		tmp->putGeneralizedTime(this->notAfter);
		tagged->writeImplicit($DerValue::createTag($DerValue::TAG_CONTEXT, false, PrivateKeyUsageExtension::TAG_AFTER), tmp);
	}
	seq->write($DerValue::tag_Sequence, tagged);
	$set(this, extensionValue, seq->toByteArray());
}

void PrivateKeyUsageExtension::init$($Date* notBefore, $Date* notAfter) {
	$Extension::init$();
	$set(this, notBefore, nullptr);
	$set(this, notAfter, nullptr);
	$set(this, notBefore, notBefore);
	$set(this, notAfter, notAfter);
	$init($PKIXExtensions);
	$set(this, extensionId, $PKIXExtensions::PrivateKeyUsage_Id);
	this->critical = false;
	encodeThis();
}

void PrivateKeyUsageExtension::init$($Boolean* critical, Object$* value) {
	$useLocalCurrentObjectStackCache();
	$Extension::init$();
	$set(this, notBefore, nullptr);
	$set(this, notAfter, nullptr);
	$init($PKIXExtensions);
	$set(this, extensionId, $PKIXExtensions::PrivateKeyUsage_Id);
	this->critical = $nc(critical)->booleanValue();
	$set(this, extensionValue, $cast($bytes, value));
	$var($DerInputStream, str, $new($DerInputStream, this->extensionValue));
	$var($DerValueArray, seq, str->getSequence(2));
	for (int32_t i = 0; i < $nc(seq)->length; ++i) {
		$var($DerValue, opt, seq->get(i));
		bool var$0 = $nc(opt)->isContextSpecific(PrivateKeyUsageExtension::TAG_BEFORE);
		if (var$0 && !opt->isConstructed()) {
			if (this->notBefore != nullptr) {
				$throwNew($CertificateParsingException, "Duplicate notBefore in PrivateKeyUsage."_s);
			}
			opt->resetTag($DerValue::tag_GeneralizedTime);
			$assign(str, $new($DerInputStream, $(opt->toByteArray())));
			$set(this, notBefore, str->getGeneralizedTime());
		} else {
			bool var$2 = opt->isContextSpecific(PrivateKeyUsageExtension::TAG_AFTER);
			if (var$2 && !opt->isConstructed()) {
				if (this->notAfter != nullptr) {
					$throwNew($CertificateParsingException, "Duplicate notAfter in PrivateKeyUsage."_s);
				}
				opt->resetTag($DerValue::tag_GeneralizedTime);
				$assign(str, $new($DerInputStream, $(opt->toByteArray())));
				$set(this, notAfter, str->getGeneralizedTime());
			} else {
				$throwNew($IOException, "Invalid encoding of PrivateKeyUsageExtension"_s);
			}
		}
	}
}

$String* PrivateKeyUsageExtension::toString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, sb, $new($StringBuilder));
	sb->append($($Extension::toString()))->append("PrivateKeyUsage: [\n"_s);
	if (this->notBefore != nullptr) {
		sb->append("From: "_s)->append($of(this->notBefore));
		if (this->notAfter != nullptr) {
			sb->append(", "_s);
		}
	}
	if (this->notAfter != nullptr) {
		sb->append("To: "_s)->append($of(this->notAfter));
	}
	sb->append("]\n"_s);
	return sb->toString();
}

void PrivateKeyUsageExtension::valid() {
	$var($Date, now, $new($Date));
	valid(now);
}

void PrivateKeyUsageExtension::valid($Date* now) {
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(now);
	if (this->notBefore != nullptr && $nc(this->notBefore)->after(now)) {
		$throwNew($CertificateNotYetValidException, $$str({"NotBefore: "_s, $($nc(this->notBefore)->toString())}));
	}
	if (this->notAfter != nullptr && $nc(this->notAfter)->before(now)) {
		$throwNew($CertificateExpiredException, $$str({"NotAfter: "_s, $($nc(this->notAfter)->toString())}));
	}
}

void PrivateKeyUsageExtension::encode($OutputStream* out) {
	$useLocalCurrentObjectStackCache();
	$var($DerOutputStream, tmp, $new($DerOutputStream));
	if (this->extensionValue == nullptr) {
		$init($PKIXExtensions);
		$set(this, extensionId, $PKIXExtensions::PrivateKeyUsage_Id);
		this->critical = false;
		encodeThis();
	}
	$Extension::encode(tmp);
	$nc(out)->write($(tmp->toByteArray()));
}

void PrivateKeyUsageExtension::set($String* name, Object$* obj) {
	if (!($instanceOf($Date, obj))) {
		$throwNew($CertificateException, "Attribute must be of type Date."_s);
	}
	if ($nc(name)->equalsIgnoreCase(PrivateKeyUsageExtension::NOT_BEFORE)) {
		$set(this, notBefore, $cast($Date, obj));
	} else if (name->equalsIgnoreCase(PrivateKeyUsageExtension::NOT_AFTER)) {
		$set(this, notAfter, $cast($Date, obj));
	} else {
		$throwNew($CertificateException, "Attribute name not recognized by CertAttrSet:PrivateKeyUsage."_s);
	}
	encodeThis();
}

$Object* PrivateKeyUsageExtension::get($String* name) {
	if ($nc(name)->equalsIgnoreCase(PrivateKeyUsageExtension::NOT_BEFORE)) {
		return $of(($new($Date, $nc(this->notBefore)->getTime())));
	} else if (name->equalsIgnoreCase(PrivateKeyUsageExtension::NOT_AFTER)) {
		return $of(($new($Date, $nc(this->notAfter)->getTime())));
	} else {
		$throwNew($CertificateException, "Attribute name not recognized by CertAttrSet:PrivateKeyUsage."_s);
	}
}

void PrivateKeyUsageExtension::delete$($String* name) {
	if ($nc(name)->equalsIgnoreCase(PrivateKeyUsageExtension::NOT_BEFORE)) {
		$set(this, notBefore, nullptr);
	} else if (name->equalsIgnoreCase(PrivateKeyUsageExtension::NOT_AFTER)) {
		$set(this, notAfter, nullptr);
	} else {
		$throwNew($CertificateException, "Attribute name not recognized by CertAttrSet:PrivateKeyUsage."_s);
	}
	encodeThis();
}

$Enumeration* PrivateKeyUsageExtension::getElements() {
	$var($AttributeNameEnumeration, elements, $new($AttributeNameEnumeration));
	elements->addElement(PrivateKeyUsageExtension::NOT_BEFORE);
	elements->addElement(PrivateKeyUsageExtension::NOT_AFTER);
	return (elements->elements());
}

$String* PrivateKeyUsageExtension::getName() {
	return (PrivateKeyUsageExtension::NAME);
}

PrivateKeyUsageExtension::PrivateKeyUsageExtension() {
}

void clinit$PrivateKeyUsageExtension($Class* class$) {
	$assignStatic(PrivateKeyUsageExtension::IDENT, "x509.info.extensions.PrivateKeyUsage"_s);
	$assignStatic(PrivateKeyUsageExtension::NAME, "PrivateKeyUsage"_s);
	$assignStatic(PrivateKeyUsageExtension::NOT_BEFORE, "not_before"_s);
	$assignStatic(PrivateKeyUsageExtension::NOT_AFTER, "not_after"_s);
}

$Class* PrivateKeyUsageExtension::load$($String* name, bool initialize) {
	$loadClass(PrivateKeyUsageExtension, name, initialize, &_PrivateKeyUsageExtension_ClassInfo_, clinit$PrivateKeyUsageExtension, allocate$PrivateKeyUsageExtension);
	return class$;
}

$Class* PrivateKeyUsageExtension::class$ = nullptr;

		} // x509
	} // security
} // sun