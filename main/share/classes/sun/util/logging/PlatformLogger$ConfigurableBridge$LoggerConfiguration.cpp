#include <sun/util/logging/PlatformLogger$ConfigurableBridge$LoggerConfiguration.h>
#include <sun/util/logging/PlatformLogger$ConfigurableBridge.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace sun {
	namespace util {
		namespace logging {

void PlatformLogger$ConfigurableBridge$LoggerConfiguration::init$() {
}

PlatformLogger$ConfigurableBridge$LoggerConfiguration::PlatformLogger$ConfigurableBridge$LoggerConfiguration() {
}

$Class* PlatformLogger$ConfigurableBridge$LoggerConfiguration::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(PlatformLogger$ConfigurableBridge$LoggerConfiguration, init$, void)},
		{"getPlatformLevel", "()Lsun/util/logging/PlatformLogger$Level;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PlatformLogger$ConfigurableBridge$LoggerConfiguration, getPlatformLevel, $PlatformLogger$Level*)},
		{"setPlatformLevel", "(Lsun/util/logging/PlatformLogger$Level;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PlatformLogger$ConfigurableBridge$LoggerConfiguration, setPlatformLevel, void, $PlatformLogger$Level*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.util.logging.PlatformLogger$ConfigurableBridge", "sun.util.logging.PlatformLogger", "ConfigurableBridge", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"sun.util.logging.PlatformLogger$ConfigurableBridge$LoggerConfiguration", "sun.util.logging.PlatformLogger$ConfigurableBridge", "LoggerConfiguration", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"sun.util.logging.PlatformLogger$ConfigurableBridge$LoggerConfiguration",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.util.logging.PlatformLogger"
	};
	$loadClass(PlatformLogger$ConfigurableBridge$LoggerConfiguration, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PlatformLogger$ConfigurableBridge$LoggerConfiguration);
	});
	return class$;
}

$Class* PlatformLogger$ConfigurableBridge$LoggerConfiguration::class$ = nullptr;

		} // logging
	} // util
} // sun