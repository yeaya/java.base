#include <TestSynchronization$InvokeTask.h>

#include <TestSynchronization.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/reflect/InvocationTargetException.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $TestSynchronization = ::TestSynchronization;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $InvocationTargetException = ::java::lang::reflect::InvocationTargetException;
using $Method = ::java::lang::reflect::Method;

$FieldInfo _TestSynchronization$InvokeTask_FieldInfo_[] = {
	{"m", "Ljava/lang/reflect/Method;", nullptr, $PRIVATE | $FINAL, $field(TestSynchronization$InvokeTask, m)},
	{"target", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(TestSynchronization$InvokeTask, target)},
	{"args", "[Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(TestSynchronization$InvokeTask, args)},
	{}
};

$MethodInfo _TestSynchronization$InvokeTask_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/reflect/Method;Ljava/lang/Object;[Ljava/lang/Object;)V", nullptr, $TRANSIENT, $method(static_cast<void(TestSynchronization$InvokeTask::*)($Method*,Object$*,$ObjectArray*)>(&TestSynchronization$InvokeTask::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _TestSynchronization$InvokeTask_InnerClassesInfo_[] = {
	{"TestSynchronization$InvokeTask", "TestSynchronization", "InvokeTask", $STATIC},
	{}
};

$ClassInfo _TestSynchronization$InvokeTask_ClassInfo_ = {
	$ACC_SUPER,
	"TestSynchronization$InvokeTask",
	"java.lang.Object",
	"java.lang.Runnable",
	_TestSynchronization$InvokeTask_FieldInfo_,
	_TestSynchronization$InvokeTask_MethodInfo_,
	nullptr,
	nullptr,
	_TestSynchronization$InvokeTask_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TestSynchronization"
};

$Object* allocate$TestSynchronization$InvokeTask($Class* clazz) {
	return $of($alloc(TestSynchronization$InvokeTask));
}

void TestSynchronization$InvokeTask::init$($Method* m, Object$* target, $ObjectArray* args) {
	$set(this, m, m);
	$set(this, target, target);
	$set(this, args, args);
}

void TestSynchronization$InvokeTask::run() {
	$beforeCallerSensitive();
	try {
		$nc(this->m)->invoke(this->target, this->args);
	} catch ($IllegalAccessException& e) {
		e->printStackTrace();
	} catch ($IllegalArgumentException& e) {
		e->printStackTrace();
	} catch ($InvocationTargetException& e) {
		e->printStackTrace();
	}
}

TestSynchronization$InvokeTask::TestSynchronization$InvokeTask() {
}

$Class* TestSynchronization$InvokeTask::load$($String* name, bool initialize) {
	$loadClass(TestSynchronization$InvokeTask, name, initialize, &_TestSynchronization$InvokeTask_ClassInfo_, allocate$TestSynchronization$InvokeTask);
	return class$;
}

$Class* TestSynchronization$InvokeTask::class$ = nullptr;