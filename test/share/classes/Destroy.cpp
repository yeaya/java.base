#include <Destroy.h>

#include <Destroy$1.h>
#include <Destroy$Task.h>
#include <java/io/Serializable.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Runnable.h>
#include <java/lang/ThreadGroup.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <java/util/concurrent/Semaphore.h>
#include <java/util/concurrent/atomic/AtomicInteger.h>
#include <jcpp.h>

using $Destroy$1 = ::Destroy$1;
using $Destroy$Task = ::Destroy$Task;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
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
using $Semaphore = ::java::util::concurrent::Semaphore;
using $AtomicInteger = ::java::util::concurrent::atomic::AtomicInteger;

class Destroy$$Lambda$destroy : public $Runnable {
	$class(Destroy$$Lambda$destroy, $NO_CLASS_INIT, $Runnable)
public:
	void init$($ThreadGroup* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->destroy();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Destroy$$Lambda$destroy>());
	}
	$ThreadGroup* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Destroy$$Lambda$destroy::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Destroy$$Lambda$destroy, inst$)},
	{}
};
$MethodInfo Destroy$$Lambda$destroy::methodInfos[3] = {
	{"<init>", "(Ljava/lang/ThreadGroup;)V", nullptr, $PUBLIC, $method(static_cast<void(Destroy$$Lambda$destroy::*)($ThreadGroup*)>(&Destroy$$Lambda$destroy::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Destroy$$Lambda$destroy::classInfo$ = {
	$PUBLIC | $FINAL,
	"Destroy$$Lambda$destroy",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* Destroy$$Lambda$destroy::load$($String* name, bool initialize) {
	$loadClass(Destroy$$Lambda$destroy, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Destroy$$Lambda$destroy::class$ = nullptr;

$MethodInfo _Destroy_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Destroy::*)()>(&Destroy::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Destroy::main)), "java.lang.Exception"},
	{"testDestroyChild", "()V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)()>(&Destroy::testDestroyChild)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _Destroy_InnerClassesInfo_[] = {
	{"Destroy$Task", "Destroy", "Task", $STATIC | $FINAL},
	{"Destroy$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Destroy_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Destroy",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Destroy_MethodInfo_,
	nullptr,
	nullptr,
	_Destroy_InnerClassesInfo_,
	nullptr,
	nullptr,
	"Destroy$Task,Destroy$1"
};

$Object* allocate$Destroy($Class* clazz) {
	return $of($alloc(Destroy));
}

void Destroy::init$() {
}

void Destroy::main($StringArray* args) {
	testDestroyChild();
}

void Destroy::testDestroyChild() {
	$useLocalCurrentObjectStackCache();
	$var($ThreadGroup, root, $new($ThreadGroup, "root"_s));
	$var($ThreadGroup, parent, $new($ThreadGroup, root, "parent"_s));
	$var($ThreadGroup, child1, $new($ThreadGroup, parent, "child1"_s));
	$var($CountDownLatch, count, $new($CountDownLatch, 2));
	$var($Semaphore, sem1, $new($Semaphore, 1));
	$var($Semaphore, sem2, $new($Semaphore, 1));
	$var($Thread, t1, $new($Thread, parent, $$new($Destroy$Task, sem1, count), "PT1"_s));
	$var($Thread, t2, $new($Thread, parent, $$new($Destroy$Task, sem2, count), "PT2"_s));
	sem1->acquire();
	sem2->acquire();
	{
		$var($Throwable, var$0, nullptr);
		try {
			t1->start();
			t2->start();
			$nc($System::out)->println("\nAwaiting parent threads..."_s);
			count->await();
			$var($ThreadArray, threads, $new($ThreadArray, 2));
			int32_t nb = root->enumerate(threads, true);
			if (nb != 2) {
				$throwNew($AssertionError, $of($$str({"wrong number of threads: "_s, $$str(nb)})));
			}
			$var($Thread, t3, $new($Thread, static_cast<$Runnable*>($$new(Destroy$$Lambda$destroy, static_cast<$ThreadGroup*>(child1))), "destroy"_s));
			$var($AtomicInteger, nbr, $new($AtomicInteger));
			$var($Thread, t4, $new($Destroy$1, "enumerate"_s, nbr, root));
			t4->start();
			t3->start();
			t4->join();
			t3->join();
			if (nbr->get() != nb) {
				$throwNew($AssertionError, $of($$str({"wrong number of threads: "_s, $$str(nbr->get())})));
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			sem1->release();
			sem2->release();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	t1->join();
	t2->join();
}

Destroy::Destroy() {
}

$Class* Destroy::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Destroy$$Lambda$destroy::classInfo$.name)) {
			return Destroy$$Lambda$destroy::load$(name, initialize);
		}
	}
	$loadClass(Destroy, name, initialize, &_Destroy_ClassInfo_, allocate$Destroy);
	return class$;
}

$Class* Destroy::class$ = nullptr;