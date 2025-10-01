#ifndef _java_util_stream_StreamSpliterators$WrappingSpliterator_h_
#define _java_util_stream_StreamSpliterators$WrappingSpliterator_h_
//$ class java.util.stream.StreamSpliterators$WrappingSpliterator
//$ extends java.util.stream.StreamSpliterators$AbstractWrappingSpliterator

#include <java/util/stream/StreamSpliterators$AbstractWrappingSpliterator.h>

namespace java {
	namespace util {
		class Spliterator;
	}
}
namespace java {
	namespace util {
		namespace function {
			class Consumer;
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

class StreamSpliterators$WrappingSpliterator : public ::java::util::stream::StreamSpliterators$AbstractWrappingSpliterator {
	$class(StreamSpliterators$WrappingSpliterator, $NO_CLASS_INIT, ::java::util::stream::StreamSpliterators$AbstractWrappingSpliterator)
public:
	StreamSpliterators$WrappingSpliterator();
	void init$(::java::util::stream::PipelineHelper* ph, ::java::util::function::Supplier* supplier, bool parallel);
	void init$(::java::util::stream::PipelineHelper* ph, ::java::util::Spliterator* spliterator, bool parallel);
	virtual void forEachRemaining(::java::util::function::Consumer* consumer) override;
	virtual void initPartialTraversalState() override;
	bool lambda$initPartialTraversalState$0();
	virtual bool tryAdvance(::java::util::function::Consumer* consumer) override;
	virtual ::java::util::stream::StreamSpliterators$WrappingSpliterator* wrap(::java::util::Spliterator* s) override;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_StreamSpliterators$WrappingSpliterator_h_