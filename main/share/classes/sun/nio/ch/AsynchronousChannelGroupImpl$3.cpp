#include <sun/nio/ch/AsynchronousChannelGroupImpl$3.h>

#include <java/util/concurrent/ExecutorService.h>
#include <java/util/concurrent/ScheduledThreadPoolExecutor.h>
#include <sun/nio/ch/AsynchronousChannelGroupImpl.h>
#include <sun/nio/ch/ThreadPool.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ExecutorService = ::java::util::concurrent::ExecutorService;
using $ScheduledThreadPoolExecutor = ::java::util::concurrent::ScheduledThreadPoolExecutor;
using $AsynchronousChannelGroupImpl = ::sun::nio::ch::AsynchronousChannelGroupImpl;
using $ThreadPool = ::sun::nio::ch::ThreadPool;

namespace sun {
	namespace nio {
		namespace ch {

$FieldInfo _AsynchronousChannelGroupImpl$3_FieldInfo_[] = {
	{"this$0", "Lsun/nio/ch/AsynchronousChannelGroupImpl;", nullptr, $FINAL | $SYNTHETIC, $field(AsynchronousChannelGroupImpl$3, this$0)},
	{}
};

$MethodInfo _AsynchronousChannelGroupImpl$3_MethodInfo_[] = {
	{"<init>", "(Lsun/nio/ch/AsynchronousChannelGroupImpl;)V", nullptr, 0, $method(static_cast<void(AsynchronousChannelGroupImpl$3::*)($AsynchronousChannelGroupImpl*)>(&AsynchronousChannelGroupImpl$3::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _AsynchronousChannelGroupImpl$3_EnclosingMethodInfo_ = {
	"sun.nio.ch.AsynchronousChannelGroupImpl",
	"shutdownExecutors",
	"()V"
};

$InnerClassInfo _AsynchronousChannelGroupImpl$3_InnerClassesInfo_[] = {
	{"sun.nio.ch.AsynchronousChannelGroupImpl$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AsynchronousChannelGroupImpl$3_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.ch.AsynchronousChannelGroupImpl$3",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_AsynchronousChannelGroupImpl$3_FieldInfo_,
	_AsynchronousChannelGroupImpl$3_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
	&_AsynchronousChannelGroupImpl$3_EnclosingMethodInfo_,
	_AsynchronousChannelGroupImpl$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.ch.AsynchronousChannelGroupImpl"
};

$Object* allocate$AsynchronousChannelGroupImpl$3($Class* clazz) {
	return $of($alloc(AsynchronousChannelGroupImpl$3));
}

void AsynchronousChannelGroupImpl$3::init$($AsynchronousChannelGroupImpl* this$0) {
	$set(this, this$0, this$0);
}

$Object* AsynchronousChannelGroupImpl$3::run() {
	$nc($($nc(this->this$0->pool)->executor()))->shutdown();
	$nc(this->this$0->timeoutExecutor)->shutdown();
	return $of(nullptr);
}

AsynchronousChannelGroupImpl$3::AsynchronousChannelGroupImpl$3() {
}

$Class* AsynchronousChannelGroupImpl$3::load$($String* name, bool initialize) {
	$loadClass(AsynchronousChannelGroupImpl$3, name, initialize, &_AsynchronousChannelGroupImpl$3_ClassInfo_, allocate$AsynchronousChannelGroupImpl$3);
	return class$;
}

$Class* AsynchronousChannelGroupImpl$3::class$ = nullptr;

		} // ch
	} // nio
} // sun