#include <Stop.h>

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/Thread.h>
#include <java/lang/ThreadGroup.h>
#include <java/lang/Void.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $ThreadGroup = ::java::lang::ThreadGroup;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Stop$$Lambda$lambda$main$0>());
	}
	$CountDownLatch* ready = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Stop$$Lambda$lambda$main$0::fieldInfos[2] = {
	{"ready", "Ljava/util/concurrent/CountDownLatch;", nullptr, $PUBLIC, $field(Stop$$Lambda$lambda$main$0, ready)},
	{}
};
$MethodInfo Stop$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "(Ljava/util/concurrent/CountDownLatch;)V", nullptr, $PUBLIC, $method(static_cast<void(Stop$$Lambda$lambda$main$0::*)($CountDownLatch*)>(&Stop$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Stop$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"Stop$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* Stop$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(Stop$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Stop$$Lambda$lambda$main$1$1>());
	}
	$CountDownLatch* ready = nullptr;
	$ThreadGroup* group = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Stop$$Lambda$lambda$main$1$1::fieldInfos[3] = {
	{"ready", "Ljava/util/concurrent/CountDownLatch;", nullptr, $PUBLIC, $field(Stop$$Lambda$lambda$main$1$1, ready)},
	{"group", "Ljava/lang/ThreadGroup;", nullptr, $PUBLIC, $field(Stop$$Lambda$lambda$main$1$1, group)},
	{}
};
$MethodInfo Stop$$Lambda$lambda$main$1$1::methodInfos[3] = {
	{"<init>", "(Ljava/util/concurrent/CountDownLatch;Ljava/lang/ThreadGroup;)V", nullptr, $PUBLIC, $method(static_cast<void(Stop$$Lambda$lambda$main$1$1::*)($CountDownLatch*,$ThreadGroup*)>(&Stop$$Lambda$lambda$main$1$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Stop$$Lambda$lambda$main$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"Stop$$Lambda$lambda$main$1$1",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* Stop$$Lambda$lambda$main$1$1::load$($String* name, bool initialize) {
	$loadClass(Stop$$Lambda$lambda$main$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Stop$$Lambda$lambda$main$1$1::class$ = nullptr;

$MethodInfo _Stop_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Stop::*)()>(&Stop::init$))},
	{"lambda$main$0", "(Ljava/util/concurrent/CountDownLatch;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($CountDownLatch*)>(&Stop::lambda$main$0))},
	{"lambda$main$1", "(Ljava/util/concurrent/CountDownLatch;Ljava/lang/ThreadGroup;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($CountDownLatch*,$ThreadGroup*)>(&Stop::lambda$main$1))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Stop::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _Stop_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Stop",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Stop_MethodInfo_
};

$Object* allocate$Stop($Class* clazz) {
	return $of($alloc(Stop));
}

void Stop::init$() {
}

void Stop::main($StringArray* args) {
	$var($CountDownLatch, ready, $new($CountDownLatch, 1));
	$var($ThreadGroup, group, $new($ThreadGroup, ""_s));
	$var($Thread, second, $new($Thread, group, static_cast<$Runnable*>($$new(Stop$$Lambda$lambda$main$0, ready))));
	$var($Thread, first, $new($Thread, group, static_cast<$Runnable*>($$new(Stop$$Lambda$lambda$main$1$1, ready, group))));
	first->start();
	second->start();
	second->join();
}

void Stop::lambda$main$1($CountDownLatch* ready, $ThreadGroup* group) {
	try {
		$nc(ready)->await();
	} catch ($InterruptedException&) {
		$catch();
	}
	$nc(group)->stop();
}

void Stop::lambda$main$0($CountDownLatch* ready) {
	$nc(ready)->countDown();
	while (true) {
		try {
			$Thread::sleep(0x0000EA60);
		} catch ($InterruptedException&) {
			$catch();
		}
	}
}

Stop::Stop() {
}

$Class* Stop::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Stop$$Lambda$lambda$main$0::classInfo$.name)) {
			return Stop$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals(Stop$$Lambda$lambda$main$1$1::classInfo$.name)) {
			return Stop$$Lambda$lambda$main$1$1::load$(name, initialize);
		}
	}
	$loadClass(Stop, name, initialize, &_Stop_ClassInfo_, allocate$Stop);
	return class$;
}

$Class* Stop::class$ = nullptr;