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
using $CountedCompleter = ::java::util::concurrent::CountedCompleter;
using $ForkJoinTask = ::java::util::concurrent::ForkJoinTask;

namespace java {
	namespace util {

$FieldInfo _DualPivotQuicksort$Merger_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DualPivotQuicksort$Merger, serialVersionUID)},
	{"dst", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(DualPivotQuicksort$Merger, dst)},
	{"a1", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(DualPivotQuicksort$Merger, a1)},
	{"a2", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(DualPivotQuicksort$Merger, a2)},
	{"k", "I", nullptr, $PRIVATE | $FINAL, $field(DualPivotQuicksort$Merger, k)},
	{"lo1", "I", nullptr, $PRIVATE | $FINAL, $field(DualPivotQuicksort$Merger, lo1)},
	{"hi1", "I", nullptr, $PRIVATE | $FINAL, $field(DualPivotQuicksort$Merger, hi1)},
	{"lo2", "I", nullptr, $PRIVATE | $FINAL, $field(DualPivotQuicksort$Merger, lo2)},
	{"hi2", "I", nullptr, $PRIVATE | $FINAL, $field(DualPivotQuicksort$Merger, hi2)},
	{}
};

$MethodInfo _DualPivotQuicksort$Merger_MethodInfo_[] = {
	{"<init>", "(Ljava/util/concurrent/CountedCompleter;Ljava/lang/Object;ILjava/lang/Object;IILjava/lang/Object;II)V", "(Ljava/util/concurrent/CountedCompleter<*>;Ljava/lang/Object;ILjava/lang/Object;IILjava/lang/Object;II)V", $PRIVATE, $method(static_cast<void(DualPivotQuicksort$Merger::*)($CountedCompleter*,Object$*,int32_t,Object$*,int32_t,int32_t,Object$*,int32_t,int32_t)>(&DualPivotQuicksort$Merger::init$))},
	{"compute", "()V", nullptr, $PUBLIC | $FINAL},
	{"forkMerger", "(Ljava/lang/Object;ILjava/lang/Object;IILjava/lang/Object;II)V", nullptr, $PRIVATE, $method(static_cast<void(DualPivotQuicksort$Merger::*)(Object$*,int32_t,Object$*,int32_t,int32_t,Object$*,int32_t,int32_t)>(&DualPivotQuicksort$Merger::forkMerger))},
	{}
};

$InnerClassInfo _DualPivotQuicksort$Merger_InnerClassesInfo_[] = {
	{"java.util.DualPivotQuicksort$Merger", "java.util.DualPivotQuicksort", "Merger", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _DualPivotQuicksort$Merger_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.DualPivotQuicksort$Merger",
	"java.util.concurrent.CountedCompleter",
	nullptr,
	_DualPivotQuicksort$Merger_FieldInfo_,
	_DualPivotQuicksort$Merger_MethodInfo_,
	"Ljava/util/concurrent/CountedCompleter<Ljava/lang/Void;>;",
	nullptr,
	_DualPivotQuicksort$Merger_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.DualPivotQuicksort"
};

$Object* allocate$DualPivotQuicksort$Merger($Class* clazz) {
	return $of($alloc(DualPivotQuicksort$Merger));
}

void DualPivotQuicksort$Merger::init$($CountedCompleter* parent, Object$* dst, int32_t k, Object$* a1, int32_t lo1, int32_t hi1, Object$* a2, int32_t lo2, int32_t hi2) {
	$CountedCompleter::init$(parent);
	$set(this, dst, dst);
	this->k = k;
	$set(this, a1, a1);
	this->lo1 = lo1;
	this->hi1 = hi1;
	$set(this, a2, a2);
	this->lo2 = lo2;
	this->hi2 = hi2;
}

void DualPivotQuicksort$Merger::compute() {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($ints, this->dst)) {
		$DualPivotQuicksort::mergeParts(this, $cast($ints, this->dst), this->k, $cast($ints, this->a1), this->lo1, this->hi1, $cast($ints, this->a2), this->lo2, this->hi2);
	} else if ($instanceOf($longs, this->dst)) {
		$DualPivotQuicksort::mergeParts(this, $cast($longs, this->dst), this->k, $cast($longs, this->a1), this->lo1, this->hi1, $cast($longs, this->a2), this->lo2, this->hi2);
	} else if ($instanceOf($floats, this->dst)) {
		$DualPivotQuicksort::mergeParts(this, $cast($floats, this->dst), this->k, $cast($floats, this->a1), this->lo1, this->hi1, $cast($floats, this->a2), this->lo2, this->hi2);
	} else if ($instanceOf($doubles, this->dst)) {
		$DualPivotQuicksort::mergeParts(this, $cast($doubles, this->dst), this->k, $cast($doubles, this->a1), this->lo1, this->hi1, $cast($doubles, this->a2), this->lo2, this->hi2);
	} else {
		$throwNew($IllegalArgumentException, $$str({"Unknown type of array: "_s, $($nc($of(this->dst))->getClass()->getName())}));
	}
	propagateCompletion();
}

void DualPivotQuicksort$Merger::forkMerger(Object$* dst, int32_t k, Object$* a1, int32_t lo1, int32_t hi1, Object$* a2, int32_t lo2, int32_t hi2) {
	addToPendingCount(1);
	$$new(DualPivotQuicksort$Merger, this, dst, k, a1, lo1, hi1, a2, lo2, hi2)->fork();
}

DualPivotQuicksort$Merger::DualPivotQuicksort$Merger() {
}

$Class* DualPivotQuicksort$Merger::load$($String* name, bool initialize) {
	$loadClass(DualPivotQuicksort$Merger, name, initialize, &_DualPivotQuicksort$Merger_ClassInfo_, allocate$DualPivotQuicksort$Merger);
	return class$;
}

$Class* DualPivotQuicksort$Merger::class$ = nullptr;

	} // util
} // java