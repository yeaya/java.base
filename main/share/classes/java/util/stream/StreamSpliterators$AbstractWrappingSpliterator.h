#ifndef _java_util_stream_StreamSpliterators$AbstractWrappingSpliterator_h_
#define _java_util_stream_StreamSpliterators$AbstractWrappingSpliterator_h_
//$ class java.util.stream.StreamSpliterators$AbstractWrappingSpliterator
//$ extends java.util.Spliterator

#include <java/util/Spliterator.h>

namespace java {
	namespace util {
		class Comparator;
	}
}
namespace java {
	namespace util {
		namespace function {
			class BooleanSupplier;
			class Supplier;
		}
	}
}
namespace java {
	namespace util {
		namespace stream {
			class AbstractSpinedBuffer;
			class PipelineHelper;
			class Sink;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class StreamSpliterators$AbstractWrappingSpliterator : public ::java::util::Spliterator {
	$class(StreamSpliterators$AbstractWrappingSpliterator, $NO_CLASS_INIT, ::java::util::Spliterator)
public:
	StreamSpliterators$AbstractWrappingSpliterator();
	void init$(::java::util::stream::PipelineHelper* ph, ::java::util::function::Supplier* spliteratorSupplier, bool parallel);
	void init$(::java::util::stream::PipelineHelper* ph, ::java::util::Spliterator* spliterator, bool parallel);
	virtual int32_t characteristics() override;
	bool doAdvance();
	virtual int64_t estimateSize() override;
	bool fillBuffer();
	virtual ::java::util::Comparator* getComparator() override;
	virtual int64_t getExactSizeIfKnown() override;
	void init();
	virtual void initPartialTraversalState() {}
	virtual $String* toString() override;
	virtual ::java::util::Spliterator* trySplit() override;
	virtual ::java::util::stream::StreamSpliterators$AbstractWrappingSpliterator* wrap(::java::util::Spliterator* s) {return nullptr;}
	bool isParallel = false;
	::java::util::stream::PipelineHelper* ph = nullptr;
	::java::util::function::Supplier* spliteratorSupplier = nullptr;
	::java::util::Spliterator* spliterator = nullptr;
	::java::util::stream::Sink* bufferSink = nullptr;
	::java::util::function::BooleanSupplier* pusher = nullptr;
	int64_t nextToConsume = 0;
	::java::util::stream::AbstractSpinedBuffer* buffer = nullptr;
	bool finished = false;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_StreamSpliterators$AbstractWrappingSpliterator_h_