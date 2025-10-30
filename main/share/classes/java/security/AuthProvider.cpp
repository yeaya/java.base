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

$NamedAttribute AuthProvider_Attribute_var$0[] = {
	{"since", 's', "9"},
	{}
};

$CompoundAttribute _AuthProvider_MethodAnnotations_init$0[] = {
	{"Ljava/lang/Deprecated;", AuthProvider_Attribute_var$0},
	{}
};

$FieldInfo _AuthProvider_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AuthProvider, serialVersionUID)},
	{}
};

$MethodInfo _AuthProvider_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;DLjava/lang/String;)V", nullptr, $PROTECTED | $DEPRECATED, $method(static_cast<void(AuthProvider::*)($String*,double,$String*)>(&AuthProvider::init$)), nullptr, nullptr, _AuthProvider_MethodAnnotations_init$0},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PROTECTED, $method(static_cast<void(AuthProvider::*)($String*,$String*,$String*)>(&AuthProvider::init$))},
	{"login", "(Ljavax/security/auth/Subject;Ljavax/security/auth/callback/CallbackHandler;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.security.auth.login.LoginException"},
	{"logout", "()V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.security.auth.login.LoginException"},
	{"setCallbackHandler", "(Ljavax/security/auth/callback/CallbackHandler;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _AuthProvider_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.security.AuthProvider",
	"java.security.Provider",
	nullptr,
	_AuthProvider_FieldInfo_,
	_AuthProvider_MethodInfo_
};

$Object* allocate$AuthProvider($Class* clazz) {
	return $of($alloc(AuthProvider));
}

void AuthProvider::init$($String* name, double version, $String* info) {
	$Provider::init$(name, $($Double::toString(version)), info);
}

void AuthProvider::init$($String* name, $String* versionStr, $String* info) {
	$Provider::init$(name, versionStr, info);
}

AuthProvider::AuthProvider() {
}

$Class* AuthProvider::load$($String* name, bool initialize) {
	$loadClass(AuthProvider, name, initialize, &_AuthProvider_ClassInfo_, allocate$AuthProvider);
	return class$;
}

$Class* AuthProvider::class$ = nullptr;

	} // security
} // java