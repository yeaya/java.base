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

$MethodInfo _PlatformLogger$ConfigurableBridge_MethodInfo_[] = {
	{"getLoggerConfiguration", "()Lsun/util/logging/PlatformLogger$ConfigurableBridge$LoggerConfiguration;", nullptr, $PUBLIC},
	{"getLoggerConfiguration", "(Lsun/util/logging/PlatformLogger$Bridge;)Lsun/util/logging/PlatformLogger$ConfigurableBridge$LoggerConfiguration;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$PlatformLogger$ConfigurableBridge$LoggerConfiguration*(*)($PlatformLogger$Bridge*)>(&PlatformLogger$ConfigurableBridge::getLoggerConfiguration))},
	{}
};

$InnerClassInfo _PlatformLogger$ConfigurableBridge_InnerClassesInfo_[] = {
	{"sun.util.logging.PlatformLogger$ConfigurableBridge", "sun.util.logging.PlatformLogger", "ConfigurableBridge", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"sun.util.logging.PlatformLogger$ConfigurableBridge$LoggerConfiguration", "sun.util.logging.PlatformLogger$ConfigurableBridge", "LoggerConfiguration", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _PlatformLogger$ConfigurableBridge_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.util.logging.PlatformLogger$ConfigurableBridge",
	nullptr,
	nullptr,
	nullptr,
	_PlatformLogger$ConfigurableBridge_MethodInfo_,
	nullptr,
	nullptr,
	_PlatformLogger$ConfigurableBridge_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.util.logging.PlatformLogger"
};

$Object* allocate$PlatformLogger$ConfigurableBridge($Class* clazz) {
	return $of($alloc(PlatformLogger$ConfigurableBridge));
}

$PlatformLogger$ConfigurableBridge$LoggerConfiguration* PlatformLogger$ConfigurableBridge::getLoggerConfiguration() {
	return nullptr;
}

$PlatformLogger$ConfigurableBridge$LoggerConfiguration* PlatformLogger$ConfigurableBridge::getLoggerConfiguration($PlatformLogger$Bridge* logger) {
	if ($instanceOf(PlatformLogger$ConfigurableBridge, logger)) {
		return $nc(($cast(PlatformLogger$ConfigurableBridge, logger)))->getLoggerConfiguration();
	} else {
		return nullptr;
	}
}

$Class* PlatformLogger$ConfigurableBridge::load$($String* name, bool initialize) {
	$loadClass(PlatformLogger$ConfigurableBridge, name, initialize, &_PlatformLogger$ConfigurableBridge_ClassInfo_, allocate$PlatformLogger$ConfigurableBridge);
	return class$;
}

$Class* PlatformLogger$ConfigurableBridge::class$ = nullptr;

		} // logging
	} // util
} // sun