#ifndef _java_util_stream_ReferencePipeline$StatefulOp_h_
#define _java_util_stream_ReferencePipeline$StatefulOp_h_
//$ class java.util.stream.ReferencePipeline$StatefulOp
//$ extends java.util.stream.ReferencePipeline

#include <java/util/stream/ReferencePipeline.h>

namespace java {
	namespace util {
		namespace stream {
			class AbstractPipeline;
			class BaseStream;
			class StreamShape;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class ReferencePipeline$StatefulOp : public ::java::util::stream::ReferencePipeline {
	$class(ReferencePipeline$StatefulOp, 0, ::java::util::stream::ReferencePipeline)
public:
	ReferencePipeline$StatefulOp();
	void init$(::java::util::stream::AbstractPipeline* upstream, ::java::util::stream::StreamShape* inputShape, int32_t opFlags);
	virtual ::java::util::stream::Node* opEvaluateParallel(::java::util::stream::PipelineHelper* helper, ::java::util::Spliterator* spliterator, ::java::util::function::IntFunction* generator) override;
	virtual bool opIsStateful() override;
	virtual ::java::util::stream::BaseStream* unordered() override;
	static bool $assertionsDisabled;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_ReferencePipeline$StatefulOp_h_