#include <java/util/DualPivotQuicksort.h>

#include <java/lang/Array.h>
#include <java/lang/Byte.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Short.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Arrays.h>
#include <java/util/DualPivotQuicksort$Merger.h>
#include <java/util/DualPivotQuicksort$RunMerger.h>
#include <java/util/DualPivotQuicksort$Sorter.h>
#include <java/util/concurrent/CountedCompleter.h>
#include <jcpp.h>

#undef DELTA
#undef MAX_BYTE_INDEX
#undef MAX_INSERTION_SORT_SIZE
#undef MAX_MIXED_INSERTION_SORT_SIZE
#undef MAX_RECURSION_DEPTH
#undef MAX_RUN_CAPACITY
#undef MAX_SHORT_INDEX
#undef MAX_VALUE
#undef MIN_BYTE_COUNTING_SORT_SIZE
#undef MIN_FIRST_RUNS_FACTOR
#undef MIN_FIRST_RUN_SIZE
#undef MIN_PARALLEL_MERGE_PARTS_SIZE
#undef MIN_PARALLEL_SORT_SIZE
#undef MIN_RUN_COUNT
#undef MIN_SHORT_OR_CHAR_COUNTING_SORT_SIZE
#undef MIN_TRY_MERGE_SIZE
#undef NUM_BYTE_VALUES
#undef NUM_CHAR_VALUES
#undef NUM_SHORT_VALUES

using $Byte = ::java::lang::Byte;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Short = ::java::lang::Short;
using $Arrays = ::java::util::Arrays;
using $DualPivotQuicksort$Merger = ::java::util::DualPivotQuicksort$Merger;
using $DualPivotQuicksort$RunMerger = ::java::util::DualPivotQuicksort$RunMerger;
using $DualPivotQuicksort$Sorter = ::java::util::DualPivotQuicksort$Sorter;
using $CountedCompleter = ::java::util::concurrent::CountedCompleter;
using $ForkJoinTask = ::java::util::concurrent::ForkJoinTask;

