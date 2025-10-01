#ifndef _java_util_stream_SortedOps$OfLong_h_
#define _java_util_stream_SortedOps$OfLong_h_
//$ class java.util.stream.SortedOps$OfLong
//$ extends java.util.stream.LongPipeline$StatefulOp

#include <java/util/stream/LongPipeline$StatefulOp.h>

namespace java {
	namespace util {
		class Spliterator;
	}
}
namespace java {
	namespace util {
		namespace function {
			class IntFunction;
		}
	}
}
namespace java {
	namespace util {
		namespace stream {
			class AbstractPipeline;
			class Node;
			class PipelineHelper;
			class Sink;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class SortedOps$OfLong : public ::java::util::stream::LongPipeline$StatefulOp {
	$class(SortedOps$OfLong, $NO_CLASS_INIT, ::java::util::stream::LongPipeline$StatefulOp)
public:
	SortedOps$OfLong();
	void init$(::java::util::stream::AbstractPipeline* upstream);
	virtual ::java::util::stream::Node* opEvaluateParallel(::java::util::stream::PipelineHelper* helper, ::java::util::Spliterator* spliterator, ::java::util::function::IntFunction* generator) override;
	virtual ::java::util::stream::Sink* opWrapSink(int32_t flags, ::java::util::stream::Sink* sink) override;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_SortedOps$OfLong_h_