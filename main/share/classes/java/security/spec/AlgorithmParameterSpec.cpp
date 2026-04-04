#include <java/security/spec/AlgorithmParameterSpec.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace java {
	namespace security {
		namespace spec {

$Class* AlgorithmParameterSpec::load$($String* name, bool initialize) {
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.security.spec.AlgorithmParameterSpec"
	};
	$loadClass(AlgorithmParameterSpec, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AlgorithmParameterSpec);
	});
	return class$;
}

$Class* AlgorithmParameterSpec::class$ = nullptr;

		} // spec
	} // security
} // java