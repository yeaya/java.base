#include <java/util/concurrent/ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory$1.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/ThreadGroup.h>
#include <java/util/concurrent/ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory.h>
#include <java/util/concurrent/ForkJoinPool.h>
#include <java/util/concurrent/ForkJoinWorkerThread$InnocuousForkJoinWorkerThread.h>
#include <java/util/concurrent/ForkJoinWorkerThread.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ThreadGroup = ::java::lang::ThreadGroup;
using $ForkJoinPool = ::java::util::concurrent::ForkJoinPool;
using $ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory = ::java::util::concurrent::ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory;
using $ForkJoinWorkerThread = ::java::util::concurrent::ForkJoinWorkerThread;
using $ForkJoinWorkerThread$InnocuousForkJoinWorkerThread = ::java::util::concurrent::ForkJoinWorkerThread$InnocuousForkJoinWorkerThread;

namespace java {
	namespace util {
		namespace concurrent {

void ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory$1::init$($ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory* this$0, $ForkJoinPool* val$pool) {
	$set(this, this$0, this$0);
	$set(this, val$pool, val$pool);
}

$Object* ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory$1::run() {
	return $System::getSecurityManager() == nullptr ? $new($ForkJoinWorkerThread, nullptr, this->val$pool, true, true) : $cast($ForkJoinWorkerThread, $new($ForkJoinWorkerThread$InnocuousForkJoinWorkerThread, this->val$pool));
}

ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory$1::ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory$1() {
}

$Class* ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/util/concurrent/ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory;", nullptr, $FINAL | $SYNTHETIC, $field(ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory$1, this$0)},
		{"val$pool", "Ljava/util/concurrent/ForkJoinPool;", nullptr, $FINAL | $SYNTHETIC, $field(ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory$1, val$pool)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/concurrent/ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory;Ljava/util/concurrent/ForkJoinPool;)V", nullptr, 0, $method(ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory$1, init$, void, $ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory*, $ForkJoinPool*)},
		{"run", "()Ljava/util/concurrent/ForkJoinWorkerThread;", nullptr, $PUBLIC, $virtualMethod(ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.util.concurrent.ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory",
		"newThread",
		"(Ljava/util/concurrent/ForkJoinPool;)Ljava/util/concurrent/ForkJoinWorkerThread;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory", "java.util.concurrent.ForkJoinPool", "DefaultCommonPoolForkJoinWorkerThreadFactory", $STATIC | $FINAL},
		{"java.util.concurrent.ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.concurrent.ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory$1",
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
	$loadClass(ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory$1);
	});
	return class$;
}

$Class* ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory$1::class$ = nullptr;

		} // concurrent
	} // util
} // java