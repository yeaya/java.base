#include <javax/security/auth/login/Configuration$Parameters.h>
#include <javax/security/auth/login/Configuration.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;

namespace javax {
	namespace security {
		namespace auth {
			namespace login {

$Class* Configuration$Parameters::load$($String* name, bool initialize) {
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.security.auth.login.Configuration$Parameters", "javax.security.auth.login.Configuration", "Parameters", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.security.auth.login.Configuration$Parameters",
		nullptr,
		nullptr,
		nullptr,
		nullptr,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.security.auth.login.Configuration"
	};
	$loadClass(Configuration$Parameters, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Configuration$Parameters);
	});
	return class$;
}

$Class* Configuration$Parameters::class$ = nullptr;

			} // login
		} // auth
	} // security
} // javax