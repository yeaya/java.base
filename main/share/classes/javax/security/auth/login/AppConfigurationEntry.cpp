#include <javax/security/auth/login/AppConfigurationEntry.h>

#include <java/util/Collections.h>
#include <java/util/Map.h>
#include <javax/security/auth/login/AppConfigurationEntry$LoginModuleControlFlag.h>
#include <jcpp.h>

#undef OPTIONAL
#undef REQUIRED
#undef REQUISITE
#undef SUFFICIENT

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collections = ::java::util::Collections;
using $Map = ::java::util::Map;
using $AppConfigurationEntry$LoginModuleControlFlag = ::javax::security::auth::login::AppConfigurationEntry$LoginModuleControlFlag;

namespace javax {
	namespace security {
		namespace auth {
			namespace login {

$FieldInfo _AppConfigurationEntry_FieldInfo_[] = {
	{"loginModuleName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(AppConfigurationEntry, loginModuleName)},
	{"controlFlag", "Ljavax/security/auth/login/AppConfigurationEntry$LoginModuleControlFlag;", nullptr, $PRIVATE, $field(AppConfigurationEntry, controlFlag)},
	{"options", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;*>;", $PRIVATE, $field(AppConfigurationEntry, options)},
	{}
};

$MethodInfo _AppConfigurationEntry_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljavax/security/auth/login/AppConfigurationEntry$LoginModuleControlFlag;Ljava/util/Map;)V", "(Ljava/lang/String;Ljavax/security/auth/login/AppConfigurationEntry$LoginModuleControlFlag;Ljava/util/Map<Ljava/lang/String;*>;)V", $PUBLIC, $method(static_cast<void(AppConfigurationEntry::*)($String*,$AppConfigurationEntry$LoginModuleControlFlag*,$Map*)>(&AppConfigurationEntry::init$))},
	{"getControlFlag", "()Ljavax/security/auth/login/AppConfigurationEntry$LoginModuleControlFlag;", nullptr, $PUBLIC},
	{"getLoginModuleName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getOptions", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;*>;", $PUBLIC},
	{}
};

$InnerClassInfo _AppConfigurationEntry_InnerClassesInfo_[] = {
	{"javax.security.auth.login.AppConfigurationEntry$LoginModuleControlFlag", "javax.security.auth.login.AppConfigurationEntry", "LoginModuleControlFlag", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _AppConfigurationEntry_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.security.auth.login.AppConfigurationEntry",
	"java.lang.Object",
	nullptr,
	_AppConfigurationEntry_FieldInfo_,
	_AppConfigurationEntry_MethodInfo_,
	nullptr,
	nullptr,
	_AppConfigurationEntry_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.security.auth.login.AppConfigurationEntry$LoginModuleControlFlag"
};

$Object* allocate$AppConfigurationEntry($Class* clazz) {
	return $of($alloc(AppConfigurationEntry));
}

void AppConfigurationEntry::init$($String* loginModuleName, $AppConfigurationEntry$LoginModuleControlFlag* controlFlag, $Map* options) {
	$init($AppConfigurationEntry$LoginModuleControlFlag);
	if (loginModuleName == nullptr || $nc(loginModuleName)->isEmpty() || (controlFlag != $AppConfigurationEntry$LoginModuleControlFlag::REQUIRED && controlFlag != $AppConfigurationEntry$LoginModuleControlFlag::REQUISITE && controlFlag != $AppConfigurationEntry$LoginModuleControlFlag::SUFFICIENT && controlFlag != $AppConfigurationEntry$LoginModuleControlFlag::OPTIONAL) || options == nullptr) {
		$throwNew($IllegalArgumentException);
	}
	$set(this, loginModuleName, loginModuleName);
	$set(this, controlFlag, controlFlag);
	$set(this, options, $Collections::unmodifiableMap(options));
}

$String* AppConfigurationEntry::getLoginModuleName() {
	return this->loginModuleName;
}

$AppConfigurationEntry$LoginModuleControlFlag* AppConfigurationEntry::getControlFlag() {
	return this->controlFlag;
}

$Map* AppConfigurationEntry::getOptions() {
	return this->options;
}

AppConfigurationEntry::AppConfigurationEntry() {
}

$Class* AppConfigurationEntry::load$($String* name, bool initialize) {
	$loadClass(AppConfigurationEntry, name, initialize, &_AppConfigurationEntry_ClassInfo_, allocate$AppConfigurationEntry);
	return class$;
}

$Class* AppConfigurationEntry::class$ = nullptr;

			} // login
		} // auth
	} // security
} // javax