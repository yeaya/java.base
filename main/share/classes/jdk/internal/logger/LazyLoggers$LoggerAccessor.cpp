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

$Class* LazyLoggers$LoggerAccessor::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getLoggerName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LazyLoggers$LoggerAccessor, getLoggerName, $String*)},
		{"platform", "()Lsun/util/logging/PlatformLogger$Bridge;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LazyLoggers$LoggerAccessor, platform, $PlatformLogger$Bridge*)},
		{"wrapped", "()Ljava/lang/System$Logger;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LazyLoggers$LoggerAccessor, wrapped, $System$Logger*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.logger.LazyLoggers$LoggerAccessor", "jdk.internal.logger.LazyLoggers", "LoggerAccessor", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"jdk.internal.logger.LazyLoggers$LoggerAccessor",
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
		"jdk.internal.logger.LazyLoggers"
	};
	$loadClass(LazyLoggers$LoggerAccessor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LazyLoggers$LoggerAccessor);
	});
	return class$;
}

$Class* LazyLoggers$LoggerAccessor::class$ = nullptr;

		} // logger
	} // internal
} // jdk