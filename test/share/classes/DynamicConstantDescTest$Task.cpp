#include <DynamicConstantDescTest$Task.h>
#include <DynamicConstantDescTest.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;

void DynamicConstantDescTest$Task::init$($String* className, $CountDownLatch* latch) {
	$set(this, className, className);
	$set(this, latch, latch);
}

$Object* DynamicConstantDescTest$Task::call() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$nc($System::out)->println($$str({$($($Thread::currentThread())->getName()), " loading "_s, this->className}));
	try {
		$nc(this->latch)->countDown();
		this->latch->await();
		return $of($Class::forName(this->className));
	} catch ($Exception& e) {
		$throwNew($RuntimeException, e);
	}
	$shouldNotReachHere();
}

DynamicConstantDescTest$Task::DynamicConstantDescTest$Task() {
}

$Class* DynamicConstantDescTest$Task::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"className", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(DynamicConstantDescTest$Task, className)},
		{"latch", "Ljava/util/concurrent/CountDownLatch;", nullptr, $PRIVATE | $FINAL, $field(DynamicConstantDescTest$Task, latch)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljava/util/concurrent/CountDownLatch;)V", nullptr, $PRIVATE, $method(DynamicConstantDescTest$Task, init$, void, $String*, $CountDownLatch*)},
		{"call", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", $PUBLIC, $virtualMethod(DynamicConstantDescTest$Task, call, $Object*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"DynamicConstantDescTest$Task", "DynamicConstantDescTest", "Task", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"DynamicConstantDescTest$Task",
		"java.lang.Object",
		"java.util.concurrent.Callable",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljava/lang/Class<*>;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"DynamicConstantDescTest"
	};
	$loadClass(DynamicConstantDescTest$Task, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DynamicConstantDescTest$Task);
	});
	return class$;
}

$Class* DynamicConstantDescTest$Task::class$ = nullptr;