#include <sun/io/Win32ErrorMode.h>

#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jdk/internal/misc/VM.h>
#include <jcpp.h>

#undef SEM_FAILCRITICALERRORS
#undef SEM_NOGPFAULTERRORBOX
#undef SEM_NOOPENFILEERRORBOX
#undef FALSE
#undef SEM_NOALIGNMENTFAULTEXCEPT

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $VM = ::jdk::internal::misc::VM;

namespace sun {
	namespace io {

$FieldInfo _Win32ErrorMode_FieldInfo_[] = {
	{"SEM_FAILCRITICALERRORS", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Win32ErrorMode, SEM_FAILCRITICALERRORS)},
	{"SEM_NOGPFAULTERRORBOX", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Win32ErrorMode, SEM_NOGPFAULTERRORBOX)},
	{"SEM_NOALIGNMENTFAULTEXCEPT", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Win32ErrorMode, SEM_NOALIGNMENTFAULTEXCEPT)},
	{"SEM_NOOPENFILEERRORBOX", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Win32ErrorMode, SEM_NOOPENFILEERRORBOX)},
	{}
};

$MethodInfo _Win32ErrorMode_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(Win32ErrorMode::*)()>(&Win32ErrorMode::init$))},
	{"initialize", "()V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)()>(&Win32ErrorMode::initialize))},
	{"setErrorMode", "(J)J", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int64_t(*)(int64_t)>(&Win32ErrorMode::setErrorMode))},
	{}
};

#define _METHOD_INDEX_setErrorMode 2

$ClassInfo _Win32ErrorMode_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.io.Win32ErrorMode",
	"java.lang.Object",
	nullptr,
	_Win32ErrorMode_FieldInfo_,
	_Win32ErrorMode_MethodInfo_
};

$Object* allocate$Win32ErrorMode($Class* clazz) {
	return $of($alloc(Win32ErrorMode));
}

void Win32ErrorMode::init$() {
}

void Win32ErrorMode::initialize() {
	if (!$VM::isBooted()) {
		$var($String, s, $System::getProperty("sun.io.allowCriticalErrorMessageBox"_s));
		$init($Boolean);
		if (s == nullptr || $nc(s)->equals($($nc($Boolean::FALSE)->toString()))) {
			int64_t mode = setErrorMode(0);
			mode |= Win32ErrorMode::SEM_FAILCRITICALERRORS;
			setErrorMode(mode);
		}
	}
}

int64_t Win32ErrorMode::setErrorMode(int64_t mode) {
	$init(Win32ErrorMode);
	int64_t $ret = 0;
	$prepareNativeStatic(Win32ErrorMode, setErrorMode, int64_t, int64_t mode);
	$ret = $invokeNativeStatic(Win32ErrorMode, setErrorMode, mode);
	$finishNativeStatic();
	return $ret;
}

Win32ErrorMode::Win32ErrorMode() {
}

$Class* Win32ErrorMode::load$($String* name, bool initialize) {
	$loadClass(Win32ErrorMode, name, initialize, &_Win32ErrorMode_ClassInfo_, allocate$Win32ErrorMode);
	return class$;
}

$Class* Win32ErrorMode::class$ = nullptr;

	} // io
} // sun