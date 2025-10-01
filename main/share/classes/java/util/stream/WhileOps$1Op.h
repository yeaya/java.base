#ifndef _java_util_stream_WhileOps$1Op_h_
#define _java_util_stream_WhileOps$1Op_h_
//$ class java.util.stream.WhileOps$1Op
//$ extends java.util.stream.ReferencePipeline$StatefulOp
//$ implements java.util.stream.WhileOps$DropWhileOp

#include <java/util/stream/ReferencePipeline$StatefulOp.h>
#include <java/util/stream/WhileOps$DropWhileOp.h>

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
			class WhileOps$DropWhileSink;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class WhileOps$1Op : public ::java::util::stream::ReferencePipeline$StatefulOp, public ::java::util::stream::WhileOps$DropWhileOp {
	$class(WhileOps$1Op, $NO_CLASS_INIT, ::java::util::stream::ReferencePipeline$StatefulOp, ::java::util::stream::WhileOps$DropWhileOp)
public:
	WhileOps$1Op();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::util::stream::AbstractPipeline* upstream, ::java::util::stream::StreamShape* inputShape, int32_t opFlags, ::java::util::function::Predicate* val$predicate);
	virtual ::java::util::stream::Node* opEvaluateParallel(::java::util::stream::PipelineHelper* helper, ::java::util::Spliterator* spliterator, ::java::util::function::IntFunction* generator) override;
	virtual ::java::util::Spliterator* opEvaluateParallelLazy(::java::util::stream::PipelineHelper* helper, ::java::util::Spliterator* spliterator) override;
	virtual ::java::util::stream::Sink* opWrapSink(int32_t flags, ::java::util::stream::Sink* sink) override;
	virtual ::java::util::stream::WhileOps$DropWhileSink* opWrapSink(::java::util::stream::Sink* sink, bool retainAndCountDroppedElements) override;
	virtual $String* toString() override;
	::java::util::function::Predicate* val$predicate = nullptr;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_WhileOps$1Op_h_