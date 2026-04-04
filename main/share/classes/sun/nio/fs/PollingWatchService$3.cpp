#include <sun/nio/fs/PollingWatchService$3.h>
#include <java/util/concurrent/ExecutorService.h>
#include <java/util/concurrent/ScheduledExecutorService.h>
#include <sun/nio/fs/PollingWatchService.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PollingWatchService = ::sun::nio::fs::PollingWatchService;

namespace sun {
	namespace nio {
		namespace fs {

void PollingWatchService$3::init$($PollingWatchService* this$0) {
	$set(this, this$0, this$0);
}

$Object* PollingWatchService$3::run() {
	$nc(this->this$0->scheduledExecutor)->shutdown();
	return nullptr;
}

PollingWatchService$3::PollingWatchService$3() {
}

$Class* PollingWatchService$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/nio/fs/PollingWatchService;", nullptr, $FINAL | $SYNTHETIC, $field(PollingWatchService$3, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/nio/fs/PollingWatchService;)V", nullptr, 0, $method(PollingWatchService$3, init$, void, $PollingWatchService*)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(PollingWatchService$3, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.nio.fs.PollingWatchService",
		"implClose",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.fs.PollingWatchService$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.fs.PollingWatchService$3",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.nio.fs.PollingWatchService"
	};
	$loadClass(PollingWatchService$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PollingWatchService$3);
	});
	return class$;
}

$Class* PollingWatchService$3::class$ = nullptr;

		} // fs
	} // nio
} // sun