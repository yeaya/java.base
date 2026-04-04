#include <javax/security/auth/callback/Callback.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace javax {
	namespace security {
		namespace auth {
			namespace callback {

$Class* Callback::load$($String* name, bool initialize) {
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.security.auth.callback.Callback"
	};
	$loadClass(Callback, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Callback);
	});
	return class$;
}

$Class* Callback::class$ = nullptr;

			} // callback
		} // auth
	} // security
} // javax