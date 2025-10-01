#include <javax/security/auth/login/Configuration$ConfigDelegate.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/Provider.h>
#include <javax/security/auth/login/AppConfigurationEntry.h>
#include <javax/security/auth/login/Configuration$Parameters.h>
#include <javax/security/auth/login/Configuration.h>
#include <javax/security/auth/login/ConfigurationSpi.h>
#include <jcpp.h>

using $AppConfigurationEntryArray = $Array<::javax::security::auth::login::AppConfigurationEntry>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Provider = ::java::security::Provider;
using $Configuration = ::javax::security::auth::login::Configuration;
using $Configuration$Parameters = ::javax::security::auth::login::Configuration$Parameters;
using $ConfigurationSpi = ::javax::security::auth::login::ConfigurationSpi;

namespace javax {
	namespace security {
		namespace auth {
			namespace login {

$FieldInfo _Configuration$ConfigDelegate_FieldInfo_[] = {
	{"spi", "Ljavax/security/auth/login/ConfigurationSpi;", nullptr, $PRIVATE, $field(Configuration$ConfigDelegate, spi)},
	{"p", "Ljava/security/Provider;", nullptr, $PRIVATE, $field(Configuration$ConfigDelegate, p)},
	{"type", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Configuration$ConfigDelegate, type)},
	{"params", "Ljavax/security/auth/login/Configuration$Parameters;", nullptr, $PRIVATE, $field(Configuration$ConfigDelegate, params)},
	{}
};

$MethodInfo _Configuration$ConfigDelegate_MethodInfo_[] = {
	{"<init>", "(Ljavax/security/auth/login/ConfigurationSpi;Ljava/security/Provider;Ljava/lang/String;Ljavax/security/auth/login/Configuration$Parameters;)V", nullptr, $PRIVATE, $method(static_cast<void(Configuration$ConfigDelegate::*)($ConfigurationSpi*,$Provider*,$String*,$Configuration$Parameters*)>(&Configuration$ConfigDelegate::init$))},
	{"getAppConfigurationEntry", "(Ljava/lang/String;)[Ljavax/security/auth/login/AppConfigurationEntry;", nullptr, $PUBLIC},
	{"getParameters", "()Ljavax/security/auth/login/Configuration$Parameters;", nullptr, $PUBLIC},
	{"getProvider", "()Ljava/security/Provider;", nullptr, $PUBLIC},
	{"getType", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"refresh", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Configuration$ConfigDelegate_InnerClassesInfo_[] = {
	{"javax.security.auth.login.Configuration$ConfigDelegate", "javax.security.auth.login.Configuration", "ConfigDelegate", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Configuration$ConfigDelegate_ClassInfo_ = {
	$ACC_SUPER,
	"javax.security.auth.login.Configuration$ConfigDelegate",
	"javax.security.auth.login.Configuration",
	nullptr,
	_Configuration$ConfigDelegate_FieldInfo_,
	_Configuration$ConfigDelegate_MethodInfo_,
	nullptr,
	nullptr,
	_Configuration$ConfigDelegate_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.security.auth.login.Configuration"
};

$Object* allocate$Configuration$ConfigDelegate($Class* clazz) {
	return $of($alloc(Configuration$ConfigDelegate));
}

void Configuration$ConfigDelegate::init$($ConfigurationSpi* spi, $Provider* p, $String* type, $Configuration$Parameters* params) {
	$Configuration::init$();
	$set(this, spi, spi);
	$set(this, p, p);
	$set(this, type, type);
	$set(this, params, params);
}

$String* Configuration$ConfigDelegate::getType() {
	return this->type;
}

$Configuration$Parameters* Configuration$ConfigDelegate::getParameters() {
	return this->params;
}

$Provider* Configuration$ConfigDelegate::getProvider() {
	return this->p;
}

$AppConfigurationEntryArray* Configuration$ConfigDelegate::getAppConfigurationEntry($String* name) {
	return $nc(this->spi)->engineGetAppConfigurationEntry(name);
}

void Configuration$ConfigDelegate::refresh() {
	$nc(this->spi)->engineRefresh();
}

Configuration$ConfigDelegate::Configuration$ConfigDelegate() {
}

$Class* Configuration$ConfigDelegate::load$($String* name, bool initialize) {
	$loadClass(Configuration$ConfigDelegate, name, initialize, &_Configuration$ConfigDelegate_ClassInfo_, allocate$Configuration$ConfigDelegate);
	return class$;
}

$Class* Configuration$ConfigDelegate::class$ = nullptr;

			} // login
		} // auth
	} // security
} // javax