namespace java {
	namespace util {

$FieldInfo _DualPivotQuicksort_FieldInfo_[] = {
	{"MAX_MIXED_INSERTION_SORT_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DualPivotQuicksort, MAX_MIXED_INSERTION_SORT_SIZE)},
	{"MAX_INSERTION_SORT_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DualPivotQuicksort, MAX_INSERTION_SORT_SIZE)},
	{"MIN_PARALLEL_SORT_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DualPivotQuicksort, MIN_PARALLEL_SORT_SIZE)},
	{"MIN_TRY_MERGE_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DualPivotQuicksort, MIN_TRY_MERGE_SIZE)},
	{"MIN_FIRST_RUN_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DualPivotQuicksort, MIN_FIRST_RUN_SIZE)},
	{"MIN_FIRST_RUNS_FACTOR", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DualPivotQuicksort, MIN_FIRST_RUNS_FACTOR)},
	{"MAX_RUN_CAPACITY", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DualPivotQuicksort, MAX_RUN_CAPACITY)},
	{"MIN_RUN_COUNT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DualPivotQuicksort, MIN_RUN_COUNT)},
	{"MIN_PARALLEL_MERGE_PARTS_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DualPivotQuicksort, MIN_PARALLEL_MERGE_PARTS_SIZE)},
	{"MIN_BYTE_COUNTING_SORT_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DualPivotQuicksort, MIN_BYTE_COUNTING_SORT_SIZE)},
	{"MIN_SHORT_OR_CHAR_COUNTING_SORT_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DualPivotQuicksort, MIN_SHORT_OR_CHAR_COUNTING_SORT_SIZE)},
	{"DELTA", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DualPivotQuicksort, DELTA)},
	{"MAX_RECURSION_DEPTH", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DualPivotQuicksort, MAX_RECURSION_DEPTH)},
	{"NUM_BYTE_VALUES", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DualPivotQuicksort, NUM_BYTE_VALUES)},
	{"MAX_BYTE_INDEX", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DualPivotQuicksort, MAX_BYTE_INDEX)},
	{"NUM_CHAR_VALUES", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DualPivotQuicksort, NUM_CHAR_VALUES)},
	{"NUM_SHORT_VALUES", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DualPivotQuicksort, NUM_SHORT_VALUES)},
	{"MAX_SHORT_INDEX", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DualPivotQuicksort, MAX_SHORT_INDEX)},
	{}
};

$MethodInfo _DualPivotQuicksort_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(DualPivotQuicksort::*)()>(&DualPivotQuicksort::init$))},
	{"countingSort", "([BII)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($bytes*,int32_t,int32_t)>(&DualPivotQuicksort::countingSort))},
	{"countingSort", "([CII)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($chars*,int32_t,int32_t)>(&DualPivotQuicksort::countingSort))},
	{"countingSort", "([SII)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($shorts*,int32_t,int32_t)>(&DualPivotQuicksort::countingSort))},
	{"getDepth", "(II)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(int32_t,int32_t)>(&DualPivotQuicksort::getDepth))},
	{"heapSort", "([III)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($ints*,int32_t,int32_t)>(&DualPivotQuicksort::heapSort))},
	{"heapSort", "([JII)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($longs*,int32_t,int32_t)>(&DualPivotQuicksort::heapSort))},
	{"heapSort", "([FII)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($floats*,int32_t,int32_t)>(&DualPivotQuicksort::heapSort))},
	{"heapSort", "([DII)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($doubles*,int32_t,int32_t)>(&DualPivotQuicksort::heapSort))},
	{"insertionSort", "([III)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($ints*,int32_t,int32_t)>(&DualPivotQuicksort::insertionSort))},
	{"insertionSort", "([JII)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($longs*,int32_t,int32_t)>(&DualPivotQuicksort::insertionSort))},
	{"insertionSort", "([BII)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($bytes*,int32_t,int32_t)>(&DualPivotQuicksort::insertionSort))},
	{"insertionSort", "([CII)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($chars*,int32_t,int32_t)>(&DualPivotQuicksort::insertionSort))},
	{"insertionSort", "([SII)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($shorts*,int32_t,int32_t)>(&DualPivotQuicksort::insertionSort))},
	{"insertionSort", "([FII)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($floats*,int32_t,int32_t)>(&DualPivotQuicksort::insertionSort))},
	{"insertionSort", "([DII)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($doubles*,int32_t,int32_t)>(&DualPivotQuicksort::insertionSort))},
	{"mergeParts", "(Ljava/util/DualPivotQuicksort$Merger;[II[III[III)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($DualPivotQuicksort$Merger*,$ints*,int32_t,$ints*,int32_t,int32_t,$ints*,int32_t,int32_t)>(&DualPivotQuicksort::mergeParts))},
	{"mergeParts", "(Ljava/util/DualPivotQuicksort$Merger;[JI[JII[JII)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($DualPivotQuicksort$Merger*,$longs*,int32_t,$longs*,int32_t,int32_t,$longs*,int32_t,int32_t)>(&DualPivotQuicksort::mergeParts))},
	{"mergeParts", "(Ljava/util/DualPivotQuicksort$Merger;[FI[FII[FII)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($DualPivotQuicksort$Merger*,$floats*,int32_t,$floats*,int32_t,int32_t,$floats*,int32_t,int32_t)>(&DualPivotQuicksort::mergeParts))},
	{"mergeParts", "(Ljava/util/DualPivotQuicksort$Merger;[DI[DII[DII)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($DualPivotQuicksort$Merger*,$doubles*,int32_t,$doubles*,int32_t,int32_t,$doubles*,int32_t,int32_t)>(&DualPivotQuicksort::mergeParts))},
	{"mergeRuns", "([I[IIIZ[III)[I", nullptr, $PRIVATE | $STATIC, $method(static_cast<$ints*(*)($ints*,$ints*,int32_t,int32_t,bool,$ints*,int32_t,int32_t)>(&DualPivotQuicksort::mergeRuns))},
	{"mergeRuns", "([J[JIIZ[III)[J", nullptr, $PRIVATE | $STATIC, $method(static_cast<$longs*(*)($longs*,$longs*,int32_t,int32_t,bool,$ints*,int32_t,int32_t)>(&DualPivotQuicksort::mergeRuns))},
	{"mergeRuns", "([F[FIIZ[III)[F", nullptr, $PRIVATE | $STATIC, $method(static_cast<$floats*(*)($floats*,$floats*,int32_t,int32_t,bool,$ints*,int32_t,int32_t)>(&DualPivotQuicksort::mergeRuns))},
	{"mergeRuns", "([D[DIIZ[III)[D", nullptr, $PRIVATE | $STATIC, $method(static_cast<$doubles*(*)($doubles*,$doubles*,int32_t,int32_t,bool,$ints*,int32_t,int32_t)>(&DualPivotQuicksort::mergeRuns))},
	{"mixedInsertionSort", "([IIII)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($ints*,int32_t,int32_t,int32_t)>(&DualPivotQuicksort::mixedInsertionSort))},
	{"mixedInsertionSort", "([JIII)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($longs*,int32_t,int32_t,int32_t)>(&DualPivotQuicksort::mixedInsertionSort))},
	{"mixedInsertionSort", "([FIII)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($floats*,int32_t,int32_t,int32_t)>(&DualPivotQuicksort::mixedInsertionSort))},
	{"mixedInsertionSort", "([DIII)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($doubles*,int32_t,int32_t,int32_t)>(&DualPivotQuicksort::mixedInsertionSort))},
	{"pushDown", "([IIIII)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($ints*,int32_t,int32_t,int32_t,int32_t)>(&DualPivotQuicksort::pushDown))},
	{"pushDown", "([JIJII)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($longs*,int32_t,int64_t,int32_t,int32_t)>(&DualPivotQuicksort::pushDown))},
	{"pushDown", "([FIFII)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($floats*,int32_t,float,int32_t,int32_t)>(&DualPivotQuicksort::pushDown))},
	{"pushDown", "([DIDII)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($doubles*,int32_t,double,int32_t,int32_t)>(&DualPivotQuicksort::pushDown))},
	{"sort", "([IIII)V", nullptr, $STATIC, $method(static_cast<void(*)($ints*,int32_t,int32_t,int32_t)>(&DualPivotQuicksort::sort))},
	{"sort", "(Ljava/util/DualPivotQuicksort$Sorter;[IIII)V", nullptr, $STATIC, $method(static_cast<void(*)($DualPivotQuicksort$Sorter*,$ints*,int32_t,int32_t,int32_t)>(&DualPivotQuicksort::sort))},
	{"sort", "([JIII)V", nullptr, $STATIC, $method(static_cast<void(*)($longs*,int32_t,int32_t,int32_t)>(&DualPivotQuicksort::sort))},
	{"sort", "(Ljava/util/DualPivotQuicksort$Sorter;[JIII)V", nullptr, $STATIC, $method(static_cast<void(*)($DualPivotQuicksort$Sorter*,$longs*,int32_t,int32_t,int32_t)>(&DualPivotQuicksort::sort))},
	{"sort", "([BII)V", nullptr, $STATIC, $method(static_cast<void(*)($bytes*,int32_t,int32_t)>(&DualPivotQuicksort::sort))},
	{"sort", "([CII)V", nullptr, $STATIC, $method(static_cast<void(*)($chars*,int32_t,int32_t)>(&DualPivotQuicksort::sort))},
	{"sort", "([CIII)V", nullptr, $STATIC, $method(static_cast<void(*)($chars*,int32_t,int32_t,int32_t)>(&DualPivotQuicksort::sort))},
	{"sort", "([SII)V", nullptr, $STATIC, $method(static_cast<void(*)($shorts*,int32_t,int32_t)>(&DualPivotQuicksort::sort))},
	{"sort", "([SIII)V", nullptr, $STATIC, $method(static_cast<void(*)($shorts*,int32_t,int32_t,int32_t)>(&DualPivotQuicksort::sort))},
	{"sort", "([FIII)V", nullptr, $STATIC, $method(static_cast<void(*)($floats*,int32_t,int32_t,int32_t)>(&DualPivotQuicksort::sort))},
	{"sort", "(Ljava/util/DualPivotQuicksort$Sorter;[FIII)V", nullptr, $STATIC, $method(static_cast<void(*)($DualPivotQuicksort$Sorter*,$floats*,int32_t,int32_t,int32_t)>(&DualPivotQuicksort::sort))},
	{"sort", "([DIII)V", nullptr, $STATIC, $method(static_cast<void(*)($doubles*,int32_t,int32_t,int32_t)>(&DualPivotQuicksort::sort))},
	{"sort", "(Ljava/util/DualPivotQuicksort$Sorter;[DIII)V", nullptr, $STATIC, $method(static_cast<void(*)($DualPivotQuicksort$Sorter*,$doubles*,int32_t,int32_t,int32_t)>(&DualPivotQuicksort::sort))},
	{"tryMergeRuns", "(Ljava/util/DualPivotQuicksort$Sorter;[III)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($DualPivotQuicksort$Sorter*,$ints*,int32_t,int32_t)>(&DualPivotQuicksort::tryMergeRuns))},
	{"tryMergeRuns", "(Ljava/util/DualPivotQuicksort$Sorter;[JII)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($DualPivotQuicksort$Sorter*,$longs*,int32_t,int32_t)>(&DualPivotQuicksort::tryMergeRuns))},
	{"tryMergeRuns", "(Ljava/util/DualPivotQuicksort$Sorter;[FII)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($DualPivotQuicksort$Sorter*,$floats*,int32_t,int32_t)>(&DualPivotQuicksort::tryMergeRuns))},
	{"tryMergeRuns", "(Ljava/util/DualPivotQuicksort$Sorter;[DII)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($DualPivotQuicksort$Sorter*,$doubles*,int32_t,int32_t)>(&DualPivotQuicksort::tryMergeRuns))},
	{}
};

$InnerClassInfo _DualPivotQuicksort_InnerClassesInfo_[] = {
	{"java.util.DualPivotQuicksort$RunMerger", "java.util.DualPivotQuicksort", "RunMerger", $PRIVATE | $STATIC | $FINAL},
	{"java.util.DualPivotQuicksort$Merger", "java.util.DualPivotQuicksort", "Merger", $PRIVATE | $STATIC | $FINAL},
	{"java.util.DualPivotQuicksort$Sorter", "java.util.DualPivotQuicksort", "Sorter", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _DualPivotQuicksort_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.DualPivotQuicksort",
	"java.lang.Object",
	nullptr,
	_DualPivotQuicksort_FieldInfo_,
	_DualPivotQuicksort_MethodInfo_,
	nullptr,
	nullptr,
	_DualPivotQuicksort_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.util.DualPivotQuicksort$RunMerger,java.util.DualPivotQuicksort$Merger,java.util.DualPivotQuicksort$Sorter"
};

$Object* allocate$DualPivotQuicksort($Class* clazz) {
	return $of($alloc(DualPivotQuicksort));
}

void DualPivotQuicksort::init$() {
}

int32_t DualPivotQuicksort::getDepth(int32_t parallelism, int32_t size) {
	int32_t depth = 0;
	while ((parallelism >>= 3) > 0 && (size >>= 2) > 0) {
		depth -= 2;
	}
	return depth;
}

void DualPivotQuicksort::sort($ints* a, int32_t parallelism, int32_t low, int32_t high) {
	$useLocalCurrentObjectStackCache();
	int32_t size = high - low;
	if (parallelism > 1 && size > DualPivotQuicksort::MIN_PARALLEL_SORT_SIZE) {
		int32_t depth = getDepth(parallelism, size >> 12);
		$var($ints, b, depth == 0 ? ($ints*)nullptr : $new($ints, size));
		$$new($DualPivotQuicksort$Sorter, nullptr, a, b, low, size, low, depth)->invoke();
	} else {
		sort(($DualPivotQuicksort$Sorter*)nullptr, a, 0, low, high);
	}
}

void DualPivotQuicksort::sort($DualPivotQuicksort$Sorter* sorter, $ints* a, int32_t bits, int32_t low, int32_t high) {
	while (true) {
		int32_t end = high - 1;
		int32_t size = high - low;
		if (size < DualPivotQuicksort::MAX_MIXED_INSERTION_SORT_SIZE + bits && ((int32_t)(bits & (uint32_t)1)) > 0) {
			mixedInsertionSort(a, low, high - 3 * ((size >> 5) << 3), high);
			return;
		}
		if (size < DualPivotQuicksort::MAX_INSERTION_SORT_SIZE) {
			insertionSort(a, low, high);
			return;
		}
		if ((bits == 0 || size > DualPivotQuicksort::MIN_TRY_MERGE_SIZE && ((int32_t)(bits & (uint32_t)1)) > 0) && tryMergeRuns(sorter, a, low, size)) {
			return;
		}
		if ((bits += DualPivotQuicksort::DELTA) > DualPivotQuicksort::MAX_RECURSION_DEPTH) {
			heapSort(a, low, high);
			return;
		}
		int32_t step = (size >> 3) * 3 + 3;
		int32_t e1 = low + step;
		int32_t e5 = end - step;
		int32_t e3 = (int32_t)((uint32_t)(e1 + e5) >> 1);
		int32_t e2 = (int32_t)((uint32_t)(e1 + e3) >> 1);
		int32_t e4 = (int32_t)((uint32_t)(e3 + e5) >> 1);
		int32_t a3 = $nc(a)->get(e3);
		if (a->get(e5) < a->get(e2)) {
			int32_t t = a->get(e5);
			a->set(e5, a->get(e2));
			a->set(e2, t);
		}
		if (a->get(e4) < a->get(e1)) {
			int32_t t = a->get(e4);
			a->set(e4, a->get(e1));
			a->set(e1, t);
		}
		if (a->get(e5) < a->get(e4)) {
			int32_t t = a->get(e5);
			a->set(e5, a->get(e4));
			a->set(e4, t);
		}
		if (a->get(e2) < a->get(e1)) {
			int32_t t = a->get(e2);
			a->set(e2, a->get(e1));
			a->set(e1, t);
		}
		if (a->get(e4) < a->get(e2)) {
			int32_t t = a->get(e4);
			a->set(e4, a->get(e2));
			a->set(e2, t);
		}
		if (a3 < a->get(e2)) {
			if (a3 < a->get(e1)) {
				a->set(e3, a->get(e2));
				a->set(e2, a->get(e1));
				a->set(e1, a3);
			} else {
				a->set(e3, a->get(e2));
				a->set(e2, a3);
			}
		} else if (a3 > a->get(e4)) {
			if (a3 > a->get(e5)) {
				a->set(e3, a->get(e4));
				a->set(e4, a->get(e5));
				a->set(e5, a3);
			} else {
				a->set(e3, a->get(e4));
				a->set(e4, a3);
			}
		}
		int32_t lower = low;
		int32_t upper = end;
		if (a->get(e1) < a->get(e2) && a->get(e2) < a->get(e3) && a->get(e3) < a->get(e4) && a->get(e4) < a->get(e5)) {
			int32_t pivot1 = a->get(e1);
			int32_t pivot2 = a->get(e5);
			a->set(e1, a->get(lower));
			a->set(e5, a->get(upper));
			while (a->get(++lower) < pivot1) {
			}
			while (a->get(--upper) > pivot2) {
			}
			{
				int32_t unused = --lower;
				int32_t k = ++upper;
				for (; --k > lower;) {
					int32_t ak = a->get(k);
					if (ak < pivot1) {
						while (lower < k) {
							if (a->get(++lower) >= pivot1) {
								if (a->get(lower) > pivot2) {
									a->set(k, a->get(--upper));
									a->set(upper, a->get(lower));
								} else {
									a->set(k, a->get(lower));
								}
								a->set(lower, ak);
								break;
							}
						}
					} else if (ak > pivot2) {
						a->set(k, a->get(--upper));
						a->set(upper, ak);
					}
				}
			}
			a->set(low, a->get(lower));
			a->set(lower, pivot1);
			a->set(end, a->get(upper));
			a->set(upper, pivot2);
			if (size > DualPivotQuicksort::MIN_PARALLEL_SORT_SIZE && sorter != nullptr) {
				sorter->forkSorter(bits | 1, lower + 1, upper);
				sorter->forkSorter(bits | 1, upper + 1, high);
			} else {
				sort(sorter, a, bits | 1, lower + 1, upper);
				sort(sorter, a, bits | 1, upper + 1, high);
			}
		} else {
			int32_t pivot = a->get(e3);
			a->set(e3, a->get(lower));
			for (int32_t k = ++upper; --k > lower;) {
				int32_t ak = a->get(k);
				if (ak != pivot) {
					a->set(k, pivot);
					if (ak < pivot) {
						while (a->get(++lower) < pivot) {
						}
						if (a->get(lower) > pivot) {
							a->set(--upper, a->get(lower));
						}
						a->set(lower, ak);
					} else {
						a->set(--upper, ak);
					}
				}
			}
			a->set(low, a->get(lower));
			a->set(lower, pivot);
			if (size > DualPivotQuicksort::MIN_PARALLEL_SORT_SIZE && sorter != nullptr) {
				sorter->forkSorter(bits | 1, upper, high);
			} else {
				sort(sorter, a, bits | 1, upper, high);
			}
		}
		high = lower;
	}
}

void DualPivotQuicksort::mixedInsertionSort($ints* a, int32_t low, int32_t end, int32_t high) {
	if (end == high) {
		for (int32_t i = 0; ++low < end;) {
			int32_t ai = $nc(a)->get(i = low);
			while (ai < a->get(--i)) {
				a->set(i + 1, a->get(i));
			}
			a->set(i + 1, ai);
		}
	} else {
		int32_t pin = $nc(a)->get(end);
		{
			int32_t i = 0;
			int32_t p = high;
			for (; ++low < end;) {
				int32_t ai = a->get(i = low);
				if (ai < a->get(i - 1)) {
					int32_t var$0 = i;
					a->set(var$0, a->get(--i));
					while (ai < a->get(--i)) {
						a->set(i + 1, a->get(i));
					}
					a->set(i + 1, ai);
				} else if (p > i && ai > pin) {
					while (a->get(--p) > pin) {
					}
					if (p > i) {
						ai = a->get(p);
						a->set(p, a->get(i));
					}
					while (ai < a->get(--i)) {
						a->set(i + 1, a->get(i));
					}
					a->set(i + 1, ai);
				}
			}
		}
		for (int32_t i = 0; low < high; ++low) {
			int32_t a1 = a->get(i = low);
			int32_t a2 = a->get(++low);
			if (a1 > a2) {
				while (a1 < a->get(--i)) {
					a->set(i + 2, a->get(i));
				}
				a->set(++i + 1, a1);
				while (a2 < a->get(--i)) {
					a->set(i + 1, a->get(i));
				}
				a->set(i + 1, a2);
			} else if (a1 < a->get(i - 1)) {
				while (a2 < a->get(--i)) {
					a->set(i + 2, a->get(i));
				}
				a->set(++i + 1, a2);
				while (a1 < a->get(--i)) {
					a->set(i + 1, a->get(i));
				}
				a->set(i + 1, a1);
			}
		}
	}
}

void DualPivotQuicksort::insertionSort($ints* a, int32_t low, int32_t high) {
	{
		int32_t i = 0;
		int32_t k = low;
		for (; ++k < high;) {
			int32_t ai = $nc(a)->get(i = k);
			if (ai < a->get(i - 1)) {
				while (true) {
					bool var$0 = --i >= low;
					if (!(var$0 && ai < a->get(i))) {
						break;
					}
					{
						a->set(i + 1, a->get(i));
					}
				}
				a->set(i + 1, ai);
			}
		}
	}
}

void DualPivotQuicksort::heapSort($ints* a, int32_t low, int32_t high) {
	$useLocalCurrentObjectStackCache();
	for (int32_t k = (int32_t)((uint32_t)(low + high) >> 1); k > low;) {
		$var($ints, var$0, a);
		int32_t var$1 = --k;
		pushDown(var$0, var$1, $nc(a)->get(k), low, high);
	}
	while (--high > low) {
		int32_t max = $nc(a)->get(low);
		pushDown(a, low, a->get(high), low, high);
		a->set(high, max);
	}
}

void DualPivotQuicksort::pushDown($ints* a, int32_t p, int32_t value, int32_t low, int32_t high) {
	int32_t var$0 = p;
	for (int32_t k = 0;; $nc(a)->set(var$0, a->get(p = k))) {
		k = (p << 1) - low + 2;
		if (k > high) {
			break;
		}
		if (k == high || a->get(k) < a->get(k - 1)) {
			--k;
		}
		if (a->get(k) <= value) {
			break;
		}
	}
	a->set(p, value);
}

bool DualPivotQuicksort::tryMergeRuns($DualPivotQuicksort$Sorter* sorter, $ints* a, int32_t low, int32_t size) {
	$useLocalCurrentObjectStackCache();
	$var($ints, run, nullptr);
	int32_t high = low + size;
	int32_t count = 1;
	int32_t last = low;
	for (int32_t k = low + 1; k < high;) {
		if ($nc(a)->get(k - 1) < a->get(k)) {
			while (true) {
				bool var$0 = ++k < high;
				if (!(var$0 && a->get(k - 1) <= a->get(k))) {
					break;
				}
				{
				}
			}
		} else if (a->get(k - 1) > a->get(k)) {
			while (true) {
				bool var$1 = ++k < high;
				if (!(var$1 && a->get(k - 1) >= a->get(k))) {
					break;
				}
				{
				}
			}
			{
				int32_t i = last - 1;
				int32_t j = k;
				for (;;) {
					bool var$2 = ++i < --j;
					if (!(var$2 && a->get(i) > a->get(j))) {
						break;
					}
					{
						int32_t ai = a->get(i);
						a->set(i, a->get(j));
						a->set(j, ai);
					}
				}
			}
		} else {
			{
				int32_t ak = a->get(k);
				for (;;) {
					bool var$3 = ++k < high;
					if (!(var$3 && ak == a->get(k))) {
						break;
					}
					{
					}
				}
			}
			if (k < high) {
				continue;
			}
		}
		if (run == nullptr) {
			if (k == high) {
				return true;
			}
			if (k - low < DualPivotQuicksort::MIN_FIRST_RUN_SIZE) {
				return false;
			}
			$assign(run, $new($ints, (int32_t)(((size >> 10) | 127) & (uint32_t)1023)));
			run->set(0, low);
		} else if ($nc(a)->get(last - 1) > a->get(last)) {
			if (count > $sr(k - low, DualPivotQuicksort::MIN_FIRST_RUNS_FACTOR)) {
				return false;
			}
			if (++count == DualPivotQuicksort::MAX_RUN_CAPACITY) {
				return false;
			}
			if (count == $nc(run)->length) {
				$assign(run, $Arrays::copyOf(run, count << 1));
			}
		}
		$nc(run)->set(count, (last = k));
	}
	if (count > 1) {
		$var($ints, b, nullptr);
		int32_t offset = low;
		if (sorter == nullptr || ($assign(b, $cast($ints, $nc(sorter)->b))) == nullptr) {
			$assign(b, $new($ints, size));
		} else {
			offset = sorter->offset;
		}
		mergeRuns(a, b, offset, 1, sorter != nullptr, run, 0, count);
	}
	return true;
}

$ints* DualPivotQuicksort::mergeRuns($ints* a, $ints* b, int32_t offset, int32_t aim, bool parallel, $ints* run, int32_t lo, int32_t hi) {
	$useLocalCurrentObjectStackCache();
	if (hi - lo == 1) {
		if (aim >= 0) {
			return a;
		}
		{
			int32_t i = $nc(run)->get(hi);
			int32_t j = i - offset;
			int32_t low = run->get(lo);
			for (; i > low; $nc(b)->set(--j, $nc(a)->get(--i))) {
			}
		}
		return b;
	}
	int32_t mi = lo;
	int32_t rmi = (int32_t)((uint32_t)($nc(run)->get(lo) + run->get(hi)) >> 1);
	while (run->get(++mi + 1) <= rmi) {
	}
	$var($ints, a1, nullptr);
	$var($ints, a2, nullptr);
	if (parallel && hi - lo > DualPivotQuicksort::MIN_RUN_COUNT) {
		$var($DualPivotQuicksort$RunMerger, merger, $$new($DualPivotQuicksort$RunMerger, a, b, offset, 0, run, mi, hi)->forkMe());
		$assign(a1, mergeRuns(a, b, offset, -aim, true, run, lo, mi));
		$assign(a2, $cast($ints, $nc(merger)->getDestination()));
	} else {
		$assign(a1, mergeRuns(a, b, offset, -aim, false, run, lo, mi));
		$assign(a2, mergeRuns(a, b, offset, 0, false, run, mi, hi));
	}
	$var($ints, dst, a1 == a ? b : a);
	int32_t k = a1 == a ? run->get(lo) - offset : run->get(lo);
	int32_t lo1 = a1 == b ? run->get(lo) - offset : run->get(lo);
	int32_t hi1 = a1 == b ? run->get(mi) - offset : run->get(mi);
	int32_t lo2 = a2 == b ? run->get(mi) - offset : run->get(mi);
	int32_t hi2 = a2 == b ? run->get(hi) - offset : run->get(hi);
	if (parallel) {
		$$new($DualPivotQuicksort$Merger, nullptr, dst, k, a1, lo1, hi1, a2, lo2, hi2)->invoke();
	} else {
		mergeParts(($DualPivotQuicksort$Merger*)nullptr, dst, k, a1, lo1, hi1, a2, lo2, hi2);
	}
	return dst;
}

void DualPivotQuicksort::mergeParts($DualPivotQuicksort$Merger* merger, $ints* dst, int32_t k, $ints* a1, int32_t lo1, int32_t hi1, $ints* a2, int32_t lo2, int32_t hi2) {
	if (merger != nullptr && a1 == a2) {
		while (true) {
			if (hi1 - lo1 < hi2 - lo2) {
				int32_t lo = lo1;
				lo1 = lo2;
				lo2 = lo;
				int32_t hi = hi1;
				hi1 = hi2;
				hi2 = hi;
			}
			if (hi1 - lo1 < DualPivotQuicksort::MIN_PARALLEL_MERGE_PARTS_SIZE) {
				break;
			}
			int32_t mi1 = (int32_t)((uint32_t)(lo1 + hi1) >> 1);
			int32_t key = $nc(a1)->get(mi1);
			int32_t mi2 = hi2;
			for (int32_t loo = lo2; loo < mi2;) {
				int32_t t = (int32_t)((uint32_t)(loo + mi2) >> 1);
				if (key > $nc(a2)->get(t)) {
					loo = t + 1;
				} else {
					mi2 = t;
				}
			}
			int32_t d = mi2 - lo2 + mi1 - lo1;
			merger->forkMerger(dst, k + d, a1, mi1, hi1, a2, mi2, hi2);
			hi1 = mi1;
			hi2 = mi2;
		}
	}
	while (lo1 < hi1 && lo2 < hi2) {
		$nc(dst)->set(k++, $nc(a1)->get(lo1) < $nc(a2)->get(lo2) ? $nc(a1)->get(lo1++) : $nc(a2)->get(lo2++));
	}
	if (dst != a1 || k < lo1) {
		while (lo1 < hi1) {
			$nc(dst)->set(k++, $nc(a1)->get(lo1++));
		}
	}
	if (dst != a2 || k < lo2) {
		while (lo2 < hi2) {
			$nc(dst)->set(k++, $nc(a2)->get(lo2++));
		}
	}
}

void DualPivotQuicksort::sort($longs* a, int32_t parallelism, int32_t low, int32_t high) {
	$useLocalCurrentObjectStackCache();
	int32_t size = high - low;
	if (parallelism > 1 && size > DualPivotQuicksort::MIN_PARALLEL_SORT_SIZE) {
		int32_t depth = getDepth(parallelism, size >> 12);
		$var($longs, b, depth == 0 ? ($longs*)nullptr : $new($longs, size));
		$$new($DualPivotQuicksort$Sorter, nullptr, a, b, low, size, low, depth)->invoke();
	} else {
		sort(($DualPivotQuicksort$Sorter*)nullptr, a, 0, low, high);
	}
}

void DualPivotQuicksort::sort($DualPivotQuicksort$Sorter* sorter, $longs* a, int32_t bits, int32_t low, int32_t high) {
	while (true) {
		int32_t end = high - 1;
		int32_t size = high - low;
		if (size < DualPivotQuicksort::MAX_MIXED_INSERTION_SORT_SIZE + bits && ((int32_t)(bits & (uint32_t)1)) > 0) {
			mixedInsertionSort(a, low, high - 3 * ((size >> 5) << 3), high);
			return;
		}
		if (size < DualPivotQuicksort::MAX_INSERTION_SORT_SIZE) {
			insertionSort(a, low, high);
			return;
		}
		if ((bits == 0 || size > DualPivotQuicksort::MIN_TRY_MERGE_SIZE && ((int32_t)(bits & (uint32_t)1)) > 0) && tryMergeRuns(sorter, a, low, size)) {
			return;
		}
		if ((bits += DualPivotQuicksort::DELTA) > DualPivotQuicksort::MAX_RECURSION_DEPTH) {
			heapSort(a, low, high);
			return;
		}
		int32_t step = (size >> 3) * 3 + 3;
		int32_t e1 = low + step;
		int32_t e5 = end - step;
		int32_t e3 = (int32_t)((uint32_t)(e1 + e5) >> 1);
		int32_t e2 = (int32_t)((uint32_t)(e1 + e3) >> 1);
		int32_t e4 = (int32_t)((uint32_t)(e3 + e5) >> 1);
		int64_t a3 = $nc(a)->get(e3);
		if (a->get(e5) < a->get(e2)) {
			int64_t t = a->get(e5);
			a->set(e5, a->get(e2));
			a->set(e2, t);
		}
		if (a->get(e4) < a->get(e1)) {
			int64_t t = a->get(e4);
			a->set(e4, a->get(e1));
			a->set(e1, t);
		}
		if (a->get(e5) < a->get(e4)) {
			int64_t t = a->get(e5);
			a->set(e5, a->get(e4));
			a->set(e4, t);
		}
		if (a->get(e2) < a->get(e1)) {
			int64_t t = a->get(e2);
			a->set(e2, a->get(e1));
			a->set(e1, t);
		}
		if (a->get(e4) < a->get(e2)) {
			int64_t t = a->get(e4);
			a->set(e4, a->get(e2));
			a->set(e2, t);
		}
		if (a3 < a->get(e2)) {
			if (a3 < a->get(e1)) {
				a->set(e3, a->get(e2));
				a->set(e2, a->get(e1));
				a->set(e1, a3);
			} else {
				a->set(e3, a->get(e2));
				a->set(e2, a3);
			}
		} else if (a3 > a->get(e4)) {
			if (a3 > a->get(e5)) {
				a->set(e3, a->get(e4));
				a->set(e4, a->get(e5));
				a->set(e5, a3);
			} else {
				a->set(e3, a->get(e4));
				a->set(e4, a3);
			}
		}
		int32_t lower = low;
		int32_t upper = end;
		if (a->get(e1) < a->get(e2) && a->get(e2) < a->get(e3) && a->get(e3) < a->get(e4) && a->get(e4) < a->get(e5)) {
			int64_t pivot1 = a->get(e1);
			int64_t pivot2 = a->get(e5);
			a->set(e1, a->get(lower));
			a->set(e5, a->get(upper));
			while (a->get(++lower) < pivot1) {
			}
			while (a->get(--upper) > pivot2) {
			}
			{
				int32_t unused = --lower;
				int32_t k = ++upper;
				for (; --k > lower;) {
					int64_t ak = a->get(k);
					if (ak < pivot1) {
						while (lower < k) {
							if (a->get(++lower) >= pivot1) {
								if (a->get(lower) > pivot2) {
									a->set(k, a->get(--upper));
									a->set(upper, a->get(lower));
								} else {
									a->set(k, a->get(lower));
								}
								a->set(lower, ak);
								break;
							}
						}
					} else if (ak > pivot2) {
						a->set(k, a->get(--upper));
						a->set(upper, ak);
					}
				}
			}
			a->set(low, a->get(lower));
			a->set(lower, pivot1);
			a->set(end, a->get(upper));
			a->set(upper, pivot2);
			if (size > DualPivotQuicksort::MIN_PARALLEL_SORT_SIZE && sorter != nullptr) {
				sorter->forkSorter(bits | 1, lower + 1, upper);
				sorter->forkSorter(bits | 1, upper + 1, high);
			} else {
				sort(sorter, a, bits | 1, lower + 1, upper);
				sort(sorter, a, bits | 1, upper + 1, high);
			}
		} else {
			int64_t pivot = a->get(e3);
			a->set(e3, a->get(lower));
			for (int32_t k = ++upper; --k > lower;) {
				int64_t ak = a->get(k);
				if (ak != pivot) {
					a->set(k, pivot);
					if (ak < pivot) {
						while (a->get(++lower) < pivot) {
						}
						if (a->get(lower) > pivot) {
							a->set(--upper, a->get(lower));
						}
						a->set(lower, ak);
					} else {
						a->set(--upper, ak);
					}
				}
			}
			a->set(low, a->get(lower));
			a->set(lower, pivot);
			if (size > DualPivotQuicksort::MIN_PARALLEL_SORT_SIZE && sorter != nullptr) {
				sorter->forkSorter(bits | 1, upper, high);
			} else {
				sort(sorter, a, bits | 1, upper, high);
			}
		}
		high = lower;
	}
}

void DualPivotQuicksort::mixedInsertionSort($longs* a, int32_t low, int32_t end, int32_t high) {
	if (end == high) {
		for (int32_t i = 0; ++low < end;) {
			int64_t ai = $nc(a)->get(i = low);
			while (ai < a->get(--i)) {
				a->set(i + 1, a->get(i));
			}
			a->set(i + 1, ai);
		}
	} else {
		int64_t pin = $nc(a)->get(end);
		{
			int32_t i = 0;
			int32_t p = high;
			for (; ++low < end;) {
				int64_t ai = a->get(i = low);
				if (ai < a->get(i - 1)) {
					int32_t var$0 = i;
					a->set(var$0, a->get(--i));
					while (ai < a->get(--i)) {
						a->set(i + 1, a->get(i));
					}
					a->set(i + 1, ai);
				} else if (p > i && ai > pin) {
					while (a->get(--p) > pin) {
					}
					if (p > i) {
						ai = a->get(p);
						a->set(p, a->get(i));
					}
					while (ai < a->get(--i)) {
						a->set(i + 1, a->get(i));
					}
					a->set(i + 1, ai);
				}
			}
		}
		for (int32_t i = 0; low < high; ++low) {
			int64_t a1 = a->get(i = low);
			int64_t a2 = a->get(++low);
			if (a1 > a2) {
				while (a1 < a->get(--i)) {
					a->set(i + 2, a->get(i));
				}
				a->set(++i + 1, a1);
				while (a2 < a->get(--i)) {
					a->set(i + 1, a->get(i));
				}
				a->set(i + 1, a2);
			} else if (a1 < a->get(i - 1)) {
				while (a2 < a->get(--i)) {
					a->set(i + 2, a->get(i));
				}
				a->set(++i + 1, a2);
				while (a1 < a->get(--i)) {
					a->set(i + 1, a->get(i));
				}
				a->set(i + 1, a1);
			}
		}
	}
}

void DualPivotQuicksort::insertionSort($longs* a, int32_t low, int32_t high) {
	{
		int32_t i = 0;
		int32_t k = low;
		for (; ++k < high;) {
			int64_t ai = $nc(a)->get(i = k);
			if (ai < a->get(i - 1)) {
				while (true) {
					bool var$0 = --i >= low;
					if (!(var$0 && ai < a->get(i))) {
						break;
					}
					{
						a->set(i + 1, a->get(i));
					}
				}
				a->set(i + 1, ai);
			}
		}
	}
}

void DualPivotQuicksort::heapSort($longs* a, int32_t low, int32_t high) {
	$useLocalCurrentObjectStackCache();
	for (int32_t k = (int32_t)((uint32_t)(low + high) >> 1); k > low;) {
		$var($longs, var$0, a);
		int32_t var$1 = --k;
		pushDown(var$0, var$1, $nc(a)->get(k), low, high);
	}
	while (--high > low) {
		int64_t max = $nc(a)->get(low);
		pushDown(a, low, a->get(high), low, high);
		a->set(high, max);
	}
}

void DualPivotQuicksort::pushDown($longs* a, int32_t p, int64_t value, int32_t low, int32_t high) {
	int32_t var$0 = p;
	for (int32_t k = 0;; $nc(a)->set(var$0, a->get(p = k))) {
		k = (p << 1) - low + 2;
		if (k > high) {
			break;
		}
		if (k == high || a->get(k) < a->get(k - 1)) {
			--k;
		}
		if (a->get(k) <= value) {
			break;
		}
	}
	a->set(p, value);
}

bool DualPivotQuicksort::tryMergeRuns($DualPivotQuicksort$Sorter* sorter, $longs* a, int32_t low, int32_t size) {
	$useLocalCurrentObjectStackCache();
	$var($ints, run, nullptr);
	int32_t high = low + size;
	int32_t count = 1;
	int32_t last = low;
	for (int32_t k = low + 1; k < high;) {
		if ($nc(a)->get(k - 1) < a->get(k)) {
			while (true) {
				bool var$0 = ++k < high;
				if (!(var$0 && a->get(k - 1) <= a->get(k))) {
					break;
				}
				{
				}
			}
		} else if (a->get(k - 1) > a->get(k)) {
			while (true) {
				bool var$1 = ++k < high;
				if (!(var$1 && a->get(k - 1) >= a->get(k))) {
					break;
				}
				{
				}
			}
			{
				int32_t i = last - 1;
				int32_t j = k;
				for (;;) {
					bool var$2 = ++i < --j;
					if (!(var$2 && a->get(i) > a->get(j))) {
						break;
					}
					{
						int64_t ai = a->get(i);
						a->set(i, a->get(j));
						a->set(j, ai);
					}
				}
			}
		} else {
			{
				int64_t ak = a->get(k);
				for (;;) {
					bool var$3 = ++k < high;
					if (!(var$3 && ak == a->get(k))) {
						break;
					}
					{
					}
				}
			}
			if (k < high) {
				continue;
			}
		}
		if (run == nullptr) {
			if (k == high) {
				return true;
			}
			if (k - low < DualPivotQuicksort::MIN_FIRST_RUN_SIZE) {
				return false;
			}
			$assign(run, $new($ints, (int32_t)(((size >> 10) | 127) & (uint32_t)1023)));
			run->set(0, low);
		} else if ($nc(a)->get(last - 1) > a->get(last)) {
			if (count > $sr(k - low, DualPivotQuicksort::MIN_FIRST_RUNS_FACTOR)) {
				return false;
			}
			if (++count == DualPivotQuicksort::MAX_RUN_CAPACITY) {
				return false;
			}
			if (count == $nc(run)->length) {
				$assign(run, $Arrays::copyOf(run, count << 1));
			}
		}
		$nc(run)->set(count, (last = k));
	}
	if (count > 1) {
		$var($longs, b, nullptr);
		int32_t offset = low;
		if (sorter == nullptr || ($assign(b, $cast($longs, $nc(sorter)->b))) == nullptr) {
			$assign(b, $new($longs, size));
		} else {
			offset = sorter->offset;
		}
		mergeRuns(a, b, offset, 1, sorter != nullptr, run, 0, count);
	}
	return true;
}

$longs* DualPivotQuicksort::mergeRuns($longs* a, $longs* b, int32_t offset, int32_t aim, bool parallel, $ints* run, int32_t lo, int32_t hi) {
	$useLocalCurrentObjectStackCache();
	if (hi - lo == 1) {
		if (aim >= 0) {
			return a;
		}
		{
			int32_t i = $nc(run)->get(hi);
			int32_t j = i - offset;
			int32_t low = run->get(lo);
			for (; i > low; $nc(b)->set(--j, $nc(a)->get(--i))) {
			}
		}
		return b;
	}
	int32_t mi = lo;
	int32_t rmi = (int32_t)((uint32_t)($nc(run)->get(lo) + run->get(hi)) >> 1);
	while (run->get(++mi + 1) <= rmi) {
	}
	$var($longs, a1, nullptr);
	$var($longs, a2, nullptr);
	if (parallel && hi - lo > DualPivotQuicksort::MIN_RUN_COUNT) {
		$var($DualPivotQuicksort$RunMerger, merger, $$new($DualPivotQuicksort$RunMerger, a, b, offset, 0, run, mi, hi)->forkMe());
		$assign(a1, mergeRuns(a, b, offset, -aim, true, run, lo, mi));
		$assign(a2, $cast($longs, $nc(merger)->getDestination()));
	} else {
		$assign(a1, mergeRuns(a, b, offset, -aim, false, run, lo, mi));
		$assign(a2, mergeRuns(a, b, offset, 0, false, run, mi, hi));
	}
	$var($longs, dst, a1 == a ? b : a);
	int32_t k = a1 == a ? run->get(lo) - offset : run->get(lo);
	int32_t lo1 = a1 == b ? run->get(lo) - offset : run->get(lo);
	int32_t hi1 = a1 == b ? run->get(mi) - offset : run->get(mi);
	int32_t lo2 = a2 == b ? run->get(mi) - offset : run->get(mi);
	int32_t hi2 = a2 == b ? run->get(hi) - offset : run->get(hi);
	if (parallel) {
		$$new($DualPivotQuicksort$Merger, nullptr, dst, k, a1, lo1, hi1, a2, lo2, hi2)->invoke();
	} else {
		mergeParts(($DualPivotQuicksort$Merger*)nullptr, dst, k, a1, lo1, hi1, a2, lo2, hi2);
	}
	return dst;
}

void DualPivotQuicksort::mergeParts($DualPivotQuicksort$Merger* merger, $longs* dst, int32_t k, $longs* a1, int32_t lo1, int32_t hi1, $longs* a2, int32_t lo2, int32_t hi2) {
	if (merger != nullptr && a1 == a2) {
		while (true) {
			if (hi1 - lo1 < hi2 - lo2) {
				int32_t lo = lo1;
				lo1 = lo2;
				lo2 = lo;
				int32_t hi = hi1;
				hi1 = hi2;
				hi2 = hi;
			}
			if (hi1 - lo1 < DualPivotQuicksort::MIN_PARALLEL_MERGE_PARTS_SIZE) {
				break;
			}
			int32_t mi1 = (int32_t)((uint32_t)(lo1 + hi1) >> 1);
			int64_t key = $nc(a1)->get(mi1);
			int32_t mi2 = hi2;
			for (int32_t loo = lo2; loo < mi2;) {
				int32_t t = (int32_t)((uint32_t)(loo + mi2) >> 1);
				if (key > $nc(a2)->get(t)) {
					loo = t + 1;
				} else {
					mi2 = t;
				}
			}
			int32_t d = mi2 - lo2 + mi1 - lo1;
			merger->forkMerger(dst, k + d, a1, mi1, hi1, a2, mi2, hi2);
			hi1 = mi1;
			hi2 = mi2;
		}
	}
	while (lo1 < hi1 && lo2 < hi2) {
		$nc(dst)->set(k++, $nc(a1)->get(lo1) < $nc(a2)->get(lo2) ? $nc(a1)->get(lo1++) : $nc(a2)->get(lo2++));
	}
	if (dst != a1 || k < lo1) {
		while (lo1 < hi1) {
			$nc(dst)->set(k++, $nc(a1)->get(lo1++));
		}
	}
	if (dst != a2 || k < lo2) {
		while (lo2 < hi2) {
			$nc(dst)->set(k++, $nc(a2)->get(lo2++));
		}
	}
}

void DualPivotQuicksort::sort($bytes* a, int32_t low, int32_t high) {
	if (high - low > DualPivotQuicksort::MIN_BYTE_COUNTING_SORT_SIZE) {
		countingSort(a, low, high);
	} else {
		insertionSort(a, low, high);
	}
}

void DualPivotQuicksort::insertionSort($bytes* a, int32_t low, int32_t high) {
	{
		int32_t i = 0;
		int32_t k = low;
		for (; ++k < high;) {
			int8_t ai = $nc(a)->get(i = k);
			if (ai < a->get(i - 1)) {
				while (true) {
					bool var$0 = --i >= low;
					if (!(var$0 && ai < a->get(i))) {
						break;
					}
					{
						a->set(i + 1, a->get(i));
					}
				}
				a->set(i + 1, ai);
			}
		}
	}
}

void DualPivotQuicksort::countingSort($bytes* a, int32_t low, int32_t high) {
	$var($ints, count, $new($ints, DualPivotQuicksort::NUM_BYTE_VALUES));
	for (int32_t i = high; i > low; ++(*count)[(int32_t)($nc(a)->get(--i) & (uint32_t)255)]) {
	}
	if (high - low > DualPivotQuicksort::NUM_BYTE_VALUES) {
		for (int32_t i = DualPivotQuicksort::MAX_BYTE_INDEX; --i > $Byte::MAX_VALUE;) {
			int32_t value = (int32_t)(i & (uint32_t)255);
			for (low = high - count->get(value); high > low; a->set(--high, (int8_t)value)) {
			}
		}
	} else {
		for (int32_t i = DualPivotQuicksort::MAX_BYTE_INDEX; high > low;) {
			while (count->get((int32_t)(--i & (uint32_t)255)) == 0) {
			}
			int32_t value = (int32_t)(i & (uint32_t)255);
			int32_t c = count->get(value);
			do {
				a->set(--high, (int8_t)value);
			} while (--c > 0);
		}
	}
}

void DualPivotQuicksort::sort($chars* a, int32_t low, int32_t high) {
	if (high - low > DualPivotQuicksort::MIN_SHORT_OR_CHAR_COUNTING_SORT_SIZE) {
		countingSort(a, low, high);
	} else {
		sort(a, 0, low, high);
	}
}

void DualPivotQuicksort::sort($chars* a, int32_t bits, int32_t low, int32_t high) {
	while (true) {
		int32_t end = high - 1;
		int32_t size = high - low;
		if (size < DualPivotQuicksort::MAX_INSERTION_SORT_SIZE) {
			insertionSort(a, low, high);
			return;
		}
		if ((bits += DualPivotQuicksort::DELTA) > DualPivotQuicksort::MAX_RECURSION_DEPTH) {
			countingSort(a, low, high);
			return;
		}
		int32_t step = (size >> 3) * 3 + 3;
		int32_t e1 = low + step;
		int32_t e5 = end - step;
		int32_t e3 = (int32_t)((uint32_t)(e1 + e5) >> 1);
		int32_t e2 = (int32_t)((uint32_t)(e1 + e3) >> 1);
		int32_t e4 = (int32_t)((uint32_t)(e3 + e5) >> 1);
		char16_t a3 = $nc(a)->get(e3);
		if (a->get(e5) < a->get(e2)) {
			char16_t t = a->get(e5);
			a->set(e5, a->get(e2));
			a->set(e2, t);
		}
		if (a->get(e4) < a->get(e1)) {
			char16_t t = a->get(e4);
			a->set(e4, a->get(e1));
			a->set(e1, t);
		}
		if (a->get(e5) < a->get(e4)) {
			char16_t t = a->get(e5);
			a->set(e5, a->get(e4));
			a->set(e4, t);
		}
		if (a->get(e2) < a->get(e1)) {
			char16_t t = a->get(e2);
			a->set(e2, a->get(e1));
			a->set(e1, t);
		}
		if (a->get(e4) < a->get(e2)) {
			char16_t t = a->get(e4);
			a->set(e4, a->get(e2));
			a->set(e2, t);
		}
		if (a3 < a->get(e2)) {
			if (a3 < a->get(e1)) {
				a->set(e3, a->get(e2));
				a->set(e2, a->get(e1));
				a->set(e1, a3);
			} else {
				a->set(e3, a->get(e2));
				a->set(e2, a3);
			}
		} else if (a3 > a->get(e4)) {
			if (a3 > a->get(e5)) {
				a->set(e3, a->get(e4));
				a->set(e4, a->get(e5));
				a->set(e5, a3);
			} else {
				a->set(e3, a->get(e4));
				a->set(e4, a3);
			}
		}
		int32_t lower = low;
		int32_t upper = end;
		if (a->get(e1) < a->get(e2) && a->get(e2) < a->get(e3) && a->get(e3) < a->get(e4) && a->get(e4) < a->get(e5)) {
			char16_t pivot1 = a->get(e1);
			char16_t pivot2 = a->get(e5);
			a->set(e1, a->get(lower));
			a->set(e5, a->get(upper));
			while (a->get(++lower) < pivot1) {
			}
			while (a->get(--upper) > pivot2) {
			}
			{
				int32_t unused = --lower;
				int32_t k = ++upper;
				for (; --k > lower;) {
					char16_t ak = a->get(k);
					if (ak < pivot1) {
						while (lower < k) {
							if (a->get(++lower) >= pivot1) {
								if (a->get(lower) > pivot2) {
									a->set(k, a->get(--upper));
									a->set(upper, a->get(lower));
								} else {
									a->set(k, a->get(lower));
								}
								a->set(lower, ak);
								break;
							}
						}
					} else if (ak > pivot2) {
						a->set(k, a->get(--upper));
						a->set(upper, ak);
					}
				}
			}
			a->set(low, a->get(lower));
			a->set(lower, pivot1);
			a->set(end, a->get(upper));
			a->set(upper, pivot2);
			sort(a, bits | 1, lower + 1, upper);
			sort(a, bits | 1, upper + 1, high);
		} else {
			char16_t pivot = a->get(e3);
			a->set(e3, a->get(lower));
			for (int32_t k = ++upper; --k > lower;) {
				char16_t ak = a->get(k);
				if (ak != pivot) {
					a->set(k, pivot);
					if (ak < pivot) {
						while (a->get(++lower) < pivot) {
						}
						if (a->get(lower) > pivot) {
							a->set(--upper, a->get(lower));
						}
						a->set(lower, ak);
					} else {
						a->set(--upper, ak);
					}
				}
			}
			a->set(low, a->get(lower));
			a->set(lower, pivot);
			sort(a, bits | 1, upper, high);
		}
		high = lower;
	}
}

void DualPivotQuicksort::insertionSort($chars* a, int32_t low, int32_t high) {
	{
		int32_t i = 0;
		int32_t k = low;
		for (; ++k < high;) {
			char16_t ai = $nc(a)->get(i = k);
			if (ai < a->get(i - 1)) {
				while (true) {
					bool var$0 = --i >= low;
					if (!(var$0 && ai < a->get(i))) {
						break;
					}
					{
						a->set(i + 1, a->get(i));
					}
				}
				a->set(i + 1, ai);
			}
		}
	}
}

void DualPivotQuicksort::countingSort($chars* a, int32_t low, int32_t high) {
	$var($ints, count, $new($ints, DualPivotQuicksort::NUM_CHAR_VALUES));
	for (int32_t i = high; i > low; ++(*count)[$nc(a)->get(--i)]) {
	}
	if (high - low > DualPivotQuicksort::NUM_CHAR_VALUES) {
		for (int32_t i = DualPivotQuicksort::NUM_CHAR_VALUES; i > 0;) {
			for (low = high - count->get(--i); high > low; a->set(--high, (char16_t)i)) {
			}
		}
	} else {
		for (int32_t i = DualPivotQuicksort::NUM_CHAR_VALUES; high > low;) {
			while (count->get(--i) == 0) {
			}
			int32_t c = count->get(i);
			do {
				a->set(--high, (char16_t)i);
			} while (--c > 0);
		}
	}
}

void DualPivotQuicksort::sort($shorts* a, int32_t low, int32_t high) {
	if (high - low > DualPivotQuicksort::MIN_SHORT_OR_CHAR_COUNTING_SORT_SIZE) {
		countingSort(a, low, high);
	} else {
		sort(a, 0, low, high);
	}
}

void DualPivotQuicksort::sort($shorts* a, int32_t bits, int32_t low, int32_t high) {
	while (true) {
		int32_t end = high - 1;
		int32_t size = high - low;
		if (size < DualPivotQuicksort::MAX_INSERTION_SORT_SIZE) {
			insertionSort(a, low, high);
			return;
		}
		if ((bits += DualPivotQuicksort::DELTA) > DualPivotQuicksort::MAX_RECURSION_DEPTH) {
			countingSort(a, low, high);
			return;
		}
		int32_t step = (size >> 3) * 3 + 3;
		int32_t e1 = low + step;
		int32_t e5 = end - step;
		int32_t e3 = (int32_t)((uint32_t)(e1 + e5) >> 1);
		int32_t e2 = (int32_t)((uint32_t)(e1 + e3) >> 1);
		int32_t e4 = (int32_t)((uint32_t)(e3 + e5) >> 1);
		int16_t a3 = $nc(a)->get(e3);
		if (a->get(e5) < a->get(e2)) {
			int16_t t = a->get(e5);
			a->set(e5, a->get(e2));
			a->set(e2, t);
		}
		if (a->get(e4) < a->get(e1)) {
			int16_t t = a->get(e4);
			a->set(e4, a->get(e1));
			a->set(e1, t);
		}
		if (a->get(e5) < a->get(e4)) {
			int16_t t = a->get(e5);
			a->set(e5, a->get(e4));
			a->set(e4, t);
		}
		if (a->get(e2) < a->get(e1)) {
			int16_t t = a->get(e2);
			a->set(e2, a->get(e1));
			a->set(e1, t);
		}
		if (a->get(e4) < a->get(e2)) {
			int16_t t = a->get(e4);
			a->set(e4, a->get(e2));
			a->set(e2, t);
		}
		if (a3 < a->get(e2)) {
			if (a3 < a->get(e1)) {
				a->set(e3, a->get(e2));
				a->set(e2, a->get(e1));
				a->set(e1, a3);
			} else {
				a->set(e3, a->get(e2));
				a->set(e2, a3);
			}
		} else if (a3 > a->get(e4)) {
			if (a3 > a->get(e5)) {
				a->set(e3, a->get(e4));
				a->set(e4, a->get(e5));
				a->set(e5, a3);
			} else {
				a->set(e3, a->get(e4));
				a->set(e4, a3);
			}
		}
		int32_t lower = low;
		int32_t upper = end;
		if (a->get(e1) < a->get(e2) && a->get(e2) < a->get(e3) && a->get(e3) < a->get(e4) && a->get(e4) < a->get(e5)) {
			int16_t pivot1 = a->get(e1);
			int16_t pivot2 = a->get(e5);
			a->set(e1, a->get(lower));
			a->set(e5, a->get(upper));
			while (a->get(++lower) < pivot1) {
			}
			while (a->get(--upper) > pivot2) {
			}
			{
				int32_t unused = --lower;
				int32_t k = ++upper;
				for (; --k > lower;) {
					int16_t ak = a->get(k);
					if (ak < pivot1) {
						while (lower < k) {
							if (a->get(++lower) >= pivot1) {
								if (a->get(lower) > pivot2) {
									a->set(k, a->get(--upper));
									a->set(upper, a->get(lower));
								} else {
									a->set(k, a->get(lower));
								}
								a->set(lower, ak);
								break;
							}
						}
					} else if (ak > pivot2) {
						a->set(k, a->get(--upper));
						a->set(upper, ak);
					}
				}
			}
			a->set(low, a->get(lower));
			a->set(lower, pivot1);
			a->set(end, a->get(upper));
			a->set(upper, pivot2);
			sort(a, bits | 1, lower + 1, upper);
			sort(a, bits | 1, upper + 1, high);
		} else {
			int16_t pivot = a->get(e3);
			a->set(e3, a->get(lower));
			for (int32_t k = ++upper; --k > lower;) {
				int16_t ak = a->get(k);
				if (ak != pivot) {
					a->set(k, pivot);
					if (ak < pivot) {
						while (a->get(++lower) < pivot) {
						}
						if (a->get(lower) > pivot) {
							a->set(--upper, a->get(lower));
						}
						a->set(lower, ak);
					} else {
						a->set(--upper, ak);
					}
				}
			}
			a->set(low, a->get(lower));
			a->set(lower, pivot);
			sort(a, bits | 1, upper, high);
		}
		high = lower;
	}
}

void DualPivotQuicksort::insertionSort($shorts* a, int32_t low, int32_t high) {
	{
		int32_t i = 0;
		int32_t k = low;
		for (; ++k < high;) {
			int16_t ai = $nc(a)->get(i = k);
			if (ai < a->get(i - 1)) {
				while (true) {
					bool var$0 = --i >= low;
					if (!(var$0 && ai < a->get(i))) {
						break;
					}
					{
						a->set(i + 1, a->get(i));
					}
				}
				a->set(i + 1, ai);
			}
		}
	}
}

void DualPivotQuicksort::countingSort($shorts* a, int32_t low, int32_t high) {
	$var($ints, count, $new($ints, DualPivotQuicksort::NUM_SHORT_VALUES));
	for (int32_t i = high; i > low; ++(*count)[(int32_t)($nc(a)->get(--i) & (uint32_t)0x0000FFFF)]) {
	}
	if (high - low > DualPivotQuicksort::NUM_SHORT_VALUES) {
		for (int32_t i = DualPivotQuicksort::MAX_SHORT_INDEX; --i > $Short::MAX_VALUE;) {
			int32_t value = (int32_t)(i & (uint32_t)0x0000FFFF);
			for (low = high - count->get(value); high > low; a->set(--high, (int16_t)value)) {
			}
		}
	} else {
		for (int32_t i = DualPivotQuicksort::MAX_SHORT_INDEX; high > low;) {
			while (count->get((int32_t)(--i & (uint32_t)0x0000FFFF)) == 0) {
			}
			int32_t value = (int32_t)(i & (uint32_t)0x0000FFFF);
			int32_t c = count->get(value);
			do {
				a->set(--high, (int16_t)value);
			} while (--c > 0);
		}
	}
}

void DualPivotQuicksort::sort($floats* a, int32_t parallelism, int32_t low, int32_t high) {
	$useLocalCurrentObjectStackCache();
	int32_t numNegativeZero = 0;
	for (int32_t k = high; k > low;) {
		float ak = $nc(a)->get(--k);
		if (ak == 0.0f && $Float::floatToRawIntBits(ak) < 0) {
			numNegativeZero += 1;
			a->set(k, 0.0f);
		} else if (ak != ak) {
			a->set(k, a->get(--high));
			a->set(high, ak);
		}
	}
	int32_t size = high - low;
	if (parallelism > 1 && size > DualPivotQuicksort::MIN_PARALLEL_SORT_SIZE) {
		int32_t depth = getDepth(parallelism, size >> 12);
		$var($floats, b, depth == 0 ? ($floats*)nullptr : $new($floats, size));
		$$new($DualPivotQuicksort$Sorter, nullptr, a, b, low, size, low, depth)->invoke();
	} else {
		sort(($DualPivotQuicksort$Sorter*)nullptr, a, 0, low, high);
	}
	if (++numNegativeZero == 1) {
		return;
	}
	while (low <= high) {
		int32_t middle = (int32_t)((uint32_t)(low + high) >> 1);
		if ($nc(a)->get(middle) < 0) {
			low = middle + 1;
		} else {
			high = middle - 1;
		}
	}
	while (--numNegativeZero > 0) {
		$nc(a)->set(++high, -0.0f);
	}
}

void DualPivotQuicksort::sort($DualPivotQuicksort$Sorter* sorter, $floats* a, int32_t bits, int32_t low, int32_t high) {
	while (true) {
		int32_t end = high - 1;
		int32_t size = high - low;
		if (size < DualPivotQuicksort::MAX_MIXED_INSERTION_SORT_SIZE + bits && ((int32_t)(bits & (uint32_t)1)) > 0) {
			mixedInsertionSort(a, low, high - 3 * ((size >> 5) << 3), high);
			return;
		}
		if (size < DualPivotQuicksort::MAX_INSERTION_SORT_SIZE) {
			insertionSort(a, low, high);
			return;
		}
		if ((bits == 0 || size > DualPivotQuicksort::MIN_TRY_MERGE_SIZE && ((int32_t)(bits & (uint32_t)1)) > 0) && tryMergeRuns(sorter, a, low, size)) {
			return;
		}
		if ((bits += DualPivotQuicksort::DELTA) > DualPivotQuicksort::MAX_RECURSION_DEPTH) {
			heapSort(a, low, high);
			return;
		}
		int32_t step = (size >> 3) * 3 + 3;
		int32_t e1 = low + step;
		int32_t e5 = end - step;
		int32_t e3 = (int32_t)((uint32_t)(e1 + e5) >> 1);
		int32_t e2 = (int32_t)((uint32_t)(e1 + e3) >> 1);
		int32_t e4 = (int32_t)((uint32_t)(e3 + e5) >> 1);
		float a3 = $nc(a)->get(e3);
		if (a->get(e5) < a->get(e2)) {
			float t = a->get(e5);
			a->set(e5, a->get(e2));
			a->set(e2, t);
		}
		if (a->get(e4) < a->get(e1)) {
			float t = a->get(e4);
			a->set(e4, a->get(e1));
			a->set(e1, t);
		}
		if (a->get(e5) < a->get(e4)) {
			float t = a->get(e5);
			a->set(e5, a->get(e4));
			a->set(e4, t);
		}
		if (a->get(e2) < a->get(e1)) {
			float t = a->get(e2);
			a->set(e2, a->get(e1));
			a->set(e1, t);
		}
		if (a->get(e4) < a->get(e2)) {
			float t = a->get(e4);
			a->set(e4, a->get(e2));
			a->set(e2, t);
		}
		if (a3 < a->get(e2)) {
			if (a3 < a->get(e1)) {
				a->set(e3, a->get(e2));
				a->set(e2, a->get(e1));
				a->set(e1, a3);
			} else {
				a->set(e3, a->get(e2));
				a->set(e2, a3);
			}
		} else if (a3 > a->get(e4)) {
			if (a3 > a->get(e5)) {
				a->set(e3, a->get(e4));
				a->set(e4, a->get(e5));
				a->set(e5, a3);
			} else {
				a->set(e3, a->get(e4));
				a->set(e4, a3);
			}
		}
		int32_t lower = low;
		int32_t upper = end;
		if (a->get(e1) < a->get(e2) && a->get(e2) < a->get(e3) && a->get(e3) < a->get(e4) && a->get(e4) < a->get(e5)) {
			float pivot1 = a->get(e1);
			float pivot2 = a->get(e5);
			a->set(e1, a->get(lower));
			a->set(e5, a->get(upper));
			while (a->get(++lower) < pivot1) {
			}
			while (a->get(--upper) > pivot2) {
			}
			{
				int32_t unused = --lower;
				int32_t k = ++upper;
				for (; --k > lower;) {
					float ak = a->get(k);
					if (ak < pivot1) {
						while (lower < k) {
							if (a->get(++lower) >= pivot1) {
								if (a->get(lower) > pivot2) {
									a->set(k, a->get(--upper));
									a->set(upper, a->get(lower));
								} else {
									a->set(k, a->get(lower));
								}
								a->set(lower, ak);
								break;
							}
						}
					} else if (ak > pivot2) {
						a->set(k, a->get(--upper));
						a->set(upper, ak);
					}
				}
			}
			a->set(low, a->get(lower));
			a->set(lower, pivot1);
			a->set(end, a->get(upper));
			a->set(upper, pivot2);
			if (size > DualPivotQuicksort::MIN_PARALLEL_SORT_SIZE && sorter != nullptr) {
				sorter->forkSorter(bits | 1, lower + 1, upper);
				sorter->forkSorter(bits | 1, upper + 1, high);
			} else {
				sort(sorter, a, bits | 1, lower + 1, upper);
				sort(sorter, a, bits | 1, upper + 1, high);
			}
		} else {
			float pivot = a->get(e3);
			a->set(e3, a->get(lower));
			for (int32_t k = ++upper; --k > lower;) {
				float ak = a->get(k);
				if (ak != pivot) {
					a->set(k, pivot);
					if (ak < pivot) {
						while (a->get(++lower) < pivot) {
						}
						if (a->get(lower) > pivot) {
							a->set(--upper, a->get(lower));
						}
						a->set(lower, ak);
					} else {
						a->set(--upper, ak);
					}
				}
			}
			a->set(low, a->get(lower));
			a->set(lower, pivot);
			if (size > DualPivotQuicksort::MIN_PARALLEL_SORT_SIZE && sorter != nullptr) {
				sorter->forkSorter(bits | 1, upper, high);
			} else {
				sort(sorter, a, bits | 1, upper, high);
			}
		}
		high = lower;
	}
}

void DualPivotQuicksort::mixedInsertionSort($floats* a, int32_t low, int32_t end, int32_t high) {
	if (end == high) {
		for (int32_t i = 0; ++low < end;) {
			float ai = $nc(a)->get(i = low);
			while (ai < a->get(--i)) {
				a->set(i + 1, a->get(i));
			}
			a->set(i + 1, ai);
		}
	} else {
		float pin = $nc(a)->get(end);
		{
			int32_t i = 0;
			int32_t p = high;
			for (; ++low < end;) {
				float ai = a->get(i = low);
				if (ai < a->get(i - 1)) {
					int32_t var$0 = i;
					a->set(var$0, a->get(--i));
					while (ai < a->get(--i)) {
						a->set(i + 1, a->get(i));
					}
					a->set(i + 1, ai);
				} else if (p > i && ai > pin) {
					while (a->get(--p) > pin) {
					}
					if (p > i) {
						ai = a->get(p);
						a->set(p, a->get(i));
					}
					while (ai < a->get(--i)) {
						a->set(i + 1, a->get(i));
					}
					a->set(i + 1, ai);
				}
			}
		}
		for (int32_t i = 0; low < high; ++low) {
			float a1 = a->get(i = low);
			float a2 = a->get(++low);
			if (a1 > a2) {
				while (a1 < a->get(--i)) {
					a->set(i + 2, a->get(i));
				}
				a->set(++i + 1, a1);
				while (a2 < a->get(--i)) {
					a->set(i + 1, a->get(i));
				}
				a->set(i + 1, a2);
			} else if (a1 < a->get(i - 1)) {
				while (a2 < a->get(--i)) {
					a->set(i + 2, a->get(i));
				}
				a->set(++i + 1, a2);
				while (a1 < a->get(--i)) {
					a->set(i + 1, a->get(i));
				}
				a->set(i + 1, a1);
			}
		}
	}
}

void DualPivotQuicksort::insertionSort($floats* a, int32_t low, int32_t high) {
	{
		int32_t i = 0;
		int32_t k = low;
		for (; ++k < high;) {
			float ai = $nc(a)->get(i = k);
			if (ai < a->get(i - 1)) {
				while (true) {
					bool var$0 = --i >= low;
					if (!(var$0 && ai < a->get(i))) {
						break;
					}
					{
						a->set(i + 1, a->get(i));
					}
				}
				a->set(i + 1, ai);
			}
		}
	}
}

void DualPivotQuicksort::heapSort($floats* a, int32_t low, int32_t high) {
	$useLocalCurrentObjectStackCache();
	for (int32_t k = (int32_t)((uint32_t)(low + high) >> 1); k > low;) {
		$var($floats, var$0, a);
		int32_t var$1 = --k;
		pushDown(var$0, var$1, $nc(a)->get(k), low, high);
	}
	while (--high > low) {
		float max = $nc(a)->get(low);
		pushDown(a, low, a->get(high), low, high);
		a->set(high, max);
	}
}

void DualPivotQuicksort::pushDown($floats* a, int32_t p, float value, int32_t low, int32_t high) {
	int32_t var$0 = p;
	for (int32_t k = 0;; $nc(a)->set(var$0, a->get(p = k))) {
		k = (p << 1) - low + 2;
		if (k > high) {
			break;
		}
		if (k == high || a->get(k) < a->get(k - 1)) {
			--k;
		}
		if (a->get(k) <= value) {
			break;
		}
	}
	a->set(p, value);
}

bool DualPivotQuicksort::tryMergeRuns($DualPivotQuicksort$Sorter* sorter, $floats* a, int32_t low, int32_t size) {
	$useLocalCurrentObjectStackCache();
	$var($ints, run, nullptr);
	int32_t high = low + size;
	int32_t count = 1;
	int32_t last = low;
	for (int32_t k = low + 1; k < high;) {
		if ($nc(a)->get(k - 1) < a->get(k)) {
			while (true) {
				bool var$0 = ++k < high;
				if (!(var$0 && a->get(k - 1) <= a->get(k))) {
					break;
				}
				{
				}
			}
		} else if (a->get(k - 1) > a->get(k)) {
			while (true) {
				bool var$1 = ++k < high;
				if (!(var$1 && a->get(k - 1) >= a->get(k))) {
					break;
				}
				{
				}
			}
			{
				int32_t i = last - 1;
				int32_t j = k;
				for (;;) {
					bool var$2 = ++i < --j;
					if (!(var$2 && a->get(i) > a->get(j))) {
						break;
					}
					{
						float ai = a->get(i);
						a->set(i, a->get(j));
						a->set(j, ai);
					}
				}
			}
		} else {
			{
				float ak = a->get(k);
				for (;;) {
					bool var$3 = ++k < high;
					if (!(var$3 && ak == a->get(k))) {
						break;
					}
					{
					}
				}
			}
			if (k < high) {
				continue;
			}
		}
		if (run == nullptr) {
			if (k == high) {
				return true;
			}
			if (k - low < DualPivotQuicksort::MIN_FIRST_RUN_SIZE) {
				return false;
			}
			$assign(run, $new($ints, (int32_t)(((size >> 10) | 127) & (uint32_t)1023)));
			run->set(0, low);
		} else if ($nc(a)->get(last - 1) > a->get(last)) {
			if (count > $sr(k - low, DualPivotQuicksort::MIN_FIRST_RUNS_FACTOR)) {
				return false;
			}
			if (++count == DualPivotQuicksort::MAX_RUN_CAPACITY) {
				return false;
			}
			if (count == $nc(run)->length) {
				$assign(run, $Arrays::copyOf(run, count << 1));
			}
		}
		$nc(run)->set(count, (last = k));
	}
	if (count > 1) {
		$var($floats, b, nullptr);
		int32_t offset = low;
		if (sorter == nullptr || ($assign(b, $cast($floats, $nc(sorter)->b))) == nullptr) {
			$assign(b, $new($floats, size));
		} else {
			offset = sorter->offset;
		}
		mergeRuns(a, b, offset, 1, sorter != nullptr, run, 0, count);
	}
	return true;
}

$floats* DualPivotQuicksort::mergeRuns($floats* a, $floats* b, int32_t offset, int32_t aim, bool parallel, $ints* run, int32_t lo, int32_t hi) {
	$useLocalCurrentObjectStackCache();
	if (hi - lo == 1) {
		if (aim >= 0) {
			return a;
		}
		{
			int32_t i = $nc(run)->get(hi);
			int32_t j = i - offset;
			int32_t low = run->get(lo);
			for (; i > low; $nc(b)->set(--j, $nc(a)->get(--i))) {
			}
		}
		return b;
	}
	int32_t mi = lo;
	int32_t rmi = (int32_t)((uint32_t)($nc(run)->get(lo) + run->get(hi)) >> 1);
	while (run->get(++mi + 1) <= rmi) {
	}
	$var($floats, a1, nullptr);
	$var($floats, a2, nullptr);
	if (parallel && hi - lo > DualPivotQuicksort::MIN_RUN_COUNT) {
		$var($DualPivotQuicksort$RunMerger, merger, $$new($DualPivotQuicksort$RunMerger, a, b, offset, 0, run, mi, hi)->forkMe());
		$assign(a1, mergeRuns(a, b, offset, -aim, true, run, lo, mi));
		$assign(a2, $cast($floats, $nc(merger)->getDestination()));
	} else {
		$assign(a1, mergeRuns(a, b, offset, -aim, false, run, lo, mi));
		$assign(a2, mergeRuns(a, b, offset, 0, false, run, mi, hi));
	}
	$var($floats, dst, a1 == a ? b : a);
	int32_t k = a1 == a ? run->get(lo) - offset : run->get(lo);
	int32_t lo1 = a1 == b ? run->get(lo) - offset : run->get(lo);
	int32_t hi1 = a1 == b ? run->get(mi) - offset : run->get(mi);
	int32_t lo2 = a2 == b ? run->get(mi) - offset : run->get(mi);
	int32_t hi2 = a2 == b ? run->get(hi) - offset : run->get(hi);
	if (parallel) {
		$$new($DualPivotQuicksort$Merger, nullptr, dst, k, a1, lo1, hi1, a2, lo2, hi2)->invoke();
	} else {
		mergeParts(($DualPivotQuicksort$Merger*)nullptr, dst, k, a1, lo1, hi1, a2, lo2, hi2);
	}
	return dst;
}

void DualPivotQuicksort::mergeParts($DualPivotQuicksort$Merger* merger, $floats* dst, int32_t k, $floats* a1, int32_t lo1, int32_t hi1, $floats* a2, int32_t lo2, int32_t hi2) {
	if (merger != nullptr && a1 == a2) {
		while (true) {
			if (hi1 - lo1 < hi2 - lo2) {
				int32_t lo = lo1;
				lo1 = lo2;
				lo2 = lo;
				int32_t hi = hi1;
				hi1 = hi2;
				hi2 = hi;
			}
			if (hi1 - lo1 < DualPivotQuicksort::MIN_PARALLEL_MERGE_PARTS_SIZE) {
				break;
			}
			int32_t mi1 = (int32_t)((uint32_t)(lo1 + hi1) >> 1);
			float key = $nc(a1)->get(mi1);
			int32_t mi2 = hi2;
			for (int32_t loo = lo2; loo < mi2;) {
				int32_t t = (int32_t)((uint32_t)(loo + mi2) >> 1);
				if (key > $nc(a2)->get(t)) {
					loo = t + 1;
				} else {
					mi2 = t;
				}
			}
			int32_t d = mi2 - lo2 + mi1 - lo1;
			merger->forkMerger(dst, k + d, a1, mi1, hi1, a2, mi2, hi2);
			hi1 = mi1;
			hi2 = mi2;
		}
	}
	while (lo1 < hi1 && lo2 < hi2) {
		$nc(dst)->set(k++, $nc(a1)->get(lo1) < $nc(a2)->get(lo2) ? $nc(a1)->get(lo1++) : $nc(a2)->get(lo2++));
	}
	if (dst != a1 || k < lo1) {
		while (lo1 < hi1) {
			$nc(dst)->set(k++, $nc(a1)->get(lo1++));
		}
	}
	if (dst != a2 || k < lo2) {
		while (lo2 < hi2) {
			$nc(dst)->set(k++, $nc(a2)->get(lo2++));
		}
	}
}

void DualPivotQuicksort::sort($doubles* a, int32_t parallelism, int32_t low, int32_t high) {
	$useLocalCurrentObjectStackCache();
	int32_t numNegativeZero = 0;
	for (int32_t k = high; k > low;) {
		double ak = $nc(a)->get(--k);
		if (ak == 0.0 && $Double::doubleToRawLongBits(ak) < 0) {
			numNegativeZero += 1;
			a->set(k, 0.0);
		} else if (ak != ak) {
			a->set(k, a->get(--high));
			a->set(high, ak);
		}
	}
	int32_t size = high - low;
	if (parallelism > 1 && size > DualPivotQuicksort::MIN_PARALLEL_SORT_SIZE) {
		int32_t depth = getDepth(parallelism, size >> 12);
		$var($doubles, b, depth == 0 ? ($doubles*)nullptr : $new($doubles, size));
		$$new($DualPivotQuicksort$Sorter, nullptr, a, b, low, size, low, depth)->invoke();
	} else {
		sort(($DualPivotQuicksort$Sorter*)nullptr, a, 0, low, high);
	}
	if (++numNegativeZero == 1) {
		return;
	}
	while (low <= high) {
		int32_t middle = (int32_t)((uint32_t)(low + high) >> 1);
		if ($nc(a)->get(middle) < 0) {
			low = middle + 1;
		} else {
			high = middle - 1;
		}
	}
	while (--numNegativeZero > 0) {
		$nc(a)->set(++high, -0.0);
	}
}

void DualPivotQuicksort::sort($DualPivotQuicksort$Sorter* sorter, $doubles* a, int32_t bits, int32_t low, int32_t high) {
	while (true) {
		int32_t end = high - 1;
		int32_t size = high - low;
		if (size < DualPivotQuicksort::MAX_MIXED_INSERTION_SORT_SIZE + bits && ((int32_t)(bits & (uint32_t)1)) > 0) {
			mixedInsertionSort(a, low, high - 3 * ((size >> 5) << 3), high);
			return;
		}
		if (size < DualPivotQuicksort::MAX_INSERTION_SORT_SIZE) {
			insertionSort(a, low, high);
			return;
		}
		if ((bits == 0 || size > DualPivotQuicksort::MIN_TRY_MERGE_SIZE && ((int32_t)(bits & (uint32_t)1)) > 0) && tryMergeRuns(sorter, a, low, size)) {
			return;
		}
		if ((bits += DualPivotQuicksort::DELTA) > DualPivotQuicksort::MAX_RECURSION_DEPTH) {
			heapSort(a, low, high);
			return;
		}
		int32_t step = (size >> 3) * 3 + 3;
		int32_t e1 = low + step;
		int32_t e5 = end - step;
		int32_t e3 = (int32_t)((uint32_t)(e1 + e5) >> 1);
		int32_t e2 = (int32_t)((uint32_t)(e1 + e3) >> 1);
		int32_t e4 = (int32_t)((uint32_t)(e3 + e5) >> 1);
		double a3 = $nc(a)->get(e3);
		if (a->get(e5) < a->get(e2)) {
			double t = a->get(e5);
			a->set(e5, a->get(e2));
			a->set(e2, t);
		}
		if (a->get(e4) < a->get(e1)) {
			double t = a->get(e4);
			a->set(e4, a->get(e1));
			a->set(e1, t);
		}
		if (a->get(e5) < a->get(e4)) {
			double t = a->get(e5);
			a->set(e5, a->get(e4));
			a->set(e4, t);
		}
		if (a->get(e2) < a->get(e1)) {
			double t = a->get(e2);
			a->set(e2, a->get(e1));
			a->set(e1, t);
		}
		if (a->get(e4) < a->get(e2)) {
			double t = a->get(e4);
			a->set(e4, a->get(e2));
			a->set(e2, t);
		}
		if (a3 < a->get(e2)) {
			if (a3 < a->get(e1)) {
				a->set(e3, a->get(e2));
				a->set(e2, a->get(e1));
				a->set(e1, a3);
			} else {
				a->set(e3, a->get(e2));
				a->set(e2, a3);
			}
		} else if (a3 > a->get(e4)) {
			if (a3 > a->get(e5)) {
				a->set(e3, a->get(e4));
				a->set(e4, a->get(e5));
				a->set(e5, a3);
			} else {
				a->set(e3, a->get(e4));
				a->set(e4, a3);
			}
		}
		int32_t lower = low;
		int32_t upper = end;
		if (a->get(e1) < a->get(e2) && a->get(e2) < a->get(e3) && a->get(e3) < a->get(e4) && a->get(e4) < a->get(e5)) {
			double pivot1 = a->get(e1);
			double pivot2 = a->get(e5);
			a->set(e1, a->get(lower));
			a->set(e5, a->get(upper));
			while (a->get(++lower) < pivot1) {
			}
			while (a->get(--upper) > pivot2) {
			}
			{
				int32_t unused = --lower;
				int32_t k = ++upper;
				for (; --k > lower;) {
					double ak = a->get(k);
					if (ak < pivot1) {
						while (lower < k) {
							if (a->get(++lower) >= pivot1) {
								if (a->get(lower) > pivot2) {
									a->set(k, a->get(--upper));
									a->set(upper, a->get(lower));
								} else {
									a->set(k, a->get(lower));
								}
								a->set(lower, ak);
								break;
							}
						}
					} else if (ak > pivot2) {
						a->set(k, a->get(--upper));
						a->set(upper, ak);
					}
				}
			}
			a->set(low, a->get(lower));
			a->set(lower, pivot1);
			a->set(end, a->get(upper));
			a->set(upper, pivot2);
			if (size > DualPivotQuicksort::MIN_PARALLEL_SORT_SIZE && sorter != nullptr) {
				sorter->forkSorter(bits | 1, lower + 1, upper);
				sorter->forkSorter(bits | 1, upper + 1, high);
			} else {
				sort(sorter, a, bits | 1, lower + 1, upper);
				sort(sorter, a, bits | 1, upper + 1, high);
			}
		} else {
			double pivot = a->get(e3);
			a->set(e3, a->get(lower));
			for (int32_t k = ++upper; --k > lower;) {
				double ak = a->get(k);
				if (ak != pivot) {
					a->set(k, pivot);
					if (ak < pivot) {
						while (a->get(++lower) < pivot) {
						}
						if (a->get(lower) > pivot) {
							a->set(--upper, a->get(lower));
						}
						a->set(lower, ak);
					} else {
						a->set(--upper, ak);
					}
				}
			}
			a->set(low, a->get(lower));
			a->set(lower, pivot);
			if (size > DualPivotQuicksort::MIN_PARALLEL_SORT_SIZE && sorter != nullptr) {
				sorter->forkSorter(bits | 1, upper, high);
			} else {
				sort(sorter, a, bits | 1, upper, high);
			}
		}
		high = lower;
	}
}

void DualPivotQuicksort::mixedInsertionSort($doubles* a, int32_t low, int32_t end, int32_t high) {
	if (end == high) {
		for (int32_t i = 0; ++low < end;) {
			double ai = $nc(a)->get(i = low);
			while (ai < a->get(--i)) {
				a->set(i + 1, a->get(i));
			}
			a->set(i + 1, ai);
		}
	} else {
		double pin = $nc(a)->get(end);
		{
			int32_t i = 0;
			int32_t p = high;
			for (; ++low < end;) {
				double ai = a->get(i = low);
				if (ai < a->get(i - 1)) {
					int32_t var$0 = i;
					a->set(var$0, a->get(--i));
					while (ai < a->get(--i)) {
						a->set(i + 1, a->get(i));
					}
					a->set(i + 1, ai);
				} else if (p > i && ai > pin) {
					while (a->get(--p) > pin) {
					}
					if (p > i) {
						ai = a->get(p);
						a->set(p, a->get(i));
					}
					while (ai < a->get(--i)) {
						a->set(i + 1, a->get(i));
					}
					a->set(i + 1, ai);
				}
			}
		}
		for (int32_t i = 0; low < high; ++low) {
			double a1 = a->get(i = low);
			double a2 = a->get(++low);
			if (a1 > a2) {
				while (a1 < a->get(--i)) {
					a->set(i + 2, a->get(i));
				}
				a->set(++i + 1, a1);
				while (a2 < a->get(--i)) {
					a->set(i + 1, a->get(i));
				}
				a->set(i + 1, a2);
			} else if (a1 < a->get(i - 1)) {
				while (a2 < a->get(--i)) {
					a->set(i + 2, a->get(i));
				}
				a->set(++i + 1, a2);
				while (a1 < a->get(--i)) {
					a->set(i + 1, a->get(i));
				}
				a->set(i + 1, a1);
			}
		}
	}
}

void DualPivotQuicksort::insertionSort($doubles* a, int32_t low, int32_t high) {
	{
		int32_t i = 0;
		int32_t k = low;
		for (; ++k < high;) {
			double ai = $nc(a)->get(i = k);
			if (ai < a->get(i - 1)) {
				while (true) {
					bool var$0 = --i >= low;
					if (!(var$0 && ai < a->get(i))) {
						break;
					}
					{
						a->set(i + 1, a->get(i));
					}
				}
				a->set(i + 1, ai);
			}
		}
	}
}

void DualPivotQuicksort::heapSort($doubles* a, int32_t low, int32_t high) {
	$useLocalCurrentObjectStackCache();
	for (int32_t k = (int32_t)((uint32_t)(low + high) >> 1); k > low;) {
		$var($doubles, var$0, a);
		int32_t var$1 = --k;
		pushDown(var$0, var$1, $nc(a)->get(k), low, high);
	}
	while (--high > low) {
		double max = $nc(a)->get(low);
		pushDown(a, low, a->get(high), low, high);
		a->set(high, max);
	}
}

void DualPivotQuicksort::pushDown($doubles* a, int32_t p, double value, int32_t low, int32_t high) {
	int32_t var$0 = p;
	for (int32_t k = 0;; $nc(a)->set(var$0, a->get(p = k))) {
		k = (p << 1) - low + 2;
		if (k > high) {
			break;
		}
		if (k == high || a->get(k) < a->get(k - 1)) {
			--k;
		}
		if (a->get(k) <= value) {
			break;
		}
	}
	a->set(p, value);
}

bool DualPivotQuicksort::tryMergeRuns($DualPivotQuicksort$Sorter* sorter, $doubles* a, int32_t low, int32_t size) {
	$useLocalCurrentObjectStackCache();
	$var($ints, run, nullptr);
	int32_t high = low + size;
	int32_t count = 1;
	int32_t last = low;
	for (int32_t k = low + 1; k < high;) {
		if ($nc(a)->get(k - 1) < a->get(k)) {
			while (true) {
				bool var$0 = ++k < high;
				if (!(var$0 && a->get(k - 1) <= a->get(k))) {
					break;
				}
				{
				}
			}
		} else if (a->get(k - 1) > a->get(k)) {
			while (true) {
				bool var$1 = ++k < high;
				if (!(var$1 && a->get(k - 1) >= a->get(k))) {
					break;
				}
				{
				}
			}
			{
				int32_t i = last - 1;
				int32_t j = k;
				for (;;) {
					bool var$2 = ++i < --j;
					if (!(var$2 && a->get(i) > a->get(j))) {
						break;
					}
					{
						double ai = a->get(i);
						a->set(i, a->get(j));
						a->set(j, ai);
					}
				}
			}
		} else {
			{
				double ak = a->get(k);
				for (;;) {
					bool var$3 = ++k < high;
					if (!(var$3 && ak == a->get(k))) {
						break;
					}
					{
					}
				}
			}
			if (k < high) {
				continue;
			}
		}
		if (run == nullptr) {
			if (k == high) {
				return true;
			}
			if (k - low < DualPivotQuicksort::MIN_FIRST_RUN_SIZE) {
				return false;
			}
			$assign(run, $new($ints, (int32_t)(((size >> 10) | 127) & (uint32_t)1023)));
			run->set(0, low);
		} else if ($nc(a)->get(last - 1) > a->get(last)) {
			if (count > $sr(k - low, DualPivotQuicksort::MIN_FIRST_RUNS_FACTOR)) {
				return false;
			}
			if (++count == DualPivotQuicksort::MAX_RUN_CAPACITY) {
				return false;
			}
			if (count == $nc(run)->length) {
				$assign(run, $Arrays::copyOf(run, count << 1));
			}
		}
		$nc(run)->set(count, (last = k));
	}
	if (count > 1) {
		$var($doubles, b, nullptr);
		int32_t offset = low;
		if (sorter == nullptr || ($assign(b, $cast($doubles, $nc(sorter)->b))) == nullptr) {
			$assign(b, $new($doubles, size));
		} else {
			offset = sorter->offset;
		}
		mergeRuns(a, b, offset, 1, sorter != nullptr, run, 0, count);
	}
	return true;
}

$doubles* DualPivotQuicksort::mergeRuns($doubles* a, $doubles* b, int32_t offset, int32_t aim, bool parallel, $ints* run, int32_t lo, int32_t hi) {
	$useLocalCurrentObjectStackCache();
	if (hi - lo == 1) {
		if (aim >= 0) {
			return a;
		}
		{
			int32_t i = $nc(run)->get(hi);
			int32_t j = i - offset;
			int32_t low = run->get(lo);
			for (; i > low; $nc(b)->set(--j, $nc(a)->get(--i))) {
			}
		}
		return b;
	}
	int32_t mi = lo;
	int32_t rmi = (int32_t)((uint32_t)($nc(run)->get(lo) + run->get(hi)) >> 1);
	while (run->get(++mi + 1) <= rmi) {
	}
	$var($doubles, a1, nullptr);
	$var($doubles, a2, nullptr);
	if (parallel && hi - lo > DualPivotQuicksort::MIN_RUN_COUNT) {
		$var($DualPivotQuicksort$RunMerger, merger, $$new($DualPivotQuicksort$RunMerger, a, b, offset, 0, run, mi, hi)->forkMe());
		$assign(a1, mergeRuns(a, b, offset, -aim, true, run, lo, mi));
		$assign(a2, $cast($doubles, $nc(merger)->getDestination()));
	} else {
		$assign(a1, mergeRuns(a, b, offset, -aim, false, run, lo, mi));
		$assign(a2, mergeRuns(a, b, offset, 0, false, run, mi, hi));
	}
	$var($doubles, dst, a1 == a ? b : a);
	int32_t k = a1 == a ? run->get(lo) - offset : run->get(lo);
	int32_t lo1 = a1 == b ? run->get(lo) - offset : run->get(lo);
	int32_t hi1 = a1 == b ? run->get(mi) - offset : run->get(mi);
	int32_t lo2 = a2 == b ? run->get(mi) - offset : run->get(mi);
	int32_t hi2 = a2 == b ? run->get(hi) - offset : run->get(hi);
	if (parallel) {
		$$new($DualPivotQuicksort$Merger, nullptr, dst, k, a1, lo1, hi1, a2, lo2, hi2)->invoke();
	} else {
		mergeParts(($DualPivotQuicksort$Merger*)nullptr, dst, k, a1, lo1, hi1, a2, lo2, hi2);
	}
	return dst;
}

void DualPivotQuicksort::mergeParts($DualPivotQuicksort$Merger* merger, $doubles* dst, int32_t k, $doubles* a1, int32_t lo1, int32_t hi1, $doubles* a2, int32_t lo2, int32_t hi2) {
	if (merger != nullptr && a1 == a2) {
		while (true) {
			if (hi1 - lo1 < hi2 - lo2) {
				int32_t lo = lo1;
				lo1 = lo2;
				lo2 = lo;
				int32_t hi = hi1;
				hi1 = hi2;
				hi2 = hi;
			}
			if (hi1 - lo1 < DualPivotQuicksort::MIN_PARALLEL_MERGE_PARTS_SIZE) {
				break;
			}
			int32_t mi1 = (int32_t)((uint32_t)(lo1 + hi1) >> 1);
			double key = $nc(a1)->get(mi1);
			int32_t mi2 = hi2;
			for (int32_t loo = lo2; loo < mi2;) {
				int32_t t = (int32_t)((uint32_t)(loo + mi2) >> 1);
				if (key > $nc(a2)->get(t)) {
					loo = t + 1;
				} else {
					mi2 = t;
				}
			}
			int32_t d = mi2 - lo2 + mi1 - lo1;
			merger->forkMerger(dst, k + d, a1, mi1, hi1, a2, mi2, hi2);
			hi1 = mi1;
			hi2 = mi2;
		}
	}
	while (lo1 < hi1 && lo2 < hi2) {
		$nc(dst)->set(k++, $nc(a1)->get(lo1) < $nc(a2)->get(lo2) ? $nc(a1)->get(lo1++) : $nc(a2)->get(lo2++));
	}
	if (dst != a1 || k < lo1) {
		while (lo1 < hi1) {
			$nc(dst)->set(k++, $nc(a1)->get(lo1++));
		}
	}
	if (dst != a2 || k < lo2) {
		while (lo2 < hi2) {
			$nc(dst)->set(k++, $nc(a2)->get(lo2++));
		}
	}
}

DualPivotQuicksort::DualPivotQuicksort() {
}

$Class* DualPivotQuicksort::load$($String* name, bool initialize) {
	$loadClass(DualPivotQuicksort, name, initialize, &_DualPivotQuicksort_ClassInfo_, allocate$DualPivotQuicksort);
	return class$;
}

$Class* DualPivotQuicksort::class$ = nullptr;

	} // util
} // java