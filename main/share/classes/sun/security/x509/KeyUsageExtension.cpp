#include <sun/security/x509/KeyUsageExtension.h>

#include <java/io/IOException.h>
#include <java/io/OutputStream.h>
#include <java/util/Enumeration.h>
#include <sun/security/util/BitArray.h>
#include <sun/security/util/DerOutputStream.h>
#include <sun/security/util/DerValue.h>
#include <sun/security/util/ObjectIdentifier.h>
#include <sun/security/x509/AttributeNameEnumeration.h>
#include <sun/security/x509/Extension.h>
#include <sun/security/x509/PKIXExtensions.h>
#include <jcpp.h>

#undef CRL_SIGN
#undef DATA_ENCIPHERMENT
#undef DECIPHER_ONLY
#undef DIGITAL_SIGNATURE
#undef ENCIPHER_ONLY
#undef IDENT
#undef KEY_AGREEMENT
#undef KEY_CERTSIGN
#undef KEY_ENCIPHERMENT
#undef NAME
#undef NON_REPUDIATION

using $IOException = ::java::io::IOException;
using $OutputStream = ::java::io::OutputStream;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;
using $BitArray = ::sun::security::util::BitArray;
using $DerOutputStream = ::sun::security::util::DerOutputStream;
using $DerValue = ::sun::security::util::DerValue;
using $AttributeNameEnumeration = ::sun::security::x509::AttributeNameEnumeration;
using $Extension = ::sun::security::x509::Extension;
using $PKIXExtensions = ::sun::security::x509::PKIXExtensions;

