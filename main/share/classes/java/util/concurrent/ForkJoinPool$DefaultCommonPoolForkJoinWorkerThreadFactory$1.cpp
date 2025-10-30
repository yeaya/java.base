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
using $SecurityManager = ::java::lang::SecurityManager;
using $ThreadGroup = ::java::lang::ThreadGroup;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $ForkJoinPool = ::java::util::concurrent::ForkJoinPool;
using $ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory = ::java::util::concurrent::ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory;
using $ForkJoinWorkerThread = ::java::util::concurrent::ForkJoinWorkerThread;
using $ForkJoinWorkerThread$InnocuousForkJoinWorkerThread = ::java::util::concurrent::ForkJoinWorkerThread$InnocuousForkJoinWorkerThread;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory$1_FieldInfo_[] = {
	{"this$0", "Ljava/util/concurrent/ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory;", nullptr, $FINAL | $SYNTHETIC, $field(ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory$1, this$0)},
	{"val$pool", "Ljava/util/concurrent/ForkJoinPool;", nullptr, $FINAL | $SYNTHETIC, $field(ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory$1, val$pool)},
	{}
};

$MethodInfo _ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory$1_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory;Ljava/util/concurrent/ForkJoinPool;)V", nullptr, 0, $method(static_cast<void(ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory$1::*)($ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory*,$ForkJoinPool*)>(&ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory$1::init$))},
	{"run", "()Ljava/util/concurrent/ForkJoinWorkerThread;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory$1_EnclosingMethodInfo_ = {
	"java.util.concurrent.ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory",
	"newThread",
	"(Ljava/util/concurrent/ForkJoinPool;)Ljava/util/concurrent/ForkJoinWorkerThread;"
};

$InnerClassInfo _ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory$1_InnerClassesInfo_[] = {
	{"java.util.concurrent.ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory", "java.util.concurrent.ForkJoinPool", "DefaultCommonPoolForkJoinWorkerThreadFactory", $STATIC | $FINAL},
	{"java.util.concurrent.ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.concurrent.ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory$1_FieldInfo_,
	_ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/util/concurrent/ForkJoinWorkerThread;>;",
	&_ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory$1_EnclosingMethodInfo_,
	_ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.ForkJoinPool"
};

$Object* allocate$ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory$1($Class* clazz) {
	return $of($alloc(ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory$1));
}

void ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory$1::init$($ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory* this$0, $ForkJoinPool* val$pool) {
	$set(this, this$0, this$0);
	$set(this, val$pool, val$pool);
}

$Object* ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory$1::run() {
	return $of($System::getSecurityManager() == nullptr ? $new($ForkJoinWorkerThread, nullptr, this->val$pool, true, true) : static_cast<$ForkJoinWorkerThread*>($new($ForkJoinWorkerThread$InnocuousForkJoinWorkerThread, this->val$pool)));
}

ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory$1::ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory$1() {
}

$Class* ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory$1::load$($String* name, bool initialize) {
	$loadClass(ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory$1, name, initialize, &_ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory$1_ClassInfo_, allocate$ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory$1);
	return class$;
}

$Class* ForkJoinPool$DefaultCommonPoolForkJoinWorkerThreadFactory$1::class$ = nullptr;

		} // concurrent
	} // util
} // java