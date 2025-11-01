#ifndef _java_util_stream_StreamSpliterators$InfiniteSupplyingSpliterator$OfDouble_h_
#define _java_util_stream_StreamSpliterators$InfiniteSupplyingSpliterator$OfDouble_h_
//$ class java.util.stream.StreamSpliterators$InfiniteSupplyingSpliterator$OfDouble
//$ extends java.util.stream.StreamSpliterators$InfiniteSupplyingSpliterator
//$ implements java.util.Spliterator$OfDouble

#include <java/util/Spliterator$OfDouble.h>
#include <java/util/stream/StreamSpliterators$InfiniteSupplyingSpliterator.h>

namespace java {
	namespace util {
		class Spliterator;
	}
}
namespace java {
	namespace util {
		namespace function {
			class DoubleConsumer;
			class DoubleSupplier;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class StreamSpliterators$InfiniteSupplyingSpliterator$OfDouble : public ::java::util::stream::StreamSpliterators$InfiniteSupplyingSpliterator {
	$class(StreamSpliterators$InfiniteSupplyingSpliterator$OfDouble, $NO_CLASS_INIT, ::java::util::stream::StreamSpliterators$InfiniteSupplyingSpliterator, ::java::util::Spliterator$OfDouble)
public:
	StreamSpliterators$InfiniteSupplyingSpliterator$OfDouble();
	virtual int32_t characteristics() override;
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual int64_t estimateSize() override;
	virtual void finalize() override;
	virtual void forEachRemaining(::java::util::function::Consumer* action) override;
	virtual void forEachRemaining(::java::util::function::DoubleConsumer* action);
	virtual void forEachRemaining(Object$* action);
	virtual ::java::util::Comparator* getComparator() override;
	virtual int64_t getExactSizeIfKnown() override;
	virtual bool hasCharacteristics(int32_t characteristics) override;
	virtual int32_t hashCode() override;
	void init$(int64_t size, ::java::util::function::DoubleSupplier* s);
	virtual $String* toString() override;
	virtual bool tryAdvance(::java::util::function::Consumer* action) override;
	bool tryAdvance(::java::util::function::DoubleConsumer* action);
	bool tryAdvance(Object$* action);
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
	::java::util::function::DoubleSupplier* s = nullptr;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_StreamSpliterators$InfiniteSupplyingSpliterator$OfDouble_h_