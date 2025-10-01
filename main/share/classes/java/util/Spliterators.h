#ifndef _java_util_Spliterators_h_
#define _java_util_Spliterators_h_
//$ class java.util.Spliterators
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("EMPTY_LONG_SPLITERATOR")
#undef EMPTY_LONG_SPLITERATOR
#pragma push_macro("EMPTY_INT_SPLITERATOR")
#undef EMPTY_INT_SPLITERATOR
#pragma push_macro("EMPTY_DOUBLE_SPLITERATOR")
#undef EMPTY_DOUBLE_SPLITERATOR
#pragma push_macro("EMPTY_SPLITERATOR")
#undef EMPTY_SPLITERATOR

namespace java {
	namespace util {
		class Collection;
		class Iterator;
		class PrimitiveIterator$OfDouble;
		class PrimitiveIterator$OfInt;
		class PrimitiveIterator$OfLong;
		class Spliterator;
		class Spliterator$OfDouble;
		class Spliterator$OfInt;
		class Spliterator$OfLong;
	}
}

namespace java {
	namespace util {

class $export Spliterators : public ::java::lang::Object {
	$class(Spliterators, 0, ::java::lang::Object)
public:
	Spliterators();
	void init$();
	static void checkFromToBounds(int32_t arrayLength, int32_t origin, int32_t fence);
	static ::java::util::Spliterator$OfDouble* emptyDoubleSpliterator();
	static ::java::util::Spliterator$OfInt* emptyIntSpliterator();
	static ::java::util::Spliterator$OfLong* emptyLongSpliterator();
	static ::java::util::Spliterator* emptySpliterator();
	static ::java::util::Iterator* iterator(::java::util::Spliterator* spliterator);
	static ::java::util::PrimitiveIterator$OfInt* iterator(::java::util::Spliterator$OfInt* spliterator);
	static ::java::util::PrimitiveIterator$OfLong* iterator(::java::util::Spliterator$OfLong* spliterator);
	static ::java::util::PrimitiveIterator$OfDouble* iterator(::java::util::Spliterator$OfDouble* spliterator);
	static ::java::util::Spliterator* spliterator($ObjectArray* array, int32_t additionalCharacteristics);
	static ::java::util::Spliterator* spliterator($ObjectArray* array, int32_t fromIndex, int32_t toIndex, int32_t additionalCharacteristics);
	static ::java::util::Spliterator$OfInt* spliterator($ints* array, int32_t additionalCharacteristics);
	static ::java::util::Spliterator$OfInt* spliterator($ints* array, int32_t fromIndex, int32_t toIndex, int32_t additionalCharacteristics);
	static ::java::util::Spliterator$OfLong* spliterator($longs* array, int32_t additionalCharacteristics);
	static ::java::util::Spliterator$OfLong* spliterator($longs* array, int32_t fromIndex, int32_t toIndex, int32_t additionalCharacteristics);
	static ::java::util::Spliterator$OfDouble* spliterator($doubles* array, int32_t additionalCharacteristics);
	static ::java::util::Spliterator$OfDouble* spliterator($doubles* array, int32_t fromIndex, int32_t toIndex, int32_t additionalCharacteristics);
	static ::java::util::Spliterator* spliterator(::java::util::Collection* c, int32_t characteristics);
	static ::java::util::Spliterator* spliterator(::java::util::Iterator* iterator, int64_t size, int32_t characteristics);
	static ::java::util::Spliterator$OfInt* spliterator(::java::util::PrimitiveIterator$OfInt* iterator, int64_t size, int32_t characteristics);
	static ::java::util::Spliterator$OfLong* spliterator(::java::util::PrimitiveIterator$OfLong* iterator, int64_t size, int32_t characteristics);
	static ::java::util::Spliterator$OfDouble* spliterator(::java::util::PrimitiveIterator$OfDouble* iterator, int64_t size, int32_t characteristics);
	static ::java::util::Spliterator* spliteratorUnknownSize(::java::util::Iterator* iterator, int32_t characteristics);
	static ::java::util::Spliterator$OfInt* spliteratorUnknownSize(::java::util::PrimitiveIterator$OfInt* iterator, int32_t characteristics);
	static ::java::util::Spliterator$OfLong* spliteratorUnknownSize(::java::util::PrimitiveIterator$OfLong* iterator, int32_t characteristics);
	static ::java::util::Spliterator$OfDouble* spliteratorUnknownSize(::java::util::PrimitiveIterator$OfDouble* iterator, int32_t characteristics);
	static ::java::util::Spliterator* EMPTY_SPLITERATOR;
	static ::java::util::Spliterator$OfInt* EMPTY_INT_SPLITERATOR;
	static ::java::util::Spliterator$OfLong* EMPTY_LONG_SPLITERATOR;
	static ::java::util::Spliterator$OfDouble* EMPTY_DOUBLE_SPLITERATOR;
};

	} // util
} // java

#pragma pop_macro("EMPTY_LONG_SPLITERATOR")
#pragma pop_macro("EMPTY_INT_SPLITERATOR")
#pragma pop_macro("EMPTY_DOUBLE_SPLITERATOR")
#pragma pop_macro("EMPTY_SPLITERATOR")

#endif // _java_util_Spliterators_h_