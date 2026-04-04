#include <Stop.h>
#include <java/io/Serializable.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Runnable.h>
#include <java/lang/ThreadGroup.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $ThreadGroup = ::java::lang::ThreadGroup;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;

class Stop$$Lambda$lambda$main$0 : public $Runnable {
	$class(Stop$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$($CountDownLatch* ready) {
		$set(this, ready, ready);
	}
	virtual void run() override {
		Stop::lambda$main$0(ready);
	}
	$CountDownLatch* ready = nullptr;
};
$Class* Stop$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"ready", "Ljava/util/concurrent/CountDownLatch;", nullptr, $PUBLIC, $field(Stop$$Lambda$lambda$main$0, ready)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/concurrent/CountDownLatch;)V", nullptr, $PUBLIC, $method(Stop$$Lambda$lambda$main$0, init$, void, $CountDownLatch*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Stop$$Lambda$lambda$main$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"Stop$$Lambda$lambda$main$0",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Stop$$Lambda$lambda$main$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Stop$$Lambda$lambda$main$0);
	});
	return class$;
}
$Class* Stop$$Lambda$lambda$main$0::class$ = nullptr;

class Stop$$Lambda$lambda$main$1$1 : public $Runnable {
	$class(Stop$$Lambda$lambda$main$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$($CountDownLatch* ready, $ThreadGroup* group) {
		$set(this, ready, ready);
		$set(this, group, group);
	}
	virtual void run() override {
		Stop::lambda$main$1(ready, group);
	}
	$CountDownLatch* ready = nullptr;
	$ThreadGroup* group = nullptr;
};
$Class* Stop$$Lambda$lambda$main$1$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"ready", "Ljava/util/concurrent/CountDownLatch;", nullptr, $PUBLIC, $field(Stop$$Lambda$lambda$main$1$1, ready)},
		{"group", "Ljava/lang/ThreadGroup;", nullptr, $PUBLIC, $field(Stop$$Lambda$lambda$main$1$1, group)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/concurrent/CountDownLatch;Ljava/lang/ThreadGroup;)V", nullptr, $PUBLIC, $method(Stop$$Lambda$lambda$main$1$1, init$, void, $CountDownLatch*, $ThreadGroup*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Stop$$Lambda$lambda$main$1$1, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"Stop$$Lambda$lambda$main$1$1",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Stop$$Lambda$lambda$main$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Stop$$Lambda$lambda$main$1$1);
	});
	return class$;
}
$Class* Stop$$Lambda$lambda$main$1$1::class$ = nullptr;

void Stop::init$() {
}

void Stop::main($StringArray* args) {
	$useLocalObjectStack();
	$var($CountDownLatch, ready, $new($CountDownLatch, 1));
	$var($ThreadGroup, group, $new($ThreadGroup, ""_s));
	$var($Thread, second, $new($Thread, group, $$new(Stop$$Lambda$lambda$main$0, ready)));
	$var($Thread, first, $new($Thread, group, $$new(Stop$$Lambda$lambda$main$1$1, ready, group)));
	first->start();
	second->start();
	second->join();
}

void Stop::lambda$main$1($CountDownLatch* ready, $ThreadGroup* group) {
	try {
		$nc(ready)->await();
	} catch ($InterruptedException& shouldNotHappen) {
	}
	$nc(group)->stop();
}

void Stop::lambda$main$0($CountDownLatch* ready) {
	$nc(ready)->countDown();
	while (true) {
		try {
			$Thread::sleep(60000);
		} catch ($InterruptedException& shouldNotHappen) {
		}
	}
}

Stop::Stop() {
}

$Class* Stop::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("Stop$$Lambda$lambda$main$0")) {
			return Stop$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals("Stop$$Lambda$lambda$main$1$1")) {
			return Stop$$Lambda$lambda$main$1$1::load$(name, initialize);
		}
	}
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Stop, init$, void)},
		{"lambda$main$0", "(Ljava/util/concurrent/CountDownLatch;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Stop, lambda$main$0, void, $CountDownLatch*)},
		{"lambda$main$1", "(Ljava/util/concurrent/CountDownLatch;Ljava/lang/ThreadGroup;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Stop, lambda$main$1, void, $CountDownLatch*, $ThreadGroup*)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Stop, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Stop",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Stop, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Stop);
	});
	return class$;
}

$Class* Stop::class$ = nullptr;