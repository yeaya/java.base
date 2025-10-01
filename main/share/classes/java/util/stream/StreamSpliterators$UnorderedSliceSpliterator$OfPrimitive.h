#ifndef _java_util_stream_StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive_h_
#define _java_util_stream_StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive_h_
//$ class java.util.stream.StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive
//$ extends java.util.stream.StreamSpliterators$UnorderedSliceSpliterator
//$ implements java.util.Spliterator$OfPrimitive

#include <java/util/Spliterator$OfPrimitive.h>
#include <java/util/stream/StreamSpliterators$UnorderedSliceSpliterator.h>

namespace java {
	namespace util {
		class Spliterator;
	}
}
namespace java {
	namespace util {
		namespace stream {
			class StreamSpliterators$ArrayBuffer$OfPrimitive;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive : public ::java::util::stream::StreamSpliterators$UnorderedSliceSpliterator, public ::java::util::Spliterator$OfPrimitive {
	$class(StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive, $NO_CLASS_INIT, ::java::util::stream::StreamSpliterators$UnorderedSliceSpliterator, ::java::util::Spliterator$OfPrimitive)
public:
	StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::java::util::Spliterator$OfPrimitive::forEachRemaining;
	virtual int32_t characteristics() override;
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual int64_t estimateSize() override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::util::Spliterator$OfPrimitive* s, int64_t skip, int64_t limit);
	void init$(::java::util::Spliterator$OfPrimitive* s, ::java::util::stream::StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive* parent);
	virtual void acceptConsumed(Object$* action) {}
	virtual ::java::util::stream::StreamSpliterators$ArrayBuffer$OfPrimitive* bufferCreate(int32_t initialCapacity) {return nullptr;}
	virtual void forEachRemaining(Object$* action) override;
	using ::java::util::Spliterator$OfPrimitive::tryAdvance;
	virtual $String* toString() override;
	virtual bool tryAdvance(Object$* action) override;
	virtual ::java::util::Spliterator* trySplit() override;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive_h_