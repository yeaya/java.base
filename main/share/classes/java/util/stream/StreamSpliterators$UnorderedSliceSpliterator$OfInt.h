#ifndef _java_util_stream_StreamSpliterators$UnorderedSliceSpliterator$OfInt_h_
#define _java_util_stream_StreamSpliterators$UnorderedSliceSpliterator$OfInt_h_
//$ class java.util.stream.StreamSpliterators$UnorderedSliceSpliterator$OfInt
//$ extends java.util.stream.StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive
//$ implements java.util.function.IntConsumer,java.util.Spliterator$OfInt

#include <java/util/Spliterator$OfInt.h>
#include <java/util/function/IntConsumer.h>
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

class StreamSpliterators$UnorderedSliceSpliterator$OfInt : public ::java::util::stream::StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive, public ::java::util::function::IntConsumer {
	$class(StreamSpliterators$UnorderedSliceSpliterator$OfInt, $NO_CLASS_INIT, ::java::util::stream::StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive, ::java::util::function::IntConsumer, ::java::util::Spliterator$OfInt)
public:
	StreamSpliterators$UnorderedSliceSpliterator$OfInt();
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
	void init$(::java::util::Spliterator$OfInt* s, int64_t skip, int64_t limit);
	void init$(::java::util::Spliterator$OfInt* s, ::java::util::stream::StreamSpliterators$UnorderedSliceSpliterator$OfInt* parent);
	virtual void accept(int32_t value) override;
	void acceptConsumed(::java::util::function::IntConsumer* action);
	virtual void acceptConsumed(Object$* action) override;
	virtual ::java::util::stream::StreamSpliterators$ArrayBuffer$OfPrimitive* bufferCreate(int32_t initialCapacity) override;
	void forEachRemaining(::java::util::function::IntConsumer* action);
	::java::util::Spliterator$OfInt* makeSpliterator(::java::util::Spliterator$OfInt* s);
	virtual ::java::util::Spliterator* makeSpliterator(::java::util::Spliterator* s) override;
	virtual $String* toString() override;
	virtual bool tryAdvance(Object$* action) override;
	virtual bool tryAdvance(::java::util::function::Consumer* action) override;
	bool tryAdvance(::java::util::function::IntConsumer* action);
	virtual ::java::util::Spliterator* trySplit() override;
	class MemberClass0$ : public ::java::util::Spliterator$OfInt {
	public:
		MemberClass0$();
		virtual ::java::util::Spliterator$OfInt* trySplit() override;
		virtual bool tryAdvance(::java::util::function::IntConsumer* action) override;
		virtual void forEachRemaining(::java::util::function::IntConsumer* action) override;
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
	::java::util::Spliterator$OfInt* as$(::java::util::Spliterator$OfInt**) {
		return &memberClass0$;
	}
	int32_t tmpValue = 0;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_StreamSpliterators$UnorderedSliceSpliterator$OfInt_h_