#ifndef _java_util_DualPivotQuicksort_h_
#define _java_util_DualPivotQuicksort_h_
//$ class java.util.DualPivotQuicksort
//$ extends java.lang.Object

#include <java/lang/Array.h>
#include <java/lang/Byte.h>
#include <java/lang/Short.h>

#pragma push_macro("MAX_RUN_CAPACITY")
#undef MAX_RUN_CAPACITY
#pragma push_macro("NUM_BYTE_VALUES")
#undef NUM_BYTE_VALUES
#pragma push_macro("MIN_PARALLEL_MERGE_PARTS_SIZE")
#undef MIN_PARALLEL_MERGE_PARTS_SIZE
#pragma push_macro("MIN_PARALLEL_SORT_SIZE")
#undef MIN_PARALLEL_SORT_SIZE
#pragma push_macro("DELTA")
#undef DELTA
#pragma push_macro("MAX_INSERTION_SORT_SIZE")
#undef MAX_INSERTION_SORT_SIZE
#pragma push_macro("MIN_RUN_COUNT")
#undef MIN_RUN_COUNT
#pragma push_macro("MIN_TRY_MERGE_SIZE")
#undef MIN_TRY_MERGE_SIZE
#pragma push_macro("MAX_VALUE")
#undef MAX_VALUE
#pragma push_macro("NUM_CHAR_VALUES")
#undef NUM_CHAR_VALUES
#pragma push_macro("MAX_MIXED_INSERTION_SORT_SIZE")
#undef MAX_MIXED_INSERTION_SORT_SIZE
#pragma push_macro("MAX_BYTE_INDEX")
#undef MAX_BYTE_INDEX
#pragma push_macro("MIN_BYTE_COUNTING_SORT_SIZE")
#undef MIN_BYTE_COUNTING_SORT_SIZE
#pragma push_macro("NUM_SHORT_VALUES")
#undef NUM_SHORT_VALUES
#pragma push_macro("MAX_RECURSION_DEPTH")
#undef MAX_RECURSION_DEPTH
#pragma push_macro("MAX_SHORT_INDEX")
#undef MAX_SHORT_INDEX
#pragma push_macro("MIN_FIRST_RUNS_FACTOR")
#undef MIN_FIRST_RUNS_FACTOR
#pragma push_macro("MIN_FIRST_RUN_SIZE")
#undef MIN_FIRST_RUN_SIZE
#pragma push_macro("MIN_SHORT_OR_CHAR_COUNTING_SORT_SIZE")
#undef MIN_SHORT_OR_CHAR_COUNTING_SORT_SIZE

namespace java {
	namespace util {
		class DualPivotQuicksort$Merger;
		class DualPivotQuicksort$Sorter;
	}
}

