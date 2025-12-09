#include <sun/nio/ch/NativeThread.h>

#include <sun/nio/ch/IOUtil.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $IOUtil = ::sun::nio::ch::IOUtil;

namespace sun {
	namespace nio {
		namespace ch {

$MethodInfo _NativeThread_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(NativeThread::*)()>(&NativeThread::init$))},
	{"current", "()J", nullptr, $PUBLIC | $STATIC | $NATIVE, $method(static_cast<int64_t(*)()>(&NativeThread::current))},
	{"init", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)()>(&NativeThread::init))},
	{"signal", "(J)V", nullptr, $PUBLIC | $STATIC | $NATIVE, $method(static_cast<void(*)(int64_t)>(&NativeThread::signal))},
	{}
};

#define _METHOD_INDEX_current 1
#define _METHOD_INDEX_init 2
#define _METHOD_INDEX_signal 3

$ClassInfo _NativeThread_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
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
	$init(NativeThread);
	int64_t $ret = 0;
	$prepareNativeStatic(NativeThread, current, int64_t);
	$ret = $invokeNativeStatic();
	$finishNativeStatic();
	return $ret;
}

void NativeThread::signal(int64_t nt) {
	$init(NativeThread);
	$prepareNativeStatic(NativeThread, signal, void, int64_t nt);
	$invokeNativeStatic(nt);
	$finishNativeStatic();
}

void NativeThread::init() {
	$init(NativeThread);
	$prepareNativeStatic(NativeThread, init, void);
	$invokeNativeStatic();
	$finishNativeStatic();
}

void clinit$NativeThread($Class* class$) {
	{
		$IOUtil::load();
		NativeThread::init();
	}
}

NativeThread::NativeThread() {
}

$Class* NativeThread::load$($String* name, bool initialize) {
	$loadClass(NativeThread, name, initialize, &_NativeThread_ClassInfo_, clinit$NativeThread, allocate$NativeThread);
	return class$;
}

$Class* NativeThread::class$ = nullptr;

		} // ch
	} // nio
} // sun