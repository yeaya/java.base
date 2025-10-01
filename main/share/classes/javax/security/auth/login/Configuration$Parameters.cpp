#include <javax/security/auth/login/Configuration$Parameters.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/security/auth/login/Configuration.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Configuration = ::javax::security::auth::login::Configuration;

namespace javax {
	namespace security {
		namespace auth {
			namespace login {

$InnerClassInfo _Configuration$Parameters_InnerClassesInfo_[] = {
	{"javax.security.auth.login.Configuration$Parameters", "javax.security.auth.login.Configuration", "Parameters", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Configuration$Parameters_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.security.auth.login.Configuration$Parameters",
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	_Configuration$Parameters_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.security.auth.login.Configuration"
};

$Object* allocate$Configuration$Parameters($Class* clazz) {
	return $of($alloc(Configuration$Parameters));
}

$Class* Configuration$Parameters::load$($String* name, bool initialize) {
	$loadClass(Configuration$Parameters, name, initialize, &_Configuration$Parameters_ClassInfo_, allocate$Configuration$Parameters);
	return class$;
}

$Class* Configuration$Parameters::class$ = nullptr;

			} // login
		} // auth
	} // security
} // javax