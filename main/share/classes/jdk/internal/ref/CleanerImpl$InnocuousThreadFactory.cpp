#include <jdk/internal/ref/CleanerImpl$InnocuousThreadFactory.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/Thread.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/concurrent/ThreadFactory.h>
#include <java/util/concurrent/atomic/AtomicInteger.h>
#include <jdk/internal/misc/InnocuousThread.h>
#include <jdk/internal/ref/CleanerImpl.h>
#include <jcpp.h>

#undef MIN_PRIORITY

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $ThreadFactory = ::java::util::concurrent::ThreadFactory;
using $AtomicInteger = ::java::util::concurrent::atomic::AtomicInteger;
using $InnocuousThread = ::jdk::internal::misc::InnocuousThread;
using $CleanerImpl = ::jdk::internal::ref::CleanerImpl;

namespace jdk {
	namespace internal {
		namespace ref {

$FieldInfo _CleanerImpl$InnocuousThreadFactory_FieldInfo_[] = {
	{"factory", "Ljava/util/concurrent/ThreadFactory;", nullptr, $STATIC | $FINAL, $staticField(CleanerImpl$InnocuousThreadFactory, factory$)},
	{"cleanerThreadNumber", "Ljava/util/concurrent/atomic/AtomicInteger;", nullptr, $FINAL, $field(CleanerImpl$InnocuousThreadFactory, cleanerThreadNumber)},
	{}
};

$MethodInfo _CleanerImpl$InnocuousThreadFactory_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(CleanerImpl$InnocuousThreadFactory::*)()>(&CleanerImpl$InnocuousThreadFactory::init$))},
	{"factory", "()Ljava/util/concurrent/ThreadFactory;", nullptr, $STATIC, $method(static_cast<$ThreadFactory*(*)()>(&CleanerImpl$InnocuousThreadFactory::factory))},
	{"newThread", "(Ljava/lang/Runnable;)Ljava/lang/Thread;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _CleanerImpl$InnocuousThreadFactory_InnerClassesInfo_[] = {
	{"jdk.internal.ref.CleanerImpl$InnocuousThreadFactory", "jdk.internal.ref.CleanerImpl", "InnocuousThreadFactory", $STATIC | $FINAL},
	{}
};

$ClassInfo _CleanerImpl$InnocuousThreadFactory_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"jdk.internal.ref.CleanerImpl$InnocuousThreadFactory",
	"java.lang.Object",
	"java.util.concurrent.ThreadFactory",
	_CleanerImpl$InnocuousThreadFactory_FieldInfo_,
	_CleanerImpl$InnocuousThreadFactory_MethodInfo_,
	nullptr,
	nullptr,
	_CleanerImpl$InnocuousThreadFactory_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.ref.CleanerImpl"
};

$Object* allocate$CleanerImpl$InnocuousThreadFactory($Class* clazz) {
	return $of($alloc(CleanerImpl$InnocuousThreadFactory));
}

$ThreadFactory* CleanerImpl$InnocuousThreadFactory::factory$ = nullptr;

void CleanerImpl$InnocuousThreadFactory::init$() {
	$set(this, cleanerThreadNumber, $new($AtomicInteger));
}

$ThreadFactory* CleanerImpl$InnocuousThreadFactory::factory() {
	$init(CleanerImpl$InnocuousThreadFactory);
	return CleanerImpl$InnocuousThreadFactory::factory$;
}

$Thread* CleanerImpl$InnocuousThreadFactory::newThread($Runnable* r) {
	$useLocalCurrentObjectStackCache();
	return $InnocuousThread::newThread($$str({"Cleaner-"_s, $$str($nc(this->cleanerThreadNumber)->getAndIncrement())}), r, $Thread::MIN_PRIORITY - 2);
}

void clinit$CleanerImpl$InnocuousThreadFactory($Class* class$) {
	$assignStatic(CleanerImpl$InnocuousThreadFactory::factory$, $new(CleanerImpl$InnocuousThreadFactory));
}

CleanerImpl$InnocuousThreadFactory::CleanerImpl$InnocuousThreadFactory() {
}

$Class* CleanerImpl$InnocuousThreadFactory::load$($String* name, bool initialize) {
	$loadClass(CleanerImpl$InnocuousThreadFactory, name, initialize, &_CleanerImpl$InnocuousThreadFactory_ClassInfo_, clinit$CleanerImpl$InnocuousThreadFactory, allocate$CleanerImpl$InnocuousThreadFactory);
	return class$;
}

$Class* CleanerImpl$InnocuousThreadFactory::class$ = nullptr;

		} // ref
	} // internal
} // jdk