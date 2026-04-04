#include <jdk/internal/ref/CleanerImpl$InnocuousThreadFactory.h>
#include <java/lang/Runnable.h>
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

namespace jdk {
	namespace internal {
		namespace ref {

$ThreadFactory* CleanerImpl$InnocuousThreadFactory::factory$ = nullptr;

void CleanerImpl$InnocuousThreadFactory::init$() {
	$set(this, cleanerThreadNumber, $new($AtomicInteger));
}

$ThreadFactory* CleanerImpl$InnocuousThreadFactory::factory() {
	$init(CleanerImpl$InnocuousThreadFactory);
	return CleanerImpl$InnocuousThreadFactory::factory$;
}

$Thread* CleanerImpl$InnocuousThreadFactory::newThread($Runnable* r) {
	$useLocalObjectStack();
	return $InnocuousThread::newThread($$str({"Cleaner-"_s, $$str(this->cleanerThreadNumber->getAndIncrement())}), r, $Thread::MIN_PRIORITY - 2);
}

void CleanerImpl$InnocuousThreadFactory::clinit$($Class* clazz) {
	$assignStatic(CleanerImpl$InnocuousThreadFactory::factory$, $new(CleanerImpl$InnocuousThreadFactory));
}

CleanerImpl$InnocuousThreadFactory::CleanerImpl$InnocuousThreadFactory() {
}

$Class* CleanerImpl$InnocuousThreadFactory::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"factory", "Ljava/util/concurrent/ThreadFactory;", nullptr, $STATIC | $FINAL, $staticField(CleanerImpl$InnocuousThreadFactory, factory$)},
		{"cleanerThreadNumber", "Ljava/util/concurrent/atomic/AtomicInteger;", nullptr, $FINAL, $field(CleanerImpl$InnocuousThreadFactory, cleanerThreadNumber)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(CleanerImpl$InnocuousThreadFactory, init$, void)},
		{"factory", "()Ljava/util/concurrent/ThreadFactory;", nullptr, $STATIC, $staticMethod(CleanerImpl$InnocuousThreadFactory, factory, $ThreadFactory*)},
		{"newThread", "(Ljava/lang/Runnable;)Ljava/lang/Thread;", nullptr, $PUBLIC, $virtualMethod(CleanerImpl$InnocuousThreadFactory, newThread, $Thread*, $Runnable*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.ref.CleanerImpl$InnocuousThreadFactory", "jdk.internal.ref.CleanerImpl", "InnocuousThreadFactory", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"jdk.internal.ref.CleanerImpl$InnocuousThreadFactory",
		"java.lang.Object",
		"java.util.concurrent.ThreadFactory",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.ref.CleanerImpl"
	};
	$loadClass(CleanerImpl$InnocuousThreadFactory, name, initialize, &classInfo$$, CleanerImpl$InnocuousThreadFactory::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(CleanerImpl$InnocuousThreadFactory);
	});
	return class$;
}

$Class* CleanerImpl$InnocuousThreadFactory::class$ = nullptr;

		} // ref
	} // internal
} // jdk