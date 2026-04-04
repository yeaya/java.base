#include <sun/security/timestamp/Timestamper.h>
#include <sun/security/timestamp/TSRequest.h>
#include <sun/security/timestamp/TSResponse.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TSRequest = ::sun::security::timestamp::TSRequest;
using $TSResponse = ::sun::security::timestamp::TSResponse;

namespace sun {
	namespace security {
		namespace timestamp {

$Class* Timestamper::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"generateTimestamp", "(Lsun/security/timestamp/TSRequest;)Lsun/security/timestamp/TSResponse;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Timestamper, generateTimestamp, $TSResponse*, $TSRequest*), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.security.timestamp.Timestamper",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Timestamper, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Timestamper);
	});
	return class$;
}

$Class* Timestamper::class$ = nullptr;

		} // timestamp
	} // security
} // sun