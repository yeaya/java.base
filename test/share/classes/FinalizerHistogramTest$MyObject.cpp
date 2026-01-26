#include <FinalizerHistogramTest$MyObject.h>

#include <FinalizerHistogramTest.h>
#include <java/util/concurrent/locks/ReentrantLock.h>
#include <jcpp.h>

using $FinalizerHistogramTest = ::FinalizerHistogramTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReentrantLock = ::java::util::concurrent::locks::ReentrantLock;

$MethodInfo _FinalizerHistogramTest$MyObject_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FinalizerHistogramTest$MyObject, init$, void)},
	{"finalize", "()V", nullptr, $PROTECTED, $virtualMethod(FinalizerHistogramTest$MyObject, finalize, void)},
	{}
};

$InnerClassInfo _FinalizerHistogramTest$MyObject_InnerClassesInfo_[] = {
	{"FinalizerHistogramTest$MyObject", "FinalizerHistogramTest", "MyObject", $STATIC},
	{}
};

$ClassInfo _FinalizerHistogramTest$MyObject_ClassInfo_ = {
	$ACC_SUPER,
	"FinalizerHistogramTest$MyObject",
	"java.lang.Object",
	nullptr,
	nullptr,
	_FinalizerHistogramTest$MyObject_MethodInfo_,
	nullptr,
	nullptr,
	_FinalizerHistogramTest$MyObject_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"FinalizerHistogramTest"
};

$Object* allocate$FinalizerHistogramTest$MyObject($Class* clazz) {
	return $of($alloc(FinalizerHistogramTest$MyObject));
}

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
	$loadClass(FinalizerHistogramTest$MyObject, name, initialize, &_FinalizerHistogramTest$MyObject_ClassInfo_, allocate$FinalizerHistogramTest$MyObject);
	return class$;
}

$Class* FinalizerHistogramTest$MyObject::class$ = nullptr;