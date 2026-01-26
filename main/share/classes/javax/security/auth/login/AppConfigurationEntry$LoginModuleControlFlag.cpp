#include <javax/security/auth/login/AppConfigurationEntry$LoginModuleControlFlag.h>

#include <javax/security/auth/login/AppConfigurationEntry.h>
#include <sun/security/util/ResourcesMgr.h>
#include <jcpp.h>

#undef OPTIONAL
#undef REQUIRED
#undef REQUISITE
#undef SUFFICIENT

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ResourcesMgr = ::sun::security::util::ResourcesMgr;

namespace javax {
	namespace security {
		namespace auth {
			namespace login {

$FieldInfo _AppConfigurationEntry$LoginModuleControlFlag_FieldInfo_[] = {
	{"controlFlag", "Ljava/lang/String;", nullptr, $PRIVATE, $field(AppConfigurationEntry$LoginModuleControlFlag, controlFlag)},
	{"REQUIRED", "Ljavax/security/auth/login/AppConfigurationEntry$LoginModuleControlFlag;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AppConfigurationEntry$LoginModuleControlFlag, REQUIRED)},
	{"REQUISITE", "Ljavax/security/auth/login/AppConfigurationEntry$LoginModuleControlFlag;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AppConfigurationEntry$LoginModuleControlFlag, REQUISITE)},
	{"SUFFICIENT", "Ljavax/security/auth/login/AppConfigurationEntry$LoginModuleControlFlag;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AppConfigurationEntry$LoginModuleControlFlag, SUFFICIENT)},
	{"OPTIONAL", "Ljavax/security/auth/login/AppConfigurationEntry$LoginModuleControlFlag;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(AppConfigurationEntry$LoginModuleControlFlag, OPTIONAL)},
	{}
};

$MethodInfo _AppConfigurationEntry$LoginModuleControlFlag_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(AppConfigurationEntry$LoginModuleControlFlag, init$, void, $String*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AppConfigurationEntry$LoginModuleControlFlag, toString, $String*)},
	{}
};

$InnerClassInfo _AppConfigurationEntry$LoginModuleControlFlag_InnerClassesInfo_[] = {
	{"javax.security.auth.login.AppConfigurationEntry$LoginModuleControlFlag", "javax.security.auth.login.AppConfigurationEntry", "LoginModuleControlFlag", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _AppConfigurationEntry$LoginModuleControlFlag_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.security.auth.login.AppConfigurationEntry$LoginModuleControlFlag",
	"java.lang.Object",
	nullptr,
	_AppConfigurationEntry$LoginModuleControlFlag_FieldInfo_,
	_AppConfigurationEntry$LoginModuleControlFlag_MethodInfo_,
	nullptr,
	nullptr,
	_AppConfigurationEntry$LoginModuleControlFlag_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.security.auth.login.AppConfigurationEntry"
};

$Object* allocate$AppConfigurationEntry$LoginModuleControlFlag($Class* clazz) {
	return $of($alloc(AppConfigurationEntry$LoginModuleControlFlag));
}

AppConfigurationEntry$LoginModuleControlFlag* AppConfigurationEntry$LoginModuleControlFlag::REQUIRED = nullptr;
AppConfigurationEntry$LoginModuleControlFlag* AppConfigurationEntry$LoginModuleControlFlag::REQUISITE = nullptr;
AppConfigurationEntry$LoginModuleControlFlag* AppConfigurationEntry$LoginModuleControlFlag::SUFFICIENT = nullptr;
AppConfigurationEntry$LoginModuleControlFlag* AppConfigurationEntry$LoginModuleControlFlag::OPTIONAL = nullptr;

void AppConfigurationEntry$LoginModuleControlFlag::init$($String* controlFlag) {
	$set(this, controlFlag, controlFlag);
}

$String* AppConfigurationEntry$LoginModuleControlFlag::toString() {
	return ($str({$($ResourcesMgr::getString("LoginModuleControlFlag."_s)), this->controlFlag}));
}

void clinit$AppConfigurationEntry$LoginModuleControlFlag($Class* class$) {
	$assignStatic(AppConfigurationEntry$LoginModuleControlFlag::REQUIRED, $new(AppConfigurationEntry$LoginModuleControlFlag, "required"_s));
	$assignStatic(AppConfigurationEntry$LoginModuleControlFlag::REQUISITE, $new(AppConfigurationEntry$LoginModuleControlFlag, "requisite"_s));
	$assignStatic(AppConfigurationEntry$LoginModuleControlFlag::SUFFICIENT, $new(AppConfigurationEntry$LoginModuleControlFlag, "sufficient"_s));
	$assignStatic(AppConfigurationEntry$LoginModuleControlFlag::OPTIONAL, $new(AppConfigurationEntry$LoginModuleControlFlag, "optional"_s));
}

AppConfigurationEntry$LoginModuleControlFlag::AppConfigurationEntry$LoginModuleControlFlag() {
}

$Class* AppConfigurationEntry$LoginModuleControlFlag::load$($String* name, bool initialize) {
	$loadClass(AppConfigurationEntry$LoginModuleControlFlag, name, initialize, &_AppConfigurationEntry$LoginModuleControlFlag_ClassInfo_, clinit$AppConfigurationEntry$LoginModuleControlFlag, allocate$AppConfigurationEntry$LoginModuleControlFlag);
	return class$;
}

$Class* AppConfigurationEntry$LoginModuleControlFlag::class$ = nullptr;

			} // login
		} // auth
	} // security
} // javax