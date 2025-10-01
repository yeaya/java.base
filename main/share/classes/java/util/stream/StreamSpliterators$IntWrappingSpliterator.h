#ifndef _java_util_stream_StreamSpliterators$IntWrappingSpliterator_h_
#define _java_util_stream_StreamSpliterators$IntWrappingSpliterator_h_
//$ class java.util.stream.StreamSpliterators$IntWrappingSpliterator
//$ extends java.util.stream.StreamSpliterators$AbstractWrappingSpliterator
//$ implements java.util.Spliterator$OfInt

#include <java/util/Spliterator$OfInt.h>
#include <java/util/stream/StreamSpliterators$AbstractWrappingSpliterator.h>

namespace java {
	namespace util {
		class Spliterator;
	}
}
namespace java {
	namespace util {
		namespace function {
			class IntConsumer;
			class Supplier;
		}
	}
}
namespace java {
	namespace util {
		namespace stream {
			class PipelineHelper;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class StreamSpliterators$IntWrappingSpliterator : public ::java::util::stream::StreamSpliterators$AbstractWrappingSpliterator {
	$class(StreamSpliterators$IntWrappingSpliterator, $NO_CLASS_INIT, ::java::util::stream::StreamSpliterators$AbstractWrappingSpliterator, ::java::util::Spliterator$OfInt)
public:
	StreamSpliterators$IntWrappingSpliterator();
	virtual int32_t characteristics() override;
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual int64_t estimateSize() override;
	virtual void finalize() override;
	virtual void forEachRemaining(::java::util::function::Consumer* action) override;
	virtual ::java::util::Comparator* getComparator() override;
	virtual int64_t getExactSizeIfKnown() override;
	virtual bool hasCharacteristics(int32_t characteristics) override;
	virtual int32_t hashCode() override;
	void init$(::java::util::stream::PipelineHelper* ph, ::java::util::function::Supplier* supplier, bool parallel);
	void init$(::java::util::stream::PipelineHelper* ph, ::java::util::Spliterator* spliterator, bool parallel);
	void forEachRemaining(::java::util::function::IntConsumer* consumer);
	void forEachRemaining(Object$* consumer);
	virtual void initPartialTraversalState() override;
	bool lambda$initPartialTraversalState$0();
	virtual $String* toString() override;
	virtual bool tryAdvance(::java::util::function::Consumer* action) override;
	bool tryAdvance(::java::util::function::IntConsumer* consumer);
	bool tryAdvance(Object$* consumer);
	virtual ::java::util::Spliterator* trySplit() override;
	virtual ::java::util::stream::StreamSpliterators$AbstractWrappingSpliterator* wrap(::java::util::Spliterator* s) override;
	class MemberClass0$ : public ::java::util::Spliterator$OfInt {
	public:
		virtual ::java::lang::Object0* toObject0$() const override;
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
	::java::util::Spliterator$OfInt* as$(::java::util::Spliterator$OfInt*) {
		return &memberClass0$;
	}
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_StreamSpliterators$IntWrappingSpliterator_h_