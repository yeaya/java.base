#ifndef _java_util_Spliterators$AbstractSpliterator_h_
#define _java_util_Spliterators$AbstractSpliterator_h_
//$ class java.util.Spliterators$AbstractSpliterator
//$ extends java.util.Spliterator

#include <java/util/Spliterator.h>

#pragma push_macro("BATCH_UNIT")
#undef BATCH_UNIT
#pragma push_macro("MAX_BATCH")
#undef MAX_BATCH

namespace java {
	namespace util {

class $import Spliterators$AbstractSpliterator : public ::java::util::Spliterator {
	$class(Spliterators$AbstractSpliterator, $NO_CLASS_INIT, ::java::util::Spliterator)
public:
	Spliterators$AbstractSpliterator();
	void init$(int64_t est, int32_t additionalCharacteristics);
	virtual int32_t characteristics() override;
	virtual int64_t estimateSize() override;
	virtual ::java::util::Spliterator* trySplit() override;
	static const int32_t BATCH_UNIT = 1024; // 1 << 10
	static const int32_t MAX_BATCH = 33554432; // 1 << 25
	int32_t characteristics$ = 0;
	int64_t est = 0;
	int32_t batch = 0;
};

	} // util
} // java

#pragma pop_macro("BATCH_UNIT")
#pragma pop_macro("MAX_BATCH")

#endif // _java_util_Spliterators$AbstractSpliterator_h_