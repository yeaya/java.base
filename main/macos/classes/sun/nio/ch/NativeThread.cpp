#include <sun/nio/ch/NativeThread.h>
#include <sun/nio/ch/IOUtil.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $IOUtil = ::sun::nio::ch::IOUtil;

namespace sun {
	namespace nio {
		namespace ch {

void NativeThread::init$() {
}

int64_t NativeThread::current() {
	$init(NativeThread);
	$prepareNativeStatic(current, int64_t);
	int64_t $ret = $invokeNativeStatic();
	$finishNativeStatic();
	return $ret;
}

void NativeThread::signal(int64_t nt) {
	$init(NativeThread);
	$prepareNativeStatic(signal, void, int64_t nt);
	$invokeNativeStatic(nt);
	$finishNativeStatic();
}

void NativeThread::init() {
	$init(NativeThread);
	$prepareNativeStatic(init, void);
	$invokeNativeStatic();
	$finishNativeStatic();
}

void NativeThread::clinit$($Class* clazz) {
	{
		$IOUtil::load();
		NativeThread::init();
	}
}

NativeThread::NativeThread() {
}

$Class* NativeThread::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(NativeThread, init$, void)},
		{"current", "()J", nullptr, $PUBLIC | $STATIC | $NATIVE, $staticMethod(NativeThread, current, int64_t)},
		{"init", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(NativeThread, init, void)},
		{"signal", "(J)V", nullptr, $PUBLIC | $STATIC | $NATIVE, $staticMethod(NativeThread, signal, void, int64_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.nio.ch.NativeThread",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(NativeThread, name, initialize, &classInfo$$, NativeThread::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(NativeThread);
	});
	return class$;
}

$Class* NativeThread::class$ = nullptr;

		} // ch
	} // nio
} // sun