#include <sun/security/provider/ConfigFile.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$FieldInfo _ConfigFile_FieldInfo_[] = {
	{"spi", "Lsun/security/provider/ConfigFile$Spi;", nullptr, $PRIVATE | $FINAL, $field(ConfigFile, spi)},
	{}
};

$MethodInfo _ConfigFile_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ConfigFile::*)()>(&ConfigFile::init$))},
	{"getAppConfigurationEntry", "(Ljava/lang/String;)[Ljavax/security/auth/login/AppConfigurationEntry;", nullptr, $PUBLIC},
	{"refresh", "()V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{}
};

$InnerClassInfo _ConfigFile_InnerClassesInfo_[] = {
	{"sun.security.provider.ConfigFile$Spi", "sun.security.provider.ConfigFile", "Spi", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _ConfigFile_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.security.provider.ConfigFile",
	"javax.security.auth.login.Configuration",
	nullptr,
	_ConfigFile_FieldInfo_,
	_ConfigFile_MethodInfo_,
	nullptr,
	nullptr,
	_ConfigFile_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.security.provider.ConfigFile$Spi,sun.security.provider.ConfigFile$Spi$2,sun.security.provider.ConfigFile$Spi$1"
};

$Object* allocate$ConfigFile($Class* clazz) {
	return $of($alloc(ConfigFile));
}

void ConfigFile::init$() {
	$Configuration::init$();
	$set(this, spi, $new($ConfigFile$Spi));
}

$AppConfigurationEntryArray* ConfigFile::getAppConfigurationEntry($String* appName) {
	return $nc(this->spi)->engineGetAppConfigurationEntry(appName);
}

void ConfigFile::refresh() {
	$synchronized(this) {
		$nc(this->spi)->engineRefresh();
	}
}

ConfigFile::ConfigFile() {
}

$Class* ConfigFile::load$($String* name, bool initialize) {
	$loadClass(ConfigFile, name, initialize, &_ConfigFile_ClassInfo_, allocate$ConfigFile);
	return class$;
}

$Class* ConfigFile::class$ = nullptr;

		} // provider
	} // security
} // sun