#include <java/security/interfaces/XECKey.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;

namespace java {
	namespace security {
		namespace interfaces {

$Class* XECKey::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getParams", "()Ljava/security/spec/AlgorithmParameterSpec;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XECKey, getParams, $AlgorithmParameterSpec*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.security.interfaces.XECKey",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(XECKey, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XECKey);
	});
	return class$;
}

$Class* XECKey::class$ = nullptr;

		} // interfaces
	} // security
} // java