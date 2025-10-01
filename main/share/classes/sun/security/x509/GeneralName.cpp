#include <sun/security/x509/GeneralName.h>

#include <java/io/IOException.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/security/util/DerInputStream.h>
#include <sun/security/util/DerOutputStream.h>
#include <sun/security/util/DerValue.h>
#include <sun/security/x509/DNSName.h>
#include <sun/security/x509/EDIPartyName.h>
#include <sun/security/x509/GeneralNameInterface.h>
#include <sun/security/x509/IPAddressName.h>
#include <sun/security/x509/OIDName.h>
#include <sun/security/x509/OtherName.h>
#include <sun/security/x509/RFC822Name.h>
#include <sun/security/x509/URIName.h>
#include <sun/security/x509/X400Address.h>
#include <sun/security/x509/X500Name.h>
#include <jcpp.h>

#undef NAME_MATCH
#undef NAME_IP
#undef NAME_ANY
#undef NAME_URI
#undef NAME_X400
#undef TAG_CONTEXT
#undef NAME_OID
#undef NAME_EDI
#undef NAME_DNS
#undef NAME_RFC822
#undef NAME_DIRECTORY

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $DerInputStream = ::sun::security::util::DerInputStream;
using $DerOutputStream = ::sun::security::util::DerOutputStream;
using $DerValue = ::sun::security::util::DerValue;
using $DNSName = ::sun::security::x509::DNSName;
using $EDIPartyName = ::sun::security::x509::EDIPartyName;
using $GeneralNameInterface = ::sun::security::x509::GeneralNameInterface;
using $IPAddressName = ::sun::security::x509::IPAddressName;
using $OIDName = ::sun::security::x509::OIDName;
using $OtherName = ::sun::security::x509::OtherName;
using $RFC822Name = ::sun::security::x509::RFC822Name;
using $URIName = ::sun::security::x509::URIName;
using $X400Address = ::sun::security::x509::X400Address;
using $X500Name = ::sun::security::x509::X500Name;

