#include <java/security/cert/PolicyNode.h>

#include <java/util/Iterator.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $Set = ::java::util::Set;

namespace java {
	namespace security {
		namespace cert {

$MethodInfo _PolicyNode_MethodInfo_[] = {
	{"getChildren", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<+Ljava/security/cert/PolicyNode;>;", $PUBLIC | $ABSTRACT, $virtualMethod(PolicyNode, getChildren, $Iterator*)},
	{"getDepth", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PolicyNode, getDepth, int32_t)},
	{"getExpectedPolicies", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/String;>;", $PUBLIC | $ABSTRACT, $virtualMethod(PolicyNode, getExpectedPolicies, $Set*)},
	{"getParent", "()Ljava/security/cert/PolicyNode;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PolicyNode, getParent, PolicyNode*)},
	{"getPolicyQualifiers", "()Ljava/util/Set;", "()Ljava/util/Set<+Ljava/security/cert/PolicyQualifierInfo;>;", $PUBLIC | $ABSTRACT, $virtualMethod(PolicyNode, getPolicyQualifiers, $Set*)},
	{"getValidPolicy", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PolicyNode, getValidPolicy, $String*)},
	{"isCritical", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PolicyNode, isCritical, bool)},
	{}
};

$ClassInfo _PolicyNode_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.security.cert.PolicyNode",
	nullptr,
	nullptr,
	nullptr,
	_PolicyNode_MethodInfo_
};

$Object* allocate$PolicyNode($Class* clazz) {
	return $of($alloc(PolicyNode));
}

$Class* PolicyNode::load$($String* name, bool initialize) {
	$loadClass(PolicyNode, name, initialize, &_PolicyNode_ClassInfo_, allocate$PolicyNode);
	return class$;
}

$Class* PolicyNode::class$ = nullptr;

		} // cert
	} // security
} // java