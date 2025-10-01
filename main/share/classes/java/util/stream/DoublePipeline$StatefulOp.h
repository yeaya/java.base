#ifndef _java_util_stream_DoublePipeline$StatefulOp_h_
#define _java_util_stream_DoublePipeline$StatefulOp_h_
//$ class java.util.stream.DoublePipeline$StatefulOp
//$ extends java.util.stream.DoublePipeline

#include <java/util/stream/DoublePipeline.h>

namespace java {
	namespace util {
		class Iterator;
		class Spliterator;
	}
}
namespace java {
	namespace util {
		namespace function {
			class Supplier;
		}
	}
}
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

class DoublePipeline$StatefulOp : public ::java::util::stream::DoublePipeline {
	$class(DoublePipeline$StatefulOp, 0, ::java::util::stream::DoublePipeline)
public:
	DoublePipeline$StatefulOp();
	void init$(::java::util::stream::AbstractPipeline* upstream, ::java::util::stream::StreamShape* inputShape, int32_t opFlags);
	virtual ::java::util::Iterator* iterator();
	virtual ::java::util::Spliterator* lazySpliterator(::java::util::function::Supplier* supplier);
	virtual ::java::util::stream::Node* opEvaluateParallel(::java::util::stream::PipelineHelper* helper, ::java::util::Spliterator* spliterator, ::java::util::function::IntFunction* generator) override;
	virtual bool opIsStateful() override;
	virtual ::java::util::stream::BaseStream* parallel() override;
	virtual ::java::util::stream::BaseStream* sequential() override;
	virtual ::java::util::Spliterator* spliterator();
	virtual ::java::util::stream::BaseStream* unordered() override;
	static bool $assertionsDisabled;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_DoublePipeline$StatefulOp_h_