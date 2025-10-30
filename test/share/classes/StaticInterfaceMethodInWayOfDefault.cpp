#include <StaticInterfaceMethodInWayOfDefault.h>

#include <StaticInterfaceMethodInWayOfDefault$TestTask.h>
#include <StaticInterfaceMethodInWayOfDefault$V2ClassLoader.h>
#include <java/lang/ClassLoader.h>
#include <java/util/concurrent/Callable.h>
#include <jcpp.h>

using $StaticInterfaceMethodInWayOfDefault$TestTask = ::StaticInterfaceMethodInWayOfDefault$TestTask;
using $StaticInterfaceMethodInWayOfDefault$V2ClassLoader = ::StaticInterfaceMethodInWayOfDefault$V2ClassLoader;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Callable = ::java::util::concurrent::Callable;

$MethodInfo _StaticInterfaceMethodInWayOfDefault_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(StaticInterfaceMethodInWayOfDefault::*)()>(&StaticInterfaceMethodInWayOfDefault::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&StaticInterfaceMethodInWayOfDefault::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _StaticInterfaceMethodInWayOfDefault_InnerClassesInfo_[] = {
	{"StaticInterfaceMethodInWayOfDefault$V2ClassLoader", "StaticInterfaceMethodInWayOfDefault", "V2ClassLoader", $STATIC},
	{"StaticInterfaceMethodInWayOfDefault$TestTask", "StaticInterfaceMethodInWayOfDefault", "TestTask", $PUBLIC | $STATIC},
	{"StaticInterfaceMethodInWayOfDefault$C_v2", "StaticInterfaceMethodInWayOfDefault", "C_v2", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"StaticInterfaceMethodInWayOfDefault$C_v1", "StaticInterfaceMethodInWayOfDefault", "C_v1", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"StaticInterfaceMethodInWayOfDefault$B", "StaticInterfaceMethodInWayOfDefault", "B", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"StaticInterfaceMethodInWayOfDefault$A_v2", "StaticInterfaceMethodInWayOfDefault", "A_v2", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"StaticInterfaceMethodInWayOfDefault$A_v1", "StaticInterfaceMethodInWayOfDefault", "A_v1", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _StaticInterfaceMethodInWayOfDefault_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"StaticInterfaceMethodInWayOfDefault",
	"java.lang.Object",
	nullptr,
	nullptr,
	_StaticInterfaceMethodInWayOfDefault_MethodInfo_,
	nullptr,
	nullptr,
	_StaticInterfaceMethodInWayOfDefault_InnerClassesInfo_,
	nullptr,
	nullptr,
	"StaticInterfaceMethodInWayOfDefault$V2ClassLoader,StaticInterfaceMethodInWayOfDefault$TestTask,StaticInterfaceMethodInWayOfDefault$C_v2,StaticInterfaceMethodInWayOfDefault$C_v1,StaticInterfaceMethodInWayOfDefault$B,StaticInterfaceMethodInWayOfDefault$A_v2,StaticInterfaceMethodInWayOfDefault$A_v1"
};

$Object* allocate$StaticInterfaceMethodInWayOfDefault($Class* clazz) {
	return $of($alloc(StaticInterfaceMethodInWayOfDefault));
}

void StaticInterfaceMethodInWayOfDefault::init$() {
}

void StaticInterfaceMethodInWayOfDefault::main($StringArray* args) {
	$load(StaticInterfaceMethodInWayOfDefault);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	int32_t errors = 0;
	$var($Callable, v1Task, $new($StaticInterfaceMethodInWayOfDefault$TestTask));
	$var($ClassLoader, v2Loader, $new($StaticInterfaceMethodInWayOfDefault$V2ClassLoader, $(StaticInterfaceMethodInWayOfDefault::class$->getClassLoader())));
	$load($StaticInterfaceMethodInWayOfDefault$TestTask);
	$var($Callable, v2Task, $cast($Callable, $Class::forName($($StaticInterfaceMethodInWayOfDefault$TestTask::class$->getName()), true, v2Loader)->newInstance()));
	$nc($System::err)->println("Running using _v1 classes:"_s);
	$var($String, res, $cast($String, v1Task->call()));
	if (!$nc(res)->equals("C_v1"_s)) {
		$nc($System::err)->println($$str({"Got wrong method, expecting C_v1, got: "_s, res}));
		++errors;
	}
	$nc($System::err)->println("Running using _v2 classes:"_s);
	$assign(res, $cast($String, $nc(v2Task)->call()));
	if (!$nc(res)->equals("A_v1"_s)) {
		$nc($System::err)->println($$str({"Got wrong method, expecting A_v1, got: "_s, res}));
		++errors;
	}
	if (errors != 0) {
		$throwNew($RuntimeException, "Errors found, check log for details"_s);
	}
}

StaticInterfaceMethodInWayOfDefault::StaticInterfaceMethodInWayOfDefault() {
}

$Class* StaticInterfaceMethodInWayOfDefault::load$($String* name, bool initialize) {
	$loadClass(StaticInterfaceMethodInWayOfDefault, name, initialize, &_StaticInterfaceMethodInWayOfDefault_ClassInfo_, allocate$StaticInterfaceMethodInWayOfDefault);
	return class$;
}

$Class* StaticInterfaceMethodInWayOfDefault::class$ = nullptr;