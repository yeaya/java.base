#include <Basic4ref$4.h>
#include <Basic4ref$ClearFinalizerThread.h>
#include <Basic4ref.h>
#include <jcpp.h>

using $Basic4ref$ClearFinalizerThread = ::Basic4ref$ClearFinalizerThread;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void Basic4ref$4::init$() {
}

void Basic4ref$4::run() {
	$new($Basic4ref$ClearFinalizerThread);
}

Basic4ref$4::Basic4ref$4() {
}

$Class* Basic4ref$4::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Basic4ref$4, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Basic4ref$4, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"Basic4ref",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Basic4ref$4", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Basic4ref$4",
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
		"Basic4ref"
	};
	$loadClass(Basic4ref$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Basic4ref$4);
	});
	return class$;
}

$Class* Basic4ref$4::class$ = nullptr;