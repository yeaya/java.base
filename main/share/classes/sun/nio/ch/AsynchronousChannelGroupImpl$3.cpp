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
using $AsynchronousChannelGroupImpl = ::sun::nio::ch::AsynchronousChannelGroupImpl;

namespace sun {
	namespace nio {
		namespace ch {

void AsynchronousChannelGroupImpl$3::init$($AsynchronousChannelGroupImpl* this$0) {
	$set(this, this$0, this$0);
}

$Object* AsynchronousChannelGroupImpl$3::run() {
	$$nc($nc(this->this$0->pool)->executor())->shutdown();
	$nc(this->this$0->timeoutExecutor)->shutdown();
	return nullptr;
}

AsynchronousChannelGroupImpl$3::AsynchronousChannelGroupImpl$3() {
}

$Class* AsynchronousChannelGroupImpl$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/nio/ch/AsynchronousChannelGroupImpl;", nullptr, $FINAL | $SYNTHETIC, $field(AsynchronousChannelGroupImpl$3, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/nio/ch/AsynchronousChannelGroupImpl;)V", nullptr, 0, $method(AsynchronousChannelGroupImpl$3, init$, void, $AsynchronousChannelGroupImpl*)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(AsynchronousChannelGroupImpl$3, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.nio.ch.AsynchronousChannelGroupImpl",
		"shutdownExecutors",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.ch.AsynchronousChannelGroupImpl$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.ch.AsynchronousChannelGroupImpl$3",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.nio.ch.AsynchronousChannelGroupImpl"
	};
	$loadClass(AsynchronousChannelGroupImpl$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AsynchronousChannelGroupImpl$3);
	});
	return class$;
}

$Class* AsynchronousChannelGroupImpl$3::class$ = nullptr;

		} // ch
	} // nio
} // sun