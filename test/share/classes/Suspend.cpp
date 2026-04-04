#include <Suspend.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/ThreadGroup.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $ThreadGroup = ::java::lang::ThreadGroup;

$volatile(int32_t) Suspend::count = 0;
$ThreadGroup* Suspend::group = nullptr;
$Thread* Suspend::first = nullptr;
$Thread* Suspend::second = nullptr;

void Suspend::init$() {
}

void Suspend::run() {
	while (true) {
		try {
			$Thread::sleep(100);
			if ($Thread::currentThread() == Suspend::first) {
				if (Suspend::second->isAlive()) {
					Suspend::group->suspend();
				}
			} else {
				++Suspend::count;
			}
		} catch ($InterruptedException& e) {
		}
	}
}

void Suspend::main($StringArray* args) {
	$init(Suspend);
	Suspend::first->start();
	Suspend::second->start();
	while (true) {
		bool var$0 = !Suspend::first->isAlive();
		if (!(var$0 || !Suspend::second->isAlive())) {
			break;
		}
		{
			$Thread::sleep(100);
		}
	}
	$Thread::sleep(1000);
	Suspend::count = 0;
	$Thread::sleep(1000);
	bool failed = (Suspend::count > 1);
	Suspend::first->stop();
	Suspend::second->stop();
	if (failed) {
		$throwNew($RuntimeException, "Failure."_s);
	}
}

void Suspend::clinit$($Class* clazz) {
	$useLocalObjectStack();
	Suspend::count = 0;
	$assignStatic(Suspend::group, $new($ThreadGroup, ""_s));
	$assignStatic(Suspend::first, $new($Thread, Suspend::group, $$new(Suspend)));
	$assignStatic(Suspend::second, $new($Thread, Suspend::group, $$new(Suspend)));
}

Suspend::Suspend() {
}

$Class* Suspend::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"count", "I", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(Suspend, count)},
		{"group", "Ljava/lang/ThreadGroup;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Suspend, group)},
		{"first", "Ljava/lang/Thread;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Suspend, first)},
		{"second", "Ljava/lang/Thread;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Suspend, second)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Suspend, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Suspend, main, void, $StringArray*), "java.lang.Exception"},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Suspend, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Suspend",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Suspend, name, initialize, &classInfo$$, Suspend::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Suspend);
	});
	return class$;
}

$Class* Suspend::class$ = nullptr;