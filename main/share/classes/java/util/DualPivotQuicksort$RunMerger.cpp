#include <java/util/DualPivotQuicksort$RunMerger.h>
#include <java/util/DualPivotQuicksort.h>
#include <java/util/concurrent/ForkJoinTask.h>
#include <java/util/concurrent/RecursiveTask.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DualPivotQuicksort = ::java::util::DualPivotQuicksort;
using $RecursiveTask = ::java::util::concurrent::RecursiveTask;

namespace java {
	namespace util {

void DualPivotQuicksort$RunMerger::init$(Object$* a, Object$* b, int32_t offset, int32_t aim, $ints* run, int32_t lo, int32_t hi) {
	$RecursiveTask::init$();
	$set(this, a, a);
	$set(this, b, b);
	this->offset = offset;
	this->aim = aim;
	$set(this, run, run);
	this->lo = lo;
	this->hi = hi;
}

$Object* DualPivotQuicksort$RunMerger::compute() {
	$useLocalObjectStack();
	if ($instanceOf($ints, this->a)) {
		return $DualPivotQuicksort::mergeRuns($cast($ints, this->a), $cast($ints, this->b), this->offset, this->aim, true, this->run, this->lo, this->hi);
	}
	if ($instanceOf($longs, this->a)) {
		return $DualPivotQuicksort::mergeRuns($cast($longs, this->a), $cast($longs, this->b), this->offset, this->aim, true, this->run, this->lo, this->hi);
	}
	if ($instanceOf($floats, this->a)) {
		return $DualPivotQuicksort::mergeRuns($cast($floats, this->a), $cast($floats, this->b), this->offset, this->aim, true, this->run, this->lo, this->hi);
	}
	if ($instanceOf($doubles, this->a)) {
		return $DualPivotQuicksort::mergeRuns($cast($doubles, this->a), $cast($doubles, this->b), this->offset, this->aim, true, this->run, this->lo, this->hi);
	}
	$throwNew($IllegalArgumentException, $$str({"Unknown type of array: "_s, $($nc(this->a)->getClass()->getName())}));
}

DualPivotQuicksort$RunMerger* DualPivotQuicksort$RunMerger::forkMe() {
	fork();
	return this;
}

$Object* DualPivotQuicksort$RunMerger::getDestination() {
	join();
	return getRawResult();
}

DualPivotQuicksort$RunMerger::DualPivotQuicksort$RunMerger() {
}

$Class* DualPivotQuicksort$RunMerger::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DualPivotQuicksort$RunMerger, serialVersionUID)},
		{"a", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(DualPivotQuicksort$RunMerger, a)},
		{"b", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(DualPivotQuicksort$RunMerger, b)},
		{"run", "[I", nullptr, $PRIVATE | $FINAL, $field(DualPivotQuicksort$RunMerger, run)},
		{"offset", "I", nullptr, $PRIVATE | $FINAL, $field(DualPivotQuicksort$RunMerger, offset)},
		{"aim", "I", nullptr, $PRIVATE | $FINAL, $field(DualPivotQuicksort$RunMerger, aim)},
		{"lo", "I", nullptr, $PRIVATE | $FINAL, $field(DualPivotQuicksort$RunMerger, lo)},
		{"hi", "I", nullptr, $PRIVATE | $FINAL, $field(DualPivotQuicksort$RunMerger, hi)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Object;Ljava/lang/Object;II[III)V", nullptr, $PRIVATE, $method(DualPivotQuicksort$RunMerger, init$, void, Object$*, Object$*, int32_t, int32_t, $ints*, int32_t, int32_t)},
		{"compute", "()Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(DualPivotQuicksort$RunMerger, compute, $Object*)},
		{"forkMe", "()Ljava/util/DualPivotQuicksort$RunMerger;", nullptr, $PRIVATE, $method(DualPivotQuicksort$RunMerger, forkMe, DualPivotQuicksort$RunMerger*)},
		{"getDestination", "()Ljava/lang/Object;", nullptr, $PRIVATE, $method(DualPivotQuicksort$RunMerger, getDestination, $Object*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.DualPivotQuicksort$RunMerger", "java.util.DualPivotQuicksort", "RunMerger", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.DualPivotQuicksort$RunMerger",
		"java.util.concurrent.RecursiveTask",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/util/concurrent/RecursiveTask<Ljava/lang/Object;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.DualPivotQuicksort"
	};
	$loadClass(DualPivotQuicksort$RunMerger, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(DualPivotQuicksort$RunMerger));
	});
	return class$;
}

$Class* DualPivotQuicksort$RunMerger::class$ = nullptr;

	} // util
} // java