#include <javax/security/auth/Refreshable.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace security {
		namespace auth {

$Class* Refreshable::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"isCurrent", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Refreshable, isCurrent, bool)},
		{"refresh", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Refreshable, refresh, void), "javax.security.auth.RefreshFailedException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.security.auth.Refreshable",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Refreshable, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Refreshable);
	});
	return class$;
}

$Class* Refreshable::class$ = nullptr;

		} // auth
	} // security
} // javax