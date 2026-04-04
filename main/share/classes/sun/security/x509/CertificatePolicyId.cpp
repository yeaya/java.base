#include <sun/security/x509/CertificatePolicyId.h>
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
	$useLocalObjectStack();
	$var($String, s, $str({"CertificatePolicyId: ["_s, $($nc(this->id)->toString()), "]\n"_s}));
	return (s);
}

void CertificatePolicyId::encode($DerOutputStream* out) {
	$nc(out)->putOID(this->id);
}

bool CertificatePolicyId::equals(Object$* other) {
	if ($instanceOf(CertificatePolicyId, other)) {
		return $nc(this->id)->equals($($cast(CertificatePolicyId, other)->getIdentifier()));
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
	$FieldInfo fieldInfos$$[] = {
		{"id", "Lsun/security/util/ObjectIdentifier;", nullptr, $PRIVATE, $field(CertificatePolicyId, id)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/security/util/ObjectIdentifier;)V", nullptr, $PUBLIC, $method(CertificatePolicyId, init$, void, $ObjectIdentifier*)},
		{"<init>", "(Lsun/security/util/DerValue;)V", nullptr, $PUBLIC, $method(CertificatePolicyId, init$, void, $DerValue*), "java.io.IOException"},
		{"encode", "(Lsun/security/util/DerOutputStream;)V", nullptr, $PUBLIC, $virtualMethod(CertificatePolicyId, encode, void, $DerOutputStream*), "java.io.IOException"},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(CertificatePolicyId, equals, bool, Object$*)},
		{"getIdentifier", "()Lsun/security/util/ObjectIdentifier;", nullptr, $PUBLIC, $virtualMethod(CertificatePolicyId, getIdentifier, $ObjectIdentifier*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(CertificatePolicyId, hashCode, int32_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(CertificatePolicyId, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.security.x509.CertificatePolicyId",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(CertificatePolicyId, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CertificatePolicyId);
	});
	return class$;
}

$Class* CertificatePolicyId::class$ = nullptr;

		} // x509
	} // security
} // sun