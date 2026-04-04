#include <FinalizerHistogramTest$MyObject.h>
#include <FinalizerHistogramTest.h>
#include <java/util/concurrent/locks/ReentrantLock.h>
#include <jcpp.h>

using $FinalizerHistogramTest = ::FinalizerHistogramTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void FinalizerHistogramTest$MyObject::init$() {
	$init($FinalizerHistogramTest);
	$FinalizerHistogramTest::wasInitialized += 1;
}

void FinalizerHistogramTest$MyObject::finalize() {
	$init($FinalizerHistogramTest);
	$FinalizerHistogramTest::wasTrapped += 1;
	$nc($FinalizerHistogramTest::lock)->lock();
}

FinalizerHistogramTest$MyObject::FinalizerHistogramTest$MyObject() {
}

$Class* FinalizerHistogramTest$MyObject::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FinalizerHistogramTest$MyObject, init$, void)},
		{"finalize", "()V", nullptr, $PROTECTED, $virtualMethod(FinalizerHistogramTest$MyObject, finalize, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"FinalizerHistogramTest$MyObject", "FinalizerHistogramTest", "MyObject", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"FinalizerHistogramTest$MyObject",
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
		"FinalizerHistogramTest"
	};
	$loadClass(FinalizerHistogramTest$MyObject, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FinalizerHistogramTest$MyObject);
	});
	return class$;
}

$Class* FinalizerHistogramTest$MyObject::class$ = nullptr;