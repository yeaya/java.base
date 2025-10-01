#ifndef _java_util_Spliterators$AbstractLongSpliterator_h_
#define _java_util_Spliterators$AbstractLongSpliterator_h_
//$ class java.util.Spliterators$AbstractLongSpliterator
//$ extends java.util.Spliterator$OfLong

#include <java/util/Spliterator$OfLong.h>
#include <java/util/Spliterators$AbstractSpliterator.h>

#pragma push_macro("BATCH_UNIT")
#undef BATCH_UNIT
#pragma push_macro("MAX_BATCH")
#undef MAX_BATCH

namespace java {
	namespace util {

class $export Spliterators$AbstractLongSpliterator : public ::java::util::Spliterator$OfLong {
	$class(Spliterators$AbstractLongSpliterator, $NO_CLASS_INIT, ::java::util::Spliterator$OfLong)
public:
	Spliterators$AbstractLongSpliterator();
	void init$(int64_t est, int32_t additionalCharacteristics);
	virtual int32_t characteristics() override;
	virtual int64_t estimateSize() override;
	virtual ::java::util::Spliterator$OfLong* trySplit() override;
	static const int32_t MAX_BATCH = ::java::util::Spliterators$AbstractSpliterator::MAX_BATCH;
	static const int32_t BATCH_UNIT = ::java::util::Spliterators$AbstractSpliterator::BATCH_UNIT;
	int32_t characteristics$ = 0;
	int64_t est = 0;
	int32_t batch = 0;
};

	} // util
} // java

#pragma pop_macro("BATCH_UNIT")
#pragma pop_macro("MAX_BATCH")

#endif // _java_util_Spliterators$AbstractLongSpliterator_h_