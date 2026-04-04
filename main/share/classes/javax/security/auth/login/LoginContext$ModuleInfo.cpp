#include <javax/security/auth/login/LoginContext$ModuleInfo.h>
#include <javax/security/auth/login/AppConfigurationEntry.h>
#include <javax/security/auth/login/LoginContext.h>
#include <javax/security/auth/spi/LoginModule.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AppConfigurationEntry = ::javax::security::auth::login::AppConfigurationEntry;
using $LoginModule = ::javax::security::auth::spi::LoginModule;

namespace javax {
	namespace security {
		namespace auth {
			namespace login {

void LoginContext$ModuleInfo::init$($AppConfigurationEntry* newEntry, $LoginModule* newModule) {
	$set(this, entry, newEntry);
	$set(this, module, newModule);
}

LoginContext$ModuleInfo::LoginContext$ModuleInfo() {
}

$Class* LoginContext$ModuleInfo::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"entry", "Ljavax/security/auth/login/AppConfigurationEntry;", nullptr, 0, $field(LoginContext$ModuleInfo, entry)},
		{"module", "Ljavax/security/auth/spi/LoginModule;", nullptr, 0, $field(LoginContext$ModuleInfo, module)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/security/auth/login/AppConfigurationEntry;Ljavax/security/auth/spi/LoginModule;)V", nullptr, 0, $method(LoginContext$ModuleInfo, init$, void, $AppConfigurationEntry*, $LoginModule*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.security.auth.login.LoginContext$ModuleInfo", "javax.security.auth.login.LoginContext", "ModuleInfo", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.security.auth.login.LoginContext$ModuleInfo",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.security.auth.login.LoginContext"
	};
	$loadClass(LoginContext$ModuleInfo, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LoginContext$ModuleInfo);
	});
	return class$;
}

$Class* LoginContext$ModuleInfo::class$ = nullptr;

			} // login
		} // auth
	} // security
} // javax