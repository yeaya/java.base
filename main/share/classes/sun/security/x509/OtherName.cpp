#include <sun/security/x509/OtherName.h>

#include <java/io/IOException.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Arrays.h>
#include <sun/security/util/DerInputStream.h>
#include <sun/security/util/DerOutputStream.h>
#include <sun/security/util/DerValue.h>
#include <sun/security/util/ObjectIdentifier.h>
#include <sun/security/x509/GeneralNameInterface.h>
#include <sun/security/x509/OIDMap.h>
#include <jcpp.h>

#undef NAME_ANY
#undef NAME_DIFF_TYPE
#undef NAME_MATCH
#undef TAG_CONTEXT
#undef TAG_VALUE

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Constructor = ::java::lang::reflect::Constructor;
using $Arrays = ::java::util::Arrays;
using $DerInputStream = ::sun::security::util::DerInputStream;
using $DerOutputStream = ::sun::security::util::DerOutputStream;
using $DerValue = ::sun::security::util::DerValue;
using $ObjectIdentifier = ::sun::security::util::ObjectIdentifier;
using $GeneralNameInterface = ::sun::security::x509::GeneralNameInterface;
using $OIDMap = ::sun::security::x509::OIDMap;

namespace sun {
	namespace security {
		namespace x509 {

$FieldInfo _OtherName_FieldInfo_[] = {
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE, $field(OtherName, name)},
	{"oid", "Lsun/security/util/ObjectIdentifier;", nullptr, $PRIVATE, $field(OtherName, oid)},
	{"nameValue", "[B", nullptr, $PRIVATE, $field(OtherName, nameValue)},
	{"gni", "Lsun/security/x509/GeneralNameInterface;", nullptr, $PRIVATE, $field(OtherName, gni)},
	{"TAG_VALUE", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(OtherName, TAG_VALUE)},
	{"myhash", "I", nullptr, $PRIVATE, $field(OtherName, myhash)},
	{}
};

$MethodInfo _OtherName_MethodInfo_[] = {
	{"<init>", "(Lsun/security/util/ObjectIdentifier;[B)V", nullptr, $PUBLIC, $method(static_cast<void(OtherName::*)($ObjectIdentifier*,$bytes*)>(&OtherName::init$)), "java.io.IOException"},
	{"<init>", "(Lsun/security/util/DerValue;)V", nullptr, $PUBLIC, $method(static_cast<void(OtherName::*)($DerValue*)>(&OtherName::init$)), "java.io.IOException"},
	{"constrains", "(Lsun/security/x509/GeneralNameInterface;)I", nullptr, $PUBLIC},
	{"encode", "(Lsun/security/util/DerOutputStream;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getGNI", "(Lsun/security/util/ObjectIdentifier;[B)Lsun/security/x509/GeneralNameInterface;", nullptr, $PRIVATE, $method(static_cast<$GeneralNameInterface*(OtherName::*)($ObjectIdentifier*,$bytes*)>(&OtherName::getGNI)), "java.io.IOException"},
	{"getNameValue", "()[B", nullptr, $PUBLIC},
	{"getOID", "()Lsun/security/util/ObjectIdentifier;", nullptr, $PUBLIC},
	{"getType", "()I", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"subtreeDepth", "()I", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _OtherName_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.x509.OtherName",
	"java.lang.Object",
	"sun.security.x509.GeneralNameInterface",
	_OtherName_FieldInfo_,
	_OtherName_MethodInfo_
};

$Object* allocate$OtherName($Class* clazz) {
	return $of($alloc(OtherName));
}

void OtherName::init$($ObjectIdentifier* oid, $bytes* value) {
	$set(this, nameValue, nullptr);
	$set(this, gni, nullptr);
	this->myhash = -1;
	if (oid == nullptr || value == nullptr) {
		$throwNew($NullPointerException, "parameters may not be null"_s);
	}
	$set(this, oid, oid);
	$set(this, nameValue, value);
	$set(this, gni, getGNI(oid, value));
	if (this->gni != nullptr) {
		$set(this, name, $nc($of(this->gni))->toString());
	} else {
		$set(this, name, $str({"Unrecognized ObjectIdentifier: "_s, $($nc(oid)->toString())}));
	}
}

void OtherName::init$($DerValue* derValue) {
	$useLocalCurrentObjectStackCache();
	$set(this, nameValue, nullptr);
	$set(this, gni, nullptr);
	this->myhash = -1;
	$var($DerInputStream, in, $nc(derValue)->toDerInputStream());
	$set(this, oid, $nc(in)->getOID());
	$var($DerValue, val, in->getDerValue());
	$set(this, nameValue, $nc(val)->toByteArray());
	$set(this, gni, getGNI(this->oid, this->nameValue));
	if (this->gni != nullptr) {
		$set(this, name, $nc($of(this->gni))->toString());
	} else {
		$set(this, name, $str({"Unrecognized ObjectIdentifier: "_s, $($nc(this->oid)->toString())}));
	}
}

$ObjectIdentifier* OtherName::getOID() {
	return this->oid;
}

$bytes* OtherName::getNameValue() {
	return $cast($bytes, $nc(this->nameValue)->clone());
}

$GeneralNameInterface* OtherName::getGNI($ObjectIdentifier* oid, $bytes* nameValue) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	try {
		$Class* extClass = $OIDMap::getClass(oid);
		if (extClass == nullptr) {
			return nullptr;
		}
		$load($Object);
		$var($ClassArray, params, $new($ClassArray, {$Object::class$}));
		$var($Constructor, cons, $nc(extClass)->getConstructor(params));
		$var($ObjectArray, passed, $new($ObjectArray, {$of(nameValue)}));
		$var($GeneralNameInterface, gni, $cast($GeneralNameInterface, $nc(cons)->newInstance(passed)));
		return gni;
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		$throwNew($IOException, $$str({"Instantiation error: "_s, e}), e);
	}
	$shouldNotReachHere();
}

int32_t OtherName::getType() {
	return $GeneralNameInterface::NAME_ANY;
}

void OtherName::encode($DerOutputStream* out) {
	if (this->gni != nullptr) {
		$nc(this->gni)->encode(out);
		return;
	} else {
		$var($DerOutputStream, tmp, $new($DerOutputStream));
		tmp->putOID(this->oid);
		tmp->write($DerValue::createTag($DerValue::TAG_CONTEXT, true, OtherName::TAG_VALUE), this->nameValue);
		$nc(out)->write($DerValue::tag_Sequence, tmp);
	}
}

bool OtherName::equals(Object$* other) {
	$useLocalCurrentObjectStackCache();
	if ($equals(this, other)) {
		return true;
	}
	if (!($instanceOf(OtherName, other))) {
		return false;
	}
	$var(OtherName, otherOther, $cast(OtherName, other));
	if (!($nc($nc(otherOther)->oid)->equals(this->oid))) {
		return false;
	}
	$var($GeneralNameInterface, otherGNI, nullptr);
	try {
		$assign(otherGNI, getGNI($nc(otherOther)->oid, otherOther->nameValue));
	} catch ($IOException&) {
		$var($IOException, ioe, $catch());
		return false;
	}
	bool result = false;
	if (otherGNI != nullptr) {
		try {
			result = (otherGNI->constrains(this) == $GeneralNameInterface::NAME_MATCH);
		} catch ($UnsupportedOperationException&) {
			$var($UnsupportedOperationException, ioe, $catch());
			result = false;
		}
	} else {
		result = $Arrays::equals(this->nameValue, $nc(otherOther)->nameValue);
	}
	return result;
}

int32_t OtherName::hashCode() {
	if (this->myhash == -1) {
		this->myhash = 37 + $nc(this->oid)->hashCode();
		for (int32_t i = 0; i < $nc(this->nameValue)->length; ++i) {
			this->myhash = 37 * this->myhash + $nc(this->nameValue)->get(i);
		}
	}
	return this->myhash;
}

$String* OtherName::toString() {
	return $str({"Other-Name: "_s, this->name});
}

int32_t OtherName::constrains($GeneralNameInterface* inputName) {
	int32_t constraintType = 0;
	if (inputName == nullptr) {
		constraintType = $GeneralNameInterface::NAME_DIFF_TYPE;
	} else if ($nc(inputName)->getType() != $GeneralNameInterface::NAME_ANY) {
		constraintType = $GeneralNameInterface::NAME_DIFF_TYPE;
	} else {
		$throwNew($UnsupportedOperationException, "Narrowing, widening, and matching are not supported for OtherName."_s);
	}
	return constraintType;
}

int32_t OtherName::subtreeDepth() {
	$throwNew($UnsupportedOperationException, "subtreeDepth() not supported for generic OtherName"_s);
	$shouldNotReachHere();
}

OtherName::OtherName() {
}

$Class* OtherName::load$($String* name, bool initialize) {
	$loadClass(OtherName, name, initialize, &_OtherName_ClassInfo_, allocate$OtherName);
	return class$;
}

$Class* OtherName::class$ = nullptr;

		} // x509
	} // security
} // sun