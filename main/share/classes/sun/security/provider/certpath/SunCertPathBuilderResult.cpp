#include <sun/security/provider/certpath/SunCertPathBuilderResult.h>

#include <java/security/PublicKey.h>
#include <java/security/cert/CertPath.h>
#include <java/security/cert/PKIXCertPathBuilderResult.h>
#include <java/security/cert/PolicyNode.h>
#include <java/security/cert/TrustAnchor.h>
#include <sun/security/provider/certpath/AdjacencyList.h>
#include <sun/security/util/Debug.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PublicKey = ::java::security::PublicKey;
using $CertPath = ::java::security::cert::CertPath;
using $PKIXCertPathBuilderResult = ::java::security::cert::PKIXCertPathBuilderResult;
using $PolicyNode = ::java::security::cert::PolicyNode;
using $TrustAnchor = ::java::security::cert::TrustAnchor;
using $AdjacencyList = ::sun::security::provider::certpath::AdjacencyList;
using $Debug = ::sun::security::util::Debug;

namespace sun {
	namespace security {
		namespace provider {
			namespace certpath {

$FieldInfo _SunCertPathBuilderResult_FieldInfo_[] = {
	{"debug", "Lsun/security/util/Debug;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SunCertPathBuilderResult, debug)},
	{"adjList", "Lsun/security/provider/certpath/AdjacencyList;", nullptr, $PRIVATE, $field(SunCertPathBuilderResult, adjList)},
	{}
};

$MethodInfo _SunCertPathBuilderResult_MethodInfo_[] = {
	{"<init>", "(Ljava/security/cert/CertPath;Ljava/security/cert/TrustAnchor;Ljava/security/cert/PolicyNode;Ljava/security/PublicKey;Lsun/security/provider/certpath/AdjacencyList;)V", nullptr, 0, $method(static_cast<void(SunCertPathBuilderResult::*)($CertPath*,$TrustAnchor*,$PolicyNode*,$PublicKey*,$AdjacencyList*)>(&SunCertPathBuilderResult::init$))},
	{"getAdjacencyList", "()Lsun/security/provider/certpath/AdjacencyList;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _SunCertPathBuilderResult_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.security.provider.certpath.SunCertPathBuilderResult",
	"java.security.cert.PKIXCertPathBuilderResult",
	nullptr,
	_SunCertPathBuilderResult_FieldInfo_,
	_SunCertPathBuilderResult_MethodInfo_
};

$Object* allocate$SunCertPathBuilderResult($Class* clazz) {
	return $of($alloc(SunCertPathBuilderResult));
}

$Debug* SunCertPathBuilderResult::debug = nullptr;

void SunCertPathBuilderResult::init$($CertPath* certPath, $TrustAnchor* trustAnchor, $PolicyNode* policyTree, $PublicKey* subjectPublicKey, $AdjacencyList* adjList) {
	$PKIXCertPathBuilderResult::init$(certPath, trustAnchor, policyTree, subjectPublicKey);
	$set(this, adjList, adjList);
}

$AdjacencyList* SunCertPathBuilderResult::getAdjacencyList() {
	return this->adjList;
}

void clinit$SunCertPathBuilderResult($Class* class$) {
	$assignStatic(SunCertPathBuilderResult::debug, $Debug::getInstance("certpath"_s));
}

SunCertPathBuilderResult::SunCertPathBuilderResult() {
}

$Class* SunCertPathBuilderResult::load$($String* name, bool initialize) {
	$loadClass(SunCertPathBuilderResult, name, initialize, &_SunCertPathBuilderResult_ClassInfo_, clinit$SunCertPathBuilderResult, allocate$SunCertPathBuilderResult);
	return class$;
}

$Class* SunCertPathBuilderResult::class$ = nullptr;

			} // certpath
		} // provider
	} // security
} // sun