namespace sun {
	namespace security {
		namespace x509 {

$FieldInfo _KeyUsageExtension_FieldInfo_[] = {
	{"IDENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(KeyUsageExtension, IDENT)},
	{"NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(KeyUsageExtension, NAME)},
	{"DIGITAL_SIGNATURE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(KeyUsageExtension, DIGITAL_SIGNATURE)},
	{"NON_REPUDIATION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(KeyUsageExtension, NON_REPUDIATION)},
	{"KEY_ENCIPHERMENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(KeyUsageExtension, KEY_ENCIPHERMENT)},
	{"DATA_ENCIPHERMENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(KeyUsageExtension, DATA_ENCIPHERMENT)},
	{"KEY_AGREEMENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(KeyUsageExtension, KEY_AGREEMENT)},
	{"KEY_CERTSIGN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(KeyUsageExtension, KEY_CERTSIGN)},
	{"CRL_SIGN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(KeyUsageExtension, CRL_SIGN)},
	{"ENCIPHER_ONLY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(KeyUsageExtension, ENCIPHER_ONLY)},
	{"DECIPHER_ONLY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(KeyUsageExtension, DECIPHER_ONLY)},
	{"bitString", "[Z", nullptr, $PRIVATE, $field(KeyUsageExtension, bitString)},
	{}
};

$MethodInfo _KeyUsageExtension_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC},
	{"<init>", "([B)V", nullptr, $PUBLIC, $method(static_cast<void(KeyUsageExtension::*)($bytes*)>(&KeyUsageExtension::init$)), "java.io.IOException"},
	{"<init>", "([Z)V", nullptr, $PUBLIC, $method(static_cast<void(KeyUsageExtension::*)($booleans*)>(&KeyUsageExtension::init$)), "java.io.IOException"},
	{"<init>", "(Lsun/security/util/BitArray;)V", nullptr, $PUBLIC, $method(static_cast<void(KeyUsageExtension::*)($BitArray*)>(&KeyUsageExtension::init$)), "java.io.IOException"},
	{"<init>", "(Ljava/lang/Boolean;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(KeyUsageExtension::*)($Boolean*,Object$*)>(&KeyUsageExtension::init$)), "java.io.IOException"},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(KeyUsageExtension::*)()>(&KeyUsageExtension::init$))},
	{"delete", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"encode", "(Ljava/io/OutputStream;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"encodeThis", "()V", nullptr, $PRIVATE, $method(static_cast<void(KeyUsageExtension::*)()>(&KeyUsageExtension::encodeThis)), "java.io.IOException"},
	{"get", "(Ljava/lang/String;)Ljava/lang/Boolean;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getBits", "()[Z", nullptr, $PUBLIC},
	{"getElements", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljava/lang/String;>;", $PUBLIC},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"isSet", "(I)Z", nullptr, $PRIVATE, $method(static_cast<bool(KeyUsageExtension::*)(int32_t)>(&KeyUsageExtension::isSet))},
	{"set", "(IZ)V", nullptr, $PRIVATE, $method(static_cast<void(KeyUsageExtension::*)(int32_t,bool)>(&KeyUsageExtension::set))},
	{"set", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _KeyUsageExtension_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.x509.KeyUsageExtension",
	"sun.security.x509.Extension",
	"sun.security.x509.CertAttrSet",
	_KeyUsageExtension_FieldInfo_,
	_KeyUsageExtension_MethodInfo_,
	"Lsun/security/x509/Extension;Lsun/security/x509/CertAttrSet<Ljava/lang/String;>;"
};

$Object* allocate$KeyUsageExtension($Class* clazz) {
	return $of($alloc(KeyUsageExtension));
}

int32_t KeyUsageExtension::hashCode() {
	 return this->$Extension::hashCode();
}

bool KeyUsageExtension::equals(Object$* other) {
	 return this->$Extension::equals(other);
}

$Object* KeyUsageExtension::clone() {
	 return this->$Extension::clone();
}

void KeyUsageExtension::finalize() {
	this->$Extension::finalize();
}

$String* KeyUsageExtension::IDENT = nullptr;
$String* KeyUsageExtension::NAME = nullptr;
$String* KeyUsageExtension::DIGITAL_SIGNATURE = nullptr;
$String* KeyUsageExtension::NON_REPUDIATION = nullptr;
$String* KeyUsageExtension::KEY_ENCIPHERMENT = nullptr;
$String* KeyUsageExtension::DATA_ENCIPHERMENT = nullptr;
$String* KeyUsageExtension::KEY_AGREEMENT = nullptr;
$String* KeyUsageExtension::KEY_CERTSIGN = nullptr;
$String* KeyUsageExtension::CRL_SIGN = nullptr;
$String* KeyUsageExtension::ENCIPHER_ONLY = nullptr;
$String* KeyUsageExtension::DECIPHER_ONLY = nullptr;

void KeyUsageExtension::encodeThis() {
	$useLocalCurrentObjectStackCache();
	$var($DerOutputStream, os, $new($DerOutputStream));
	os->putTruncatedUnalignedBitString($$new($BitArray, this->bitString));
	$set(this, extensionValue, os->toByteArray());
}

bool KeyUsageExtension::isSet(int32_t position) {
	return (position < $nc(this->bitString)->length) && $nc(this->bitString)->get(position);
}

void KeyUsageExtension::set(int32_t position, bool val) {
	if (position >= $nc(this->bitString)->length) {
		$var($booleans, tmp, $new($booleans, position + 1));
		$System::arraycopy(this->bitString, 0, tmp, 0, $nc(this->bitString)->length);
		$set(this, bitString, tmp);
	}
	$nc(this->bitString)->set(position, val);
}

void KeyUsageExtension::init$($bytes* bitString) {
	$Extension::init$();
	$set(this, bitString, $$new($BitArray, $nc(bitString)->length * 8, bitString)->toBooleanArray());
	$init($PKIXExtensions);
	$set(this, extensionId, $PKIXExtensions::KeyUsage_Id);
	this->critical = true;
	encodeThis();
}

void KeyUsageExtension::init$($booleans* bitString) {
	$Extension::init$();
	$set(this, bitString, bitString);
	$init($PKIXExtensions);
	$set(this, extensionId, $PKIXExtensions::KeyUsage_Id);
	this->critical = true;
	encodeThis();
}

void KeyUsageExtension::init$($BitArray* bitString) {
	$Extension::init$();
	$set(this, bitString, $nc(bitString)->toBooleanArray());
	$init($PKIXExtensions);
	$set(this, extensionId, $PKIXExtensions::KeyUsage_Id);
	this->critical = true;
	encodeThis();
}

void KeyUsageExtension::init$($Boolean* critical, Object$* value) {
	$useLocalCurrentObjectStackCache();
	$Extension::init$();
	$init($PKIXExtensions);
	$set(this, extensionId, $PKIXExtensions::KeyUsage_Id);
	this->critical = $nc(critical)->booleanValue();
	$var($bytes, extValue, $cast($bytes, value));
	if ($nc(extValue)->get(0) == $DerValue::tag_OctetString) {
		$set(this, extensionValue, $$new($DerValue, extValue)->getOctetString());
	} else {
		$set(this, extensionValue, extValue);
	}
	$var($DerValue, val, $new($DerValue, this->extensionValue));
	$set(this, bitString, $nc($(val->getUnalignedBitString()))->toBooleanArray());
}

void KeyUsageExtension::init$() {
	$Extension::init$();
	$init($PKIXExtensions);
	$set(this, extensionId, $PKIXExtensions::KeyUsage_Id);
	this->critical = true;
	$set(this, bitString, $new($booleans, 0));
}

void KeyUsageExtension::set($String* name, Object$* obj) {
	if (!($instanceOf($Boolean, obj))) {
		$throwNew($IOException, "Attribute must be of type Boolean."_s);
	}
	bool val = $nc(($cast($Boolean, obj)))->booleanValue();
	if ($nc(name)->equalsIgnoreCase(KeyUsageExtension::DIGITAL_SIGNATURE)) {
		set(0, val);
	} else if (name->equalsIgnoreCase(KeyUsageExtension::NON_REPUDIATION)) {
		set(1, val);
	} else if (name->equalsIgnoreCase(KeyUsageExtension::KEY_ENCIPHERMENT)) {
		set(2, val);
	} else if (name->equalsIgnoreCase(KeyUsageExtension::DATA_ENCIPHERMENT)) {
		set(3, val);
	} else if (name->equalsIgnoreCase(KeyUsageExtension::KEY_AGREEMENT)) {
		set(4, val);
	} else if (name->equalsIgnoreCase(KeyUsageExtension::KEY_CERTSIGN)) {
		set(5, val);
	} else if (name->equalsIgnoreCase(KeyUsageExtension::CRL_SIGN)) {
		set(6, val);
	} else if (name->equalsIgnoreCase(KeyUsageExtension::ENCIPHER_ONLY)) {
		set(7, val);
	} else if (name->equalsIgnoreCase(KeyUsageExtension::DECIPHER_ONLY)) {
		set(8, val);
	} else {
		$throwNew($IOException, "Attribute name not recognized by CertAttrSet:KeyUsage."_s);
	}
	encodeThis();
}

$Object* KeyUsageExtension::get($String* name) {
	if ($nc(name)->equalsIgnoreCase(KeyUsageExtension::DIGITAL_SIGNATURE)) {
		return $of($Boolean::valueOf(isSet(0)));
	} else if (name->equalsIgnoreCase(KeyUsageExtension::NON_REPUDIATION)) {
		return $of($Boolean::valueOf(isSet(1)));
	} else if (name->equalsIgnoreCase(KeyUsageExtension::KEY_ENCIPHERMENT)) {
		return $of($Boolean::valueOf(isSet(2)));
	} else if (name->equalsIgnoreCase(KeyUsageExtension::DATA_ENCIPHERMENT)) {
		return $of($Boolean::valueOf(isSet(3)));
	} else if (name->equalsIgnoreCase(KeyUsageExtension::KEY_AGREEMENT)) {
		return $of($Boolean::valueOf(isSet(4)));
	} else if (name->equalsIgnoreCase(KeyUsageExtension::KEY_CERTSIGN)) {
		return $of($Boolean::valueOf(isSet(5)));
	} else if (name->equalsIgnoreCase(KeyUsageExtension::CRL_SIGN)) {
		return $of($Boolean::valueOf(isSet(6)));
	} else if (name->equalsIgnoreCase(KeyUsageExtension::ENCIPHER_ONLY)) {
		return $of($Boolean::valueOf(isSet(7)));
	} else if (name->equalsIgnoreCase(KeyUsageExtension::DECIPHER_ONLY)) {
		return $of($Boolean::valueOf(isSet(8)));
	} else {
		$throwNew($IOException, "Attribute name not recognized by CertAttrSet:KeyUsage."_s);
	}
}

void KeyUsageExtension::delete$($String* name) {
	if ($nc(name)->equalsIgnoreCase(KeyUsageExtension::DIGITAL_SIGNATURE)) {
		set(0, false);
	} else if (name->equalsIgnoreCase(KeyUsageExtension::NON_REPUDIATION)) {
		set(1, false);
	} else if (name->equalsIgnoreCase(KeyUsageExtension::KEY_ENCIPHERMENT)) {
		set(2, false);
	} else if (name->equalsIgnoreCase(KeyUsageExtension::DATA_ENCIPHERMENT)) {
		set(3, false);
	} else if (name->equalsIgnoreCase(KeyUsageExtension::KEY_AGREEMENT)) {
		set(4, false);
	} else if (name->equalsIgnoreCase(KeyUsageExtension::KEY_CERTSIGN)) {
		set(5, false);
	} else if (name->equalsIgnoreCase(KeyUsageExtension::CRL_SIGN)) {
		set(6, false);
	} else if (name->equalsIgnoreCase(KeyUsageExtension::ENCIPHER_ONLY)) {
		set(7, false);
	} else if (name->equalsIgnoreCase(KeyUsageExtension::DECIPHER_ONLY)) {
		set(8, false);
	} else {
		$throwNew($IOException, "Attribute name not recognized by CertAttrSet:KeyUsage."_s);
	}
	encodeThis();
}

$String* KeyUsageExtension::toString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, sb, $new($StringBuilder));
	sb->append($($Extension::toString()));
	sb->append("KeyUsage [\n"_s);
	if (isSet(0)) {
		sb->append("  DigitalSignature\n"_s);
	}
	if (isSet(1)) {
		sb->append("  Non_repudiation\n"_s);
	}
	if (isSet(2)) {
		sb->append("  Key_Encipherment\n"_s);
	}
	if (isSet(3)) {
		sb->append("  Data_Encipherment\n"_s);
	}
	if (isSet(4)) {
		sb->append("  Key_Agreement\n"_s);
	}
	if (isSet(5)) {
		sb->append("  Key_CertSign\n"_s);
	}
	if (isSet(6)) {
		sb->append("  Crl_Sign\n"_s);
	}
	if (isSet(7)) {
		sb->append("  Encipher_Only\n"_s);
	}
	if (isSet(8)) {
		sb->append("  Decipher_Only\n"_s);
	}
	sb->append("]\n"_s);
	return sb->toString();
}

void KeyUsageExtension::encode($OutputStream* out) {
	$useLocalCurrentObjectStackCache();
	$var($DerOutputStream, tmp, $new($DerOutputStream));
	if (this->extensionValue == nullptr) {
		$init($PKIXExtensions);
		$set(this, extensionId, $PKIXExtensions::KeyUsage_Id);
		this->critical = true;
		encodeThis();
	}
	$Extension::encode(tmp);
	$nc(out)->write($(tmp->toByteArray()));
}

$Enumeration* KeyUsageExtension::getElements() {
	$var($AttributeNameEnumeration, elements, $new($AttributeNameEnumeration));
	elements->addElement(KeyUsageExtension::DIGITAL_SIGNATURE);
	elements->addElement(KeyUsageExtension::NON_REPUDIATION);
	elements->addElement(KeyUsageExtension::KEY_ENCIPHERMENT);
	elements->addElement(KeyUsageExtension::DATA_ENCIPHERMENT);
	elements->addElement(KeyUsageExtension::KEY_AGREEMENT);
	elements->addElement(KeyUsageExtension::KEY_CERTSIGN);
	elements->addElement(KeyUsageExtension::CRL_SIGN);
	elements->addElement(KeyUsageExtension::ENCIPHER_ONLY);
	elements->addElement(KeyUsageExtension::DECIPHER_ONLY);
	return (elements->elements());
}

$booleans* KeyUsageExtension::getBits() {
	return $cast($booleans, $nc(this->bitString)->clone());
}

$String* KeyUsageExtension::getName() {
	return (KeyUsageExtension::NAME);
}

KeyUsageExtension::KeyUsageExtension() {
}

void clinit$KeyUsageExtension($Class* class$) {
	$assignStatic(KeyUsageExtension::IDENT, "x509.info.extensions.KeyUsage"_s);
	$assignStatic(KeyUsageExtension::NAME, "KeyUsage"_s);
	$assignStatic(KeyUsageExtension::DIGITAL_SIGNATURE, "digital_signature"_s);
	$assignStatic(KeyUsageExtension::NON_REPUDIATION, "non_repudiation"_s);
	$assignStatic(KeyUsageExtension::KEY_ENCIPHERMENT, "key_encipherment"_s);
	$assignStatic(KeyUsageExtension::DATA_ENCIPHERMENT, "data_encipherment"_s);
	$assignStatic(KeyUsageExtension::KEY_AGREEMENT, "key_agreement"_s);
	$assignStatic(KeyUsageExtension::KEY_CERTSIGN, "key_certsign"_s);
	$assignStatic(KeyUsageExtension::CRL_SIGN, "crl_sign"_s);
	$assignStatic(KeyUsageExtension::ENCIPHER_ONLY, "encipher_only"_s);
	$assignStatic(KeyUsageExtension::DECIPHER_ONLY, "decipher_only"_s);
}

$Class* KeyUsageExtension::load$($String* name, bool initialize) {
	$loadClass(KeyUsageExtension, name, initialize, &_KeyUsageExtension_ClassInfo_, clinit$KeyUsageExtension, allocate$KeyUsageExtension);
	return class$;
}

$Class* KeyUsageExtension::class$ = nullptr;

		} // x509
	} // security
} // sun