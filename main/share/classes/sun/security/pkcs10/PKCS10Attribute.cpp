#include <sun/security/pkcs10/PKCS10Attribute.h>

#include <java/io/OutputStream.h>
#include <sun/security/pkcs/PKCS9Attribute.h>
#include <sun/security/util/DerValue.h>
#include <sun/security/util/ObjectIdentifier.h>
#include <jcpp.h>

using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PKCS9Attribute = ::sun::security::pkcs::PKCS9Attribute;
using $DerValue = ::sun::security::util::DerValue;
using $ObjectIdentifier = ::sun::security::util::ObjectIdentifier;

namespace sun {
	namespace security {
		namespace pkcs10 {

$FieldInfo _PKCS10Attribute_FieldInfo_[] = {
	{"attributeId", "Lsun/security/util/ObjectIdentifier;", nullptr, $PROTECTED, $field(PKCS10Attribute, attributeId)},
	{"attributeValue", "Ljava/lang/Object;", nullptr, $PROTECTED, $field(PKCS10Attribute, attributeValue)},
	{}
};

$MethodInfo _PKCS10Attribute_MethodInfo_[] = {
	{"<init>", "(Lsun/security/util/DerValue;)V", nullptr, $PUBLIC, $method(PKCS10Attribute, init$, void, $DerValue*), "java.io.IOException"},
	{"<init>", "(Lsun/security/util/ObjectIdentifier;Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(PKCS10Attribute, init$, void, $ObjectIdentifier*, Object$*)},
	{"<init>", "(Lsun/security/pkcs/PKCS9Attribute;)V", nullptr, $PUBLIC, $method(PKCS10Attribute, init$, void, $PKCS9Attribute*)},
	{"derEncode", "(Ljava/io/OutputStream;)V", nullptr, $PUBLIC, $virtualMethod(PKCS10Attribute, derEncode, void, $OutputStream*), "java.io.IOException"},
	{"getAttributeId", "()Lsun/security/util/ObjectIdentifier;", nullptr, $PUBLIC, $virtualMethod(PKCS10Attribute, getAttributeId, $ObjectIdentifier*)},
	{"getAttributeValue", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(PKCS10Attribute, getAttributeValue, $Object*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(PKCS10Attribute, toString, $String*)},
	{}
};

$ClassInfo _PKCS10Attribute_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.pkcs10.PKCS10Attribute",
	"java.lang.Object",
	"sun.security.util.DerEncoder",
	_PKCS10Attribute_FieldInfo_,
	_PKCS10Attribute_MethodInfo_
};

$Object* allocate$PKCS10Attribute($Class* clazz) {
	return $of($alloc(PKCS10Attribute));
}

void PKCS10Attribute::init$($DerValue* derVal) {
	$set(this, attributeId, nullptr);
	$set(this, attributeValue, nullptr);
	$var($PKCS9Attribute, attr, $new($PKCS9Attribute, derVal));
	$set(this, attributeId, attr->getOID());
	$set(this, attributeValue, attr->getValue());
}

void PKCS10Attribute::init$($ObjectIdentifier* attributeId, Object$* attributeValue) {
	$set(this, attributeId, nullptr);
	$set(this, attributeValue, nullptr);
	$set(this, attributeId, attributeId);
	$set(this, attributeValue, attributeValue);
}

void PKCS10Attribute::init$($PKCS9Attribute* attr) {
	$set(this, attributeId, nullptr);
	$set(this, attributeValue, nullptr);
	$set(this, attributeId, $nc(attr)->getOID());
	$set(this, attributeValue, attr->getValue());
}

void PKCS10Attribute::derEncode($OutputStream* out) {
	$var($PKCS9Attribute, attr, $new($PKCS9Attribute, this->attributeId, this->attributeValue));
	attr->derEncode(out);
}

$ObjectIdentifier* PKCS10Attribute::getAttributeId() {
	return (this->attributeId);
}

$Object* PKCS10Attribute::getAttributeValue() {
	return $of((this->attributeValue));
}

$String* PKCS10Attribute::toString() {
	return ($nc($of(this->attributeValue))->toString());
}

PKCS10Attribute::PKCS10Attribute() {
}

$Class* PKCS10Attribute::load$($String* name, bool initialize) {
	$loadClass(PKCS10Attribute, name, initialize, &_PKCS10Attribute_ClassInfo_, allocate$PKCS10Attribute);
	return class$;
}

$Class* PKCS10Attribute::class$ = nullptr;

		} // pkcs10
	} // security
} // sun