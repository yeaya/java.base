#include <sun/nio/ch/NativeThread.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace nio {
		namespace ch {

$MethodInfo _NativeThread_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(NativeThread, init$, void)},
	{"current", "()J", nullptr, $STATIC, $staticMethod(NativeThread, current, int64_t)},
	{"signal", "(J)V", nullptr, $STATIC, $staticMethod(NativeThread, signal, void, int64_t)},
	{}
};

$ClassInfo _NativeThread_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.ch.NativeThread",
	"java.lang.Object",
	nullptr,
	nullptr,
	_NativeThread_MethodInfo_
};

$Object* allocate$NativeThread($Class* clazz) {
	return $of($alloc(NativeThread));
}

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
	$loadClass(NativeThread, name, initialize, &_NativeThread_ClassInfo_, allocate$NativeThread);
	return class$;
}

$Class* NativeThread::class$ = nullptr;

		} // ch
	} // nio
} // sun