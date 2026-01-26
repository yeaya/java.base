#include <jdk/internal/logger/LazyLoggers$LoggerAccessor.h>

#include <java/lang/System$Logger.h>
#include <jdk/internal/logger/LazyLoggers.h>
#include <sun/util/logging/PlatformLogger$Bridge.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $System$Logger = ::java::lang::System$Logger;
using $PlatformLogger$Bridge = ::sun::util::logging::PlatformLogger$Bridge;

namespace jdk {
	namespace internal {
		namespace logger {

$MethodInfo _LazyLoggers$LoggerAccessor_MethodInfo_[] = {
	{"getLoggerName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LazyLoggers$LoggerAccessor, getLoggerName, $String*)},
	{"platform", "()Lsun/util/logging/PlatformLogger$Bridge;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LazyLoggers$LoggerAccessor, platform, $PlatformLogger$Bridge*)},
	{"wrapped", "()Ljava/lang/System$Logger;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LazyLoggers$LoggerAccessor, wrapped, $System$Logger*)},
	{}
};

$InnerClassInfo _LazyLoggers$LoggerAccessor_InnerClassesInfo_[] = {
	{"jdk.internal.logger.LazyLoggers$LoggerAccessor", "jdk.internal.logger.LazyLoggers", "LoggerAccessor", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _LazyLoggers$LoggerAccessor_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"jdk.internal.logger.LazyLoggers$LoggerAccessor",
	nullptr,
	nullptr,
	nullptr,
	_LazyLoggers$LoggerAccessor_MethodInfo_,
	nullptr,
	nullptr,
	_LazyLoggers$LoggerAccessor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.logger.LazyLoggers"
};

$Object* allocate$LazyLoggers$LoggerAccessor($Class* clazz) {
	return $of($alloc(LazyLoggers$LoggerAccessor));
}

$Class* LazyLoggers$LoggerAccessor::load$($String* name, bool initialize) {
	$loadClass(LazyLoggers$LoggerAccessor, name, initialize, &_LazyLoggers$LoggerAccessor_ClassInfo_, allocate$LazyLoggers$LoggerAccessor);
	return class$;
}

$Class* LazyLoggers$LoggerAccessor::class$ = nullptr;

		} // logger
	} // internal
} // jdk