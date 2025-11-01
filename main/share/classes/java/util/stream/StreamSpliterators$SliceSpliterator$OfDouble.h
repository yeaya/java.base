#ifndef _java_util_stream_StreamSpliterators$SliceSpliterator$OfDouble_h_
#define _java_util_stream_StreamSpliterators$SliceSpliterator$OfDouble_h_
//$ class java.util.stream.StreamSpliterators$SliceSpliterator$OfDouble
//$ extends java.util.stream.StreamSpliterators$SliceSpliterator$OfPrimitive
//$ implements java.util.Spliterator$OfDouble

#include <java/util/Spliterator$OfDouble.h>
#include <java/util/stream/StreamSpliterators$SliceSpliterator$OfPrimitive.h>

namespace java {
	namespace util {
		class Spliterator;
	}
}
namespace java {
	namespace util {
		namespace function {
			class DoubleConsumer;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class StreamSpliterators$SliceSpliterator$OfDouble : public ::java::util::stream::StreamSpliterators$SliceSpliterator$OfPrimitive {
	$class(StreamSpliterators$SliceSpliterator$OfDouble, $NO_CLASS_INIT, ::java::util::stream::StreamSpliterators$SliceSpliterator$OfPrimitive, ::java::util::Spliterator$OfDouble)
public:
	StreamSpliterators$SliceSpliterator$OfDouble();
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
	void init$(::java::util::Spliterator$OfDouble* s, int64_t sliceOrigin, int64_t sliceFence);
	void init$(::java::util::Spliterator$OfDouble* s, int64_t sliceOrigin, int64_t sliceFence, int64_t origin, int64_t fence);
	virtual $Object* emptyConsumer() override;
	void forEachRemaining(::java::util::function::DoubleConsumer* action);
	static void lambda$emptyConsumer$0(double e);
	::java::util::Spliterator$OfDouble* makeSpliterator(::java::util::Spliterator$OfDouble* s, int64_t sliceOrigin, int64_t sliceFence, int64_t origin, int64_t fence);
	virtual ::java::util::Spliterator* makeSpliterator(::java::util::Spliterator* s, int64_t sliceOrigin, int64_t sliceFence, int64_t origin, int64_t fence) override;
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
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_StreamSpliterators$SliceSpliterator$OfDouble_h_