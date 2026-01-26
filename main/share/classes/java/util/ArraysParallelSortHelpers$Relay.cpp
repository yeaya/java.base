#include <java/util/ArraysParallelSortHelpers$Relay.h>

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

$FieldInfo _ArraysParallelSortHelpers$Relay_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(ArraysParallelSortHelpers$Relay, serialVersionUID)},
	{"task", "Ljava/util/concurrent/CountedCompleter;", "Ljava/util/concurrent/CountedCompleter<*>;", $FINAL, $field(ArraysParallelSortHelpers$Relay, task)},
	{}
};

$MethodInfo _ArraysParallelSortHelpers$Relay_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/CountedCompleter;)V", "(Ljava/util/concurrent/CountedCompleter<*>;)V", 0, $method(ArraysParallelSortHelpers$Relay, init$, void, $CountedCompleter*)},
	{"compute", "()V", nullptr, $PUBLIC | $FINAL, $virtualMethod(ArraysParallelSortHelpers$Relay, compute, void)},
	{"onCompletion", "(Ljava/util/concurrent/CountedCompleter;)V", "(Ljava/util/concurrent/CountedCompleter<*>;)V", $PUBLIC | $FINAL, $virtualMethod(ArraysParallelSortHelpers$Relay, onCompletion, void, $CountedCompleter*)},
	{}
};

$InnerClassInfo _ArraysParallelSortHelpers$Relay_InnerClassesInfo_[] = {
	{"java.util.ArraysParallelSortHelpers$Relay", "java.util.ArraysParallelSortHelpers", "Relay", $STATIC | $FINAL},
	{}
};

$ClassInfo _ArraysParallelSortHelpers$Relay_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.ArraysParallelSortHelpers$Relay",
	"java.util.concurrent.CountedCompleter",
	nullptr,
	_ArraysParallelSortHelpers$Relay_FieldInfo_,
	_ArraysParallelSortHelpers$Relay_MethodInfo_,
	"Ljava/util/concurrent/CountedCompleter<Ljava/lang/Void;>;",
	nullptr,
	_ArraysParallelSortHelpers$Relay_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.ArraysParallelSortHelpers"
};

$Object* allocate$ArraysParallelSortHelpers$Relay($Class* clazz) {
	return $of($alloc(ArraysParallelSortHelpers$Relay));
}

void ArraysParallelSortHelpers$Relay::init$($CountedCompleter* task) {
	$CountedCompleter::init$(nullptr, 1);
	$set(this, task, task);
}

void ArraysParallelSortHelpers$Relay::compute() {
}

void ArraysParallelSortHelpers$Relay::onCompletion($CountedCompleter* t) {
	$nc(this->task)->compute();
}

ArraysParallelSortHelpers$Relay::ArraysParallelSortHelpers$Relay() {
}

$Class* ArraysParallelSortHelpers$Relay::load$($String* name, bool initialize) {
	$loadClass(ArraysParallelSortHelpers$Relay, name, initialize, &_ArraysParallelSortHelpers$Relay_ClassInfo_, allocate$ArraysParallelSortHelpers$Relay);
	return class$;
}

$Class* ArraysParallelSortHelpers$Relay::class$ = nullptr;

	} // util
} // java