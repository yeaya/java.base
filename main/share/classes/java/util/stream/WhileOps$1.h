#ifndef _java_util_stream_WhileOps$1_h_
#define _java_util_stream_WhileOps$1_h_
//$ class java.util.stream.WhileOps$1
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
			class Predicate;
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

class WhileOps$1 : public ::java::util::stream::ReferencePipeline$StatefulOp {
	$class(WhileOps$1, $NO_CLASS_INIT, ::java::util::stream::ReferencePipeline$StatefulOp)
public:
	WhileOps$1();
	void init$(::java::util::stream::AbstractPipeline* upstream, ::java::util::stream::StreamShape* inputShape, int32_t opFlags, ::java::util::function::Predicate* val$predicate);
	virtual ::java::util::stream::Node* opEvaluateParallel(::java::util::stream::PipelineHelper* helper, ::java::util::Spliterator* spliterator, ::java::util::function::IntFunction* generator) override;
	virtual ::java::util::Spliterator* opEvaluateParallelLazy(::java::util::stream::PipelineHelper* helper, ::java::util::Spliterator* spliterator) override;
	virtual ::java::util::stream::Sink* opWrapSink(int32_t flags, ::java::util::stream::Sink* sink) override;
	::java::util::function::Predicate* val$predicate = nullptr;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_WhileOps$1_h_