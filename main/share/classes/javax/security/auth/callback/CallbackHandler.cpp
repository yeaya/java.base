#include <javax/security/auth/callback/CallbackHandler.h>
#include <javax/security/auth/callback/Callback.h>
#include <jcpp.h>

using $CallbackArray = $Array<::javax::security::auth::callback::Callback>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace security {
		namespace auth {
			namespace callback {

$Class* CallbackHandler::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"handle", "([Ljavax/security/auth/callback/Callback;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CallbackHandler, handle, void, $CallbackArray*), "java.io.IOException,javax.security.auth.callback.UnsupportedCallbackException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.security.auth.callback.CallbackHandler",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CallbackHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CallbackHandler);
	});
	return class$;
}

$Class* CallbackHandler::class$ = nullptr;

			} // callback
		} // auth
	} // security
} // javax