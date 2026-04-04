#include <FinThreads.h>
#include <FinThreads$1.h>
#include <FinThreads$Foo.h>
#include <jcpp.h>

using $FinThreads$1 = ::FinThreads$1;
using $FinThreads$Foo = ::FinThreads$Foo;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$Thread* FinThreads::mainThread = nullptr;
$Object* FinThreads::lock = nullptr;
$Thread* FinThreads::finalizerThread = nullptr;
$Thread* FinThreads::finalizedBy = nullptr;

void FinThreads::init$() {
}

void FinThreads::alarm($Thread* sleeper, int64_t delay) {
	$init(FinThreads);
	$useLocalObjectStack();
	$var($Thread, t, $new($Thread, $$new($FinThreads$1, delay, sleeper)));
	t->setDaemon(true);
	t->start();
}

void FinThreads::main($StringArray* args) {
	$init(FinThreads);
	$assignStatic(FinThreads::mainThread, $Thread::currentThread());
	for (;;) {
		$FinThreads$Foo::create(true);
		$System::gc();
		$synchronized(FinThreads::lock) {
			if (FinThreads::finalizerThread != nullptr) {
				break;
			}
		}
	}
	alarm(FinThreads::finalizerThread, 5000);
	$FinThreads$Foo::create(false);
	for (;;) {
		$System::gc();
		$System::runFinalization();
		$synchronized(FinThreads::lock) {
			if (FinThreads::finalizedBy != nullptr) {
				break;
			}
		}
	}
	if (FinThreads::finalizedBy == FinThreads::mainThread) {
		$throwNew($Exception, "Finalizer run in main thread"_s);
	}
}

void FinThreads::clinit$($Class* clazz) {
	$assignStatic(FinThreads::lock, $new($Object));
	$assignStatic(FinThreads::finalizerThread, nullptr);
	$assignStatic(FinThreads::finalizedBy, nullptr);
}

FinThreads::FinThreads() {
}

$Class* FinThreads::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"mainThread", "Ljava/lang/Thread;", nullptr, $STATIC, $staticField(FinThreads, mainThread)},
		{"lock", "Ljava/lang/Object;", nullptr, $STATIC, $staticField(FinThreads, lock)},
		{"finalizerThread", "Ljava/lang/Thread;", nullptr, $STATIC, $staticField(FinThreads, finalizerThread)},
		{"finalizedBy", "Ljava/lang/Thread;", nullptr, $STATIC, $staticField(FinThreads, finalizedBy)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FinThreads, init$, void)},
		{"alarm", "(Ljava/lang/Thread;J)V", nullptr, $STATIC, $staticMethod(FinThreads, alarm, void, $Thread*, int64_t), "java.lang.InterruptedException"},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(FinThreads, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"FinThreads$Foo", "FinThreads", "Foo", $STATIC},
		{"FinThreads$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"FinThreads",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"FinThreads$Foo,FinThreads$Foo$1,FinThreads$1"
	};
	$loadClass(FinThreads, name, initialize, &classInfo$$, FinThreads::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(FinThreads);
	});
	return class$;
}

$Class* FinThreads::class$ = nullptr;