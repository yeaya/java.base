#ifndef _java_util_stream_StreamSpliterators$InfiniteSupplyingSpliterator$OfLong_h_
#define _java_util_stream_StreamSpliterators$InfiniteSupplyingSpliterator$OfLong_h_
//$ class java.util.stream.StreamSpliterators$InfiniteSupplyingSpliterator$OfLong
//$ extends java.util.stream.StreamSpliterators$InfiniteSupplyingSpliterator
//$ implements java.util.Spliterator$OfLong

#include <java/util/Spliterator$OfLong.h>
#include <java/util/stream/StreamSpliterators$InfiniteSupplyingSpliterator.h>

namespace java {
	namespace util {
		class Spliterator;
	}
}
namespace java {
	namespace util {
		namespace function {
			class LongConsumer;
			class LongSupplier;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class StreamSpliterators$InfiniteSupplyingSpliterator$OfLong : public ::java::util::stream::StreamSpliterators$InfiniteSupplyingSpliterator {
	$class(StreamSpliterators$InfiniteSupplyingSpliterator$OfLong, $NO_CLASS_INIT, ::java::util::stream::StreamSpliterators$InfiniteSupplyingSpliterator, ::java::util::Spliterator$OfLong)
public:
	StreamSpliterators$InfiniteSupplyingSpliterator$OfLong();
	virtual int32_t characteristics() override;
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual int64_t estimateSize() override;
	virtual void finalize() override;
	virtual void forEachRemaining(::java::util::function::Consumer* action) override;
	virtual void forEachRemaining(::java::util::function::LongConsumer* action);
	virtual void forEachRemaining(Object$* action);
	virtual ::java::util::Comparator* getComparator() override;
	virtual int64_t getExactSizeIfKnown() override;
	virtual bool hasCharacteristics(int32_t characteristics) override;
	virtual int32_t hashCode() override;
	void init$(int64_t size, ::java::util::function::LongSupplier* s);
	virtual $String* toString() override;
	virtual bool tryAdvance(::java::util::function::Consumer* action) override;
	bool tryAdvance(::java::util::function::LongConsumer* action);
	bool tryAdvance(Object$* action);
	virtual ::java::util::Spliterator* trySplit() override;
	class MemberClass0$ : public ::java::util::Spliterator$OfLong {
	public:
		MemberClass0$();
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
	::java::util::Spliterator$OfLong* as$(::java::util::Spliterator$OfLong**) {
		return &memberClass0$;
	}
	::java::util::function::LongSupplier* s = nullptr;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_StreamSpliterators$InfiniteSupplyingSpliterator$OfLong_h_