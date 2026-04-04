#include <sun/security/provider/ConfigFile.h>
#include <javax/security/auth/login/AppConfigurationEntry.h>
#include <javax/security/auth/login/Configuration.h>
#include <sun/security/provider/ConfigFile$Spi.h>
#include <jcpp.h>

using $AppConfigurationEntryArray = $Array<::javax::security::auth::login::AppConfigurationEntry>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Configuration = ::javax::security::auth::login::Configuration;
using $ConfigFile$Spi = ::sun::security::provider::ConfigFile$Spi;

namespace sun {
	namespace security {
		namespace provider {

void ConfigFile::init$() {
	$Configuration::init$();
	$set(this, spi, $new($ConfigFile$Spi));
}

$AppConfigurationEntryArray* ConfigFile::getAppConfigurationEntry($String* appName) {
	return this->spi->engineGetAppConfigurationEntry(appName);
}

void ConfigFile::refresh() {
	$synchronized(this) {
		this->spi->engineRefresh();
	}
}

ConfigFile::ConfigFile() {
}

$Class* ConfigFile::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"spi", "Lsun/security/provider/ConfigFile$Spi;", nullptr, $PRIVATE | $FINAL, $field(ConfigFile, spi)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ConfigFile, init$, void)},
		{"getAppConfigurationEntry", "(Ljava/lang/String;)[Ljavax/security/auth/login/AppConfigurationEntry;", nullptr, $PUBLIC, $virtualMethod(ConfigFile, getAppConfigurationEntry, $AppConfigurationEntryArray*, $String*)},
		{"refresh", "()V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(ConfigFile, refresh, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.provider.ConfigFile$Spi", "sun.security.provider.ConfigFile", "Spi", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.security.provider.ConfigFile",
		"javax.security.auth.login.Configuration",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.security.provider.ConfigFile$Spi,sun.security.provider.ConfigFile$Spi$2,sun.security.provider.ConfigFile$Spi$1"
	};
	$loadClass(ConfigFile, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ConfigFile);
	});
	return class$;
}

$Class* ConfigFile::class$ = nullptr;

		} // provider
	} // security
} // sun