#include <jdk/internal/logger/BootstrapLogger$DetectBackend$1.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/System$LoggerFinder.h>
#include <java/util/Iterator.h>
#include <java/util/ServiceLoader.h>
#include <jdk/internal/logger/BootstrapLogger$DetectBackend.h>
#include <jdk/internal/logger/BootstrapLogger$LoggingBackend.h>
#include <jdk/internal/logger/DefaultLoggerFinder.h>
#include <jcpp.h>

#undef CUSTOM
#undef JUL_DEFAULT
#undef JUL_WITH_CONFIG
#undef NONE

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $System$LoggerFinder = ::java::lang::System$LoggerFinder;
using $Iterator = ::java::util::Iterator;
using $ServiceLoader = ::java::util::ServiceLoader;
using $BootstrapLogger$LoggingBackend = ::jdk::internal::logger::BootstrapLogger$LoggingBackend;
using $DefaultLoggerFinder = ::jdk::internal::logger::DefaultLoggerFinder;

namespace jdk {
	namespace internal {
		namespace logger {

void BootstrapLogger$DetectBackend$1::init$() {
}

$Object* BootstrapLogger$DetectBackend$1::run() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$load($System$LoggerFinder);
	$var($Iterator, iterator, $$nc($ServiceLoader::load($System$LoggerFinder::class$, $($ClassLoader::getSystemClassLoader())))->iterator());
	if ($nc(iterator)->hasNext()) {
		$init($BootstrapLogger$LoggingBackend);
		return $of($BootstrapLogger$LoggingBackend::CUSTOM);
	}
	$load($DefaultLoggerFinder);
	$var($Iterator, iterator2, $$nc($ServiceLoader::loadInstalled($DefaultLoggerFinder::class$))->iterator());
	if ($nc(iterator2)->hasNext()) {
		$var($String, cname, $System::getProperty("java.util.logging.config.class"_s));
		$var($String, fname, $System::getProperty("java.util.logging.config.file"_s));
		$init($BootstrapLogger$LoggingBackend);
		return $of((cname != nullptr || fname != nullptr) ? $BootstrapLogger$LoggingBackend::JUL_WITH_CONFIG : $BootstrapLogger$LoggingBackend::JUL_DEFAULT);
	} else {
		$init($BootstrapLogger$LoggingBackend);
		return $of($BootstrapLogger$LoggingBackend::NONE);
	}
}

BootstrapLogger$DetectBackend$1::BootstrapLogger$DetectBackend$1() {
}

$Class* BootstrapLogger$DetectBackend$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(BootstrapLogger$DetectBackend$1, init$, void)},
		{"run", "()Ljdk/internal/logger/BootstrapLogger$LoggingBackend;", nullptr, $PUBLIC, $virtualMethod(BootstrapLogger$DetectBackend$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"jdk.internal.logger.BootstrapLogger$DetectBackend",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.logger.BootstrapLogger$DetectBackend", "jdk.internal.logger.BootstrapLogger", "DetectBackend", $PRIVATE | $STATIC | $FINAL},
		{"jdk.internal.logger.BootstrapLogger$DetectBackend$1", nullptr, nullptr, 0},
		{"jdk.internal.logger.BootstrapLogger$LoggingBackend", "jdk.internal.logger.BootstrapLogger", "LoggingBackend", $PRIVATE | $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.logger.BootstrapLogger$DetectBackend$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljdk/internal/logger/BootstrapLogger$LoggingBackend;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.logger.BootstrapLogger"
	};
	$loadClass(BootstrapLogger$DetectBackend$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BootstrapLogger$DetectBackend$1);
	});
	return class$;
}

$Class* BootstrapLogger$DetectBackend$1::class$ = nullptr;

		} // logger
	} // internal
} // jdk