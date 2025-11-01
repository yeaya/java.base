#ifndef _java_util_stream_WhileOps$4Op_h_
#define _java_util_stream_WhileOps$4Op_h_
//$ class java.util.stream.WhileOps$4Op
//$ extends java.util.stream.DoublePipeline$StatefulOp
//$ implements java.util.stream.WhileOps$DropWhileOp

#include <java/lang/Array.h>
#include <java/util/stream/DoublePipeline$StatefulOp.h>
#include <java/util/stream/WhileOps$DropWhileOp.h>

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
			class WhileOps$DropWhileSink;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class WhileOps$4Op : public ::java::util::stream::DoublePipeline$StatefulOp, public ::java::util::stream::WhileOps$DropWhileOp {
	$class(WhileOps$4Op, $NO_CLASS_INIT, ::java::util::stream::DoublePipeline$StatefulOp, ::java::util::stream::WhileOps$DropWhileOp)
public:
	WhileOps$4Op();
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::util::stream::AbstractPipeline* upstream, ::java::util::stream::StreamShape* inputShape, int32_t opFlags, ::java::util::function::DoublePredicate* val$predicate);
	static $Array<::java::lang::Double>* lambda$opEvaluateParallelLazy$0(int32_t x$0);
	virtual ::java::util::stream::Node* opEvaluateParallel(::java::util::stream::PipelineHelper* helper, ::java::util::Spliterator* spliterator, ::java::util::function::IntFunction* generator) override;
	virtual ::java::util::Spliterator* opEvaluateParallelLazy(::java::util::stream::PipelineHelper* helper, ::java::util::Spliterator* spliterator) override;
	virtual ::java::util::stream::Sink* opWrapSink(int32_t flags, ::java::util::stream::Sink* sink) override;
	virtual ::java::util::stream::WhileOps$DropWhileSink* opWrapSink(::java::util::stream::Sink* sink, bool retainAndCountDroppedElements) override;
	virtual $String* toString() override;
	::java::util::function::DoublePredicate* val$predicate = nullptr;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_WhileOps$4Op_h_