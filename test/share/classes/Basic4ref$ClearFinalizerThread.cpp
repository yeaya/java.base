#include <Basic4ref$ClearFinalizerThread.h>
#include <Basic4ref.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void Basic4ref$ClearFinalizerThread::init$() {
}

void Basic4ref$ClearFinalizerThread::finalize() {
	$nc($System::err)->println("Cleared finalizer thread"_s);
}

Basic4ref$ClearFinalizerThread::Basic4ref$ClearFinalizerThread() {
}

$Class* Basic4ref$ClearFinalizerThread::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Basic4ref$ClearFinalizerThread, init$, void)},
		{"finalize", "()V", nullptr, $PROTECTED, $virtualMethod(Basic4ref$ClearFinalizerThread, finalize, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Basic4ref$ClearFinalizerThread", "Basic4ref", "ClearFinalizerThread", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Basic4ref$ClearFinalizerThread",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"Basic4ref"
	};
	$loadClass(Basic4ref$ClearFinalizerThread, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Basic4ref$ClearFinalizerThread);
	});
	return class$;
}

$Class* Basic4ref$ClearFinalizerThread::class$ = nullptr;