#include <NativeThread.h>
#include <jcpp.h>

#undef SIGPIPE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

int32_t NativeThread::SIGPIPE = 0;

void NativeThread::init$() {
}

int64_t NativeThread::getID() {
	$init(NativeThread);
	$prepareNativeStatic(getID, int64_t);
	int64_t $ret = $invokeNativeStatic();
	$finishNativeStatic();
	return $ret;
}

int32_t NativeThread::signal(int64_t threadId, int32_t sig) {
	$init(NativeThread);
	$prepareNativeStatic(signal, int32_t, int64_t threadId, int32_t sig);
	int32_t $ret = $invokeNativeStatic(threadId, sig);
	$finishNativeStatic();
	return $ret;
}

int32_t NativeThread::getSIGPIPE() {
	$init(NativeThread);
	$prepareNativeStatic(getSIGPIPE, int32_t);
	int32_t $ret = $invokeNativeStatic();
	$finishNativeStatic();
	return $ret;
}

void NativeThread::clinit$($Class* clazz) {
	{
		NativeThread::SIGPIPE = NativeThread::getSIGPIPE();
	}
}

NativeThread::NativeThread() {
}

$Class* NativeThread::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"SIGPIPE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(NativeThread, SIGPIPE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(NativeThread, init$, void)},
		{"getID", "()J", nullptr, $PUBLIC | $STATIC | $NATIVE, $staticMethod(NativeThread, getID, int64_t)},
		{"getSIGPIPE", "()I", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(NativeThread, getSIGPIPE, int32_t)},
		{"signal", "(JI)I", nullptr, $PUBLIC | $STATIC | $NATIVE, $staticMethod(NativeThread, signal, int32_t, int64_t, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"NativeThread",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(NativeThread, name, initialize, &classInfo$$, NativeThread::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(NativeThread);
	});
	return class$;
}

$Class* NativeThread::class$ = nullptr;