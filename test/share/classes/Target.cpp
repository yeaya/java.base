#include <Target.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/UnsatisfiedLinkError.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $UnsatisfiedLinkError = ::java::lang::UnsatisfiedLinkError;

$MethodInfo _Target_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Target::*)()>(&Target::init$))},
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
		} catch ($UnsatisfiedLinkError&) {
			$catch();
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