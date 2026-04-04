#include <javax/security/auth/Destroyable.h>
#include <javax/security/auth/DestroyFailedException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DestroyFailedException = ::javax::security::auth::DestroyFailedException;

namespace javax {
	namespace security {
		namespace auth {

void Destroyable::destroy() {
	$throwNew($DestroyFailedException);
}

bool Destroyable::isDestroyed() {
	return false;
}

$Class* Destroyable::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"destroy", "()V", nullptr, $PUBLIC, $virtualMethod(Destroyable, destroy, void), "javax.security.auth.DestroyFailedException"},
		{"isDestroyed", "()Z", nullptr, $PUBLIC, $virtualMethod(Destroyable, isDestroyed, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.security.auth.Destroyable",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Destroyable, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Destroyable);
	});
	return class$;
}

$Class* Destroyable::class$ = nullptr;

		} // auth
	} // security
} // javax