#include <TestSynchronization$InvokeTask.h>
#include <TestSynchronization.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/reflect/InvocationTargetException.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InvocationTargetException = ::java::lang::reflect::InvocationTargetException;
using $Method = ::java::lang::reflect::Method;

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
	$FieldInfo fieldInfos$$[] = {
		{"m", "Ljava/lang/reflect/Method;", nullptr, $PRIVATE | $FINAL, $field(TestSynchronization$InvokeTask, m)},
		{"target", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(TestSynchronization$InvokeTask, target)},
		{"args", "[Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(TestSynchronization$InvokeTask, args)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/reflect/Method;Ljava/lang/Object;[Ljava/lang/Object;)V", nullptr, $TRANSIENT, $method(TestSynchronization$InvokeTask, init$, void, $Method*, Object$*, $ObjectArray*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TestSynchronization$InvokeTask, run, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestSynchronization$InvokeTask", "TestSynchronization", "InvokeTask", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"TestSynchronization$InvokeTask",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"TestSynchronization"
	};
	$loadClass(TestSynchronization$InvokeTask, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestSynchronization$InvokeTask);
	});
	return class$;
}

$Class* TestSynchronization$InvokeTask::class$ = nullptr;