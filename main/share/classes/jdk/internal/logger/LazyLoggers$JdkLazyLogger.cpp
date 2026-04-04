#include <jdk/internal/logger/LazyLoggers$JdkLazyLogger.h>
#include <java/lang/Module.h>
#include <jdk/internal/logger/LazyLoggers$LazyLoggerAccessor.h>
#include <jdk/internal/logger/LazyLoggers$LazyLoggerFactories.h>
#include <jdk/internal/logger/LazyLoggers$LazyLoggerWrapper.h>
#include <jdk/internal/logger/LazyLoggers.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Module = ::java::lang::Module;
using $Void = ::java::lang::Void;
using $LazyLoggers = ::jdk::internal::logger::LazyLoggers;
using $LazyLoggers$LazyLoggerAccessor = ::jdk::internal::logger::LazyLoggers$LazyLoggerAccessor;
using $LazyLoggers$LazyLoggerWrapper = ::jdk::internal::logger::LazyLoggers$LazyLoggerWrapper;

namespace jdk {
	namespace internal {
		namespace logger {

void LazyLoggers$JdkLazyLogger::init$($String* name, $Module* module) {
	$init($LazyLoggers);
	LazyLoggers$JdkLazyLogger::init$($($LazyLoggers$LazyLoggerAccessor::makeAccessor(name, $LazyLoggers::factories, module)), ($Void*)nullptr);
}

void LazyLoggers$JdkLazyLogger::init$($LazyLoggers$LazyLoggerAccessor* holder, $Void* unused) {
	$LazyLoggers$LazyLoggerWrapper::init$(holder);
}

LazyLoggers$JdkLazyLogger::LazyLoggers$JdkLazyLogger() {
}

$Class* LazyLoggers$JdkLazyLogger::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljava/lang/Module;)V", nullptr, 0, $method(LazyLoggers$JdkLazyLogger, init$, void, $String*, $Module*)},
		{"<init>", "(Ljdk/internal/logger/LazyLoggers$LazyLoggerAccessor;Ljava/lang/Void;)V", nullptr, $PRIVATE, $method(LazyLoggers$JdkLazyLogger, init$, void, $LazyLoggers$LazyLoggerAccessor*, $Void*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.logger.LazyLoggers$JdkLazyLogger", "jdk.internal.logger.LazyLoggers", "JdkLazyLogger", $PRIVATE | $STATIC | $FINAL},
		{"jdk.internal.logger.LazyLoggers$LazyLoggerWrapper", "jdk.internal.logger.LazyLoggers", "LazyLoggerWrapper", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"jdk.internal.logger.LazyLoggers$JdkLazyLogger",
		"jdk.internal.logger.LazyLoggers$LazyLoggerWrapper",
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
	$loadClass(LazyLoggers$JdkLazyLogger, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(LazyLoggers$JdkLazyLogger));
	});
	return class$;
}

$Class* LazyLoggers$JdkLazyLogger::class$ = nullptr;

		} // logger
	} // internal
} // jdk