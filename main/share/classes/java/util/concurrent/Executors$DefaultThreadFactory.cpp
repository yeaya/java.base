#include <java/util/concurrent/Executors$DefaultThreadFactory.h>
#include <java/lang/Runnable.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/ThreadGroup.h>
#include <java/util/concurrent/Executors.h>
#include <java/util/concurrent/atomic/AtomicInteger.h>
#include <jcpp.h>

#undef NORM_PRIORITY

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $SecurityManager = ::java::lang::SecurityManager;
using $AtomicInteger = ::java::util::concurrent::atomic::AtomicInteger;

namespace java {
	namespace util {
		namespace concurrent {

$AtomicInteger* Executors$DefaultThreadFactory::poolNumber = nullptr;

void Executors$DefaultThreadFactory::init$() {
	$useLocalObjectStack();
	$set(this, threadNumber, $new($AtomicInteger, 1));
	$var($SecurityManager, s, $System::getSecurityManager());
	$set(this, group, (s != nullptr) ? s->getThreadGroup() : $($Thread::currentThread())->getThreadGroup());
	$set(this, namePrefix, $str({"pool-"_s, $$str(Executors$DefaultThreadFactory::poolNumber->getAndIncrement()), "-thread-"_s}));
}

$Thread* Executors$DefaultThreadFactory::newThread($Runnable* r) {
	$useLocalObjectStack();
	$var($Thread, t, $new($Thread, this->group, r, $$str({this->namePrefix, $$str(this->threadNumber->getAndIncrement())}), 0));
	if (t->isDaemon()) {
		t->setDaemon(false);
	}
	if (t->getPriority() != $Thread::NORM_PRIORITY) {
		t->setPriority($Thread::NORM_PRIORITY);
	}
	return t;
}

void Executors$DefaultThreadFactory::clinit$($Class* clazz) {
	$assignStatic(Executors$DefaultThreadFactory::poolNumber, $new($AtomicInteger, 1));
}

Executors$DefaultThreadFactory::Executors$DefaultThreadFactory() {
}

$Class* Executors$DefaultThreadFactory::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"poolNumber", "Ljava/util/concurrent/atomic/AtomicInteger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Executors$DefaultThreadFactory, poolNumber)},
		{"group", "Ljava/lang/ThreadGroup;", nullptr, $PRIVATE | $FINAL, $field(Executors$DefaultThreadFactory, group)},
		{"threadNumber", "Ljava/util/concurrent/atomic/AtomicInteger;", nullptr, $PRIVATE | $FINAL, $field(Executors$DefaultThreadFactory, threadNumber)},
		{"namePrefix", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(Executors$DefaultThreadFactory, namePrefix)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Executors$DefaultThreadFactory, init$, void)},
		{"newThread", "(Ljava/lang/Runnable;)Ljava/lang/Thread;", nullptr, $PUBLIC, $virtualMethod(Executors$DefaultThreadFactory, newThread, $Thread*, $Runnable*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.concurrent.Executors$DefaultThreadFactory", "java.util.concurrent.Executors", "DefaultThreadFactory", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.concurrent.Executors$DefaultThreadFactory",
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
		"java.util.concurrent.Executors"
	};
	$loadClass(Executors$DefaultThreadFactory, name, initialize, &classInfo$$, Executors$DefaultThreadFactory::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Executors$DefaultThreadFactory);
	});
	return class$;
}

$Class* Executors$DefaultThreadFactory::class$ = nullptr;

		} // concurrent
	} // util
} // java