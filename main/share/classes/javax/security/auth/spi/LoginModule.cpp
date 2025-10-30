#include <javax/security/auth/spi/LoginModule.h>

#include <java/util/Map.h>
#include <javax/security/auth/Subject.h>
#include <javax/security/auth/callback/CallbackHandler.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Map = ::java::util::Map;
using $Subject = ::javax::security::auth::Subject;
using $CallbackHandler = ::javax::security::auth::callback::CallbackHandler;

namespace javax {
	namespace security {
		namespace auth {
			namespace spi {

$MethodInfo _LoginModule_MethodInfo_[] = {
	{"abort", "()Z", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.security.auth.login.LoginException"},
	{"commit", "()Z", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.security.auth.login.LoginException"},
	{"initialize", "(Ljavax/security/auth/Subject;Ljavax/security/auth/callback/CallbackHandler;Ljava/util/Map;Ljava/util/Map;)V", "(Ljavax/security/auth/Subject;Ljavax/security/auth/callback/CallbackHandler;Ljava/util/Map<Ljava/lang/String;*>;Ljava/util/Map<Ljava/lang/String;*>;)V", $PUBLIC | $ABSTRACT},
	{"login", "()Z", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.security.auth.login.LoginException"},
	{"logout", "()Z", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.security.auth.login.LoginException"},
	{}
};

$ClassInfo _LoginModule_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.security.auth.spi.LoginModule",
	nullptr,
	nullptr,
	nullptr,
	_LoginModule_MethodInfo_
};

$Object* allocate$LoginModule($Class* clazz) {
	return $of($alloc(LoginModule));
}

$Class* LoginModule::load$($String* name, bool initialize) {
	$loadClass(LoginModule, name, initialize, &_LoginModule_ClassInfo_, allocate$LoginModule);
	return class$;
}

$Class* LoginModule::class$ = nullptr;

			} // spi
		} // auth
	} // security
} // javax