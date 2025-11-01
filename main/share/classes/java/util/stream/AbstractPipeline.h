#ifndef _java_util_stream_AbstractPipeline_h_
#define _java_util_stream_AbstractPipeline_h_
//$ class java.util.stream.AbstractPipeline
//$ extends java.util.stream.PipelineHelper
//$ implements java.util.stream.BaseStream

#include <java/lang/Array.h>
#include <java/util/stream/BaseStream.h>
#include <java/util/stream/PipelineHelper.h>

#pragma push_macro("MSG_CONSUMED")
#undef MSG_CONSUMED
#pragma push_macro("MSG_STREAM_LINKED")
#undef MSG_STREAM_LINKED

namespace java {
	namespace lang {
		class Runnable;
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
			class IntFunction;
			class Supplier;
		}
	}
}
namespace java {
	namespace util {
		namespace stream {
			class Node;
			class Sink;
			class StreamShape;
			class TerminalOp;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class AbstractPipeline : public ::java::util::stream::PipelineHelper, public ::java::util::stream::BaseStream {
	$class(AbstractPipeline, $PRELOAD, ::java::util::stream::PipelineHelper, ::java::util::stream::BaseStream)
public:
	AbstractPipeline();
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::util::function::Supplier* source, int32_t sourceFlags, bool parallel);
	void init$(::java::util::Spliterator* source, int32_t sourceFlags, bool parallel);
	void init$(::java::util::stream::AbstractPipeline* previousStage, int32_t opFlags);
	virtual void close() override;
	virtual void copyInto(::java::util::stream::Sink* wrappedSink, ::java::util::Spliterator* spliterator) override;
	virtual bool copyIntoWithCancel(::java::util::stream::Sink* wrappedSink, ::java::util::Spliterator* spliterator) override;
	$Object* evaluate(::java::util::stream::TerminalOp* terminalOp);
	virtual ::java::util::stream::Node* evaluate(::java::util::Spliterator* spliterator, bool flatten, ::java::util::function::IntFunction* generator) override;
	::java::util::stream::Node* evaluateToArrayNode(::java::util::function::IntFunction* generator);
	virtual ::java::util::stream::Node* evaluateToNode(::java::util::stream::PipelineHelper* helper, ::java::util::Spliterator* spliterator, bool flattenTree, ::java::util::function::IntFunction* generator) {return nullptr;}
	virtual int64_t exactOutputSize(int64_t previousSize);
	virtual int64_t exactOutputSizeIfKnown(::java::util::Spliterator* spliterator) override;
	virtual bool forEachWithCancel(::java::util::Spliterator* spliterator, ::java::util::stream::Sink* sink) {return false;}
	virtual ::java::util::stream::StreamShape* getOutputShape() {return nullptr;}
	virtual ::java::util::stream::StreamShape* getSourceShape() override;
	virtual int32_t getStreamAndOpFlags() override;
	int32_t getStreamFlags();
	bool isOrdered();
	virtual bool isParallel() override;
	static $ObjectArray* lambda$opEvaluateParallelLazy$2(int32_t i);
	::java::util::Spliterator* lambda$spliterator$0();
	static ::java::util::Spliterator* lambda$wrapSpliterator$1(::java::util::Spliterator* sourceSpliterator);
	virtual ::java::util::Spliterator* lazySpliterator(::java::util::function::Supplier* supplier) {return nullptr;}
	virtual ::java::util::stream::Node$Builder* makeNodeBuilder(int64_t exactSizeIfKnown, ::java::util::function::IntFunction* generator) override {return nullptr;}
	virtual ::java::util::stream::BaseStream* onClose(::java::lang::Runnable* closeHandler) override;
	virtual ::java::util::stream::Node* opEvaluateParallel(::java::util::stream::PipelineHelper* helper, ::java::util::Spliterator* spliterator, ::java::util::function::IntFunction* generator);
	virtual ::java::util::Spliterator* opEvaluateParallelLazy(::java::util::stream::PipelineHelper* helper, ::java::util::Spliterator* spliterator);
	virtual bool opIsStateful() {return false;}
	virtual ::java::util::stream::Sink* opWrapSink(int32_t flags, ::java::util::stream::Sink* sink) {return nullptr;}
	virtual ::java::util::stream::BaseStream* parallel() override;
	virtual ::java::util::stream::BaseStream* sequential() override;
	::java::util::Spliterator* sourceSpliterator(int32_t terminalFlags);
	::java::util::Spliterator* sourceStageSpliterator();
	virtual ::java::util::Spliterator* spliterator() override;
	virtual $String* toString() override;
	virtual ::java::util::Spliterator* wrap(::java::util::stream::PipelineHelper* ph, ::java::util::function::Supplier* supplier, bool isParallel) {return nullptr;}
	virtual ::java::util::stream::Sink* wrapAndCopyInto(::java::util::stream::Sink* sink, ::java::util::Spliterator* spliterator) override;
	virtual ::java::util::stream::Sink* wrapSink(::java::util::stream::Sink* sink) override;
	virtual ::java::util::Spliterator* wrapSpliterator(::java::util::Spliterator* sourceSpliterator) override;
	static bool $assertionsDisabled;
	static $String* MSG_STREAM_LINKED;
	static $String* MSG_CONSUMED;
	::java::util::stream::AbstractPipeline* sourceStage = nullptr;
	::java::util::stream::AbstractPipeline* previousStage = nullptr;
	int32_t sourceOrOpFlags = 0;
	::java::util::stream::AbstractPipeline* nextStage = nullptr;
	int32_t depth = 0;
	int32_t combinedFlags = 0;
	::java::util::Spliterator* sourceSpliterator$ = nullptr;
	::java::util::function::Supplier* sourceSupplier = nullptr;
	bool linkedOrConsumed = false;
	bool sourceAnyStateful = false;
	::java::lang::Runnable* sourceCloseAction = nullptr;
	bool parallel$ = false;
};

		} // stream
	} // util
} // java

#pragma pop_macro("MSG_CONSUMED")
#pragma pop_macro("MSG_STREAM_LINKED")

#endif // _java_util_stream_AbstractPipeline_h_