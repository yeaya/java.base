#include <java/util/ArraysParallelSortHelpers.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {

$MethodInfo _ArraysParallelSortHelpers_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ArraysParallelSortHelpers::*)()>(&ArraysParallelSortHelpers::init$))},
	{}
};

$InnerClassInfo _ArraysParallelSortHelpers_InnerClassesInfo_[] = {
	{"java.util.ArraysParallelSortHelpers$FJObject", "java.util.ArraysParallelSortHelpers", "FJObject", $STATIC | $FINAL},
	{"java.util.ArraysParallelSortHelpers$Relay", "java.util.ArraysParallelSortHelpers", "Relay", $STATIC | $FINAL},
	{"java.util.ArraysParallelSortHelpers$EmptyCompleter", "java.util.ArraysParallelSortHelpers", "EmptyCompleter", $STATIC | $FINAL},
	{}
};

$ClassInfo _ArraysParallelSortHelpers_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.ArraysParallelSortHelpers",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ArraysParallelSortHelpers_MethodInfo_,
	nullptr,
	nullptr,
	_ArraysParallelSortHelpers_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.util.ArraysParallelSortHelpers$FJObject,java.util.ArraysParallelSortHelpers$FJObject$Merger,java.util.ArraysParallelSortHelpers$FJObject$Sorter,java.util.ArraysParallelSortHelpers$Relay,java.util.ArraysParallelSortHelpers$EmptyCompleter"
};

$Object* allocate$ArraysParallelSortHelpers($Class* clazz) {
	return $of($alloc(ArraysParallelSortHelpers));
}

void ArraysParallelSortHelpers::init$() {
}

ArraysParallelSortHelpers::ArraysParallelSortHelpers() {
}

$Class* ArraysParallelSortHelpers::load$($String* name, bool initialize) {
	$loadClass(ArraysParallelSortHelpers, name, initialize, &_ArraysParallelSortHelpers_ClassInfo_, allocate$ArraysParallelSortHelpers);
	return class$;
}

$Class* ArraysParallelSortHelpers::class$ = nullptr;

	} // util
} // java