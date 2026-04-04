#include <jdk/internal/logger/BootstrapLogger$BootstrapExecutors$BootstrapMessageLoggerTask.h>
#include <java/lang/Runnable.h>
#include <java/util/concurrent/ExecutorService.h>
#include <jdk/internal/logger/BootstrapLogger$BootstrapExecutors.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $ExecutorService = ::java::util::concurrent::ExecutorService;

namespace jdk {
	namespace internal {
		namespace logger {

void BootstrapLogger$BootstrapExecutors$BootstrapMessageLoggerTask::init$($ExecutorService* owner, $Runnable* r) {
	$set(this, owner, owner);
	$set(this, run$, r);
}

void BootstrapLogger$BootstrapExecutors$BootstrapMessageLoggerTask::run() {
	$var($Throwable, var$0, nullptr);
	try {
		$nc(this->run$)->run();
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$set(this, owner, nullptr);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

BootstrapLogger$BootstrapExecutors$BootstrapMessageLoggerTask::BootstrapLogger$BootstrapExecutors$BootstrapMessageLoggerTask() {
}

$Class* BootstrapLogger$BootstrapExecutors$BootstrapMessageLoggerTask::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"owner", "Ljava/util/concurrent/ExecutorService;", nullptr, 0, $field(BootstrapLogger$BootstrapExecutors$BootstrapMessageLoggerTask, owner)},
		{"run", "Ljava/lang/Runnable;", nullptr, 0, $field(BootstrapLogger$BootstrapExecutors$BootstrapMessageLoggerTask, run$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/concurrent/ExecutorService;Ljava/lang/Runnable;)V", nullptr, $PUBLIC, $method(BootstrapLogger$BootstrapExecutors$BootstrapMessageLoggerTask, init$, void, $ExecutorService*, $Runnable*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(BootstrapLogger$BootstrapExecutors$BootstrapMessageLoggerTask, run, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.logger.BootstrapLogger$BootstrapExecutors", "jdk.internal.logger.BootstrapLogger", "BootstrapExecutors", $PRIVATE | $STATIC},
		{"jdk.internal.logger.BootstrapLogger$BootstrapExecutors$BootstrapMessageLoggerTask", "jdk.internal.logger.BootstrapLogger$BootstrapExecutors", "BootstrapMessageLoggerTask", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.logger.BootstrapLogger$BootstrapExecutors$BootstrapMessageLoggerTask",
		"java.lang.Object",
		"java.lang.Runnable",
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
	$loadClass(BootstrapLogger$BootstrapExecutors$BootstrapMessageLoggerTask, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BootstrapLogger$BootstrapExecutors$BootstrapMessageLoggerTask);
	});
	return class$;
}

$Class* BootstrapLogger$BootstrapExecutors$BootstrapMessageLoggerTask::class$ = nullptr;

		} // logger
	} // internal
} // jdk