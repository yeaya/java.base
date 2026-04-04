#include <java/security/AuthProvider.h>
#include <java/security/Provider.h>
#include <javax/security/auth/Subject.h>
#include <javax/security/auth/callback/CallbackHandler.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Provider = ::java::security::Provider;
using $Subject = ::javax::security::auth::Subject;
using $CallbackHandler = ::javax::security::auth::callback::CallbackHandler;

namespace java {
	namespace security {

void AuthProvider::init$($String* name, double version, $String* info) {
	$Provider::init$(name, $($Double::toString(version)), info);
}

void AuthProvider::init$($String* name, $String* versionStr, $String* info) {
	$Provider::init$(name, versionStr, info);
}

AuthProvider::AuthProvider() {
}

$Class* AuthProvider::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AuthProvider, serialVersionUID)},
		{}
	};
	$NamedAttribute init$methodAnnotations$$$namedAttribute[] = {
		{"since", 's', "9"},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", init$methodAnnotations$$$namedAttribute},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;DLjava/lang/String;)V", nullptr, $PROTECTED | $DEPRECATED, $method(AuthProvider, init$, void, $String*, double, $String*), nullptr, nullptr, init$methodAnnotations$$},
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PROTECTED, $method(AuthProvider, init$, void, $String*, $String*, $String*)},
		{"login", "(Ljavax/security/auth/Subject;Ljavax/security/auth/callback/CallbackHandler;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AuthProvider, login, void, $Subject*, $CallbackHandler*), "javax.security.auth.login.LoginException"},
		{"logout", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AuthProvider, logout, void), "javax.security.auth.login.LoginException"},
		{"setCallbackHandler", "(Ljavax/security/auth/callback/CallbackHandler;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AuthProvider, setCallbackHandler, void, $CallbackHandler*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"java.security.AuthProvider",
		"java.security.Provider",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(AuthProvider, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(AuthProvider));
	});
	return class$;
}

$Class* AuthProvider::class$ = nullptr;

	} // security
} // java