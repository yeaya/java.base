#include <StaticInterfaceMethodInWayOfDefault$TestTask.h>

#include <StaticInterfaceMethodInWayOfDefault$C_v1.h>
#include <StaticInterfaceMethodInWayOfDefault.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NoSuchMethodException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $StaticInterfaceMethodInWayOfDefault = ::StaticInterfaceMethodInWayOfDefault;
using $StaticInterfaceMethodInWayOfDefault$C_v1 = ::StaticInterfaceMethodInWayOfDefault$C_v1;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchMethodException = ::java::lang::NoSuchMethodException;
using $Method = ::java::lang::reflect::Method;
using $Callable = ::java::util::concurrent::Callable;

$MethodInfo _StaticInterfaceMethodInWayOfDefault$TestTask_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(StaticInterfaceMethodInWayOfDefault$TestTask::*)()>(&StaticInterfaceMethodInWayOfDefault$TestTask::init$))},
	{"call", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _StaticInterfaceMethodInWayOfDefault$TestTask_InnerClassesInfo_[] = {
	{"StaticInterfaceMethodInWayOfDefault$TestTask", "StaticInterfaceMethodInWayOfDefault", "TestTask", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _StaticInterfaceMethodInWayOfDefault$TestTask_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"StaticInterfaceMethodInWayOfDefault$TestTask",
	"java.lang.Object",
	"java.util.concurrent.Callable",
	nullptr,
	_StaticInterfaceMethodInWayOfDefault$TestTask_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljava/lang/String;>;",
	nullptr,
	_StaticInterfaceMethodInWayOfDefault$TestTask_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"StaticInterfaceMethodInWayOfDefault"
};

$Object* allocate$StaticInterfaceMethodInWayOfDefault$TestTask($Class* clazz) {
	return $of($alloc(StaticInterfaceMethodInWayOfDefault$TestTask));
}

void StaticInterfaceMethodInWayOfDefault$TestTask::init$() {
}

$Object* StaticInterfaceMethodInWayOfDefault$TestTask::call() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	try {
		$load($StaticInterfaceMethodInWayOfDefault$C_v1);
		$var($Method, m, $StaticInterfaceMethodInWayOfDefault$C_v1::class$->getMethod("m"_s, ($ClassArray*)nullptr));
		return $of($nc($nc(m)->getDeclaringClass())->getSimpleName());
	} catch ($NoSuchMethodException&) {
		$var($NoSuchMethodException, e, $catch());
		$init($System);
		$nc($System::err)->println("Couldn\'t find method"_s);
		return $of("ERROR"_s);
	}
	$shouldNotReachHere();
}

StaticInterfaceMethodInWayOfDefault$TestTask::StaticInterfaceMethodInWayOfDefault$TestTask() {
}

$Class* StaticInterfaceMethodInWayOfDefault$TestTask::load$($String* name, bool initialize) {
	$loadClass(StaticInterfaceMethodInWayOfDefault$TestTask, name, initialize, &_StaticInterfaceMethodInWayOfDefault$TestTask_ClassInfo_, allocate$StaticInterfaceMethodInWayOfDefault$TestTask);
	return class$;
}

$Class* StaticInterfaceMethodInWayOfDefault$TestTask::class$ = nullptr;