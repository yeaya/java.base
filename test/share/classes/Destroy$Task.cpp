#include <Destroy$Task.h>

#include <Destroy.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <java/util/concurrent/Semaphore.h>
#include <jcpp.h>

using $Destroy = ::Destroy;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;
using $Semaphore = ::java::util::concurrent::Semaphore;

$FieldInfo _Destroy$Task_FieldInfo_[] = {
	{"sem", "Ljava/util/concurrent/Semaphore;", nullptr, $FINAL, $field(Destroy$Task, sem)},
	{"count", "Ljava/util/concurrent/CountDownLatch;", nullptr, $FINAL, $field(Destroy$Task, count)},
	{}
};

$MethodInfo _Destroy$Task_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/Semaphore;Ljava/util/concurrent/CountDownLatch;)V", nullptr, $PUBLIC, $method(static_cast<void(Destroy$Task::*)($Semaphore*,$CountDownLatch*)>(&Destroy$Task::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Destroy$Task_InnerClassesInfo_[] = {
	{"Destroy$Task", "Destroy", "Task", $STATIC | $FINAL},
	{}
};

$ClassInfo _Destroy$Task_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"Destroy$Task",
	"java.lang.Object",
	"java.lang.Runnable",
	_Destroy$Task_FieldInfo_,
	_Destroy$Task_MethodInfo_,
	nullptr,
	nullptr,
	_Destroy$Task_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Destroy"
};

$Object* allocate$Destroy$Task($Class* clazz) {
	return $of($alloc(Destroy$Task));
}

void Destroy$Task::init$($Semaphore* sem, $CountDownLatch* count) {
	$set(this, sem, sem);
	$set(this, count, count);
}

void Destroy$Task::run() {
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				$nc(this->count)->countDown();
				$nc(this->sem)->acquire();
			} catch ($Throwable& t) {
				t->printStackTrace();
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc($System::out)->println($$str({$($($Thread::currentThread())->getName()), " exiting"_s}));
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

Destroy$Task::Destroy$Task() {
}

$Class* Destroy$Task::load$($String* name, bool initialize) {
	$loadClass(Destroy$Task, name, initialize, &_Destroy$Task_ClassInfo_, allocate$Destroy$Task);
	return class$;
}

$Class* Destroy$Task::class$ = nullptr;