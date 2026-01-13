#ifndef _java_util_Spliterators$AbstractDoubleSpliterator_h_
#define _java_util_Spliterators$AbstractDoubleSpliterator_h_
//$ class java.util.Spliterators$AbstractDoubleSpliterator
//$ extends java.util.Spliterator$OfDouble

#include <java/util/Spliterator$OfDouble.h>

#pragma push_macro("BATCH_UNIT")
#undef BATCH_UNIT
#pragma push_macro("MAX_BATCH")
#undef MAX_BATCH

namespace java {
	namespace util {

class $export Spliterators$AbstractDoubleSpliterator : public ::java::util::Spliterator$OfDouble {
	$class(Spliterators$AbstractDoubleSpliterator, $NO_CLASS_INIT, ::java::util::Spliterator$OfDouble)
public:
	Spliterators$AbstractDoubleSpliterator();
	void init$(int64_t est, int32_t additionalCharacteristics);
	virtual int32_t characteristics() override;
	virtual int64_t estimateSize() override;
	virtual ::java::util::Spliterator$OfDouble* trySplit() override;
	static const int32_t MAX_BATCH = 33554432; // Spliterators$AbstractSpliterator.MAX_BATCH
	static const int32_t BATCH_UNIT = 1024; // Spliterators$AbstractSpliterator.BATCH_UNIT
	int32_t characteristics$ = 0;
	int64_t est = 0;
	int32_t batch = 0;
};

	} // util
} // java

#pragma pop_macro("BATCH_UNIT")
#pragma pop_macro("MAX_BATCH")

#endif // _java_util_Spliterators$AbstractDoubleSpliterator_h_