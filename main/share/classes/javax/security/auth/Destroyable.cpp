#include <javax/security/auth/Destroyable.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/security/auth/DestroyFailedException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DestroyFailedException = ::javax::security::auth::DestroyFailedException;

namespace javax {
	namespace security {
		namespace auth {

$MethodInfo _Destroyable_MethodInfo_[] = {
	{"destroy", "()V", nullptr, $PUBLIC, nullptr, "javax.security.auth.DestroyFailedException"},
	{"isDestroyed", "()Z", nullptr, $PUBLIC},
	{}
};

$ClassInfo _Destroyable_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.security.auth.Destroyable",
	nullptr,
	nullptr,
	nullptr,
	_Destroyable_MethodInfo_
};

$Object* allocate$Destroyable($Class* clazz) {
	return $of($alloc(Destroyable));
}

void Destroyable::destroy() {
	$throwNew($DestroyFailedException);
}

bool Destroyable::isDestroyed() {
	return false;
}

$Class* Destroyable::load$($String* name, bool initialize) {
	$loadClass(Destroyable, name, initialize, &_Destroyable_ClassInfo_, allocate$Destroyable);
	return class$;
}

$Class* Destroyable::class$ = nullptr;

		} // auth
	} // security
} // javax