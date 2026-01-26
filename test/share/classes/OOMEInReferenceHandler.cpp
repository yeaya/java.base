#include <OOMEInReferenceHandler.h>

#include <java/lang/IllegalStateException.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/OutOfMemoryError.h>
#include <java/lang/ThreadGroup.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <java/lang/ref/WeakReference.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $OutOfMemoryError = ::java::lang::OutOfMemoryError;
using $ThreadGroup = ::java::lang::ThreadGroup;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;
using $WeakReference = ::java::lang::ref::WeakReference;

$MethodInfo _OOMEInReferenceHandler_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(OOMEInReferenceHandler, init$, void)},
	{"fillHeap", "()[Ljava/lang/Object;", nullptr, $STATIC, $staticMethod(OOMEInReferenceHandler, fillHeap, $ObjectArray*)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(OOMEInReferenceHandler, main, void, $StringArray*), "java.lang.Exception"},
	{}
};

$ClassInfo _OOMEInReferenceHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"OOMEInReferenceHandler",
	"java.lang.Object",
	nullptr,
	nullptr,
	_OOMEInReferenceHandler_MethodInfo_
};

$Object* allocate$OOMEInReferenceHandler($Class* clazz) {
	return $of($alloc(OOMEInReferenceHandler));
}

void OOMEInReferenceHandler::init$() {
}

$ObjectArray* OOMEInReferenceHandler::fillHeap() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray, first, nullptr);
	$var($ObjectArray, last, nullptr);
	int32_t size = 1 << 20;
	while (size > 0) {
		try {
			$var($ObjectArray, array, $new($ObjectArray, size));
			if (first == nullptr) {
				$assign(first, array);
			} else {
				$nc(last)->set(0, array);
			}
			$assign(last, array);
		} catch ($OutOfMemoryError& oome) {
			size = (int32_t)((uint32_t)size >> 1);
		}
	}
	return first;
}

void OOMEInReferenceHandler::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($InterruptedException, ie, $new($InterruptedException, "dummy"_s));
	$var($ThreadGroup, tg, $($Thread::currentThread())->getThreadGroup());
	{
		$var($ThreadGroup, tgn, tg);
		for (; tgn != nullptr; $assign(tg, tgn), $assign(tgn, $nc(tg)->getParent())) {
		}
	}
	$var($ThreadArray, threads, $new($ThreadArray, tg->activeCount()));
	$var($Thread, referenceHandlerThread, nullptr);
	int32_t n = tg->enumerate(threads);
	for (int32_t i = 0; i < n; ++i) {
		if ("Reference Handler"_s->equals($($nc(threads->get(i))->getName()))) {
			$assign(referenceHandlerThread, threads->get(i));
		}
	}
	if (referenceHandlerThread == nullptr) {
		$throwNew($IllegalStateException, "Couldn\'t find Reference Handler thread."_s);
	}
	$var($ReferenceQueue, refQueue, $new($ReferenceQueue));
	$var($Object, referent, $new($Object));
	$var($WeakReference, weakRef, $new($WeakReference, referent, refQueue));
	$var($Object, waste, fillHeap());
	$nc(referenceHandlerThread)->interrupt();
	$Thread::sleep(500);
	$assign(waste, nullptr);
	$assign(referent, nullptr);
	for (int32_t i = 0; i < 20; ++i) {
		if (refQueue->poll() != nullptr) {
			return;
		}
		$System::gc();
		$Thread::sleep(500);
		if (!referenceHandlerThread->isAlive()) {
			$throwNew($Exception, "Reference Handler thread died."_s);
		}
	}
	$throwNew($IllegalStateException, $$str({"Reference Handler thread stuck. weakRef.get(): "_s, $(weakRef->get())}));
}

OOMEInReferenceHandler::OOMEInReferenceHandler() {
}

$Class* OOMEInReferenceHandler::load$($String* name, bool initialize) {
	$loadClass(OOMEInReferenceHandler, name, initialize, &_OOMEInReferenceHandler_ClassInfo_, allocate$OOMEInReferenceHandler);
	return class$;
}

$Class* OOMEInReferenceHandler::class$ = nullptr;