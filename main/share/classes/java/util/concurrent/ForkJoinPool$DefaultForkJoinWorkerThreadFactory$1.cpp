#include <java/util/concurrent/ForkJoinPool$DefaultForkJoinWorkerThreadFactory$1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/ThreadGroup.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $ForkJoinPool = ::java::util::concurrent::ForkJoinPool;
using $ForkJoinPool$DefaultForkJoinWorkerThreadFactory = ::java::util::concurrent::ForkJoinPool$DefaultForkJoinWorkerThreadFactory;
using $ForkJoinWorkerThread = ::java::util::concurrent::ForkJoinWorkerThread;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _ForkJoinPool$DefaultForkJoinWorkerThreadFactory$1_FieldInfo_[] = {
	{"this$0", "Ljava/util/concurrent/ForkJoinPool$DefaultForkJoinWorkerThreadFactory;", nullptr, $FINAL | $SYNTHETIC, $field(ForkJoinPool$DefaultForkJoinWorkerThreadFactory$1, this$0)},
	{"val$pool", "Ljava/util/concurrent/ForkJoinPool;", nullptr, $FINAL | $SYNTHETIC, $field(ForkJoinPool$DefaultForkJoinWorkerThreadFactory$1, val$pool)},
	{}
};

$MethodInfo _ForkJoinPool$DefaultForkJoinWorkerThreadFactory$1_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/ForkJoinPool$DefaultForkJoinWorkerThreadFactory;Ljava/util/concurrent/ForkJoinPool;)V", nullptr, 0, $method(static_cast<void(ForkJoinPool$DefaultForkJoinWorkerThreadFactory$1::*)($ForkJoinPool$DefaultForkJoinWorkerThreadFactory*,$ForkJoinPool*)>(&ForkJoinPool$DefaultForkJoinWorkerThreadFactory$1::init$))},
	{"run", "()Ljava/util/concurrent/ForkJoinWorkerThread;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ForkJoinPool$DefaultForkJoinWorkerThreadFactory$1_EnclosingMethodInfo_ = {
	"java.util.concurrent.ForkJoinPool$DefaultForkJoinWorkerThreadFactory",
	"newThread",
	"(Ljava/util/concurrent/ForkJoinPool;)Ljava/util/concurrent/ForkJoinWorkerThread;"
};

$InnerClassInfo _ForkJoinPool$DefaultForkJoinWorkerThreadFactory$1_InnerClassesInfo_[] = {
	{"java.util.concurrent.ForkJoinPool$DefaultForkJoinWorkerThreadFactory", "java.util.concurrent.ForkJoinPool", "DefaultForkJoinWorkerThreadFactory", $STATIC | $FINAL},
	{"java.util.concurrent.ForkJoinPool$DefaultForkJoinWorkerThreadFactory$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ForkJoinPool$DefaultForkJoinWorkerThreadFactory$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.concurrent.ForkJoinPool$DefaultForkJoinWorkerThreadFactory$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_ForkJoinPool$DefaultForkJoinWorkerThreadFactory$1_FieldInfo_,
	_ForkJoinPool$DefaultForkJoinWorkerThreadFactory$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/util/concurrent/ForkJoinWorkerThread;>;",
	&_ForkJoinPool$DefaultForkJoinWorkerThreadFactory$1_EnclosingMethodInfo_,
	_ForkJoinPool$DefaultForkJoinWorkerThreadFactory$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.ForkJoinPool"
};

$Object* allocate$ForkJoinPool$DefaultForkJoinWorkerThreadFactory$1($Class* clazz) {
	return $of($alloc(ForkJoinPool$DefaultForkJoinWorkerThreadFactory$1));
}

void ForkJoinPool$DefaultForkJoinWorkerThreadFactory$1::init$($ForkJoinPool$DefaultForkJoinWorkerThreadFactory* this$0, $ForkJoinPool* val$pool) {
	$set(this, this$0, this$0);
	$set(this, val$pool, val$pool);
}

$Object* ForkJoinPool$DefaultForkJoinWorkerThreadFactory$1::run() {
	return $of($new($ForkJoinWorkerThread, nullptr, this->val$pool, true, false));
}

ForkJoinPool$DefaultForkJoinWorkerThreadFactory$1::ForkJoinPool$DefaultForkJoinWorkerThreadFactory$1() {
}

$Class* ForkJoinPool$DefaultForkJoinWorkerThreadFactory$1::load$($String* name, bool initialize) {
	$loadClass(ForkJoinPool$DefaultForkJoinWorkerThreadFactory$1, name, initialize, &_ForkJoinPool$DefaultForkJoinWorkerThreadFactory$1_ClassInfo_, allocate$ForkJoinPool$DefaultForkJoinWorkerThreadFactory$1);
	return class$;
}

$Class* ForkJoinPool$DefaultForkJoinWorkerThreadFactory$1::class$ = nullptr;

		} // concurrent
	} // util
} // java