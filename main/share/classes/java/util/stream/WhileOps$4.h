#ifndef _java_util_stream_WhileOps$4_h_
#define _java_util_stream_WhileOps$4_h_
//$ class java.util.stream.WhileOps$4
//$ extends java.util.stream.DoublePipeline$StatefulOp

#include <java/lang/Array.h>
#include <java/util/stream/DoublePipeline$StatefulOp.h>

namespace java {
	namespace lang {
		class Double;
	}
}
namespace java {
	namespace util {
		class Spliterator;
	}
}
namespace java {
	namespace util {
		namespace function {
			class DoublePredicate;
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

class WhileOps$4 : public ::java::util::stream::DoublePipeline$StatefulOp {
	$class(WhileOps$4, $NO_CLASS_INIT, ::java::util::stream::DoublePipeline$StatefulOp)
public:
	WhileOps$4();
	void init$(::java::util::stream::AbstractPipeline* upstream, ::java::util::stream::StreamShape* inputShape, int32_t opFlags, ::java::util::function::DoublePredicate* val$predicate);
	static $Array<::java::lang::Double>* lambda$opEvaluateParallelLazy$0(int32_t x$0);
	virtual ::java::util::stream::Node* opEvaluateParallel(::java::util::stream::PipelineHelper* helper, ::java::util::Spliterator* spliterator, ::java::util::function::IntFunction* generator) override;
	virtual ::java::util::Spliterator* opEvaluateParallelLazy(::java::util::stream::PipelineHelper* helper, ::java::util::Spliterator* spliterator) override;
	virtual ::java::util::stream::Sink* opWrapSink(int32_t flags, ::java::util::stream::Sink* sink) override;
	::java::util::function::DoublePredicate* val$predicate = nullptr;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_WhileOps$4_h_