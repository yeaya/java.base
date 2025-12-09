#include <NativeThread.h>

#include <jcpp.h>

#undef SIGPIPE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _NativeThread_FieldInfo_[] = {
	{"SIGPIPE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(NativeThread, SIGPIPE)},
	{}
};

$MethodInfo _NativeThread_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(NativeThread::*)()>(&NativeThread::init$))},
	{"getID", "()J", nullptr, $PUBLIC | $STATIC | $NATIVE, $method(static_cast<int64_t(*)()>(&NativeThread::getID))},
	{"getSIGPIPE", "()I", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int32_t(*)()>(&NativeThread::getSIGPIPE))},
	{"signal", "(JI)I", nullptr, $PUBLIC | $STATIC | $NATIVE, $method(static_cast<int32_t(*)(int64_t,int32_t)>(&NativeThread::signal))},
	{}
};

#define _METHOD_INDEX_getID 1
#define _METHOD_INDEX_getSIGPIPE 2
#define _METHOD_INDEX_signal 3

$ClassInfo _NativeThread_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"NativeThread",
	"java.lang.Object",
	nullptr,
	_NativeThread_FieldInfo_,
	_NativeThread_MethodInfo_
};

$Object* allocate$NativeThread($Class* clazz) {
	return $of($alloc(NativeThread));
}

int32_t NativeThread::SIGPIPE = 0;

void NativeThread::init$() {
}

int64_t NativeThread::getID() {
	$init(NativeThread);
	int64_t $ret = 0;
	$prepareNativeStatic(NativeThread, getID, int64_t);
	$ret = $invokeNativeStatic();
	$finishNativeStatic();
	return $ret;
}

int32_t NativeThread::signal(int64_t threadId, int32_t sig) {
	$init(NativeThread);
	int32_t $ret = 0;
	$prepareNativeStatic(NativeThread, signal, int32_t, int64_t threadId, int32_t sig);
	$ret = $invokeNativeStatic(threadId, sig);
	$finishNativeStatic();
	return $ret;
}

int32_t NativeThread::getSIGPIPE() {
	$init(NativeThread);
	int32_t $ret = 0;
	$prepareNativeStatic(NativeThread, getSIGPIPE, int32_t);
	$ret = $invokeNativeStatic();
	$finishNativeStatic();
	return $ret;
}

void clinit$NativeThread($Class* class$) {
	{
		NativeThread::SIGPIPE = NativeThread::getSIGPIPE();
	}
}

NativeThread::NativeThread() {
}

$Class* NativeThread::load$($String* name, bool initialize) {
	$loadClass(NativeThread, name, initialize, &_NativeThread_ClassInfo_, clinit$NativeThread, allocate$NativeThread);
	return class$;
}

$Class* NativeThread::class$ = nullptr;