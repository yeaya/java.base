#include <javax/security/auth/login/LoginContext$ModuleInfo.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/security/auth/login/AppConfigurationEntry.h>
#include <javax/security/auth/login/LoginContext.h>
#include <javax/security/auth/spi/LoginModule.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AppConfigurationEntry = ::javax::security::auth::login::AppConfigurationEntry;
using $LoginContext = ::javax::security::auth::login::LoginContext;
using $LoginModule = ::javax::security::auth::spi::LoginModule;

namespace javax {
	namespace security {
		namespace auth {
			namespace login {

$FieldInfo _LoginContext$ModuleInfo_FieldInfo_[] = {
	{"entry", "Ljavax/security/auth/login/AppConfigurationEntry;", nullptr, 0, $field(LoginContext$ModuleInfo, entry)},
	{"module", "Ljavax/security/auth/spi/LoginModule;", nullptr, 0, $field(LoginContext$ModuleInfo, module)},
	{}
};

$MethodInfo _LoginContext$ModuleInfo_MethodInfo_[] = {
	{"<init>", "(Ljavax/security/auth/login/AppConfigurationEntry;Ljavax/security/auth/spi/LoginModule;)V", nullptr, 0, $method(static_cast<void(LoginContext$ModuleInfo::*)($AppConfigurationEntry*,$LoginModule*)>(&LoginContext$ModuleInfo::init$))},
	{}
};

$InnerClassInfo _LoginContext$ModuleInfo_InnerClassesInfo_[] = {
	{"javax.security.auth.login.LoginContext$ModuleInfo", "javax.security.auth.login.LoginContext", "ModuleInfo", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _LoginContext$ModuleInfo_ClassInfo_ = {
	$ACC_SUPER,
	"javax.security.auth.login.LoginContext$ModuleInfo",
	"java.lang.Object",
	nullptr,
	_LoginContext$ModuleInfo_FieldInfo_,
	_LoginContext$ModuleInfo_MethodInfo_,
	nullptr,
	nullptr,
	_LoginContext$ModuleInfo_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.security.auth.login.LoginContext"
};

$Object* allocate$LoginContext$ModuleInfo($Class* clazz) {
	return $of($alloc(LoginContext$ModuleInfo));
}

void LoginContext$ModuleInfo::init$($AppConfigurationEntry* newEntry, $LoginModule* newModule) {
	$set(this, entry, newEntry);
	$set(this, module, newModule);
}

LoginContext$ModuleInfo::LoginContext$ModuleInfo() {
}

$Class* LoginContext$ModuleInfo::load$($String* name, bool initialize) {
	$loadClass(LoginContext$ModuleInfo, name, initialize, &_LoginContext$ModuleInfo_ClassInfo_, allocate$LoginContext$ModuleInfo);
	return class$;
}

$Class* LoginContext$ModuleInfo::class$ = nullptr;

			} // login
		} // auth
	} // security
} // javax