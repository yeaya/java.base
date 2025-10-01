#ifndef _java_util_stream_SpinedBuffer$1Splitr_h_
#define _java_util_stream_SpinedBuffer$1Splitr_h_
//$ class java.util.stream.SpinedBuffer$1Splitr
//$ extends java.util.Spliterator

#include <java/lang/Array.h>
#include <java/util/Spliterator.h>

namespace java {
	namespace util {
		namespace function {
			class Consumer;
		}
	}
}
namespace java {
	namespace util {
		namespace stream {
			class SpinedBuffer;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class SpinedBuffer$1Splitr : public ::java::util::Spliterator {
	$class(SpinedBuffer$1Splitr, 0, ::java::util::Spliterator)
public:
	SpinedBuffer$1Splitr();
	void init$(::java::util::stream::SpinedBuffer* this$0, int32_t firstSpineIndex, int32_t lastSpineIndex, int32_t firstSpineElementIndex, int32_t lastSpineElementFence);
	virtual int32_t characteristics() override;
	virtual int64_t estimateSize() override;
	virtual void forEachRemaining(::java::util::function::Consumer* consumer) override;
	virtual bool tryAdvance(::java::util::function::Consumer* consumer) override;
	virtual ::java::util::Spliterator* trySplit() override;
	::java::util::stream::SpinedBuffer* this$0 = nullptr;
	static bool $assertionsDisabled;
	int32_t splSpineIndex = 0;
	int32_t lastSpineIndex = 0;
	int32_t splElementIndex = 0;
	int32_t lastSpineElementFence = 0;
	$ObjectArray* splChunk = nullptr;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_SpinedBuffer$1Splitr_h_