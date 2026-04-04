#include <Basic4ref$2.h>
#include <Basic4ref.h>
#include <java/lang/ref/PhantomReference.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <java/util/Vector.h>
#include <jcpp.h>

using $Basic4ref = ::Basic4ref;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PhantomReference = ::java::lang::ref::PhantomReference;

void Basic4ref$2::init$() {
}

void Basic4ref$2::run() {
	$useLocalObjectStack();
	$init($Basic4ref);
	$nc($Basic4ref::keep)->addElement($$new($PhantomReference, $$new($Object), $Basic4ref::q2));
}

Basic4ref$2::Basic4ref$2() {
}

$Class* Basic4ref$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Basic4ref$2, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Basic4ref$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"Basic4ref",
		"createNoise",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Basic4ref$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Basic4ref$2",
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
	$loadClass(Basic4ref$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Basic4ref$2);
	});
	return class$;
}

$Class* Basic4ref$2::class$ = nullptr;