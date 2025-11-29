#include <java/security/cert/PKIXCertPathBuilderResult.h>

#include <java/security/PublicKey.h>
#include <java/security/cert/CertPath.h>
#include <java/security/cert/PKIXCertPathValidatorResult.h>
#include <java/security/cert/PolicyNode.h>
#include <java/security/cert/TrustAnchor.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $PublicKey = ::java::security::PublicKey;
using $CertPath = ::java::security::cert::CertPath;
using $PKIXCertPathValidatorResult = ::java::security::cert::PKIXCertPathValidatorResult;
using $PolicyNode = ::java::security::cert::PolicyNode;
using $TrustAnchor = ::java::security::cert::TrustAnchor;

namespace java {
	namespace security {
		namespace cert {

$FieldInfo _PKIXCertPathBuilderResult_FieldInfo_[] = {
	{"certPath", "Ljava/security/cert/CertPath;", nullptr, $PRIVATE, $field(PKIXCertPathBuilderResult, certPath)},
	{}
};

$MethodInfo _PKIXCertPathBuilderResult_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/security/cert/CertPath;Ljava/security/cert/TrustAnchor;Ljava/security/cert/PolicyNode;Ljava/security/PublicKey;)V", nullptr, $PUBLIC, $method(static_cast<void(PKIXCertPathBuilderResult::*)($CertPath*,$TrustAnchor*,$PolicyNode*,$PublicKey*)>(&PKIXCertPathBuilderResult::init$))},
	{"getCertPath", "()Ljava/security/cert/CertPath;", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _PKIXCertPathBuilderResult_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.security.cert.PKIXCertPathBuilderResult",
	"java.security.cert.PKIXCertPathValidatorResult",
	"java.security.cert.CertPathBuilderResult",
	_PKIXCertPathBuilderResult_FieldInfo_,
	_PKIXCertPathBuilderResult_MethodInfo_
};

$Object* allocate$PKIXCertPathBuilderResult($Class* clazz) {
	return $of($alloc(PKIXCertPathBuilderResult));
}

$Object* PKIXCertPathBuilderResult::clone() {
	 return this->$PKIXCertPathValidatorResult::clone();
}

int32_t PKIXCertPathBuilderResult::hashCode() {
	 return this->$PKIXCertPathValidatorResult::hashCode();
}

bool PKIXCertPathBuilderResult::equals(Object$* obj) {
	 return this->$PKIXCertPathValidatorResult::equals(obj);
}

void PKIXCertPathBuilderResult::finalize() {
	this->$PKIXCertPathValidatorResult::finalize();
}

void PKIXCertPathBuilderResult::init$($CertPath* certPath, $TrustAnchor* trustAnchor, $PolicyNode* policyTree, $PublicKey* subjectPublicKey) {
	$PKIXCertPathValidatorResult::init$(trustAnchor, policyTree, subjectPublicKey);
	if (certPath == nullptr) {
		$throwNew($NullPointerException, "certPath must be non-null"_s);
	}
	$set(this, certPath, certPath);
}

$CertPath* PKIXCertPathBuilderResult::getCertPath() {
	return this->certPath;
}

$String* PKIXCertPathBuilderResult::toString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, sb, $new($StringBuilder));
	sb->append("PKIXCertPathBuilderResult: [\n"_s);
	sb->append($$str({"  Certification Path: "_s, this->certPath, "\n"_s}));
	sb->append($$str({"  Trust Anchor: "_s, $($nc($(getTrustAnchor()))->toString()), "\n"_s}));
	sb->append($$str({"  Policy Tree: "_s, $($String::valueOf($($of(getPolicyTree())))), "\n"_s}));
	sb->append($$str({"  Subject Public Key: "_s, $(getPublicKey()), "\n"_s}));
	sb->append("]"_s);
	return sb->toString();
}

PKIXCertPathBuilderResult::PKIXCertPathBuilderResult() {
}

$Class* PKIXCertPathBuilderResult::load$($String* name, bool initialize) {
	$loadClass(PKIXCertPathBuilderResult, name, initialize, &_PKIXCertPathBuilderResult_ClassInfo_, allocate$PKIXCertPathBuilderResult);
	return class$;
}

$Class* PKIXCertPathBuilderResult::class$ = nullptr;

		} // cert
	} // security
} // java