#include <Target2.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _Target2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Target2::*)()>(&Target2::init$))},
	{}
};

$ClassInfo _Target2_ClassInfo_ = {
	$ACC_SUPER,
	"Target2",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Target2_MethodInfo_
};

$Object* allocate$Target2($Class* clazz) {
	return $of($alloc(Target2));
}

void Target2::init$() {
}

void clinit$Target2($Class* class$) {
	$beforeCallerSensitive();
	{
		$System::loadLibrary("awt"_s);
	}
}

Target2::Target2() {
}

$Class* Target2::load$($String* name, bool initialize) {
	$loadClass(Target2, name, initialize, &_Target2_ClassInfo_, clinit$Target2, allocate$Target2);
	return class$;
}

$Class* Target2::class$ = nullptr;