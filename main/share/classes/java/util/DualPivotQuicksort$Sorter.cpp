#include <java/util/DualPivotQuicksort$Sorter.h>

#include <java/util/DualPivotQuicksort$Merger.h>
#include <java/util/DualPivotQuicksort.h>
#include <java/util/concurrent/CountedCompleter.h>
#include <java/util/concurrent/ForkJoinTask.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DualPivotQuicksort = ::java::util::DualPivotQuicksort;
using $DualPivotQuicksort$Merger = ::java::util::DualPivotQuicksort$Merger;
using $CountedCompleter = ::java::util::concurrent::CountedCompleter;
using $ForkJoinTask = ::java::util::concurrent::ForkJoinTask;

namespace java {
	namespace util {

$FieldInfo _DualPivotQuicksort$Sorter_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DualPivotQuicksort$Sorter, serialVersionUID)},
	{"a", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(DualPivotQuicksort$Sorter, a)},
	{"b", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(DualPivotQuicksort$Sorter, b)},
	{"low", "I", nullptr, $PRIVATE | $FINAL, $field(DualPivotQuicksort$Sorter, low)},
	{"size", "I", nullptr, $PRIVATE | $FINAL, $field(DualPivotQuicksort$Sorter, size)},
	{"offset", "I", nullptr, $PRIVATE | $FINAL, $field(DualPivotQuicksort$Sorter, offset)},
	{"depth", "I", nullptr, $PRIVATE | $FINAL, $field(DualPivotQuicksort$Sorter, depth)},
	{}
};

$MethodInfo _DualPivotQuicksort$Sorter_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/CountedCompleter;Ljava/lang/Object;Ljava/lang/Object;IIII)V", "(Ljava/util/concurrent/CountedCompleter<*>;Ljava/lang/Object;Ljava/lang/Object;IIII)V", $PRIVATE, $method(static_cast<void(DualPivotQuicksort$Sorter::*)($CountedCompleter*,Object$*,Object$*,int32_t,int32_t,int32_t,int32_t)>(&DualPivotQuicksort$Sorter::init$))},
	{"compute", "()V", nullptr, $PUBLIC | $FINAL},
	{"forkSorter", "(III)V", nullptr, $PRIVATE, $method(static_cast<void(DualPivotQuicksort$Sorter::*)(int32_t,int32_t,int32_t)>(&DualPivotQuicksort$Sorter::forkSorter))},
	{"onCompletion", "(Ljava/util/concurrent/CountedCompleter;)V", "(Ljava/util/concurrent/CountedCompleter<*>;)V", $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _DualPivotQuicksort$Sorter_InnerClassesInfo_[] = {
	{"java.util.DualPivotQuicksort$Sorter", "java.util.DualPivotQuicksort", "Sorter", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _DualPivotQuicksort$Sorter_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.DualPivotQuicksort$Sorter",
	"java.util.concurrent.CountedCompleter",
	nullptr,
	_DualPivotQuicksort$Sorter_FieldInfo_,
	_DualPivotQuicksort$Sorter_MethodInfo_,
	"Ljava/util/concurrent/CountedCompleter<Ljava/lang/Void;>;",
	nullptr,
	_DualPivotQuicksort$Sorter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.DualPivotQuicksort"
};

$Object* allocate$DualPivotQuicksort$Sorter($Class* clazz) {
	return $of($alloc(DualPivotQuicksort$Sorter));
}

void DualPivotQuicksort$Sorter::init$($CountedCompleter* parent, Object$* a, Object$* b, int32_t low, int32_t size, int32_t offset, int32_t depth) {
	$CountedCompleter::init$(parent);
	$set(this, a, a);
	$set(this, b, b);
	this->low = low;
	this->size = size;
	this->offset = offset;
	this->depth = depth;
}

void DualPivotQuicksort$Sorter::compute() {
	$useLocalCurrentObjectStackCache();
	if (this->depth < 0) {
		setPendingCount(2);
		int32_t half = this->size >> 1;
		$$new(DualPivotQuicksort$Sorter, this, this->b, this->a, this->low, half, this->offset, this->depth + 1)->fork();
		$$new(DualPivotQuicksort$Sorter, this, this->b, this->a, this->low + half, this->size - half, this->offset, this->depth + 1)->compute();
	} else if ($instanceOf($ints, this->a)) {
		$DualPivotQuicksort::sort(this, $cast($ints, this->a), this->depth, this->low, this->low + this->size);
	} else if ($instanceOf($longs, this->a)) {
		$DualPivotQuicksort::sort(this, $cast($longs, this->a), this->depth, this->low, this->low + this->size);
	} else if ($instanceOf($floats, this->a)) {
		$DualPivotQuicksort::sort(this, $cast($floats, this->a), this->depth, this->low, this->low + this->size);
	} else if ($instanceOf($doubles, this->a)) {
		$DualPivotQuicksort::sort(this, $cast($doubles, this->a), this->depth, this->low, this->low + this->size);
	} else {
		$throwNew($IllegalArgumentException, $$str({"Unknown type of array: "_s, $($nc($of(this->a))->getClass()->getName())}));
	}
	tryComplete();
}

void DualPivotQuicksort$Sorter::onCompletion($CountedCompleter* caller) {
	if (this->depth < 0) {
		int32_t mi = this->low + (this->size >> 1);
		bool src = ((int32_t)(this->depth & (uint32_t)1)) == 0;
		$$new($DualPivotQuicksort$Merger, nullptr, this->a, src ? this->low : this->low - this->offset, this->b, src ? this->low - this->offset : this->low, src ? mi - this->offset : mi, this->b, src ? mi - this->offset : mi, src ? this->low + this->size - this->offset : this->low + this->size)->invoke();
	}
}

void DualPivotQuicksort$Sorter::forkSorter(int32_t depth, int32_t low, int32_t high) {
	$useLocalCurrentObjectStackCache();
	addToPendingCount(1);
	$var($Object, a, this->a);
	$$new(DualPivotQuicksort$Sorter, this, a, this->b, low, high - low, this->offset, depth)->fork();
}

DualPivotQuicksort$Sorter::DualPivotQuicksort$Sorter() {
}

$Class* DualPivotQuicksort$Sorter::load$($String* name, bool initialize) {
	$loadClass(DualPivotQuicksort$Sorter, name, initialize, &_DualPivotQuicksort$Sorter_ClassInfo_, allocate$DualPivotQuicksort$Sorter);
	return class$;
}

$Class* DualPivotQuicksort$Sorter::class$ = nullptr;

	} // util
} // java