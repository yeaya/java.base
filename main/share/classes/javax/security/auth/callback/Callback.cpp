#include <javax/security/auth/callback/Callback.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace javax {
	namespace security {
		namespace auth {
			namespace callback {

$ClassInfo _Callback_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.security.auth.callback.Callback"
};

$Object* allocate$Callback($Class* clazz) {
	return $of($alloc(Callback));
}

$Class* Callback::load$($String* name, bool initialize) {
	$loadClass(Callback, name, initialize, &_Callback_ClassInfo_, allocate$Callback);
	return class$;
}

$Class* Callback::class$ = nullptr;

			} // callback
		} // auth
	} // security
} // javax