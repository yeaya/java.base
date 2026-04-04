#include <StaticInterfaceMethodInWayOfDefault$TestTask.h>
#include <StaticInterfaceMethodInWayOfDefault$C_v1.h>
#include <StaticInterfaceMethodInWayOfDefault.h>
#include <java/lang/NoSuchMethodException.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $StaticInterfaceMethodInWayOfDefault$C_v1 = ::StaticInterfaceMethodInWayOfDefault$C_v1;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchMethodException = ::java::lang::NoSuchMethodException;
using $Method = ::java::lang::reflect::Method;

void StaticInterfaceMethodInWayOfDefault$TestTask::init$() {
}

$Object* StaticInterfaceMethodInWayOfDefault$TestTask::call() {
	$beforeCallerSensitive();
	try {
		$load($StaticInterfaceMethodInWayOfDefault$C_v1);
		$var($Method, m, $StaticInterfaceMethodInWayOfDefault$C_v1::class$->getMethod("m"_s, ($ClassArray*)nullptr));
		return $of($nc($nc(m)->getDeclaringClass())->getSimpleName());
	} catch ($NoSuchMethodException& e) {
		$nc($System::err)->println("Couldn\'t find method"_s);
		return $of("ERROR"_s);
	}
	$shouldNotReachHere();
}

StaticInterfaceMethodInWayOfDefault$TestTask::StaticInterfaceMethodInWayOfDefault$TestTask() {
}

$Class* StaticInterfaceMethodInWayOfDefault$TestTask::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(StaticInterfaceMethodInWayOfDefault$TestTask, init$, void)},
		{"call", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(StaticInterfaceMethodInWayOfDefault$TestTask, call, $Object*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"StaticInterfaceMethodInWayOfDefault$TestTask", "StaticInterfaceMethodInWayOfDefault", "TestTask", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"StaticInterfaceMethodInWayOfDefault$TestTask",
		"java.lang.Object",
		"java.util.concurrent.Callable",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljava/lang/String;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"StaticInterfaceMethodInWayOfDefault"
	};
	$loadClass(StaticInterfaceMethodInWayOfDefault$TestTask, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StaticInterfaceMethodInWayOfDefault$TestTask);
	});
	return class$;
}

$Class* StaticInterfaceMethodInWayOfDefault$TestTask::class$ = nullptr;