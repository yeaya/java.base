#include <java/security/cert/PKIXCertPathValidatorResult.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InternalError.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/PublicKey.h>
#include <java/security/cert/CertPathValidatorResult.h>
#include <java/security/cert/PolicyNode.h>
#include <java/security/cert/TrustAnchor.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $PublicKey = ::java::security::PublicKey;
using $CertPathValidatorResult = ::java::security::cert::CertPathValidatorResult;
using $PolicyNode = ::java::security::cert::PolicyNode;
using $TrustAnchor = ::java::security::cert::TrustAnchor;

namespace java {
	namespace security {
		namespace cert {

$FieldInfo _PKIXCertPathValidatorResult_FieldInfo_[] = {
	{"trustAnchor", "Ljava/security/cert/TrustAnchor;", nullptr, $PRIVATE, $field(PKIXCertPathValidatorResult, trustAnchor)},
	{"policyTree", "Ljava/security/cert/PolicyNode;", nullptr, $PRIVATE, $field(PKIXCertPathValidatorResult, policyTree)},
	{"subjectPublicKey", "Ljava/security/PublicKey;", nullptr, $PRIVATE, $field(PKIXCertPathValidatorResult, subjectPublicKey)},
	{}
};

$MethodInfo _PKIXCertPathValidatorResult_MethodInfo_[] = {
	{"<init>", "(Ljava/security/cert/TrustAnchor;Ljava/security/cert/PolicyNode;Ljava/security/PublicKey;)V", nullptr, $PUBLIC, $method(static_cast<void(PKIXCertPathValidatorResult::*)($TrustAnchor*,$PolicyNode*,$PublicKey*)>(&PKIXCertPathValidatorResult::init$))},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getPolicyTree", "()Ljava/security/cert/PolicyNode;", nullptr, $PUBLIC},
	{"getPublicKey", "()Ljava/security/PublicKey;", nullptr, $PUBLIC},
	{"getTrustAnchor", "()Ljava/security/cert/TrustAnchor;", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _PKIXCertPathValidatorResult_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.security.cert.PKIXCertPathValidatorResult",
	"java.lang.Object",
	"java.security.cert.CertPathValidatorResult",
	_PKIXCertPathValidatorResult_FieldInfo_,
	_PKIXCertPathValidatorResult_MethodInfo_
};

$Object* allocate$PKIXCertPathValidatorResult($Class* clazz) {
	return $of($alloc(PKIXCertPathValidatorResult));
}

void PKIXCertPathValidatorResult::init$($TrustAnchor* trustAnchor, $PolicyNode* policyTree, $PublicKey* subjectPublicKey) {
	if (subjectPublicKey == nullptr) {
		$throwNew($NullPointerException, "subjectPublicKey must be non-null"_s);
	}
	if (trustAnchor == nullptr) {
		$throwNew($NullPointerException, "trustAnchor must be non-null"_s);
	}
	$set(this, trustAnchor, trustAnchor);
	$set(this, policyTree, policyTree);
	$set(this, subjectPublicKey, subjectPublicKey);
}

$TrustAnchor* PKIXCertPathValidatorResult::getTrustAnchor() {
	return this->trustAnchor;
}

$PolicyNode* PKIXCertPathValidatorResult::getPolicyTree() {
	return this->policyTree;
}

$PublicKey* PKIXCertPathValidatorResult::getPublicKey() {
	return this->subjectPublicKey;
}

$Object* PKIXCertPathValidatorResult::clone() {
	$useLocalCurrentObjectStackCache();
	try {
		return $of($CertPathValidatorResult::clone());
	} catch ($CloneNotSupportedException&) {
		$var($CloneNotSupportedException, e, $catch());
		$throwNew($InternalError, $(e->toString()), e);
	}
	$shouldNotReachHere();
}

$String* PKIXCertPathValidatorResult::toString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, sb, $new($StringBuilder));
	sb->append("PKIXCertPathValidatorResult: [\n"_s);
	sb->append($$str({"  Trust Anchor: "_s, $($nc(this->trustAnchor)->toString()), "\n"_s}));
	sb->append($$str({"  Policy Tree: "_s, $($String::valueOf($of(this->policyTree))), "\n"_s}));
	sb->append($$str({"  Subject Public Key: "_s, this->subjectPublicKey, "\n"_s}));
	sb->append("]"_s);
	return sb->toString();
}

PKIXCertPathValidatorResult::PKIXCertPathValidatorResult() {
}

$Class* PKIXCertPathValidatorResult::load$($String* name, bool initialize) {
	$loadClass(PKIXCertPathValidatorResult, name, initialize, &_PKIXCertPathValidatorResult_ClassInfo_, allocate$PKIXCertPathValidatorResult);
	return class$;
}

$Class* PKIXCertPathValidatorResult::class$ = nullptr;

		} // cert
	} // security
} // java