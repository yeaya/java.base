#include <NullQueue$1.h>
#include <NullQueue.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <java/lang/ref/WeakReference.h>
#include <jcpp.h>

using $NullQueue = ::NullQueue;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;
using $WeakReference = ::java::lang::ref::WeakReference;

void NullQueue$1::init$() {
}

void NullQueue$1::run() {
	$init($NullQueue);
	$assignStatic($NullQueue::r, $new($WeakReference, $$new($Object), nullptr));
}

NullQueue$1::NullQueue$1() {
}

$Class* NullQueue$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(NullQueue$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(NullQueue$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"NullQueue",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"NullQueue$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"NullQueue$1",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"NullQueue"
	};
	$loadClass(NullQueue$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NullQueue$1);
	});
	return class$;
}

$Class* NullQueue$1::class$ = nullptr;