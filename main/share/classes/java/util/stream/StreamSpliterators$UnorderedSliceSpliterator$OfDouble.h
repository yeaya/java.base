#ifndef _java_util_stream_StreamSpliterators$UnorderedSliceSpliterator$OfDouble_h_
#define _java_util_stream_StreamSpliterators$UnorderedSliceSpliterator$OfDouble_h_
//$ class java.util.stream.StreamSpliterators$UnorderedSliceSpliterator$OfDouble
//$ extends java.util.stream.StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive
//$ implements java.util.function.DoubleConsumer,java.util.Spliterator$OfDouble

#include <java/util/Spliterator$OfDouble.h>
#include <java/util/function/DoubleConsumer.h>
#include <java/util/stream/StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive.h>

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

class StreamSpliterators$UnorderedSliceSpliterator$OfDouble : public ::java::util::stream::StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive, public ::java::util::function::DoubleConsumer {
	$class(StreamSpliterators$UnorderedSliceSpliterator$OfDouble, $NO_CLASS_INIT, ::java::util::stream::StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive, ::java::util::function::DoubleConsumer, ::java::util::Spliterator$OfDouble)
public:
	StreamSpliterators$UnorderedSliceSpliterator$OfDouble();
	virtual int32_t characteristics() override;
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual int64_t estimateSize() override;
	virtual void finalize() override;
	virtual void forEachRemaining(Object$* action) override;
	virtual void forEachRemaining(::java::util::function::Consumer* action) override;
	virtual ::java::util::Comparator* getComparator() override;
	virtual int64_t getExactSizeIfKnown() override;
	virtual bool hasCharacteristics(int32_t characteristics) override;
	virtual int32_t hashCode() override;
	void init$(::java::util::Spliterator$OfDouble* s, int64_t skip, int64_t limit);
	void init$(::java::util::Spliterator$OfDouble* s, ::java::util::stream::StreamSpliterators$UnorderedSliceSpliterator$OfDouble* parent);
	virtual void accept(double value) override;
	void acceptConsumed(::java::util::function::DoubleConsumer* action);
	virtual void acceptConsumed(Object$* action) override;
	virtual ::java::util::stream::StreamSpliterators$ArrayBuffer$OfPrimitive* bufferCreate(int32_t initialCapacity) override;
	void forEachRemaining(::java::util::function::DoubleConsumer* action);
	::java::util::Spliterator$OfDouble* makeSpliterator(::java::util::Spliterator$OfDouble* s);
	virtual ::java::util::Spliterator* makeSpliterator(::java::util::Spliterator* s) override;
	virtual $String* toString() override;
	virtual bool tryAdvance(Object$* action) override;
	virtual bool tryAdvance(::java::util::function::Consumer* action) override;
	bool tryAdvance(::java::util::function::DoubleConsumer* action);
	virtual ::java::util::Spliterator* trySplit() override;
	class MemberClass0$ : public ::java::util::Spliterator$OfDouble {
	public:
		MemberClass0$();
		virtual ::java::util::Spliterator$OfDouble* trySplit() override;
		virtual bool tryAdvance(::java::util::function::DoubleConsumer* action) override;
		virtual void forEachRemaining(::java::util::function::DoubleConsumer* action) override;
		virtual bool tryAdvance(::java::util::function::Consumer* action) override;
		virtual void forEachRemaining(::java::util::function::Consumer* action) override;
		virtual void forEachRemaining(Object$* action) override;
		virtual bool tryAdvance(Object$* action) override;
		virtual int64_t estimateSize() override;
		virtual int64_t getExactSizeIfKnown() override;
		virtual int32_t characteristics() override;
		virtual bool hasCharacteristics(int32_t characteristics) override;
		virtual ::java::util::Comparator* getComparator() override;
		virtual int32_t hashCode() override;
		virtual bool equals(Object$* obj) override;
		virtual $Object* clone() override;
		virtual $String* toString() override;
		virtual void finalize() override;
	};
	MemberClass0$ memberClass0$;
	::java::util::Spliterator$OfDouble* as$(::java::util::Spliterator$OfDouble**) {
		return &memberClass0$;
	}
	double tmpValue = 0.0;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_StreamSpliterators$UnorderedSliceSpliterator$OfDouble_h_