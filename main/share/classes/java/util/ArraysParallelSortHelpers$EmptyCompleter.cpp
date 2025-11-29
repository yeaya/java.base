#include <java/util/ArraysParallelSortHelpers$EmptyCompleter.h>

#include <java/util/ArraysParallelSortHelpers.h>
#include <java/util/concurrent/CountedCompleter.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CountedCompleter = ::java::util::concurrent::CountedCompleter;

namespace java {
	namespace util {

$FieldInfo _ArraysParallelSortHelpers$EmptyCompleter_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(ArraysParallelSortHelpers$EmptyCompleter, serialVersionUID)},
	{}
};

$MethodInfo _ArraysParallelSortHelpers$EmptyCompleter_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/CountedCompleter;)V", "(Ljava/util/concurrent/CountedCompleter<*>;)V", 0, $method(static_cast<void(ArraysParallelSortHelpers$EmptyCompleter::*)($CountedCompleter*)>(&ArraysParallelSortHelpers$EmptyCompleter::init$))},
	{"compute", "()V", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _ArraysParallelSortHelpers$EmptyCompleter_InnerClassesInfo_[] = {
	{"java.util.ArraysParallelSortHelpers$EmptyCompleter", "java.util.ArraysParallelSortHelpers", "EmptyCompleter", $STATIC | $FINAL},
	{}
};

$ClassInfo _ArraysParallelSortHelpers$EmptyCompleter_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.ArraysParallelSortHelpers$EmptyCompleter",
	"java.util.concurrent.CountedCompleter",
	nullptr,
	_ArraysParallelSortHelpers$EmptyCompleter_FieldInfo_,
	_ArraysParallelSortHelpers$EmptyCompleter_MethodInfo_,
	"Ljava/util/concurrent/CountedCompleter<Ljava/lang/Void;>;",
	nullptr,
	_ArraysParallelSortHelpers$EmptyCompleter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.ArraysParallelSortHelpers"
};

$Object* allocate$ArraysParallelSortHelpers$EmptyCompleter($Class* clazz) {
	return $of($alloc(ArraysParallelSortHelpers$EmptyCompleter));
}

void ArraysParallelSortHelpers$EmptyCompleter::init$($CountedCompleter* p) {
	$CountedCompleter::init$(p);
}

void ArraysParallelSortHelpers$EmptyCompleter::compute() {
}

ArraysParallelSortHelpers$EmptyCompleter::ArraysParallelSortHelpers$EmptyCompleter() {
}

$Class* ArraysParallelSortHelpers$EmptyCompleter::load$($String* name, bool initialize) {
	$loadClass(ArraysParallelSortHelpers$EmptyCompleter, name, initialize, &_ArraysParallelSortHelpers$EmptyCompleter_ClassInfo_, allocate$ArraysParallelSortHelpers$EmptyCompleter);
	return class$;
}

$Class* ArraysParallelSortHelpers$EmptyCompleter::class$ = nullptr;

	} // util
} // java