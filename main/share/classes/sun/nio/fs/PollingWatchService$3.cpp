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
using $ScheduledExecutorService = ::java::util::concurrent::ScheduledExecutorService;
using $PollingWatchService = ::sun::nio::fs::PollingWatchService;

namespace sun {
	namespace nio {
		namespace fs {

$FieldInfo _PollingWatchService$3_FieldInfo_[] = {
	{"this$0", "Lsun/nio/fs/PollingWatchService;", nullptr, $FINAL | $SYNTHETIC, $field(PollingWatchService$3, this$0)},
	{}
};

$MethodInfo _PollingWatchService$3_MethodInfo_[] = {
	{"<init>", "(Lsun/nio/fs/PollingWatchService;)V", nullptr, 0, $method(PollingWatchService$3, init$, void, $PollingWatchService*)},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(PollingWatchService$3, run, $Object*)},
	{}
};

$EnclosingMethodInfo _PollingWatchService$3_EnclosingMethodInfo_ = {
	"sun.nio.fs.PollingWatchService",
	"implClose",
	"()V"
};

$InnerClassInfo _PollingWatchService$3_InnerClassesInfo_[] = {
	{"sun.nio.fs.PollingWatchService$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _PollingWatchService$3_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.fs.PollingWatchService$3",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_PollingWatchService$3_FieldInfo_,
	_PollingWatchService$3_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
	&_PollingWatchService$3_EnclosingMethodInfo_,
	_PollingWatchService$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.fs.PollingWatchService"
};

$Object* allocate$PollingWatchService$3($Class* clazz) {
	return $of($alloc(PollingWatchService$3));
}

void PollingWatchService$3::init$($PollingWatchService* this$0) {
	$set(this, this$0, this$0);
}

$Object* PollingWatchService$3::run() {
	$nc(this->this$0->scheduledExecutor)->shutdown();
	return $of(nullptr);
}

PollingWatchService$3::PollingWatchService$3() {
}

$Class* PollingWatchService$3::load$($String* name, bool initialize) {
	$loadClass(PollingWatchService$3, name, initialize, &_PollingWatchService$3_ClassInfo_, allocate$PollingWatchService$3);
	return class$;
}

$Class* PollingWatchService$3::class$ = nullptr;

		} // fs
	} // nio
} // sun