#include <sun/security/x509/CertificatePolicyId.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/security/util/DerOutputStream.h>
#include <sun/security/util/DerValue.h>
#include <sun/security/util/ObjectIdentifier.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DerOutputStream = ::sun::security::util::DerOutputStream;
using $DerValue = ::sun::security::util::DerValue;
using $ObjectIdentifier = ::sun::security::util::ObjectIdentifier;

namespace sun {
	namespace security {
		namespace x509 {

$FieldInfo _CertificatePolicyId_FieldInfo_[] = {
	{"id", "Lsun/security/util/ObjectIdentifier;", nullptr, $PRIVATE, $field(CertificatePolicyId, id)},
	{}
};

$MethodInfo _CertificatePolicyId_MethodInfo_[] = {
	{"<init>", "(Lsun/security/util/ObjectIdentifier;)V", nullptr, $PUBLIC, $method(static_cast<void(CertificatePolicyId::*)($ObjectIdentifier*)>(&CertificatePolicyId::init$))},
	{"<init>", "(Lsun/security/util/DerValue;)V", nullptr, $PUBLIC, $method(static_cast<void(CertificatePolicyId::*)($DerValue*)>(&CertificatePolicyId::init$)), "java.io.IOException"},
	{"encode", "(Lsun/security/util/DerOutputStream;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getIdentifier", "()Lsun/security/util/ObjectIdentifier;", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _CertificatePolicyId_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.x509.CertificatePolicyId",
	"java.lang.Object",
	nullptr,
	_CertificatePolicyId_FieldInfo_,
	_CertificatePolicyId_MethodInfo_
};

$Object* allocate$CertificatePolicyId($Class* clazz) {
	return $of($alloc(CertificatePolicyId));
}

void CertificatePolicyId::init$($ObjectIdentifier* id) {
	$set(this, id, id);
}

void CertificatePolicyId::init$($DerValue* val) {
	$set(this, id, $nc(val)->getOID());
}

$ObjectIdentifier* CertificatePolicyId::getIdentifier() {
	return (this->id);
}

$String* CertificatePolicyId::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, s, $str({"CertificatePolicyId: ["_s, $($nc(this->id)->toString()), "]\n"_s}));
	return (s);
}

void CertificatePolicyId::encode($DerOutputStream* out) {
	$nc(out)->putOID(this->id);
}

bool CertificatePolicyId::equals(Object$* other) {
	if ($instanceOf(CertificatePolicyId, other)) {
		return $nc(this->id)->equals($($nc(($cast(CertificatePolicyId, other)))->getIdentifier()));
	} else {
		return false;
	}
}

int32_t CertificatePolicyId::hashCode() {
	return $nc(this->id)->hashCode();
}

CertificatePolicyId::CertificatePolicyId() {
}

$Class* CertificatePolicyId::load$($String* name, bool initialize) {
	$loadClass(CertificatePolicyId, name, initialize, &_CertificatePolicyId_ClassInfo_, allocate$CertificatePolicyId);
	return class$;
}

$Class* CertificatePolicyId::class$ = nullptr;

		} // x509
	} // security
} // sun