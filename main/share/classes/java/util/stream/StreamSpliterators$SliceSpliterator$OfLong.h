#ifndef _java_util_stream_StreamSpliterators$SliceSpliterator$OfLong_h_
#define _java_util_stream_StreamSpliterators$SliceSpliterator$OfLong_h_
//$ class java.util.stream.StreamSpliterators$SliceSpliterator$OfLong
//$ extends java.util.stream.StreamSpliterators$SliceSpliterator$OfPrimitive
//$ implements java.util.Spliterator$OfLong

#include <java/util/Spliterator$OfLong.h>
#include <java/util/stream/StreamSpliterators$SliceSpliterator$OfPrimitive.h>

namespace java {
	namespace util {
		class Spliterator;
	}
}
namespace java {
	namespace util {
		namespace function {
			class LongConsumer;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class StreamSpliterators$SliceSpliterator$OfLong : public ::java::util::stream::StreamSpliterators$SliceSpliterator$OfPrimitive {
	$class(StreamSpliterators$SliceSpliterator$OfLong, $NO_CLASS_INIT, ::java::util::stream::StreamSpliterators$SliceSpliterator$OfPrimitive, ::java::util::Spliterator$OfLong)
public:
	StreamSpliterators$SliceSpliterator$OfLong();
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
	void init$(::java::util::Spliterator$OfLong* s, int64_t sliceOrigin, int64_t sliceFence);
	void init$(::java::util::Spliterator$OfLong* s, int64_t sliceOrigin, int64_t sliceFence, int64_t origin, int64_t fence);
	virtual $Object* emptyConsumer() override;
	void forEachRemaining(::java::util::function::LongConsumer* action);
	static void lambda$emptyConsumer$0(int64_t e);
	::java::util::Spliterator$OfLong* makeSpliterator(::java::util::Spliterator$OfLong* s, int64_t sliceOrigin, int64_t sliceFence, int64_t origin, int64_t fence);
	virtual ::java::util::Spliterator* makeSpliterator(::java::util::Spliterator* s, int64_t sliceOrigin, int64_t sliceFence, int64_t origin, int64_t fence) override;
	virtual $String* toString() override;
	virtual bool tryAdvance(Object$* action) override;
	virtual bool tryAdvance(::java::util::function::Consumer* action) override;
	bool tryAdvance(::java::util::function::LongConsumer* action);
	virtual ::java::util::Spliterator* trySplit() override;
	class MemberClass0$ : public ::java::util::Spliterator$OfLong {
	public:
		virtual ::java::lang::Object0* toObject0$() const override;
		virtual ::java::util::Spliterator$OfLong* trySplit() override;
		virtual bool tryAdvance(::java::util::function::LongConsumer* action) override;
		virtual void forEachRemaining(::java::util::function::LongConsumer* action) override;
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
	::java::util::Spliterator$OfLong* as$(::java::util::Spliterator$OfLong*) {
		return &memberClass0$;
	}
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_StreamSpliterators$SliceSpliterator$OfLong_h_