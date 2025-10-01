#ifndef _java_util_stream_SpinedBuffer$OfPrimitive$BaseSpliterator_h_
#define _java_util_stream_SpinedBuffer$OfPrimitive$BaseSpliterator_h_
//$ class java.util.stream.SpinedBuffer$OfPrimitive$BaseSpliterator
//$ extends java.util.Spliterator$OfPrimitive

#include <java/util/Spliterator$OfPrimitive.h>

namespace java {
	namespace util {
		class Spliterator;
	}
}
namespace java {
	namespace util {
		namespace stream {
			class SpinedBuffer$OfPrimitive;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class SpinedBuffer$OfPrimitive$BaseSpliterator : public ::java::util::Spliterator$OfPrimitive {
	$class(SpinedBuffer$OfPrimitive$BaseSpliterator, 0, ::java::util::Spliterator$OfPrimitive)
public:
	SpinedBuffer$OfPrimitive$BaseSpliterator();
	using ::java::util::Spliterator$OfPrimitive::forEachRemaining;
	void init$(::java::util::stream::SpinedBuffer$OfPrimitive* this$0, int32_t firstSpineIndex, int32_t lastSpineIndex, int32_t firstSpineElementIndex, int32_t lastSpineElementFence);
	virtual void arrayForOne(Object$* array, int32_t index, Object$* consumer) {}
	virtual ::java::util::Spliterator$OfPrimitive* arraySpliterator(Object$* array, int32_t offset, int32_t len) {return nullptr;}
	virtual int32_t characteristics() override;
	virtual int64_t estimateSize() override;
	virtual void forEachRemaining(Object$* consumer) override;
	virtual ::java::util::Spliterator$OfPrimitive* newSpliterator(int32_t firstSpineIndex, int32_t lastSpineIndex, int32_t firstSpineElementIndex, int32_t lastSpineElementFence) {return nullptr;}
	using ::java::util::Spliterator$OfPrimitive::tryAdvance;
	virtual bool tryAdvance(Object$* consumer) override;
	virtual ::java::util::Spliterator* trySplit() override;
	::java::util::stream::SpinedBuffer$OfPrimitive* this$0 = nullptr;
	static bool $assertionsDisabled;
	int32_t splSpineIndex = 0;
	int32_t lastSpineIndex = 0;
	int32_t splElementIndex = 0;
	int32_t lastSpineElementFence = 0;
	$Object* splChunk = nullptr;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_SpinedBuffer$OfPrimitive$BaseSpliterator_h_