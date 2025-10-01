#include <javax/security/auth/callback/CallbackHandler.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/security/auth/callback/Callback.h>
#include <jcpp.h>

using $CallbackArray = $Array<::javax::security::auth::callback::Callback>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace security {
		namespace auth {
			namespace callback {

$MethodInfo _CallbackHandler_MethodInfo_[] = {
	{"handle", "([Ljavax/security/auth/callback/Callback;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException,javax.security.auth.callback.UnsupportedCallbackException"},
	{}
};

$ClassInfo _CallbackHandler_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.security.auth.callback.CallbackHandler",
	nullptr,
	nullptr,
	nullptr,
	_CallbackHandler_MethodInfo_
};

$Object* allocate$CallbackHandler($Class* clazz) {
	return $of($alloc(CallbackHandler));
}

$Class* CallbackHandler::load$($String* name, bool initialize) {
	$loadClass(CallbackHandler, name, initialize, &_CallbackHandler_ClassInfo_, allocate$CallbackHandler);
	return class$;
}

$Class* CallbackHandler::class$ = nullptr;

			} // callback
		} // auth
	} // security
} // javax