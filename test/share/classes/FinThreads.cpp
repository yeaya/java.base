#include <FinThreads.h>

#include <FinThreads$1.h>
#include <FinThreads$Foo.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Thread.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $FinThreads$1 = ::FinThreads$1;
using $FinThreads$Foo = ::FinThreads$Foo;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;

$FieldInfo _FinThreads_FieldInfo_[] = {
	{"mainThread", "Ljava/lang/Thread;", nullptr, $STATIC, $staticField(FinThreads, mainThread)},
	{"lock", "Ljava/lang/Object;", nullptr, $STATIC, $staticField(FinThreads, lock)},
	{"finalizerThread", "Ljava/lang/Thread;", nullptr, $STATIC, $staticField(FinThreads, finalizerThread)},
	{"finalizedBy", "Ljava/lang/Thread;", nullptr, $STATIC, $staticField(FinThreads, finalizedBy)},
	{}
};

$MethodInfo _FinThreads_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FinThreads::*)()>(&FinThreads::init$))},
	{"alarm", "(Ljava/lang/Thread;J)V", nullptr, $STATIC, $method(static_cast<void(*)($Thread*,int64_t)>(&FinThreads::alarm)), "java.lang.InterruptedException"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&FinThreads::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _FinThreads_InnerClassesInfo_[] = {
	{"FinThreads$Foo", "FinThreads", "Foo", $STATIC},
	{"FinThreads$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _FinThreads_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"FinThreads",
	"java.lang.Object",
	nullptr,
	_FinThreads_FieldInfo_,
	_FinThreads_MethodInfo_,
	nullptr,
	nullptr,
	_FinThreads_InnerClassesInfo_,
	nullptr,
	nullptr,
	"FinThreads$Foo,FinThreads$Foo$1,FinThreads$1"
};

$Object* allocate$FinThreads($Class* clazz) {
	return $of($alloc(FinThreads));
}

$Thread* FinThreads::mainThread = nullptr;
$Object* FinThreads::lock = nullptr;
$Thread* FinThreads::finalizerThread = nullptr;
$Thread* FinThreads::finalizedBy = nullptr;

void FinThreads::init$() {
}

void FinThreads::alarm($Thread* sleeper, int64_t delay) {
	$init(FinThreads);
	$var($Thread, t, $new($Thread, static_cast<$Runnable*>($$new($FinThreads$1, delay, sleeper))));
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

void clinit$FinThreads($Class* class$) {
	$assignStatic(FinThreads::lock, $new($Object));
	$assignStatic(FinThreads::finalizerThread, nullptr);
	$assignStatic(FinThreads::finalizedBy, nullptr);
}

FinThreads::FinThreads() {
}

$Class* FinThreads::load$($String* name, bool initialize) {
	$loadClass(FinThreads, name, initialize, &_FinThreads_ClassInfo_, clinit$FinThreads, allocate$FinThreads);
	return class$;
}

$Class* FinThreads::class$ = nullptr;