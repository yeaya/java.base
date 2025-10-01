#include <java/util/concurrent/Executors$DefaultThreadFactory.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Thread.h>
#include <java/lang/ThreadGroup.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
using $ThreadGroup = ::java::lang::ThreadGroup;
using $Executors = ::java::util::concurrent::Executors;
using $ThreadFactory = ::java::util::concurrent::ThreadFactory;
using $AtomicInteger = ::java::util::concurrent::atomic::AtomicInteger;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _Executors$DefaultThreadFactory_FieldInfo_[] = {
	{"poolNumber", "Ljava/util/concurrent/atomic/AtomicInteger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Executors$DefaultThreadFactory, poolNumber)},
	{"group", "Ljava/lang/ThreadGroup;", nullptr, $PRIVATE | $FINAL, $field(Executors$DefaultThreadFactory, group)},
	{"threadNumber", "Ljava/util/concurrent/atomic/AtomicInteger;", nullptr, $PRIVATE | $FINAL, $field(Executors$DefaultThreadFactory, threadNumber)},
	{"namePrefix", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(Executors$DefaultThreadFactory, namePrefix)},
	{}
};

$MethodInfo _Executors$DefaultThreadFactory_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Executors$DefaultThreadFactory::*)()>(&Executors$DefaultThreadFactory::init$))},
	{"newThread", "(Ljava/lang/Runnable;)Ljava/lang/Thread;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Executors$DefaultThreadFactory_InnerClassesInfo_[] = {
	{"java.util.concurrent.Executors$DefaultThreadFactory", "java.util.concurrent.Executors", "DefaultThreadFactory", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Executors$DefaultThreadFactory_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.concurrent.Executors$DefaultThreadFactory",
	"java.lang.Object",
	"java.util.concurrent.ThreadFactory",
	_Executors$DefaultThreadFactory_FieldInfo_,
	_Executors$DefaultThreadFactory_MethodInfo_,
	nullptr,
	nullptr,
	_Executors$DefaultThreadFactory_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.concurrent.Executors"
};

$Object* allocate$Executors$DefaultThreadFactory($Class* clazz) {
	return $of($alloc(Executors$DefaultThreadFactory));
}

$AtomicInteger* Executors$DefaultThreadFactory::poolNumber = nullptr;

void Executors$DefaultThreadFactory::init$() {
	$set(this, threadNumber, $new($AtomicInteger, 1));
	$var($SecurityManager, s, $System::getSecurityManager());
	$set(this, group, (s != nullptr) ? $nc(s)->getThreadGroup() : $($Thread::currentThread())->getThreadGroup());
	$set(this, namePrefix, $str({"pool-"_s, $$str($nc(Executors$DefaultThreadFactory::poolNumber)->getAndIncrement()), "-thread-"_s}));
}

$Thread* Executors$DefaultThreadFactory::newThread($Runnable* r) {
	$var($Thread, t, $new($Thread, this->group, r, $$str({this->namePrefix, $$str($nc(this->threadNumber)->getAndIncrement())}), 0));
	if (t->isDaemon()) {
		t->setDaemon(false);
	}
	if (t->getPriority() != $Thread::NORM_PRIORITY) {
		t->setPriority($Thread::NORM_PRIORITY);
	}
	return t;
}

void clinit$Executors$DefaultThreadFactory($Class* class$) {
	$assignStatic(Executors$DefaultThreadFactory::poolNumber, $new($AtomicInteger, 1));
}

Executors$DefaultThreadFactory::Executors$DefaultThreadFactory() {
}

$Class* Executors$DefaultThreadFactory::load$($String* name, bool initialize) {
	$loadClass(Executors$DefaultThreadFactory, name, initialize, &_Executors$DefaultThreadFactory_ClassInfo_, clinit$Executors$DefaultThreadFactory, allocate$Executors$DefaultThreadFactory);
	return class$;
}

$Class* Executors$DefaultThreadFactory::class$ = nullptr;

		} // concurrent
	} // util
} // java