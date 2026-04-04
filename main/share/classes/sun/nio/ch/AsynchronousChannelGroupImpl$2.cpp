#include <sun/nio/ch/AsynchronousChannelGroupImpl$2.h>
#include <java/lang/Runnable.h>
#include <java/util/concurrent/ThreadFactory.h>
#include <sun/nio/ch/AsynchronousChannelGroupImpl.h>
#include <sun/nio/ch/ThreadPool.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $AsynchronousChannelGroupImpl = ::sun::nio::ch::AsynchronousChannelGroupImpl;
using $ThreadPool = ::sun::nio::ch::ThreadPool;

namespace sun {
	namespace nio {
		namespace ch {

void AsynchronousChannelGroupImpl$2::init$($AsynchronousChannelGroupImpl* this$0, $Runnable* val$task) {
	$set(this, this$0, this$0);
	$set(this, val$task, val$task);
}

$Object* AsynchronousChannelGroupImpl$2::run() {
	$useLocalObjectStack();
	$$nc($$nc($ThreadPool::defaultThreadFactory())->newThread(this->val$task))->start();
	return nullptr;
}

AsynchronousChannelGroupImpl$2::AsynchronousChannelGroupImpl$2() {
}

$Class* AsynchronousChannelGroupImpl$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/nio/ch/AsynchronousChannelGroupImpl;", nullptr, $FINAL | $SYNTHETIC, $field(AsynchronousChannelGroupImpl$2, this$0)},
		{"val$task", "Ljava/lang/Runnable;", nullptr, $FINAL | $SYNTHETIC, $field(AsynchronousChannelGroupImpl$2, val$task)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/nio/ch/AsynchronousChannelGroupImpl;Ljava/lang/Runnable;)V", nullptr, 0, $method(AsynchronousChannelGroupImpl$2, init$, void, $AsynchronousChannelGroupImpl*, $Runnable*)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(AsynchronousChannelGroupImpl$2, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.nio.ch.AsynchronousChannelGroupImpl",
		"startInternalThread",
		"(Ljava/lang/Runnable;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.ch.AsynchronousChannelGroupImpl$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.ch.AsynchronousChannelGroupImpl$2",
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
	$loadClass(AsynchronousChannelGroupImpl$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AsynchronousChannelGroupImpl$2);
	});
	return class$;
}

$Class* AsynchronousChannelGroupImpl$2::class$ = nullptr;

		} // ch
	} // nio
} // sun