#ifndef _java_util_Arrays_h_
#define _java_util_Arrays_h_
//$ class java.util.Arrays
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("INSERTIONSORT_THRESHOLD")
#undef INSERTIONSORT_THRESHOLD
#pragma push_macro("MIN_ARRAY_SORT_GRAN")
#undef MIN_ARRAY_SORT_GRAN

namespace java {
	namespace lang {
		class Comparable;
		class StringBuilder;
	}
}
namespace java {
	namespace util {
		class Comparator;
		class List;
		class Set;
		class Spliterator;
		class Spliterator$OfDouble;
		class Spliterator$OfInt;
		class Spliterator$OfLong;
	}
}
namespace java {
	namespace util {
		namespace function {
			class BinaryOperator;
			class DoubleBinaryOperator;
			class IntBinaryOperator;
			class IntFunction;
			class IntToDoubleFunction;
			class IntToLongFunction;
			class IntUnaryOperator;
			class LongBinaryOperator;
		}
	}
}
namespace java {
	namespace util {
		namespace stream {
			class DoubleStream;
			class IntStream;
			class LongStream;
			class Stream;
		}
	}
}

namespace java {
	namespace util {

class $export Arrays : public ::java::lang::Object {
	$class(Arrays, 0, ::java::lang::Object)
public:
	Arrays();
	using ::java::lang::Object::hashCode;
	using ::java::lang::Object::equals;
	void init$();
	static ::java::util::List* asList($ObjectArray* a);
	static int32_t binarySearch($longs* a, int64_t key);
	static int32_t binarySearch($longs* a, int32_t fromIndex, int32_t toIndex, int64_t key);
	static int32_t binarySearch($ints* a, int32_t key);
	static int32_t binarySearch($ints* a, int32_t fromIndex, int32_t toIndex, int32_t key);
	static int32_t binarySearch($shorts* a, int16_t key);
	static int32_t binarySearch($shorts* a, int32_t fromIndex, int32_t toIndex, int16_t key);
	static int32_t binarySearch($chars* a, char16_t key);
	static int32_t binarySearch($chars* a, int32_t fromIndex, int32_t toIndex, char16_t key);
	static int32_t binarySearch($bytes* a, int8_t key);
	static int32_t binarySearch($bytes* a, int32_t fromIndex, int32_t toIndex, int8_t key);
	static int32_t binarySearch($doubles* a, double key);
	static int32_t binarySearch($doubles* a, int32_t fromIndex, int32_t toIndex, double key);
	static int32_t binarySearch($floats* a, float key);
	static int32_t binarySearch($floats* a, int32_t fromIndex, int32_t toIndex, float key);
	static int32_t binarySearch($ObjectArray* a, Object$* key);
	static int32_t binarySearch($ObjectArray* a, int32_t fromIndex, int32_t toIndex, Object$* key);
	static int32_t binarySearch($ObjectArray* a, Object$* key, ::java::util::Comparator* c);
	static int32_t binarySearch($ObjectArray* a, int32_t fromIndex, int32_t toIndex, Object$* key, ::java::util::Comparator* c);
	static int32_t binarySearch0($longs* a, int32_t fromIndex, int32_t toIndex, int64_t key);
	static int32_t binarySearch0($ints* a, int32_t fromIndex, int32_t toIndex, int32_t key);
	static int32_t binarySearch0($shorts* a, int32_t fromIndex, int32_t toIndex, int16_t key);
	static int32_t binarySearch0($chars* a, int32_t fromIndex, int32_t toIndex, char16_t key);
	static int32_t binarySearch0($bytes* a, int32_t fromIndex, int32_t toIndex, int8_t key);
	static int32_t binarySearch0($doubles* a, int32_t fromIndex, int32_t toIndex, double key);
	static int32_t binarySearch0($floats* a, int32_t fromIndex, int32_t toIndex, float key);
	static int32_t binarySearch0($ObjectArray* a, int32_t fromIndex, int32_t toIndex, Object$* key);
	static int32_t binarySearch0($ObjectArray* a, int32_t fromIndex, int32_t toIndex, Object$* key, ::java::util::Comparator* c);
	static int32_t compare($booleans* a, $booleans* b);
	static int32_t compare($booleans* a, int32_t aFromIndex, int32_t aToIndex, $booleans* b, int32_t bFromIndex, int32_t bToIndex);
	static int32_t compare($bytes* a, $bytes* b);
	static int32_t compare($bytes* a, int32_t aFromIndex, int32_t aToIndex, $bytes* b, int32_t bFromIndex, int32_t bToIndex);
	static int32_t compare($shorts* a, $shorts* b);
	static int32_t compare($shorts* a, int32_t aFromIndex, int32_t aToIndex, $shorts* b, int32_t bFromIndex, int32_t bToIndex);
	static int32_t compare($chars* a, $chars* b);
	static int32_t compare($chars* a, int32_t aFromIndex, int32_t aToIndex, $chars* b, int32_t bFromIndex, int32_t bToIndex);
	static int32_t compare($ints* a, $ints* b);
	static int32_t compare($ints* a, int32_t aFromIndex, int32_t aToIndex, $ints* b, int32_t bFromIndex, int32_t bToIndex);
	static int32_t compare($longs* a, $longs* b);
	static int32_t compare($longs* a, int32_t aFromIndex, int32_t aToIndex, $longs* b, int32_t bFromIndex, int32_t bToIndex);
	static int32_t compare($floats* a, $floats* b);
	static int32_t compare($floats* a, int32_t aFromIndex, int32_t aToIndex, $floats* b, int32_t bFromIndex, int32_t bToIndex);
	static int32_t compare($doubles* a, $doubles* b);
	static int32_t compare($doubles* a, int32_t aFromIndex, int32_t aToIndex, $doubles* b, int32_t bFromIndex, int32_t bToIndex);
	static int32_t compare($Array<::java::lang::Comparable>* a, $Array<::java::lang::Comparable>* b);
	static int32_t compare($Array<::java::lang::Comparable>* a, int32_t aFromIndex, int32_t aToIndex, $Array<::java::lang::Comparable>* b, int32_t bFromIndex, int32_t bToIndex);
	static int32_t compare($ObjectArray* a, $ObjectArray* b, ::java::util::Comparator* cmp);
	static int32_t compare($ObjectArray* a, int32_t aFromIndex, int32_t aToIndex, $ObjectArray* b, int32_t bFromIndex, int32_t bToIndex, ::java::util::Comparator* cmp);
	static int32_t compareUnsigned($bytes* a, $bytes* b);
	static int32_t compareUnsigned($bytes* a, int32_t aFromIndex, int32_t aToIndex, $bytes* b, int32_t bFromIndex, int32_t bToIndex);
	static int32_t compareUnsigned($shorts* a, $shorts* b);
	static int32_t compareUnsigned($shorts* a, int32_t aFromIndex, int32_t aToIndex, $shorts* b, int32_t bFromIndex, int32_t bToIndex);
	static int32_t compareUnsigned($ints* a, $ints* b);
	static int32_t compareUnsigned($ints* a, int32_t aFromIndex, int32_t aToIndex, $ints* b, int32_t bFromIndex, int32_t bToIndex);
	static int32_t compareUnsigned($longs* a, $longs* b);
	static int32_t compareUnsigned($longs* a, int32_t aFromIndex, int32_t aToIndex, $longs* b, int32_t bFromIndex, int32_t bToIndex);
	static $ObjectArray* copyOf($ObjectArray* original, int32_t newLength);
	static $ObjectArray* copyOf($ObjectArray* original, int32_t newLength, $Class* newType);
	static $bytes* copyOf($bytes* original, int32_t newLength);
	static $shorts* copyOf($shorts* original, int32_t newLength);
	static $ints* copyOf($ints* original, int32_t newLength);
	static $longs* copyOf($longs* original, int32_t newLength);
	static $chars* copyOf($chars* original, int32_t newLength);
	static $floats* copyOf($floats* original, int32_t newLength);
	static $doubles* copyOf($doubles* original, int32_t newLength);
	static $booleans* copyOf($booleans* original, int32_t newLength);
	static $ObjectArray* copyOfRange($ObjectArray* original, int32_t from, int32_t to);
	static $ObjectArray* copyOfRange($ObjectArray* original, int32_t from, int32_t to, $Class* newType);
	static $bytes* copyOfRange($bytes* original, int32_t from, int32_t to);
	static $shorts* copyOfRange($shorts* original, int32_t from, int32_t to);
	static $ints* copyOfRange($ints* original, int32_t from, int32_t to);
	static $longs* copyOfRange($longs* original, int32_t from, int32_t to);
	static $chars* copyOfRange($chars* original, int32_t from, int32_t to);
	static $floats* copyOfRange($floats* original, int32_t from, int32_t to);
	static $doubles* copyOfRange($doubles* original, int32_t from, int32_t to);
	static $booleans* copyOfRange($booleans* original, int32_t from, int32_t to);
	static bool deepEquals($ObjectArray* a1, $ObjectArray* a2);
	static bool deepEquals0(Object$* e1, Object$* e2);
	static int32_t deepHashCode($ObjectArray* a);
	static $String* deepToString($ObjectArray* a);
	static void deepToString($ObjectArray* a, ::java::lang::StringBuilder* buf, ::java::util::Set* dejaVu);
	static bool equals($longs* a, $longs* a2);
	static bool equals($longs* a, int32_t aFromIndex, int32_t aToIndex, $longs* b, int32_t bFromIndex, int32_t bToIndex);
	static bool equals($ints* a, $ints* a2);
	static bool equals($ints* a, int32_t aFromIndex, int32_t aToIndex, $ints* b, int32_t bFromIndex, int32_t bToIndex);
	static bool equals($shorts* a, $shorts* a2);
	static bool equals($shorts* a, int32_t aFromIndex, int32_t aToIndex, $shorts* b, int32_t bFromIndex, int32_t bToIndex);
	static bool equals($chars* a, $chars* a2);
	static bool equals($chars* a, int32_t aFromIndex, int32_t aToIndex, $chars* b, int32_t bFromIndex, int32_t bToIndex);
	static bool equals($bytes* a, $bytes* a2);
	static bool equals($bytes* a, int32_t aFromIndex, int32_t aToIndex, $bytes* b, int32_t bFromIndex, int32_t bToIndex);
	static bool equals($booleans* a, $booleans* a2);
	static bool equals($booleans* a, int32_t aFromIndex, int32_t aToIndex, $booleans* b, int32_t bFromIndex, int32_t bToIndex);
	static bool equals($doubles* a, $doubles* a2);
	static bool equals($doubles* a, int32_t aFromIndex, int32_t aToIndex, $doubles* b, int32_t bFromIndex, int32_t bToIndex);
	static bool equals($floats* a, $floats* a2);
	static bool equals($floats* a, int32_t aFromIndex, int32_t aToIndex, $floats* b, int32_t bFromIndex, int32_t bToIndex);
	static bool equals($ObjectArray* a, $ObjectArray* a2);
	static bool equals($ObjectArray* a, int32_t aFromIndex, int32_t aToIndex, $ObjectArray* b, int32_t bFromIndex, int32_t bToIndex);
	static bool equals($ObjectArray* a, $ObjectArray* a2, ::java::util::Comparator* cmp);
	static bool equals($ObjectArray* a, int32_t aFromIndex, int32_t aToIndex, $ObjectArray* b, int32_t bFromIndex, int32_t bToIndex, ::java::util::Comparator* cmp);
	static void fill($longs* a, int64_t val);
	static void fill($longs* a, int32_t fromIndex, int32_t toIndex, int64_t val);
	static void fill($ints* a, int32_t val);
	static void fill($ints* a, int32_t fromIndex, int32_t toIndex, int32_t val);
	static void fill($shorts* a, int16_t val);
	static void fill($shorts* a, int32_t fromIndex, int32_t toIndex, int16_t val);
	static void fill($chars* a, char16_t val);
	static void fill($chars* a, int32_t fromIndex, int32_t toIndex, char16_t val);
	static void fill($bytes* a, int8_t val);
	static void fill($bytes* a, int32_t fromIndex, int32_t toIndex, int8_t val);
	static void fill($booleans* a, bool val);
	static void fill($booleans* a, int32_t fromIndex, int32_t toIndex, bool val);
	static void fill($doubles* a, double val);
	static void fill($doubles* a, int32_t fromIndex, int32_t toIndex, double val);
	static void fill($floats* a, float val);
	static void fill($floats* a, int32_t fromIndex, int32_t toIndex, float val);
	static void fill($ObjectArray* a, Object$* val);
	static void fill($ObjectArray* a, int32_t fromIndex, int32_t toIndex, Object$* val);
	static int32_t hashCode($longs* a);
	static int32_t hashCode($ints* a);
	static int32_t hashCode($shorts* a);
	static int32_t hashCode($chars* a);
	static int32_t hashCode($bytes* a);
	static int32_t hashCode($booleans* a);
	static int32_t hashCode($floats* a);
	static int32_t hashCode($doubles* a);
	static int32_t hashCode($ObjectArray* a);
	static void lambda$parallelSetAll$0($ObjectArray* array, ::java::util::function::IntFunction* generator, int32_t i);
	static void lambda$parallelSetAll$1($ints* array, ::java::util::function::IntUnaryOperator* generator, int32_t i);
	static void lambda$parallelSetAll$2($longs* array, ::java::util::function::IntToLongFunction* generator, int32_t i);
	static void lambda$parallelSetAll$3($doubles* array, ::java::util::function::IntToDoubleFunction* generator, int32_t i);
	static void legacyMergeSort($ObjectArray* a);
	static void legacyMergeSort($ObjectArray* a, int32_t fromIndex, int32_t toIndex);
	static void legacyMergeSort($ObjectArray* a, ::java::util::Comparator* c);
	static void legacyMergeSort($ObjectArray* a, int32_t fromIndex, int32_t toIndex, ::java::util::Comparator* c);
	static void mergeSort($ObjectArray* src, $ObjectArray* dest, int32_t low, int32_t high, int32_t off);
	static void mergeSort($ObjectArray* src, $ObjectArray* dest, int32_t low, int32_t high, int32_t off, ::java::util::Comparator* c);
	static int32_t mismatch($booleans* a, $booleans* b);
	static int32_t mismatch($booleans* a, int32_t aFromIndex, int32_t aToIndex, $booleans* b, int32_t bFromIndex, int32_t bToIndex);
	static int32_t mismatch($bytes* a, $bytes* b);
	static int32_t mismatch($bytes* a, int32_t aFromIndex, int32_t aToIndex, $bytes* b, int32_t bFromIndex, int32_t bToIndex);
	static int32_t mismatch($chars* a, $chars* b);
	static int32_t mismatch($chars* a, int32_t aFromIndex, int32_t aToIndex, $chars* b, int32_t bFromIndex, int32_t bToIndex);
	static int32_t mismatch($shorts* a, $shorts* b);
	static int32_t mismatch($shorts* a, int32_t aFromIndex, int32_t aToIndex, $shorts* b, int32_t bFromIndex, int32_t bToIndex);
	static int32_t mismatch($ints* a, $ints* b);
	static int32_t mismatch($ints* a, int32_t aFromIndex, int32_t aToIndex, $ints* b, int32_t bFromIndex, int32_t bToIndex);
	static int32_t mismatch($longs* a, $longs* b);
	static int32_t mismatch($longs* a, int32_t aFromIndex, int32_t aToIndex, $longs* b, int32_t bFromIndex, int32_t bToIndex);
	static int32_t mismatch($floats* a, $floats* b);
	static int32_t mismatch($floats* a, int32_t aFromIndex, int32_t aToIndex, $floats* b, int32_t bFromIndex, int32_t bToIndex);
	static int32_t mismatch($doubles* a, $doubles* b);
	static int32_t mismatch($doubles* a, int32_t aFromIndex, int32_t aToIndex, $doubles* b, int32_t bFromIndex, int32_t bToIndex);
	static int32_t mismatch($ObjectArray* a, $ObjectArray* b);
	static int32_t mismatch($ObjectArray* a, int32_t aFromIndex, int32_t aToIndex, $ObjectArray* b, int32_t bFromIndex, int32_t bToIndex);
	static int32_t mismatch($ObjectArray* a, $ObjectArray* b, ::java::util::Comparator* cmp);
	static int32_t mismatch($ObjectArray* a, int32_t aFromIndex, int32_t aToIndex, $ObjectArray* b, int32_t bFromIndex, int32_t bToIndex, ::java::util::Comparator* cmp);
	static void parallelPrefix($ObjectArray* array, ::java::util::function::BinaryOperator* op);
	static void parallelPrefix($ObjectArray* array, int32_t fromIndex, int32_t toIndex, ::java::util::function::BinaryOperator* op);
	static void parallelPrefix($longs* array, ::java::util::function::LongBinaryOperator* op);
	static void parallelPrefix($longs* array, int32_t fromIndex, int32_t toIndex, ::java::util::function::LongBinaryOperator* op);
	static void parallelPrefix($doubles* array, ::java::util::function::DoubleBinaryOperator* op);
	static void parallelPrefix($doubles* array, int32_t fromIndex, int32_t toIndex, ::java::util::function::DoubleBinaryOperator* op);
	static void parallelPrefix($ints* array, ::java::util::function::IntBinaryOperator* op);
	static void parallelPrefix($ints* array, int32_t fromIndex, int32_t toIndex, ::java::util::function::IntBinaryOperator* op);
	static void parallelSetAll($ObjectArray* array, ::java::util::function::IntFunction* generator);
	static void parallelSetAll($ints* array, ::java::util::function::IntUnaryOperator* generator);
	static void parallelSetAll($longs* array, ::java::util::function::IntToLongFunction* generator);
	static void parallelSetAll($doubles* array, ::java::util::function::IntToDoubleFunction* generator);
	static void parallelSort($bytes* a);
	static void parallelSort($bytes* a, int32_t fromIndex, int32_t toIndex);
	static void parallelSort($chars* a);
	static void parallelSort($chars* a, int32_t fromIndex, int32_t toIndex);
	static void parallelSort($shorts* a);
	static void parallelSort($shorts* a, int32_t fromIndex, int32_t toIndex);
	static void parallelSort($ints* a);
	static void parallelSort($ints* a, int32_t fromIndex, int32_t toIndex);
	static void parallelSort($longs* a);
	static void parallelSort($longs* a, int32_t fromIndex, int32_t toIndex);
	static void parallelSort($floats* a);
	static void parallelSort($floats* a, int32_t fromIndex, int32_t toIndex);
	static void parallelSort($doubles* a);
	static void parallelSort($doubles* a, int32_t fromIndex, int32_t toIndex);
	static void parallelSort($Array<::java::lang::Comparable>* a);
	static void parallelSort($Array<::java::lang::Comparable>* a, int32_t fromIndex, int32_t toIndex);
	static void parallelSort($ObjectArray* a, ::java::util::Comparator* cmp);
	static void parallelSort($ObjectArray* a, int32_t fromIndex, int32_t toIndex, ::java::util::Comparator* cmp);
	static int32_t primitiveArrayHashCode(Object$* a, $Class* cl);
	static void rangeCheck(int32_t arrayLength, int32_t fromIndex, int32_t toIndex);
	static void setAll($ObjectArray* array, ::java::util::function::IntFunction* generator);
	static void setAll($ints* array, ::java::util::function::IntUnaryOperator* generator);
	static void setAll($longs* array, ::java::util::function::IntToLongFunction* generator);
	static void setAll($doubles* array, ::java::util::function::IntToDoubleFunction* generator);
	static void sort($ints* a);
	static void sort($ints* a, int32_t fromIndex, int32_t toIndex);
	static void sort($longs* a);
	static void sort($longs* a, int32_t fromIndex, int32_t toIndex);
	static void sort($shorts* a);
	static void sort($shorts* a, int32_t fromIndex, int32_t toIndex);
	static void sort($chars* a);
	static void sort($chars* a, int32_t fromIndex, int32_t toIndex);
	static void sort($bytes* a);
	static void sort($bytes* a, int32_t fromIndex, int32_t toIndex);
	static void sort($floats* a);
	static void sort($floats* a, int32_t fromIndex, int32_t toIndex);
	static void sort($doubles* a);
	static void sort($doubles* a, int32_t fromIndex, int32_t toIndex);
	static void sort($ObjectArray* a);
	static void sort($ObjectArray* a, int32_t fromIndex, int32_t toIndex);
	static void sort($ObjectArray* a, ::java::util::Comparator* c);
	static void sort($ObjectArray* a, int32_t fromIndex, int32_t toIndex, ::java::util::Comparator* c);
	static ::java::util::Spliterator* spliterator($ObjectArray* array);
	static ::java::util::Spliterator* spliterator($ObjectArray* array, int32_t startInclusive, int32_t endExclusive);
	static ::java::util::Spliterator$OfInt* spliterator($ints* array);
	static ::java::util::Spliterator$OfInt* spliterator($ints* array, int32_t startInclusive, int32_t endExclusive);
	static ::java::util::Spliterator$OfLong* spliterator($longs* array);
	static ::java::util::Spliterator$OfLong* spliterator($longs* array, int32_t startInclusive, int32_t endExclusive);
	static ::java::util::Spliterator$OfDouble* spliterator($doubles* array);
	static ::java::util::Spliterator$OfDouble* spliterator($doubles* array, int32_t startInclusive, int32_t endExclusive);
	static ::java::util::stream::Stream* stream($ObjectArray* array);
	static ::java::util::stream::Stream* stream($ObjectArray* array, int32_t startInclusive, int32_t endExclusive);
	static ::java::util::stream::IntStream* stream($ints* array);
	static ::java::util::stream::IntStream* stream($ints* array, int32_t startInclusive, int32_t endExclusive);
	static ::java::util::stream::LongStream* stream($longs* array);
	static ::java::util::stream::LongStream* stream($longs* array, int32_t startInclusive, int32_t endExclusive);
	static ::java::util::stream::DoubleStream* stream($doubles* array);
	static ::java::util::stream::DoubleStream* stream($doubles* array, int32_t startInclusive, int32_t endExclusive);
	static void swap($ObjectArray* x, int32_t a, int32_t b);
	using ::java::lang::Object::toString;
	static $String* toString($longs* a);
	static $String* toString($ints* a);
	static $String* toString($shorts* a);
	static $String* toString($chars* a);
	static $String* toString($bytes* a);
	static $String* toString($booleans* a);
	static $String* toString($floats* a);
	static $String* toString($doubles* a);
	static $String* toString($ObjectArray* a);
	static bool $assertionsDisabled;
	static const int32_t MIN_ARRAY_SORT_GRAN = 8192; // 1 << 13
	static const int32_t INSERTIONSORT_THRESHOLD = 7;
};

	} // util
} // java

#pragma pop_macro("INSERTIONSORT_THRESHOLD")
#pragma pop_macro("MIN_ARRAY_SORT_GRAN")

#endif // _java_util_Arrays_h_