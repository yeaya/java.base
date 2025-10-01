#ifndef _java_util_stream_SliceOps$1_h_
#define _java_util_stream_SliceOps$1_h_
//$ class java.util.stream.SliceOps$1
//$ extends java.util.stream.ReferencePipeline$StatefulOp

#include <java/util/stream/ReferencePipeline$StatefulOp.h>

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
			class StreamShape;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class SliceOps$1 : public ::java::util::stream::ReferencePipeline$StatefulOp {
	$class(SliceOps$1, $NO_CLASS_INIT, ::java::util::stream::ReferencePipeline$StatefulOp)
public:
	SliceOps$1();
	void init$(::java::util::stream::AbstractPipeline* upstream, ::java::util::stream::StreamShape* inputShape, int32_t opFlags, int64_t val$skip, int64_t val$normalizedLimit, int64_t val$limit);
	virtual int64_t exactOutputSize(int64_t previousSize) override;
	virtual ::java::util::stream::Node* opEvaluateParallel(::java::util::stream::PipelineHelper* helper, ::java::util::Spliterator* spliterator, ::java::util::function::IntFunction* generator) override;
	virtual ::java::util::Spliterator* opEvaluateParallelLazy(::java::util::stream::PipelineHelper* helper, ::java::util::Spliterator* spliterator) override;
	virtual ::java::util::stream::Sink* opWrapSink(int32_t flags, ::java::util::stream::Sink* sink) override;
	virtual ::java::util::Spliterator* unorderedSkipLimitSpliterator(::java::util::Spliterator* s, int64_t skip, int64_t limit, int64_t sizeIfKnown);
	int64_t val$limit = 0;
	int64_t val$normalizedLimit = 0;
	int64_t val$skip = 0;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_SliceOps$1_h_