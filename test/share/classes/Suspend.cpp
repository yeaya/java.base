#include <Suspend.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Thread.h>
#include <java/lang/ThreadGroup.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $ThreadGroup = ::java::lang::ThreadGroup;

$FieldInfo _Suspend_FieldInfo_[] = {
	{"count", "I", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(Suspend, count)},
	{"group", "Ljava/lang/ThreadGroup;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Suspend, group)},
	{"first", "Ljava/lang/Thread;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Suspend, first)},
	{"second", "Ljava/lang/Thread;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Suspend, second)},
	{}
};

$MethodInfo _Suspend_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Suspend::*)()>(&Suspend::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Suspend::main)), "java.lang.Exception"},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _Suspend_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Suspend",
	"java.lang.Object",
	"java.lang.Runnable",
	_Suspend_FieldInfo_,
	_Suspend_MethodInfo_
};

$Object* allocate$Suspend($Class* clazz) {
	return $of($alloc(Suspend));
}

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
				if ($nc(Suspend::second)->isAlive()) {
					$nc(Suspend::group)->suspend();
				}
			} else {
				++Suspend::count;
			}
		} catch ($InterruptedException&) {
			$catch();
		}
	}
}

void Suspend::main($StringArray* args) {
	$init(Suspend);
	$nc(Suspend::first)->start();
	$nc(Suspend::second)->start();
	while (true) {
		bool var$0 = !$nc(Suspend::first)->isAlive();
		if (!(var$0 || !$nc(Suspend::second)->isAlive())) {
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
	$nc(Suspend::first)->stop();
	$nc(Suspend::second)->stop();
	if (failed) {
		$throwNew($RuntimeException, "Failure."_s);
	}
}

void clinit$Suspend($Class* class$) {
	Suspend::count = 0;
	$assignStatic(Suspend::group, $new($ThreadGroup, ""_s));
	$assignStatic(Suspend::first, $new($Thread, Suspend::group, static_cast<$Runnable*>($$new(Suspend))));
	$assignStatic(Suspend::second, $new($Thread, Suspend::group, static_cast<$Runnable*>($$new(Suspend))));
}

Suspend::Suspend() {
}

$Class* Suspend::load$($String* name, bool initialize) {
	$loadClass(Suspend, name, initialize, &_Suspend_ClassInfo_, clinit$Suspend, allocate$Suspend);
	return class$;
}

$Class* Suspend::class$ = nullptr;