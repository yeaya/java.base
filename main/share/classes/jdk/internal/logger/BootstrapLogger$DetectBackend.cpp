#include <jdk/internal/logger/BootstrapLogger$DetectBackend.h>
#include <java/security/AccessController.h>
#include <jdk/internal/logger/BootstrapLogger$DetectBackend$1.h>
#include <jdk/internal/logger/BootstrapLogger$LoggingBackend.h>
#include <jdk/internal/logger/BootstrapLogger.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $BootstrapLogger$DetectBackend$1 = ::jdk::internal::logger::BootstrapLogger$DetectBackend$1;
using $BootstrapLogger$LoggingBackend = ::jdk::internal::logger::BootstrapLogger$LoggingBackend;

namespace jdk {
	namespace internal {
		namespace logger {

$BootstrapLogger$LoggingBackend* BootstrapLogger$DetectBackend::detectedBackend = nullptr;

void BootstrapLogger$DetectBackend::init$() {
}

void BootstrapLogger$DetectBackend::clinit$($Class* clazz) {
	$beforeCallerSensitive();
	{
		$assignStatic(BootstrapLogger$DetectBackend::detectedBackend, $cast($BootstrapLogger$LoggingBackend, $AccessController::doPrivileged($$new($BootstrapLogger$DetectBackend$1))));
	}
}

BootstrapLogger$DetectBackend::BootstrapLogger$DetectBackend() {
}

$Class* BootstrapLogger$DetectBackend::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"detectedBackend", "Ljdk/internal/logger/BootstrapLogger$LoggingBackend;", nullptr, $STATIC | $FINAL, $staticField(BootstrapLogger$DetectBackend, detectedBackend)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(BootstrapLogger$DetectBackend, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.logger.BootstrapLogger$DetectBackend", "jdk.internal.logger.BootstrapLogger", "DetectBackend", $PRIVATE | $STATIC | $FINAL},
		{"jdk.internal.logger.BootstrapLogger$DetectBackend$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"jdk.internal.logger.BootstrapLogger$DetectBackend",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.logger.BootstrapLogger"
	};
	$loadClass(BootstrapLogger$DetectBackend, name, initialize, &classInfo$$, BootstrapLogger$DetectBackend::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(BootstrapLogger$DetectBackend);
	});
	return class$;
}

$Class* BootstrapLogger$DetectBackend::class$ = nullptr;

		} // logger
	} // internal
} // jdk