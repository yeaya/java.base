#ifndef _java_util_stream_SliceOps$2_h_
#define _java_util_stream_SliceOps$2_h_
//$ class java.util.stream.SliceOps$2
//$ extends java.util.stream.IntPipeline$StatefulOp

#include <java/lang/Array.h>
#include <java/util/stream/IntPipeline$StatefulOp.h>

namespace java {
	namespace lang {
		class Integer;
	}
}
namespace java {
	namespace util {
		class Spliterator;
		class Spliterator$OfInt;
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

class SliceOps$2 : public ::java::util::stream::IntPipeline$StatefulOp {
	$class(SliceOps$2, $NO_CLASS_INIT, ::java::util::stream::IntPipeline$StatefulOp)
public:
	SliceOps$2();
	void init$(::java::util::stream::AbstractPipeline* upstream, ::java::util::stream::StreamShape* inputShape, int32_t opFlags, int64_t val$skip, int64_t val$normalizedLimit, int64_t val$limit);
	virtual int64_t exactOutputSize(int64_t previousSize) override;
	static $Array<::java::lang::Integer>* lambda$opEvaluateParallelLazy$0(int32_t x$0);
	virtual ::java::util::stream::Node* opEvaluateParallel(::java::util::stream::PipelineHelper* helper, ::java::util::Spliterator* spliterator, ::java::util::function::IntFunction* generator) override;
	virtual ::java::util::Spliterator* opEvaluateParallelLazy(::java::util::stream::PipelineHelper* helper, ::java::util::Spliterator* spliterator) override;
	virtual ::java::util::stream::Sink* opWrapSink(int32_t flags, ::java::util::stream::Sink* sink) override;
	virtual ::java::util::Spliterator$OfInt* unorderedSkipLimitSpliterator(::java::util::Spliterator$OfInt* s, int64_t skip, int64_t limit, int64_t sizeIfKnown);
	int64_t val$limit = 0;
	int64_t val$normalizedLimit = 0;
	int64_t val$skip = 0;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_SliceOps$2_h_