#include <DynamicConstantDescTest$Task.h>

#include <DynamicConstantDescTest.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <jcpp.h>

using $DynamicConstantDescTest = ::DynamicConstantDescTest;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Callable = ::java::util::concurrent::Callable;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;

$FieldInfo _DynamicConstantDescTest$Task_FieldInfo_[] = {
	{"className", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(DynamicConstantDescTest$Task, className)},
	{"latch", "Ljava/util/concurrent/CountDownLatch;", nullptr, $PRIVATE | $FINAL, $field(DynamicConstantDescTest$Task, latch)},
	{}
};

$MethodInfo _DynamicConstantDescTest$Task_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/util/concurrent/CountDownLatch;)V", nullptr, $PRIVATE, $method(static_cast<void(DynamicConstantDescTest$Task::*)($String*,$CountDownLatch*)>(&DynamicConstantDescTest$Task::init$))},
	{"call", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", $PUBLIC},
	{}
};

$InnerClassInfo _DynamicConstantDescTest$Task_InnerClassesInfo_[] = {
	{"DynamicConstantDescTest$Task", "DynamicConstantDescTest", "Task", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _DynamicConstantDescTest$Task_ClassInfo_ = {
	$ACC_SUPER,
	"DynamicConstantDescTest$Task",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	_DynamicConstantDescTest$Task_FieldInfo_,
	_DynamicConstantDescTest$Task_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljava/lang/Class<*>;>;",
	nullptr,
	_DynamicConstantDescTest$Task_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"DynamicConstantDescTest"
};

$Object* allocate$DynamicConstantDescTest$Task($Class* clazz) {
	return $of($alloc(DynamicConstantDescTest$Task));
}

void DynamicConstantDescTest$Task::init$($String* className, $CountDownLatch* latch) {
	$set(this, className, className);
	$set(this, latch, latch);
}

$Object* DynamicConstantDescTest$Task::call() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$nc($System::out)->println($$str({$($($Thread::currentThread())->getName()), " loading "_s, this->className}));
	try {
		$nc(this->latch)->countDown();
		$nc(this->latch)->await();
		return $of($Class::forName(this->className));
	} catch ($Exception& e) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
	$shouldNotReachHere();
}

DynamicConstantDescTest$Task::DynamicConstantDescTest$Task() {
}

$Class* DynamicConstantDescTest$Task::load$($String* name, bool initialize) {
	$loadClass(DynamicConstantDescTest$Task, name, initialize, &_DynamicConstantDescTest$Task_ClassInfo_, allocate$DynamicConstantDescTest$Task);
	return class$;
}

$Class* DynamicConstantDescTest$Task::class$ = nullptr;