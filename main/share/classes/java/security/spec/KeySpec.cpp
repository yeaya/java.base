#include <java/security/spec/KeySpec.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace java {
	namespace security {
		namespace spec {

$Class* KeySpec::load$($String* name, bool initialize) {
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.security.spec.KeySpec"
	};
	$loadClass(KeySpec, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(KeySpec);
	});
	return class$;
}

$Class* KeySpec::class$ = nullptr;

		} // spec
	} // security
} // java