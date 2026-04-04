#include <sun/io/Win32ErrorMode.h>
#include <jdk/internal/misc/VM.h>
#include <jcpp.h>

#undef FALSE
#undef SEM_FAILCRITICALERRORS
#undef SEM_NOALIGNMENTFAULTEXCEPT
#undef SEM_NOGPFAULTERRORBOX
#undef SEM_NOOPENFILEERRORBOX

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $VM = ::jdk::internal::misc::VM;

namespace sun {
	namespace io {

void Win32ErrorMode::init$() {
}

void Win32ErrorMode::initialize() {
	$useLocalObjectStack();
	if (!$VM::isBooted()) {
		$var($String, s, $System::getProperty("sun.io.allowCriticalErrorMessageBox"_s));
		if (s == nullptr || s->equals($($nc($Boolean::FALSE)->toString()))) {
			int64_t mode = setErrorMode(0);
			mode |= Win32ErrorMode::SEM_FAILCRITICALERRORS;
			setErrorMode(mode);
		}
	}
}

int64_t Win32ErrorMode::setErrorMode(int64_t mode) {
	$init(Win32ErrorMode);
	$prepareNativeStatic(setErrorMode, int64_t, int64_t mode);
	int64_t $ret = $invokeNativeStatic(mode);
	$finishNativeStatic();
	return $ret;
}

Win32ErrorMode::Win32ErrorMode() {
}

$Class* Win32ErrorMode::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"SEM_FAILCRITICALERRORS", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Win32ErrorMode, SEM_FAILCRITICALERRORS)},
		{"SEM_NOGPFAULTERRORBOX", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Win32ErrorMode, SEM_NOGPFAULTERRORBOX)},
		{"SEM_NOALIGNMENTFAULTEXCEPT", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Win32ErrorMode, SEM_NOALIGNMENTFAULTEXCEPT)},
		{"SEM_NOOPENFILEERRORBOX", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Win32ErrorMode, SEM_NOOPENFILEERRORBOX)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(Win32ErrorMode, init$, void)},
		{"initialize", "()V", nullptr, $PUBLIC | $STATIC, $staticMethod(Win32ErrorMode, initialize, void)},
		{"setErrorMode", "(J)J", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(Win32ErrorMode, setErrorMode, int64_t, int64_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.io.Win32ErrorMode",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Win32ErrorMode, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Win32ErrorMode);
	});
	return class$;
}

$Class* Win32ErrorMode::class$ = nullptr;

	} // io
} // sun