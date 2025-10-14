#include <sun/security/x509/AuthorityKeyIdentifierExtension.h>

#include <java/io/IOException.h>
#include <java/io/OutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
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
#include <sun/security/x509/GeneralNames.h>
#include <sun/security/x509/KeyIdentifier.h>
#include <sun/security/x509/PKIXExtensions.h>
#include <sun/security/x509/SerialNumber.h>
#include <jcpp.h>

#undef AUTH_NAME
#undef IDENT
#undef KEY_ID
#undef NAME
#undef SERIAL_NUMBER
#undef TAG_CONTEXT
#undef TAG_ID
#undef TAG_NAMES
#undef TAG_SERIAL_NUM

using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $IOException = ::java::io::IOException;
using $OutputStream = ::java::io::OutputStream;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
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
using $GeneralNames = ::sun::security::x509::GeneralNames;
using $KeyIdentifier = ::sun::security::x509::KeyIdentifier;
using $PKIXExtensions = ::sun::security::x509::PKIXExtensions;
using $SerialNumber = ::sun::security::x509::SerialNumber;

namespace sun {
	namespace security {
		namespace x509 {

$FieldInfo _AuthorityKeyIdentifierExtension_FieldInfo_[] = {
	{"IDENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AuthorityKeyIdentifierExtension, IDENT)},
	{"NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AuthorityKeyIdentifierExtension, NAME)},
	{"KEY_ID", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AuthorityKeyIdentifierExtension, KEY_ID)},
	{"AUTH_NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AuthorityKeyIdentifierExtension, AUTH_NAME)},
	{"SERIAL_NUMBER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AuthorityKeyIdentifierExtension, SERIAL_NUMBER)},
	{"TAG_ID", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AuthorityKeyIdentifierExtension, TAG_ID)},
	{"TAG_NAMES", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AuthorityKeyIdentifierExtension, TAG_NAMES)},
	{"TAG_SERIAL_NUM", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AuthorityKeyIdentifierExtension, TAG_SERIAL_NUM)},
	{"id", "Lsun/security/x509/KeyIdentifier;", nullptr, $PRIVATE, $field(AuthorityKeyIdentifierExtension, id)},
	{"names", "Lsun/security/x509/GeneralNames;", nullptr, $PRIVATE, $field(AuthorityKeyIdentifierExtension, names)},
	{"serialNum", "Lsun/security/x509/SerialNumber;", nullptr, $PRIVATE, $field(AuthorityKeyIdentifierExtension, serialNum)},
	{}
};

$MethodInfo _AuthorityKeyIdentifierExtension_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "(Lsun/security/x509/KeyIdentifier;Lsun/security/x509/GeneralNames;Lsun/security/x509/SerialNumber;)V", nullptr, $PUBLIC, $method(static_cast<void(AuthorityKeyIdentifierExtension::*)($KeyIdentifier*,$GeneralNames*,$SerialNumber*)>(&AuthorityKeyIdentifierExtension::init$)), "java.io.IOException"},
	{"<init>", "(Ljava/lang/Boolean;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(AuthorityKeyIdentifierExtension::*)($Boolean*,Object$*)>(&AuthorityKeyIdentifierExtension::init$)), "java.io.IOException"},
	{"delete", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"encode", "(Ljava/io/OutputStream;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"encodeThis", "()V", nullptr, $PRIVATE, $method(static_cast<void(AuthorityKeyIdentifierExtension::*)()>(&AuthorityKeyIdentifierExtension::encodeThis)), "java.io.IOException"},
	{"get", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getElements", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljava/lang/String;>;", $PUBLIC},
	{"getEncodedKeyIdentifier", "()[B", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"set", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _AuthorityKeyIdentifierExtension_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.x509.AuthorityKeyIdentifierExtension",
	"sun.security.x509.Extension",
	"sun.security.x509.CertAttrSet",
	_AuthorityKeyIdentifierExtension_FieldInfo_,
	_AuthorityKeyIdentifierExtension_MethodInfo_,
	"Lsun/security/x509/Extension;Lsun/security/x509/CertAttrSet<Ljava/lang/String;>;"
};

$Object* allocate$AuthorityKeyIdentifierExtension($Class* clazz) {
	return $of($alloc(AuthorityKeyIdentifierExtension));
}

int32_t AuthorityKeyIdentifierExtension::hashCode() {
	 return this->$Extension::hashCode();
}

bool AuthorityKeyIdentifierExtension::equals(Object$* other) {
	 return this->$Extension::equals(other);
}

$Object* AuthorityKeyIdentifierExtension::clone() {
	 return this->$Extension::clone();
}

void AuthorityKeyIdentifierExtension::finalize() {
	this->$Extension::finalize();
}


$String* AuthorityKeyIdentifierExtension::IDENT = nullptr;

$String* AuthorityKeyIdentifierExtension::NAME = nullptr;
$String* AuthorityKeyIdentifierExtension::KEY_ID = nullptr;
$String* AuthorityKeyIdentifierExtension::AUTH_NAME = nullptr;
$String* AuthorityKeyIdentifierExtension::SERIAL_NUMBER = nullptr;

void AuthorityKeyIdentifierExtension::encodeThis() {
	if (this->id == nullptr && this->names == nullptr && this->serialNum == nullptr) {
		$set(this, extensionValue, nullptr);
		return;
	}
	$var($DerOutputStream, seq, $new($DerOutputStream));
	$var($DerOutputStream, tmp, $new($DerOutputStream));
	if (this->id != nullptr) {
		$var($DerOutputStream, tmp1, $new($DerOutputStream));
		$nc(this->id)->encode(tmp1);
		tmp->writeImplicit($DerValue::createTag($DerValue::TAG_CONTEXT, false, AuthorityKeyIdentifierExtension::TAG_ID), tmp1);
	}
	try {
		if (this->names != nullptr) {
			$var($DerOutputStream, tmp1, $new($DerOutputStream));
			$nc(this->names)->encode(tmp1);
			tmp->writeImplicit($DerValue::createTag($DerValue::TAG_CONTEXT, true, AuthorityKeyIdentifierExtension::TAG_NAMES), tmp1);
		}
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		$throwNew($IOException, $(e->toString()));
	}
	if (this->serialNum != nullptr) {
		$var($DerOutputStream, tmp1, $new($DerOutputStream));
		$nc(this->serialNum)->encode(tmp1);
		tmp->writeImplicit($DerValue::createTag($DerValue::TAG_CONTEXT, false, AuthorityKeyIdentifierExtension::TAG_SERIAL_NUM), tmp1);
	}
	seq->write($DerValue::tag_Sequence, tmp);
	$set(this, extensionValue, seq->toByteArray());
}

void AuthorityKeyIdentifierExtension::init$($KeyIdentifier* kid, $GeneralNames* names, $SerialNumber* sn) {
	$Extension::init$();
	$set(this, id, nullptr);
	$set(this, names, nullptr);
	$set(this, serialNum, nullptr);
	$set(this, id, kid);
	$set(this, names, names);
	$set(this, serialNum, sn);
	$init($PKIXExtensions);
	$set(this, extensionId, $PKIXExtensions::AuthorityKey_Id);
	this->critical = false;
	encodeThis();
}

void AuthorityKeyIdentifierExtension::init$($Boolean* critical, Object$* value) {
	$Extension::init$();
	$set(this, id, nullptr);
	$set(this, names, nullptr);
	$set(this, serialNum, nullptr);
	$init($PKIXExtensions);
	$set(this, extensionId, $PKIXExtensions::AuthorityKey_Id);
	this->critical = $nc(critical)->booleanValue();
	$set(this, extensionValue, $cast($bytes, value));
	$var($DerValue, val, $new($DerValue, this->extensionValue));
	if (val->tag != $DerValue::tag_Sequence) {
		$throwNew($IOException, "Invalid encoding for AuthorityKeyIdentifierExtension."_s);
	}
	while ((val->data$ != nullptr) && ($nc(val->data$)->available() != 0)) {
		$var($DerValue, opt, $nc(val->data$)->getDerValue());
		bool var$0 = $nc(opt)->isContextSpecific(AuthorityKeyIdentifierExtension::TAG_ID);
		if (var$0 && !opt->isConstructed()) {
			if (this->id != nullptr) {
				$throwNew($IOException, "Duplicate KeyIdentifier in AuthorityKeyIdentifier."_s);
			}
			opt->resetTag($DerValue::tag_OctetString);
			$set(this, id, $new($KeyIdentifier, opt));
		} else {
			bool var$2 = opt->isContextSpecific(AuthorityKeyIdentifierExtension::TAG_NAMES);
			if (var$2 && opt->isConstructed()) {
				if (this->names != nullptr) {
					$throwNew($IOException, "Duplicate GeneralNames in AuthorityKeyIdentifier."_s);
				}
				opt->resetTag($DerValue::tag_Sequence);
				$set(this, names, $new($GeneralNames, opt));
			} else {
				bool var$4 = opt->isContextSpecific(AuthorityKeyIdentifierExtension::TAG_SERIAL_NUM);
				if (var$4 && !opt->isConstructed()) {
					if (this->serialNum != nullptr) {
						$throwNew($IOException, "Duplicate SerialNumber in AuthorityKeyIdentifier."_s);
					}
					opt->resetTag($DerValue::tag_Integer);
					$set(this, serialNum, $new($SerialNumber, opt));
				} else {
					$throwNew($IOException, "Invalid encoding of AuthorityKeyIdentifierExtension."_s);
				}
			}
		}
	}
}

$String* AuthorityKeyIdentifierExtension::toString() {
	$var($StringBuilder, sb, $new($StringBuilder));
	sb->append($($Extension::toString()))->append("AuthorityKeyIdentifier [\n"_s);
	if (this->id != nullptr) {
		sb->append($of(this->id));
	}
	if (this->names != nullptr) {
		sb->append($of(this->names))->append(u'\n');
	}
	if (this->serialNum != nullptr) {
		sb->append($of(this->serialNum))->append(u'\n');
	}
	sb->append("]\n"_s);
	return sb->toString();
}

void AuthorityKeyIdentifierExtension::encode($OutputStream* out) {
	$var($DerOutputStream, tmp, $new($DerOutputStream));
	if (this->extensionValue == nullptr) {
		$init($PKIXExtensions);
		$set(this, extensionId, $PKIXExtensions::AuthorityKey_Id);
		this->critical = false;
		encodeThis();
	}
	$Extension::encode(tmp);
	$nc(out)->write($(tmp->toByteArray()));
}

void AuthorityKeyIdentifierExtension::set($String* name, Object$* obj) {
	if ($nc(name)->equalsIgnoreCase(AuthorityKeyIdentifierExtension::KEY_ID)) {
		if (!($instanceOf($KeyIdentifier, obj))) {
			$throwNew($IOException, "Attribute value should be of type KeyIdentifier."_s);
		}
		$set(this, id, $cast($KeyIdentifier, obj));
	} else if (name->equalsIgnoreCase(AuthorityKeyIdentifierExtension::AUTH_NAME)) {
		if (!($instanceOf($GeneralNames, obj))) {
			$throwNew($IOException, "Attribute value should be of type GeneralNames."_s);
		}
		$set(this, names, $cast($GeneralNames, obj));
	} else if (name->equalsIgnoreCase(AuthorityKeyIdentifierExtension::SERIAL_NUMBER)) {
		if (!($instanceOf($SerialNumber, obj))) {
			$throwNew($IOException, "Attribute value should be of type SerialNumber."_s);
		}
		$set(this, serialNum, $cast($SerialNumber, obj));
	} else {
		$throwNew($IOException, "Attribute name not recognized by CertAttrSet:AuthorityKeyIdentifier."_s);
	}
	encodeThis();
}

$Object* AuthorityKeyIdentifierExtension::get($String* name) {
	if ($nc(name)->equalsIgnoreCase(AuthorityKeyIdentifierExtension::KEY_ID)) {
		return $of((this->id));
	} else if (name->equalsIgnoreCase(AuthorityKeyIdentifierExtension::AUTH_NAME)) {
		return $of((this->names));
	} else if (name->equalsIgnoreCase(AuthorityKeyIdentifierExtension::SERIAL_NUMBER)) {
		return $of((this->serialNum));
	} else {
		$throwNew($IOException, "Attribute name not recognized by CertAttrSet:AuthorityKeyIdentifier."_s);
	}
}

void AuthorityKeyIdentifierExtension::delete$($String* name) {
	if ($nc(name)->equalsIgnoreCase(AuthorityKeyIdentifierExtension::KEY_ID)) {
		$set(this, id, nullptr);
	} else if (name->equalsIgnoreCase(AuthorityKeyIdentifierExtension::AUTH_NAME)) {
		$set(this, names, nullptr);
	} else if (name->equalsIgnoreCase(AuthorityKeyIdentifierExtension::SERIAL_NUMBER)) {
		$set(this, serialNum, nullptr);
	} else {
		$throwNew($IOException, "Attribute name not recognized by CertAttrSet:AuthorityKeyIdentifier."_s);
	}
	encodeThis();
}

$Enumeration* AuthorityKeyIdentifierExtension::getElements() {
	$var($AttributeNameEnumeration, elements, $new($AttributeNameEnumeration));
	elements->addElement(AuthorityKeyIdentifierExtension::KEY_ID);
	elements->addElement(AuthorityKeyIdentifierExtension::AUTH_NAME);
	elements->addElement(AuthorityKeyIdentifierExtension::SERIAL_NUMBER);
	return (elements->elements());
}

$String* AuthorityKeyIdentifierExtension::getName() {
	return (AuthorityKeyIdentifierExtension::NAME);
}

$bytes* AuthorityKeyIdentifierExtension::getEncodedKeyIdentifier() {
	if (this->id != nullptr) {
		$var($DerOutputStream, derOut, $new($DerOutputStream));
		$nc(this->id)->encode(derOut);
		return derOut->toByteArray();
	}
	return nullptr;
}

AuthorityKeyIdentifierExtension::AuthorityKeyIdentifierExtension() {
}

void clinit$AuthorityKeyIdentifierExtension($Class* class$) {
	$assignStatic(AuthorityKeyIdentifierExtension::IDENT, "x509.info.extensions.AuthorityKeyIdentifier"_s);
	$assignStatic(AuthorityKeyIdentifierExtension::NAME, "AuthorityKeyIdentifier"_s);
	$assignStatic(AuthorityKeyIdentifierExtension::KEY_ID, "key_id"_s);
	$assignStatic(AuthorityKeyIdentifierExtension::AUTH_NAME, "auth_name"_s);
	$assignStatic(AuthorityKeyIdentifierExtension::SERIAL_NUMBER, "serial_number"_s);
}

$Class* AuthorityKeyIdentifierExtension::load$($String* name, bool initialize) {
	$loadClass(AuthorityKeyIdentifierExtension, name, initialize, &_AuthorityKeyIdentifierExtension_ClassInfo_, clinit$AuthorityKeyIdentifierExtension, allocate$AuthorityKeyIdentifierExtension);
	return class$;
}

$Class* AuthorityKeyIdentifierExtension::class$ = nullptr;

		} // x509
	} // security
} // sun