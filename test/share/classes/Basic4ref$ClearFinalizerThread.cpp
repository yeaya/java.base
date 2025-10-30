#include <Basic4ref$ClearFinalizerThread.h>

#include <Basic4ref.h>
#include <jcpp.h>

using $Basic4ref = ::Basic4ref;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _Basic4ref$ClearFinalizerThread_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Basic4ref$ClearFinalizerThread::*)()>(&Basic4ref$ClearFinalizerThread::init$))},
	{"finalize", "()V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _Basic4ref$ClearFinalizerThread_InnerClassesInfo_[] = {
	{"Basic4ref$ClearFinalizerThread", "Basic4ref", "ClearFinalizerThread", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Basic4ref$ClearFinalizerThread_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Basic4ref$ClearFinalizerThread",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Basic4ref$ClearFinalizerThread_MethodInfo_,
	nullptr,
	nullptr,
	_Basic4ref$ClearFinalizerThread_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Basic4ref"
};

$Object* allocate$Basic4ref$ClearFinalizerThread($Class* clazz) {
	return $of($alloc(Basic4ref$ClearFinalizerThread));
}

void Basic4ref$ClearFinalizerThread::init$() {
}

void Basic4ref$ClearFinalizerThread::finalize() {
	$nc($System::err)->println("Cleared finalizer thread"_s);
}

Basic4ref$ClearFinalizerThread::Basic4ref$ClearFinalizerThread() {
}

$Class* Basic4ref$ClearFinalizerThread::load$($String* name, bool initialize) {
	$loadClass(Basic4ref$ClearFinalizerThread, name, initialize, &_Basic4ref$ClearFinalizerThread_ClassInfo_, allocate$Basic4ref$ClearFinalizerThread);
	return class$;
}

$Class* Basic4ref$ClearFinalizerThread::class$ = nullptr;