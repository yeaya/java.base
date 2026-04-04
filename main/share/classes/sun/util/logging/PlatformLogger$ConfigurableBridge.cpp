#include <sun/util/logging/PlatformLogger$ConfigurableBridge.h>
#include <sun/util/logging/PlatformLogger$Bridge.h>
#include <sun/util/logging/PlatformLogger$ConfigurableBridge$LoggerConfiguration.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PlatformLogger$Bridge = ::sun::util::logging::PlatformLogger$Bridge;
using $PlatformLogger$ConfigurableBridge$LoggerConfiguration = ::sun::util::logging::PlatformLogger$ConfigurableBridge$LoggerConfiguration;

namespace sun {
	namespace util {
		namespace logging {

$PlatformLogger$ConfigurableBridge$LoggerConfiguration* PlatformLogger$ConfigurableBridge::getLoggerConfiguration() {
	return nullptr;
}

$PlatformLogger$ConfigurableBridge$LoggerConfiguration* PlatformLogger$ConfigurableBridge::getLoggerConfiguration($PlatformLogger$Bridge* logger) {
	if ($instanceOf(PlatformLogger$ConfigurableBridge, logger)) {
		return $cast(PlatformLogger$ConfigurableBridge, logger)->getLoggerConfiguration();
	} else {
		return nullptr;
	}
}

$Class* PlatformLogger$ConfigurableBridge::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getLoggerConfiguration", "()Lsun/util/logging/PlatformLogger$ConfigurableBridge$LoggerConfiguration;", nullptr, $PUBLIC, $virtualMethod(PlatformLogger$ConfigurableBridge, getLoggerConfiguration, $PlatformLogger$ConfigurableBridge$LoggerConfiguration*)},
		{"getLoggerConfiguration", "(Lsun/util/logging/PlatformLogger$Bridge;)Lsun/util/logging/PlatformLogger$ConfigurableBridge$LoggerConfiguration;", nullptr, $PUBLIC | $STATIC, $staticMethod(PlatformLogger$ConfigurableBridge, getLoggerConfiguration, $PlatformLogger$ConfigurableBridge$LoggerConfiguration*, $PlatformLogger$Bridge*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.util.logging.PlatformLogger$ConfigurableBridge", "sun.util.logging.PlatformLogger", "ConfigurableBridge", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"sun.util.logging.PlatformLogger$ConfigurableBridge$LoggerConfiguration", "sun.util.logging.PlatformLogger$ConfigurableBridge", "LoggerConfiguration", $PUBLIC | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.util.logging.PlatformLogger$ConfigurableBridge",
		nullptr,
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
	$loadClass(PlatformLogger$ConfigurableBridge, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PlatformLogger$ConfigurableBridge);
	});
	return class$;
}

$Class* PlatformLogger$ConfigurableBridge::class$ = nullptr;

		} // logging
	} // util
} // sun