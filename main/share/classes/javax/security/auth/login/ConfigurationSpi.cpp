#include <javax/security/auth/login/ConfigurationSpi.h>

#include <javax/security/auth/login/AppConfigurationEntry.h>
#include <jcpp.h>

using $AppConfigurationEntryArray = $Array<::javax::security::auth::login::AppConfigurationEntry>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace security {
		namespace auth {
			namespace login {

$MethodInfo _ConfigurationSpi_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(ConfigurationSpi, init$, void)},
	{"engineGetAppConfigurationEntry", "(Ljava/lang/String;)[Ljavax/security/auth/login/AppConfigurationEntry;", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(ConfigurationSpi, engineGetAppConfigurationEntry, $AppConfigurationEntryArray*, $String*)},
	{"engineRefresh", "()V", nullptr, $PROTECTED, $virtualMethod(ConfigurationSpi, engineRefresh, void)},
	{}
};

$ClassInfo _ConfigurationSpi_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.security.auth.login.ConfigurationSpi",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ConfigurationSpi_MethodInfo_
};

$Object* allocate$ConfigurationSpi($Class* clazz) {
	return $of($alloc(ConfigurationSpi));
}

void ConfigurationSpi::init$() {
}

void ConfigurationSpi::engineRefresh() {
}

ConfigurationSpi::ConfigurationSpi() {
}

$Class* ConfigurationSpi::load$($String* name, bool initialize) {
	$loadClass(ConfigurationSpi, name, initialize, &_ConfigurationSpi_ClassInfo_, allocate$ConfigurationSpi);
	return class$;
}

$Class* ConfigurationSpi::class$ = nullptr;

			} // login
		} // auth
	} // security
} // javax