#include <sun/nio/ch/NativeThread.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace nio {
		namespace ch {

void NativeThread::init$() {
}

int64_t NativeThread::current() {
	return 0;
}

void NativeThread::signal(int64_t nt) {
}

NativeThread::NativeThread() {
}

$Class* NativeThread::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(NativeThread, init$, void)},
		{"current", "()J", nullptr, $STATIC, $staticMethod(NativeThread, current, int64_t)},
		{"signal", "(J)V", nullptr, $STATIC, $staticMethod(NativeThread, signal, void, int64_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.ch.NativeThread",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(NativeThread, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NativeThread);
	});
	return class$;
}

$Class* NativeThread::class$ = nullptr;

		} // ch
	} // nio
} // sun