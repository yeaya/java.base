#include <Target.h>

#include <java/lang/UnsatisfiedLinkError.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $UnsatisfiedLinkError = ::java::lang::UnsatisfiedLinkError;

$MethodInfo _Target_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(Target, init$, void)},
	{}
};

$ClassInfo _Target_ClassInfo_ = {
	$ACC_SUPER,
	"Target",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Target_MethodInfo_
};

$Object* allocate$Target($Class* clazz) {
	return $of($alloc(Target));
}

void Target::init$() {
}

void clinit$Target($Class* class$) {
	$beforeCallerSensitive();
	{
		try {
			$System::loadLibrary("someLibrary"_s);
			$throwNew($RuntimeException, "someLibrary was loaded"_s);
		} catch ($UnsatisfiedLinkError& e) {
		}
	}
}

Target::Target() {
}

$Class* Target::load$($String* name, bool initialize) {
	$loadClass(Target, name, initialize, &_Target_ClassInfo_, clinit$Target, allocate$Target);
	return class$;
}

$Class* Target::class$ = nullptr;