namespace java {
	namespace util {

class DualPivotQuicksort : public ::java::lang::Object {
	$class(DualPivotQuicksort, $NO_CLASS_INIT, ::java::lang::Object)
public:
	DualPivotQuicksort();
	void init$();
	static void countingSort($bytes* a, int32_t low, int32_t high);
	static void countingSort($chars* a, int32_t low, int32_t high);
	static void countingSort($shorts* a, int32_t low, int32_t high);
	static int32_t getDepth(int32_t parallelism, int32_t size);
	static void heapSort($ints* a, int32_t low, int32_t high);
	static void heapSort($longs* a, int32_t low, int32_t high);
	static void heapSort($floats* a, int32_t low, int32_t high);
	static void heapSort($doubles* a, int32_t low, int32_t high);
	static void insertionSort($ints* a, int32_t low, int32_t high);
	static void insertionSort($longs* a, int32_t low, int32_t high);
	static void insertionSort($bytes* a, int32_t low, int32_t high);
	static void insertionSort($chars* a, int32_t low, int32_t high);
	static void insertionSort($shorts* a, int32_t low, int32_t high);
	static void insertionSort($floats* a, int32_t low, int32_t high);
	static void insertionSort($doubles* a, int32_t low, int32_t high);
	static void mergeParts(::java::util::DualPivotQuicksort$Merger* merger, $ints* dst, int32_t k, $ints* a1, int32_t lo1, int32_t hi1, $ints* a2, int32_t lo2, int32_t hi2);
	static void mergeParts(::java::util::DualPivotQuicksort$Merger* merger, $longs* dst, int32_t k, $longs* a1, int32_t lo1, int32_t hi1, $longs* a2, int32_t lo2, int32_t hi2);
	static void mergeParts(::java::util::DualPivotQuicksort$Merger* merger, $floats* dst, int32_t k, $floats* a1, int32_t lo1, int32_t hi1, $floats* a2, int32_t lo2, int32_t hi2);
	static void mergeParts(::java::util::DualPivotQuicksort$Merger* merger, $doubles* dst, int32_t k, $doubles* a1, int32_t lo1, int32_t hi1, $doubles* a2, int32_t lo2, int32_t hi2);
	static $ints* mergeRuns($ints* a, $ints* b, int32_t offset, int32_t aim, bool parallel, $ints* run, int32_t lo, int32_t hi);
	static $longs* mergeRuns($longs* a, $longs* b, int32_t offset, int32_t aim, bool parallel, $ints* run, int32_t lo, int32_t hi);
	static $floats* mergeRuns($floats* a, $floats* b, int32_t offset, int32_t aim, bool parallel, $ints* run, int32_t lo, int32_t hi);
	static $doubles* mergeRuns($doubles* a, $doubles* b, int32_t offset, int32_t aim, bool parallel, $ints* run, int32_t lo, int32_t hi);
	static void mixedInsertionSort($ints* a, int32_t low, int32_t end, int32_t high);
	static void mixedInsertionSort($longs* a, int32_t low, int32_t end, int32_t high);
	static void mixedInsertionSort($floats* a, int32_t low, int32_t end, int32_t high);
	static void mixedInsertionSort($doubles* a, int32_t low, int32_t end, int32_t high);
	static void pushDown($ints* a, int32_t p, int32_t value, int32_t low, int32_t high);
	static void pushDown($longs* a, int32_t p, int64_t value, int32_t low, int32_t high);
	static void pushDown($floats* a, int32_t p, float value, int32_t low, int32_t high);
	static void pushDown($doubles* a, int32_t p, double value, int32_t low, int32_t high);
	static void sort($ints* a, int32_t parallelism, int32_t low, int32_t high);
	static void sort(::java::util::DualPivotQuicksort$Sorter* sorter, $ints* a, int32_t bits, int32_t low, int32_t high);
	static void sort($longs* a, int32_t parallelism, int32_t low, int32_t high);
	static void sort(::java::util::DualPivotQuicksort$Sorter* sorter, $longs* a, int32_t bits, int32_t low, int32_t high);
	static void sort($bytes* a, int32_t low, int32_t high);
	static void sort($chars* a, int32_t low, int32_t high);
	static void sort($chars* a, int32_t bits, int32_t low, int32_t high);
	static void sort($shorts* a, int32_t low, int32_t high);
	static void sort($shorts* a, int32_t bits, int32_t low, int32_t high);
	static void sort($floats* a, int32_t parallelism, int32_t low, int32_t high);
	static void sort(::java::util::DualPivotQuicksort$Sorter* sorter, $floats* a, int32_t bits, int32_t low, int32_t high);
	static void sort($doubles* a, int32_t parallelism, int32_t low, int32_t high);
	static void sort(::java::util::DualPivotQuicksort$Sorter* sorter, $doubles* a, int32_t bits, int32_t low, int32_t high);
	static bool tryMergeRuns(::java::util::DualPivotQuicksort$Sorter* sorter, $ints* a, int32_t low, int32_t size);
	static bool tryMergeRuns(::java::util::DualPivotQuicksort$Sorter* sorter, $longs* a, int32_t low, int32_t size);
	static bool tryMergeRuns(::java::util::DualPivotQuicksort$Sorter* sorter, $floats* a, int32_t low, int32_t size);
	static bool tryMergeRuns(::java::util::DualPivotQuicksort$Sorter* sorter, $doubles* a, int32_t low, int32_t size);
	static const int32_t MAX_MIXED_INSERTION_SORT_SIZE = 65;
	static const int32_t MAX_INSERTION_SORT_SIZE = 44;
	static const int32_t MIN_PARALLEL_SORT_SIZE = 4096; // 4 << 10
	static const int32_t MIN_TRY_MERGE_SIZE = 4096; // 4 << 10
	static const int32_t MIN_FIRST_RUN_SIZE = 16;
	static const int32_t MIN_FIRST_RUNS_FACTOR = 7;
	static const int32_t MAX_RUN_CAPACITY = 5120; // 5 << 10
	static const int32_t MIN_RUN_COUNT = 4;
	static const int32_t MIN_PARALLEL_MERGE_PARTS_SIZE = 4096; // 4 << 10
	static const int32_t MIN_BYTE_COUNTING_SORT_SIZE = 64;
	static const int32_t MIN_SHORT_OR_CHAR_COUNTING_SORT_SIZE = 1750;
	static const int32_t DELTA = 6; // 3 << 1
	static const int32_t MAX_RECURSION_DEPTH = 384; // 64 * DELTA
	static const int32_t NUM_BYTE_VALUES = 256; // 1 << 8
	static const int32_t MAX_BYTE_INDEX = 384; // ::java::lang::Byte::MAX_VALUE + NUM_BYTE_VALUES + 1
	static const int32_t NUM_CHAR_VALUES = 65536; // 1 << 16
	static const int32_t NUM_SHORT_VALUES = 65536; // 1 << 16
	static const int32_t MAX_SHORT_INDEX = 98304; // ::java::lang::Short::MAX_VALUE + NUM_SHORT_VALUES + 1
};

	} // util
} // java

#pragma pop_macro("MAX_RUN_CAPACITY")
#pragma pop_macro("NUM_BYTE_VALUES")
#pragma pop_macro("MIN_PARALLEL_MERGE_PARTS_SIZE")
#pragma pop_macro("MIN_PARALLEL_SORT_SIZE")
#pragma pop_macro("DELTA")
#pragma pop_macro("MAX_INSERTION_SORT_SIZE")
#pragma pop_macro("MIN_RUN_COUNT")
#pragma pop_macro("MIN_TRY_MERGE_SIZE")
#pragma pop_macro("MAX_VALUE")
#pragma pop_macro("NUM_CHAR_VALUES")
#pragma pop_macro("MAX_MIXED_INSERTION_SORT_SIZE")
#pragma pop_macro("MAX_BYTE_INDEX")
#pragma pop_macro("MIN_BYTE_COUNTING_SORT_SIZE")
#pragma pop_macro("NUM_SHORT_VALUES")
#pragma pop_macro("MAX_RECURSION_DEPTH")
#pragma pop_macro("MAX_SHORT_INDEX")
#pragma pop_macro("MIN_FIRST_RUNS_FACTOR")
#pragma pop_macro("MIN_FIRST_RUN_SIZE")
#pragma pop_macro("MIN_SHORT_OR_CHAR_COUNTING_SORT_SIZE")

#endif // _java_util_DualPivotQuicksort_h_