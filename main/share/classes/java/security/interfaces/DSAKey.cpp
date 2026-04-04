#include <java/security/interfaces/DSAKey.h>
#include <java/security/interfaces/DSAParams.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DSAParams = ::java::security::interfaces::DSAParams;

namespace java {
	namespace security {
		namespace interfaces {

$Class* DSAKey::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getParams", "()Ljava/security/interfaces/DSAParams;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DSAKey, getParams, $DSAParams*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.security.interfaces.DSAKey",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(DSAKey, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DSAKey);
	});
	return class$;
}

$Class* DSAKey::class$ = nullptr;

		} // interfaces
	} // security
} // java