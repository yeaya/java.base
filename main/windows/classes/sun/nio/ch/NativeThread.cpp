#include <sun/nio/ch/NativeThread.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace nio {
		namespace ch {

$MethodInfo _NativeThread_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(NativeThread::*)()>(&NativeThread::init$))},
	{"current", "()J", nullptr, $STATIC, $method(static_cast<int64_t(*)()>(&NativeThread::current))},
	{"signal", "(J)V", nullptr, $STATIC, $method(static_cast<void(*)(int64_t)>(&NativeThread::signal))},
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