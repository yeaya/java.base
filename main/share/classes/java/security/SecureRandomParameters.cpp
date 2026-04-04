#include <java/security/SecureRandomParameters.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace java {
	namespace security {

$Class* SecureRandomParameters::load$($String* name, bool initialize) {
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.security.SecureRandomParameters"
	};
	$loadClass(SecureRandomParameters, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SecureRandomParameters);
	});
	return class$;
}

$Class* SecureRandomParameters::class$ = nullptr;

	} // security
} // java