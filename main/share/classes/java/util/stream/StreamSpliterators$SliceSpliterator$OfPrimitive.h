#ifndef _java_util_stream_StreamSpliterators$SliceSpliterator$OfPrimitive_h_
#define _java_util_stream_StreamSpliterators$SliceSpliterator$OfPrimitive_h_
//$ class java.util.stream.StreamSpliterators$SliceSpliterator$OfPrimitive
//$ extends java.util.stream.StreamSpliterators$SliceSpliterator
//$ implements java.util.Spliterator$OfPrimitive

#include <java/util/Spliterator$OfPrimitive.h>
#include <java/util/stream/StreamSpliterators$SliceSpliterator.h>

namespace java {
	namespace util {
		class Spliterator;
	}
}

namespace java {
	namespace util {
		namespace stream {

class StreamSpliterators$SliceSpliterator$OfPrimitive : public ::java::util::stream::StreamSpliterators$SliceSpliterator, public ::java::util::Spliterator$OfPrimitive {
	$class(StreamSpliterators$SliceSpliterator$OfPrimitive, $NO_CLASS_INIT, ::java::util::stream::StreamSpliterators$SliceSpliterator, ::java::util::Spliterator$OfPrimitive)
public:
	StreamSpliterators$SliceSpliterator$OfPrimitive();
	using ::java::util::Spliterator$OfPrimitive::forEachRemaining;
	virtual int32_t characteristics() override;
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual int64_t estimateSize() override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::util::Spliterator$OfPrimitive* s, int64_t sliceOrigin, int64_t sliceFence);
	void init$(::java::util::Spliterator$OfPrimitive* s, int64_t sliceOrigin, int64_t sliceFence, int64_t origin, int64_t fence);
	virtual $Object* emptyConsumer() {return nullptr;}
	virtual void forEachRemaining(Object$* action) override;
	using ::java::util::Spliterator$OfPrimitive::tryAdvance;
	virtual $String* toString() override;
	virtual bool tryAdvance(Object$* action) override;
	virtual ::java::util::Spliterator* trySplit() override;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_StreamSpliterators$SliceSpliterator$OfPrimitive_h_