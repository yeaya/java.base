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

$FieldInfo _BootstrapLogger$BootstrapExecutors$BootstrapMessageLoggerTask_FieldInfo_[] = {
	{"owner", "Ljava/util/concurrent/ExecutorService;", nullptr, 0, $field(BootstrapLogger$BootstrapExecutors$BootstrapMessageLoggerTask, owner)},
	{"run", "Ljava/lang/Runnable;", nullptr, 0, $field(BootstrapLogger$BootstrapExecutors$BootstrapMessageLoggerTask, run$)},
	{}
};

$MethodInfo _BootstrapLogger$BootstrapExecutors$BootstrapMessageLoggerTask_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/ExecutorService;Ljava/lang/Runnable;)V", nullptr, $PUBLIC, $method(BootstrapLogger$BootstrapExecutors$BootstrapMessageLoggerTask, init$, void, $ExecutorService*, $Runnable*)},
	{"run", "()V", nullptr, $PUBLIC, $virtualMethod(BootstrapLogger$BootstrapExecutors$BootstrapMessageLoggerTask, run, void)},
	{}
};

$InnerClassInfo _BootstrapLogger$BootstrapExecutors$BootstrapMessageLoggerTask_InnerClassesInfo_[] = {
	{"jdk.internal.logger.BootstrapLogger$BootstrapExecutors", "jdk.internal.logger.BootstrapLogger", "BootstrapExecutors", $PRIVATE | $STATIC},
	{"jdk.internal.logger.BootstrapLogger$BootstrapExecutors$BootstrapMessageLoggerTask", "jdk.internal.logger.BootstrapLogger$BootstrapExecutors", "BootstrapMessageLoggerTask", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _BootstrapLogger$BootstrapExecutors$BootstrapMessageLoggerTask_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.logger.BootstrapLogger$BootstrapExecutors$BootstrapMessageLoggerTask",
	"java.lang.Object",
	"java.lang.Runnable",
	_BootstrapLogger$BootstrapExecutors$BootstrapMessageLoggerTask_FieldInfo_,
	_BootstrapLogger$BootstrapExecutors$BootstrapMessageLoggerTask_MethodInfo_,
	nullptr,
	nullptr,
	_BootstrapLogger$BootstrapExecutors$BootstrapMessageLoggerTask_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.logger.BootstrapLogger"
};

$Object* allocate$BootstrapLogger$BootstrapExecutors$BootstrapMessageLoggerTask($Class* clazz) {
	return $of($alloc(BootstrapLogger$BootstrapExecutors$BootstrapMessageLoggerTask));
}

void BootstrapLogger$BootstrapExecutors$BootstrapMessageLoggerTask::init$($ExecutorService* owner, $Runnable* r) {
	$set(this, owner, owner);
	$set(this, run$, r);
}

void BootstrapLogger$BootstrapExecutors$BootstrapMessageLoggerTask::run() {
	{
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
}

BootstrapLogger$BootstrapExecutors$BootstrapMessageLoggerTask::BootstrapLogger$BootstrapExecutors$BootstrapMessageLoggerTask() {
}

$Class* BootstrapLogger$BootstrapExecutors$BootstrapMessageLoggerTask::load$($String* name, bool initialize) {
	$loadClass(BootstrapLogger$BootstrapExecutors$BootstrapMessageLoggerTask, name, initialize, &_BootstrapLogger$BootstrapExecutors$BootstrapMessageLoggerTask_ClassInfo_, allocate$BootstrapLogger$BootstrapExecutors$BootstrapMessageLoggerTask);
	return class$;
}

$Class* BootstrapLogger$BootstrapExecutors$BootstrapMessageLoggerTask::class$ = nullptr;

		} // logger
	} // internal
} // jdk