#include <sun/util/logging/PlatformLogger$ConfigurableBridge$LoggerConfiguration.h>

#include <sun/util/logging/PlatformLogger$ConfigurableBridge.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace util {
		namespace logging {

$MethodInfo _PlatformLogger$ConfigurableBridge$LoggerConfiguration_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PlatformLogger$ConfigurableBridge$LoggerConfiguration::*)()>(&PlatformLogger$ConfigurableBridge$LoggerConfiguration::init$))},
	{"getPlatformLevel", "()Lsun/util/logging/PlatformLogger$Level;", nullptr, $PUBLIC | $ABSTRACT},
	{"setPlatformLevel", "(Lsun/util/logging/PlatformLogger$Level;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _PlatformLogger$ConfigurableBridge$LoggerConfiguration_InnerClassesInfo_[] = {
	{"sun.util.logging.PlatformLogger$ConfigurableBridge", "sun.util.logging.PlatformLogger", "ConfigurableBridge", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"sun.util.logging.PlatformLogger$ConfigurableBridge$LoggerConfiguration", "sun.util.logging.PlatformLogger$ConfigurableBridge", "LoggerConfiguration", $PUBLIC | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _PlatformLogger$ConfigurableBridge$LoggerConfiguration_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.util.logging.PlatformLogger$ConfigurableBridge$LoggerConfiguration",
	"java.lang.Object",
	nullptr,
	nullptr,
	_PlatformLogger$ConfigurableBridge$LoggerConfiguration_MethodInfo_,
	nullptr,
	nullptr,
	_PlatformLogger$ConfigurableBridge$LoggerConfiguration_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.util.logging.PlatformLogger"
};

$Object* allocate$PlatformLogger$ConfigurableBridge$LoggerConfiguration($Class* clazz) {
	return $of($alloc(PlatformLogger$ConfigurableBridge$LoggerConfiguration));
}

void PlatformLogger$ConfigurableBridge$LoggerConfiguration::init$() {
}

PlatformLogger$ConfigurableBridge$LoggerConfiguration::PlatformLogger$ConfigurableBridge$LoggerConfiguration() {
}

$Class* PlatformLogger$ConfigurableBridge$LoggerConfiguration::load$($String* name, bool initialize) {
	$loadClass(PlatformLogger$ConfigurableBridge$LoggerConfiguration, name, initialize, &_PlatformLogger$ConfigurableBridge$LoggerConfiguration_ClassInfo_, allocate$PlatformLogger$ConfigurableBridge$LoggerConfiguration);
	return class$;
}

$Class* PlatformLogger$ConfigurableBridge$LoggerConfiguration::class$ = nullptr;

		} // logging
	} // util
} // sun