namespace sun {
	namespace security {
		namespace x509 {

$FieldInfo _GeneralName_FieldInfo_[] = {
	{"name", "Lsun/security/x509/GeneralNameInterface;", nullptr, $PRIVATE, $field(GeneralName, name)},
	{}
};

$MethodInfo _GeneralName_MethodInfo_[] = {
	{"<init>", "(Lsun/security/x509/GeneralNameInterface;)V", nullptr, $PUBLIC, $method(static_cast<void(GeneralName::*)($GeneralNameInterface*)>(&GeneralName::init$))},
	{"<init>", "(Lsun/security/util/DerValue;)V", nullptr, $PUBLIC, $method(static_cast<void(GeneralName::*)($DerValue*)>(&GeneralName::init$)), "java.io.IOException"},
	{"<init>", "(Lsun/security/util/DerValue;Z)V", nullptr, $PUBLIC, $method(static_cast<void(GeneralName::*)($DerValue*,bool)>(&GeneralName::init$)), "java.io.IOException"},
	{"encode", "(Lsun/security/util/DerOutputStream;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getName", "()Lsun/security/x509/GeneralNameInterface;", nullptr, $PUBLIC},
	{"getType", "()I", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _GeneralName_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.x509.GeneralName",
	"java.lang.Object",
	nullptr,
	_GeneralName_FieldInfo_,
	_GeneralName_MethodInfo_
};

$Object* allocate$GeneralName($Class* clazz) {
	return $of($alloc(GeneralName));
}

void GeneralName::init$($GeneralNameInterface* name) {
	$set(this, name, nullptr);
	if (name == nullptr) {
		$throwNew($NullPointerException, "GeneralName must not be null"_s);
	}
	$set(this, name, name);
}

void GeneralName::init$($DerValue* encName) {
	GeneralName::init$(encName, false);
}

void GeneralName::init$($DerValue* encName, bool nameConstraint) {
	$set(this, name, nullptr);
	int16_t tag = (int8_t)((int32_t)($nc(encName)->tag & (uint32_t)31));
	switch (tag) {
	case $GeneralNameInterface::NAME_ANY:
		{
			bool var$0 = encName->isContextSpecific();
			if (var$0 && encName->isConstructed()) {
				encName->resetTag($DerValue::tag_Sequence);
				$set(this, name, $new($OtherName, encName));
			} else {
				$throwNew($IOException, "Invalid encoding of Other-Name"_s);
			}
			break;
		}
	case $GeneralNameInterface::NAME_RFC822:
		{
			bool var$1 = encName->isContextSpecific();
			if (var$1 && !encName->isConstructed()) {
				encName->resetTag($DerValue::tag_IA5String);
				$set(this, name, $new($RFC822Name, encName));
			} else {
				$throwNew($IOException, "Invalid encoding of RFC822 name"_s);
			}
			break;
		}
	case $GeneralNameInterface::NAME_DNS:
		{
			bool var$2 = encName->isContextSpecific();
			if (var$2 && !encName->isConstructed()) {
				encName->resetTag($DerValue::tag_IA5String);
				$set(this, name, $new($DNSName, encName));
			} else {
				$throwNew($IOException, "Invalid encoding of DNSName"_s);
			}
			break;
		}
	case $GeneralNameInterface::NAME_X400:
		{
			bool var$3 = encName->isContextSpecific();
			if (var$3 && encName->isConstructed()) {
				encName->resetTag($DerValue::tag_IA5String);
				$set(this, name, $new($X400Address, encName));
			} else {
				$throwNew($IOException, "Invalid encoding of X400Address name"_s);
			}
			break;
		}
	case $GeneralNameInterface::NAME_URI:
		{
			bool var$4 = encName->isContextSpecific();
			if (var$4 && !encName->isConstructed()) {
				encName->resetTag($DerValue::tag_IA5String);
				$set(this, name, nameConstraint ? static_cast<$GeneralNameInterface*>($URIName::nameConstraint(encName)) : static_cast<$GeneralNameInterface*>($new($URIName, encName)));
			} else {
				$throwNew($IOException, "Invalid encoding of URI"_s);
			}
			break;
		}
	case $GeneralNameInterface::NAME_IP:
		{
			bool var$5 = encName->isContextSpecific();
			if (var$5 && !encName->isConstructed()) {
				encName->resetTag($DerValue::tag_OctetString);
				$set(this, name, $new($IPAddressName, encName));
			} else {
				$throwNew($IOException, "Invalid encoding of IP address"_s);
			}
			break;
		}
	case $GeneralNameInterface::NAME_OID:
		{
			bool var$6 = encName->isContextSpecific();
			if (var$6 && !encName->isConstructed()) {
				encName->resetTag($DerValue::tag_ObjectId);
				$set(this, name, $new($OIDName, encName));
			} else {
				$throwNew($IOException, "Invalid encoding of OID name"_s);
			}
			break;
		}
	case $GeneralNameInterface::NAME_DIRECTORY:
		{
			bool var$7 = encName->isContextSpecific();
			if (var$7 && encName->isConstructed()) {
				$set(this, name, $new($X500Name, $(encName->getData())));
			} else {
				$throwNew($IOException, "Invalid encoding of Directory name"_s);
			}
			break;
		}
	case $GeneralNameInterface::NAME_EDI:
		{
			bool var$8 = encName->isContextSpecific();
			if (var$8 && encName->isConstructed()) {
				encName->resetTag($DerValue::tag_Sequence);
				$set(this, name, $new($EDIPartyName, encName));
			} else {
				$throwNew($IOException, "Invalid encoding of EDI name"_s);
			}
			break;
		}
	default:
		{
			$throwNew($IOException, $$str({"Unrecognized GeneralName tag, ("_s, $$str(tag), ")"_s}));
		}
	}
}

int32_t GeneralName::getType() {
	return $nc(this->name)->getType();
}

$GeneralNameInterface* GeneralName::getName() {
	return this->name;
}

$String* GeneralName::toString() {
	return $nc($of(this->name))->toString();
}

bool GeneralName::equals(Object$* other) {
	if ($equals(this, other)) {
		return true;
	}
	if (!($instanceOf(GeneralName, other))) {
		return false;
	}
	$var($GeneralNameInterface, otherGNI, $nc(($cast(GeneralName, other)))->name);
	try {
		return $nc(this->name)->constrains(otherGNI) == $GeneralNameInterface::NAME_MATCH;
	} catch ($UnsupportedOperationException&) {
		$var($UnsupportedOperationException, ioe, $catch());
		return false;
	}
	$shouldNotReachHere();
}

int32_t GeneralName::hashCode() {
	return $nc($of(this->name))->hashCode();
}

void GeneralName::encode($DerOutputStream* out) {
	$var($DerOutputStream, tmp, $new($DerOutputStream));
	$nc(this->name)->encode(tmp);
	int32_t nameType = $nc(this->name)->getType();
	if (nameType == $GeneralNameInterface::NAME_ANY || nameType == $GeneralNameInterface::NAME_X400 || nameType == $GeneralNameInterface::NAME_EDI) {
		$nc(out)->writeImplicit($DerValue::createTag($DerValue::TAG_CONTEXT, true, (int8_t)nameType), tmp);
	} else if (nameType == $GeneralNameInterface::NAME_DIRECTORY) {
		$nc(out)->write($DerValue::createTag($DerValue::TAG_CONTEXT, true, (int8_t)nameType), tmp);
	} else {
		$nc(out)->writeImplicit($DerValue::createTag($DerValue::TAG_CONTEXT, false, (int8_t)nameType), tmp);
	}
}

GeneralName::GeneralName() {
}

$Class* GeneralName::load$($String* name, bool initialize) {
	$loadClass(GeneralName, name, initialize, &_GeneralName_ClassInfo_, allocate$GeneralName);
	return class$;
}

$Class* GeneralName::class$ = nullptr;

		} // x509
	} // security
} // sun