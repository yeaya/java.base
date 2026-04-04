#include <jdk/internal/logger/BootstrapLogger$BootstrapExecutors$1.h>
#include <java/lang/Runnable.h>
#include <java/util/concurrent/ExecutorService.h>
#include <jdk/internal/logger/BootstrapLogger$BootstrapExecutors$BootstrapMessageLoggerTask.h>
#include <jdk/internal/logger/BootstrapLogger$BootstrapExecutors.h>
#include <jdk/internal/misc/InnocuousThread.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $ExecutorService = ::java::util::concurrent::ExecutorService;
using $BootstrapLogger$BootstrapExecutors = ::jdk::internal::logger::BootstrapLogger$BootstrapExecutors;
using $BootstrapLogger$BootstrapExecutors$BootstrapMessageLoggerTask = ::jdk::internal::logger::BootstrapLogger$BootstrapExecutors$BootstrapMessageLoggerTask;
using $InnocuousThread = ::jdk::internal::misc::InnocuousThread;

namespace jdk {
	namespace internal {
		namespace logger {

void BootstrapLogger$BootstrapExecutors$1::init$($BootstrapLogger$BootstrapExecutors* this$0, $ExecutorService* val$owner, $Runnable* val$r) {
	$set(this, this$0, this$0);
	$set(this, val$owner, val$owner);
	$set(this, val$r, val$r);
}

$Object* BootstrapLogger$BootstrapExecutors$1::run() {
	$useLocalObjectStack();
	$var($Thread, t, $InnocuousThread::newThread($$new($BootstrapLogger$BootstrapExecutors$BootstrapMessageLoggerTask, this->val$owner, this->val$r)));
	$nc(t)->setName($$str({"BootstrapMessageLoggerTask-"_s, $($nc(t)->getName())}));
	return t;
}

BootstrapLogger$BootstrapExecutors$1::BootstrapLogger$BootstrapExecutors$1() {
}

$Class* BootstrapLogger$BootstrapExecutors$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljdk/internal/logger/BootstrapLogger$BootstrapExecutors;", nullptr, $FINAL | $SYNTHETIC, $field(BootstrapLogger$BootstrapExecutors$1, this$0)},
		{"val$r", "Ljava/lang/Runnable;", nullptr, $FINAL | $SYNTHETIC, $field(BootstrapLogger$BootstrapExecutors$1, val$r)},
		{"val$owner", "Ljava/util/concurrent/ExecutorService;", nullptr, $FINAL | $SYNTHETIC, $field(BootstrapLogger$BootstrapExecutors$1, val$owner)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/logger/BootstrapLogger$BootstrapExecutors;Ljava/util/concurrent/ExecutorService;Ljava/lang/Runnable;)V", "()V", 0, $method(BootstrapLogger$BootstrapExecutors$1, init$, void, $BootstrapLogger$BootstrapExecutors*, $ExecutorService*, $Runnable*)},
		{"run", "()Ljava/lang/Thread;", nullptr, $PUBLIC, $virtualMethod(BootstrapLogger$BootstrapExecutors$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"jdk.internal.logger.BootstrapLogger$BootstrapExecutors",
		"newThread",
		"(Ljava/lang/Runnable;)Ljava/lang/Thread;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.logger.BootstrapLogger$BootstrapExecutors", "jdk.internal.logger.BootstrapLogger", "BootstrapExecutors", $PRIVATE | $STATIC},
		{"jdk.internal.logger.BootstrapLogger$BootstrapExecutors$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.logger.BootstrapLogger$BootstrapExecutors$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Thread;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.logger.BootstrapLogger"
	};
	$loadClass(BootstrapLogger$BootstrapExecutors$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BootstrapLogger$BootstrapExecutors$1);
	});
	return class$;
}

$Class* BootstrapLogger$BootstrapExecutors$1::class$ = nullptr;

		} // logger
	} // internal
} // jdk