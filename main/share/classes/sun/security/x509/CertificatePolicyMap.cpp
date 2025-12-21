#include <sun/security/x509/CertificatePolicyMap.h>

#include <java/io/IOException.h>
#include <sun/security/util/DerInputStream.h>
#include <sun/security/util/DerOutputStream.h>
#include <sun/security/util/DerValue.h>
#include <sun/security/x509/CertificatePolicyId.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DerInputStream = ::sun::security::util::DerInputStream;
using $DerOutputStream = ::sun::security::util::DerOutputStream;
using $DerValue = ::sun::security::util::DerValue;
using $CertificatePolicyId = ::sun::security::x509::CertificatePolicyId;

namespace sun {
	namespace security {
		namespace x509 {

$FieldInfo _CertificatePolicyMap_FieldInfo_[] = {
	{"issuerDomain", "Lsun/security/x509/CertificatePolicyId;", nullptr, $PRIVATE, $field(CertificatePolicyMap, issuerDomain)},
	{"subjectDomain", "Lsun/security/x509/CertificatePolicyId;", nullptr, $PRIVATE, $field(CertificatePolicyMap, subjectDomain)},
	{}
};

$MethodInfo _CertificatePolicyMap_MethodInfo_[] = {
	{"<init>", "(Lsun/security/x509/CertificatePolicyId;Lsun/security/x509/CertificatePolicyId;)V", nullptr, $PUBLIC, $method(static_cast<void(CertificatePolicyMap::*)($CertificatePolicyId*,$CertificatePolicyId*)>(&CertificatePolicyMap::init$))},
	{"<init>", "(Lsun/security/util/DerValue;)V", nullptr, $PUBLIC, $method(static_cast<void(CertificatePolicyMap::*)($DerValue*)>(&CertificatePolicyMap::init$)), "java.io.IOException"},
	{"encode", "(Lsun/security/util/DerOutputStream;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getIssuerIdentifier", "()Lsun/security/x509/CertificatePolicyId;", nullptr, $PUBLIC},
	{"getSubjectIdentifier", "()Lsun/security/x509/CertificatePolicyId;", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _CertificatePolicyMap_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.x509.CertificatePolicyMap",
	"java.lang.Object",
	nullptr,
	_CertificatePolicyMap_FieldInfo_,
	_CertificatePolicyMap_MethodInfo_
};

$Object* allocate$CertificatePolicyMap($Class* clazz) {
	return $of($alloc(CertificatePolicyMap));
}

void CertificatePolicyMap::init$($CertificatePolicyId* issuer, $CertificatePolicyId* subject) {
	$set(this, issuerDomain, issuer);
	$set(this, subjectDomain, subject);
}

void CertificatePolicyMap::init$($DerValue* val) {
	$useLocalCurrentObjectStackCache();
	if ($nc(val)->tag != $DerValue::tag_Sequence) {
		$throwNew($IOException, "Invalid encoding for CertificatePolicyMap"_s);
	}
	$set(this, issuerDomain, $new($CertificatePolicyId, $($nc($nc(val)->data$)->getDerValue())));
	$set(this, subjectDomain, $new($CertificatePolicyId, $($nc($nc(val)->data$)->getDerValue())));
}

$CertificatePolicyId* CertificatePolicyMap::getIssuerIdentifier() {
	return (this->issuerDomain);
}

$CertificatePolicyId* CertificatePolicyMap::getSubjectIdentifier() {
	return (this->subjectDomain);
}

$String* CertificatePolicyMap::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$1, $$str({"CertificatePolicyMap: [\nIssuerDomain:"_s, $($nc(this->issuerDomain)->toString()), "SubjectDomain:"_s}));
	$var($String, var$0, $$concat(var$1, $($nc(this->subjectDomain)->toString())));
	$var($String, s, $concat(var$0, "]\n"_s));
	return (s);
}

void CertificatePolicyMap::encode($DerOutputStream* out) {
	$var($DerOutputStream, tmp, $new($DerOutputStream));
	$nc(this->issuerDomain)->encode(tmp);
	$nc(this->subjectDomain)->encode(tmp);
	$nc(out)->write($DerValue::tag_Sequence, tmp);
}

CertificatePolicyMap::CertificatePolicyMap() {
}

$Class* CertificatePolicyMap::load$($String* name, bool initialize) {
	$loadClass(CertificatePolicyMap, name, initialize, &_CertificatePolicyMap_ClassInfo_, allocate$CertificatePolicyMap);
	return class$;
}

$Class* CertificatePolicyMap::class$ = nullptr;

		} // x509
	} // security
} // sun