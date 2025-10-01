#include <java/util/ArraysParallelSortHelpers$FJObject$Sorter.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/ArraysParallelSortHelpers$EmptyCompleter.h>
#include <java/util/ArraysParallelSortHelpers$FJObject$Merger.h>
#include <java/util/ArraysParallelSortHelpers$FJObject.h>
#include <java/util/ArraysParallelSortHelpers$Relay.h>
#include <java/util/Comparator.h>
#include <java/util/TimSort.h>
#include <java/util/concurrent/CountedCompleter.h>
#include <java/util/concurrent/ForkJoinTask.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArraysParallelSortHelpers$EmptyCompleter = ::java::util::ArraysParallelSortHelpers$EmptyCompleter;
using $ArraysParallelSortHelpers$FJObject = ::java::util::ArraysParallelSortHelpers$FJObject;
using $ArraysParallelSortHelpers$FJObject$Merger = ::java::util::ArraysParallelSortHelpers$FJObject$Merger;
using $ArraysParallelSortHelpers$Relay = ::java::util::ArraysParallelSortHelpers$Relay;
using $Comparator = ::java::util::Comparator;
using $TimSort = ::java::util::TimSort;
using $CountedCompleter = ::java::util::concurrent::CountedCompleter;
using $ForkJoinTask = ::java::util::concurrent::ForkJoinTask;

namespace java {
	namespace util {

$FieldInfo _ArraysParallelSortHelpers$FJObject$Sorter_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(ArraysParallelSortHelpers$FJObject$Sorter, serialVersionUID)},
	{"a", "[Ljava/lang/Object;", "[TT;", $FINAL, $field(ArraysParallelSortHelpers$FJObject$Sorter, a)},
	{"w", "[Ljava/lang/Object;", "[TT;", $FINAL, $field(ArraysParallelSortHelpers$FJObject$Sorter, w)},
	{"base", "I", nullptr, $FINAL, $field(ArraysParallelSortHelpers$FJObject$Sorter, base)},
	{"size", "I", nullptr, $FINAL, $field(ArraysParallelSortHelpers$FJObject$Sorter, size)},
	{"wbase", "I", nullptr, $FINAL, $field(ArraysParallelSortHelpers$FJObject$Sorter, wbase)},
	{"gran", "I", nullptr, $FINAL, $field(ArraysParallelSortHelpers$FJObject$Sorter, gran)},
	{"comparator", "Ljava/util/Comparator;", "Ljava/util/Comparator<-TT;>;", 0, $field(ArraysParallelSortHelpers$FJObject$Sorter, comparator)},
	{}
};

$MethodInfo _ArraysParallelSortHelpers$FJObject$Sorter_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/CountedCompleter;[Ljava/lang/Object;[Ljava/lang/Object;IIIILjava/util/Comparator;)V", "(Ljava/util/concurrent/CountedCompleter<*>;[TT;[TT;IIIILjava/util/Comparator<-TT;>;)V", 0, $method(static_cast<void(ArraysParallelSortHelpers$FJObject$Sorter::*)($CountedCompleter*,$ObjectArray*,$ObjectArray*,int32_t,int32_t,int32_t,int32_t,$Comparator*)>(&ArraysParallelSortHelpers$FJObject$Sorter::init$))},
	{"compute", "()V", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _ArraysParallelSortHelpers$FJObject$Sorter_InnerClassesInfo_[] = {
	{"java.util.ArraysParallelSortHelpers$FJObject", "java.util.ArraysParallelSortHelpers", "FJObject", $STATIC | $FINAL},
	{"java.util.ArraysParallelSortHelpers$FJObject$Sorter", "java.util.ArraysParallelSortHelpers$FJObject", "Sorter", $STATIC | $FINAL},
	{}
};

$ClassInfo _ArraysParallelSortHelpers$FJObject$Sorter_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.ArraysParallelSortHelpers$FJObject$Sorter",
	"java.util.concurrent.CountedCompleter",
	nullptr,
	_ArraysParallelSortHelpers$FJObject$Sorter_FieldInfo_,
	_ArraysParallelSortHelpers$FJObject$Sorter_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/util/concurrent/CountedCompleter<Ljava/lang/Void;>;",
	nullptr,
	_ArraysParallelSortHelpers$FJObject$Sorter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.ArraysParallelSortHelpers"
};

$Object* allocate$ArraysParallelSortHelpers$FJObject$Sorter($Class* clazz) {
	return $of($alloc(ArraysParallelSortHelpers$FJObject$Sorter));
}

void ArraysParallelSortHelpers$FJObject$Sorter::init$($CountedCompleter* par, $ObjectArray* a, $ObjectArray* w, int32_t base, int32_t size, int32_t wbase, int32_t gran, $Comparator* comparator) {
	$CountedCompleter::init$(par);
	$set(this, a, a);
	$set(this, w, w);
	this->base = base;
	this->size = size;
	this->wbase = wbase;
	this->gran = gran;
	$set(this, comparator, comparator);
}

void ArraysParallelSortHelpers$FJObject$Sorter::compute() {
	$var($CountedCompleter, s, this);
	$var($Comparator, c, this->comparator);
	$var($ObjectArray, a, this->a);
	$var($ObjectArray, w, this->w);
	int32_t b = this->base;
	int32_t n = this->size;
	int32_t wb = this->wbase;
	int32_t g = this->gran;
	while (n > g) {
		int32_t h = (int32_t)((uint32_t)n >> 1);
		int32_t q = (int32_t)((uint32_t)h >> 1);
		int32_t u = h + q;
		$var($ArraysParallelSortHelpers$Relay, fc, $new($ArraysParallelSortHelpers$Relay, $$new($ArraysParallelSortHelpers$FJObject$Merger, s, w, a, wb, h, wb + h, n - h, b, g, c)));
		$var($ArraysParallelSortHelpers$Relay, rc, $new($ArraysParallelSortHelpers$Relay, $$new($ArraysParallelSortHelpers$FJObject$Merger, fc, a, w, b + h, q, b + u, n - u, wb + h, g, c)));
		$$new(ArraysParallelSortHelpers$FJObject$Sorter, rc, a, w, b + u, n - u, wb + u, g, c)->fork();
		$$new(ArraysParallelSortHelpers$FJObject$Sorter, rc, a, w, b + h, q, wb + h, g, c)->fork();
		$var($ArraysParallelSortHelpers$Relay, bc, $new($ArraysParallelSortHelpers$Relay, $$new($ArraysParallelSortHelpers$FJObject$Merger, fc, a, w, b, q, b + q, h - q, wb, g, c)));
		$$new(ArraysParallelSortHelpers$FJObject$Sorter, bc, a, w, b + q, h - q, wb + q, g, c)->fork();
		$assign(s, $new($ArraysParallelSortHelpers$EmptyCompleter, bc));
		n = q;
	}
	$TimSort::sort(a, b, b + n, c, w, wb, n);
	s->tryComplete();
}

ArraysParallelSortHelpers$FJObject$Sorter::ArraysParallelSortHelpers$FJObject$Sorter() {
}

$Class* ArraysParallelSortHelpers$FJObject$Sorter::load$($String* name, bool initialize) {
	$loadClass(ArraysParallelSortHelpers$FJObject$Sorter, name, initialize, &_ArraysParallelSortHelpers$FJObject$Sorter_ClassInfo_, allocate$ArraysParallelSortHelpers$FJObject$Sorter);
	return class$;
}

$Class* ArraysParallelSortHelpers$FJObject$Sorter::class$ = nullptr;

	} // util
} // java