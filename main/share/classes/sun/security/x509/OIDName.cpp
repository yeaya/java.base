#include <sun/security/x509/OIDName.h>

#include <java/io/IOException.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/security/util/DerOutputStream.h>
#include <sun/security/util/DerValue.h>
#include <sun/security/util/ObjectIdentifier.h>
#include <sun/security/x509/GeneralNameInterface.h>
#include <jcpp.h>

#undef NAME_DIFF_TYPE
#undef NAME_MATCH
#undef NAME_OID

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $DerOutputStream = ::sun::security::util::DerOutputStream;
using $DerValue = ::sun::security::util::DerValue;
using $ObjectIdentifier = ::sun::security::util::ObjectIdentifier;
using $GeneralNameInterface = ::sun::security::x509::GeneralNameInterface;

namespace sun {
	namespace security {
		namespace x509 {

$FieldInfo _OIDName_FieldInfo_[] = {
	{"oid", "Lsun/security/util/ObjectIdentifier;", nullptr, $PRIVATE, $field(OIDName, oid)},
	{}
};

$MethodInfo _OIDName_MethodInfo_[] = {
	{"<init>", "(Lsun/security/util/DerValue;)V", nullptr, $PUBLIC, $method(static_cast<void(OIDName::*)($DerValue*)>(&OIDName::init$)), "java.io.IOException"},
	{"<init>", "(Lsun/security/util/ObjectIdentifier;)V", nullptr, $PUBLIC, $method(static_cast<void(OIDName::*)($ObjectIdentifier*)>(&OIDName::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(OIDName::*)($String*)>(&OIDName::init$)), "java.io.IOException"},
	{"constrains", "(Lsun/security/x509/GeneralNameInterface;)I", nullptr, $PUBLIC, nullptr, "java.lang.UnsupportedOperationException"},
	{"encode", "(Lsun/security/util/DerOutputStream;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getOID", "()Lsun/security/util/ObjectIdentifier;", nullptr, $PUBLIC},
	{"getType", "()I", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"subtreeDepth", "()I", nullptr, $PUBLIC, nullptr, "java.lang.UnsupportedOperationException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _OIDName_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.x509.OIDName",
	"java.lang.Object",
	"sun.security.x509.GeneralNameInterface",
	_OIDName_FieldInfo_,
	_OIDName_MethodInfo_
};

$Object* allocate$OIDName($Class* clazz) {
	return $of($alloc(OIDName));
}

void OIDName::init$($DerValue* derValue) {
	$set(this, oid, $nc(derValue)->getOID());
}

void OIDName::init$($ObjectIdentifier* oid) {
	$set(this, oid, oid);
}

void OIDName::init$($String* name) {
	try {
		$set(this, oid, $ObjectIdentifier::of(name));
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		$throwNew($IOException, $$str({"Unable to create OIDName: "_s, e}));
	}
}

int32_t OIDName::getType() {
	return ($GeneralNameInterface::NAME_OID);
}

void OIDName::encode($DerOutputStream* out) {
	$nc(out)->putOID(this->oid);
}

$String* OIDName::toString() {
	return ($str({"OIDName: "_s, $($nc(this->oid)->toString())}));
}

$ObjectIdentifier* OIDName::getOID() {
	return this->oid;
}

bool OIDName::equals(Object$* obj) {
	if ($equals(this, obj)) {
		return true;
	}
	if (!($instanceOf(OIDName, obj))) {
		return false;
	}
	$var(OIDName, other, $cast(OIDName, obj));
	return $nc(this->oid)->equals($nc(other)->oid);
}

int32_t OIDName::hashCode() {
	return $nc(this->oid)->hashCode();
}

int32_t OIDName::constrains($GeneralNameInterface* inputName) {
	int32_t constraintType = 0;
	if (inputName == nullptr) {
		constraintType = $GeneralNameInterface::NAME_DIFF_TYPE;
	} else if ($nc(inputName)->getType() != $GeneralNameInterface::NAME_OID) {
		constraintType = $GeneralNameInterface::NAME_DIFF_TYPE;
	} else if (this->equals($cast(OIDName, inputName))) {
		constraintType = $GeneralNameInterface::NAME_MATCH;
	} else {
		$throwNew($UnsupportedOperationException, "Narrowing and widening are not supported for OIDNames"_s);
	}
	return constraintType;
}

int32_t OIDName::subtreeDepth() {
	$throwNew($UnsupportedOperationException, "subtreeDepth() not supported for OIDName."_s);
	$shouldNotReachHere();
}

OIDName::OIDName() {
}

$Class* OIDName::load$($String* name, bool initialize) {
	$loadClass(OIDName, name, initialize, &_OIDName_ClassInfo_, allocate$OIDName);
	return class$;
}

$Class* OIDName::class$ = nullptr;

		} // x509
	} // security
} // sun