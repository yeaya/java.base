#include <java/util/concurrent/ForkJoinPool$DefaultForkJoinWorkerThreadFactory$1.h>
#include <java/lang/ThreadGroup.h>
#include <java/util/concurrent/ForkJoinPool$DefaultForkJoinWorkerThreadFactory.h>
#include <java/util/concurrent/ForkJoinPool.h>
#include <java/util/concurrent/ForkJoinWorkerThread.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ThreadGroup = ::java::lang::ThreadGroup;
using $ForkJoinPool = ::java::util::concurrent::ForkJoinPool;
using $ForkJoinPool$DefaultForkJoinWorkerThreadFactory = ::java::util::concurrent::ForkJoinPool$DefaultForkJoinWorkerThreadFactory;
using $ForkJoinWorkerThread = ::java::util::concurrent::ForkJoinWorkerThread;

namespace java {
	namespace util {
		namespace concurrent {

void ForkJoinPool$DefaultForkJoinWorkerThreadFactory$1::init$($ForkJoinPool$DefaultForkJoinWorkerThreadFactory* this$0, $ForkJoinPool* val$pool) {
	$set(this, this$0, this$0);
	$set(this, val$pool, val$pool);
}

$Object* ForkJoinPool$DefaultForkJoinWorkerThreadFactory$1::run() {
	return $new($ForkJoinWorkerThread, nullptr, this->val$pool, true, false);
}

ForkJoinPool$DefaultForkJoinWorkerThreadFactory$1::ForkJoinPool$DefaultForkJoinWorkerThreadFactory$1() {
}

$Class* ForkJoinPool$DefaultForkJoinWorkerThreadFactory$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/util/concurrent/ForkJoinPool$DefaultForkJoinWorkerThreadFactory;", nullptr, $FINAL | $SYNTHETIC, $field(ForkJoinPool$DefaultForkJoinWorkerThreadFactory$1, this$0)},
		{"val$pool", "Ljava/util/concurrent/ForkJoinPool;", nullptr, $FINAL | $SYNTHETIC, $field(ForkJoinPool$DefaultForkJoinWorkerThreadFactory$1, val$pool)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/concurrent/ForkJoinPool$DefaultForkJoinWorkerThreadFactory;Ljava/util/concurrent/ForkJoinPool;)V", nullptr, 0, $method(ForkJoinPool$DefaultForkJoinWorkerThreadFactory$1, init$, void, $ForkJoinPool$DefaultForkJoinWorkerThreadFactory*, $ForkJoinPool*)},
		{"run", "()Ljava/util/concurrent/ForkJoinWorkerThread;", nullptr, $PUBLIC, $virtualMethod(ForkJoinPool$DefaultForkJoinWorkerThreadFactory$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.util.concurrent.ForkJoinPool$DefaultForkJoinWorkerThreadFactory",
		"newThread",
		"(Ljava/util/concurrent/ForkJoinPool;)Ljava/util/concurrent/ForkJoinWorkerThread;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.ForkJoinPool$DefaultForkJoinWorkerThreadFactory", "java.util.concurrent.ForkJoinPool", "DefaultForkJoinWorkerThreadFactory", $STATIC | $FINAL},
		{"java.util.concurrent.ForkJoinPool$DefaultForkJoinWorkerThreadFactory$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.concurrent.ForkJoinPool$DefaultForkJoinWorkerThreadFactory$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/util/concurrent/ForkJoinWorkerThread;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.concurrent.ForkJoinPool"
	};
	$loadClass(ForkJoinPool$DefaultForkJoinWorkerThreadFactory$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ForkJoinPool$DefaultForkJoinWorkerThreadFactory$1);
	});
	return class$;
}

$Class* ForkJoinPool$DefaultForkJoinWorkerThreadFactory$1::class$ = nullptr;

		} // concurrent
	} // util
} // java