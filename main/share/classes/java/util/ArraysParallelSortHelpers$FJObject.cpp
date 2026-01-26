#include <java/util/ArraysParallelSortHelpers$FJObject.h>

#include <java/util/ArraysParallelSortHelpers.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {

$MethodInfo _ArraysParallelSortHelpers$FJObject_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(ArraysParallelSortHelpers$FJObject, init$, void)},
	{}
};

$InnerClassInfo _ArraysParallelSortHelpers$FJObject_InnerClassesInfo_[] = {
	{"java.util.ArraysParallelSortHelpers$FJObject", "java.util.ArraysParallelSortHelpers", "FJObject", $STATIC | $FINAL},
	{"java.util.ArraysParallelSortHelpers$FJObject$Merger", "java.util.ArraysParallelSortHelpers$FJObject", "Merger", $STATIC | $FINAL},
	{"java.util.ArraysParallelSortHelpers$FJObject$Sorter", "java.util.ArraysParallelSortHelpers$FJObject", "Sorter", $STATIC | $FINAL},
	{}
};

$ClassInfo _ArraysParallelSortHelpers$FJObject_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.ArraysParallelSortHelpers$FJObject",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ArraysParallelSortHelpers$FJObject_MethodInfo_,
	nullptr,
	nullptr,
	_ArraysParallelSortHelpers$FJObject_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.ArraysParallelSortHelpers"
};

$Object* allocate$ArraysParallelSortHelpers$FJObject($Class* clazz) {
	return $of($alloc(ArraysParallelSortHelpers$FJObject));
}

void ArraysParallelSortHelpers$FJObject::init$() {
}

ArraysParallelSortHelpers$FJObject::ArraysParallelSortHelpers$FJObject() {
}

$Class* ArraysParallelSortHelpers$FJObject::load$($String* name, bool initialize) {
	$loadClass(ArraysParallelSortHelpers$FJObject, name, initialize, &_ArraysParallelSortHelpers$FJObject_ClassInfo_, allocate$ArraysParallelSortHelpers$FJObject);
	return class$;
}

$Class* ArraysParallelSortHelpers$FJObject::class$ = nullptr;

	} // util
} // java