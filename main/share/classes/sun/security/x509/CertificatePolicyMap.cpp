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
using $DerOutputStream = ::sun::security::util::DerOutputStream;
using $DerValue = ::sun::security::util::DerValue;
using $CertificatePolicyId = ::sun::security::x509::CertificatePolicyId;

namespace sun {
	namespace security {
		namespace x509 {

void CertificatePolicyMap::init$($CertificatePolicyId* issuer, $CertificatePolicyId* subject) {
	$set(this, issuerDomain, issuer);
	$set(this, subjectDomain, subject);
}

void CertificatePolicyMap::init$($DerValue* val) {
	$useLocalObjectStack();
	if ($nc(val)->tag != $DerValue::tag_Sequence) {
		$throwNew($IOException, "Invalid encoding for CertificatePolicyMap"_s);
	}
	$set(this, issuerDomain, $new($CertificatePolicyId, $($nc(val->data$)->getDerValue())));
	$set(this, subjectDomain, $new($CertificatePolicyId, $(val->data$->getDerValue())));
}

$CertificatePolicyId* CertificatePolicyMap::getIssuerIdentifier() {
	return (this->issuerDomain);
}

$CertificatePolicyId* CertificatePolicyMap::getSubjectIdentifier() {
	return (this->subjectDomain);
}

$String* CertificatePolicyMap::toString() {
	$useLocalObjectStack();
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append("CertificatePolicyMap: [\nIssuerDomain:"_s);
	var$0->append($($nc(this->issuerDomain)->toString()));
	var$0->append("SubjectDomain:"_s);
	var$0->append($($nc(this->subjectDomain)->toString()));
	var$0->append("]\n"_s);
	$var($String, s, $str(var$0));
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
	$FieldInfo fieldInfos$$[] = {
		{"issuerDomain", "Lsun/security/x509/CertificatePolicyId;", nullptr, $PRIVATE, $field(CertificatePolicyMap, issuerDomain)},
		{"subjectDomain", "Lsun/security/x509/CertificatePolicyId;", nullptr, $PRIVATE, $field(CertificatePolicyMap, subjectDomain)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/security/x509/CertificatePolicyId;Lsun/security/x509/CertificatePolicyId;)V", nullptr, $PUBLIC, $method(CertificatePolicyMap, init$, void, $CertificatePolicyId*, $CertificatePolicyId*)},
		{"<init>", "(Lsun/security/util/DerValue;)V", nullptr, $PUBLIC, $method(CertificatePolicyMap, init$, void, $DerValue*), "java.io.IOException"},
		{"encode", "(Lsun/security/util/DerOutputStream;)V", nullptr, $PUBLIC, $virtualMethod(CertificatePolicyMap, encode, void, $DerOutputStream*), "java.io.IOException"},
		{"getIssuerIdentifier", "()Lsun/security/x509/CertificatePolicyId;", nullptr, $PUBLIC, $virtualMethod(CertificatePolicyMap, getIssuerIdentifier, $CertificatePolicyId*)},
		{"getSubjectIdentifier", "()Lsun/security/x509/CertificatePolicyId;", nullptr, $PUBLIC, $virtualMethod(CertificatePolicyMap, getSubjectIdentifier, $CertificatePolicyId*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(CertificatePolicyMap, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.security.x509.CertificatePolicyMap",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(CertificatePolicyMap, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CertificatePolicyMap);
	});
	return class$;
}

$Class* CertificatePolicyMap::class$ = nullptr;

		} // x509
	} // security
} // sun