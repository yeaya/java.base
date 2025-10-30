#include <java/security/interfaces/XECKey.h>

#include <java/security/spec/AlgorithmParameterSpec.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;

namespace java {
	namespace security {
		namespace interfaces {

$MethodInfo _XECKey_MethodInfo_[] = {
	{"getParams", "()Ljava/security/spec/AlgorithmParameterSpec;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _XECKey_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.security.interfaces.XECKey",
	nullptr,
	nullptr,
	nullptr,
	_XECKey_MethodInfo_
};

$Object* allocate$XECKey($Class* clazz) {
	return $of($alloc(XECKey));
}

$Class* XECKey::load$($String* name, bool initialize) {
	$loadClass(XECKey, name, initialize, &_XECKey_ClassInfo_, allocate$XECKey);
	return class$;
}

$Class* XECKey::class$ = nullptr;

		} // interfaces
	} // security
} // java