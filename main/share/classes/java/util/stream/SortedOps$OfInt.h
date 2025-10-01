#ifndef _java_util_stream_SortedOps$OfInt_h_
#define _java_util_stream_SortedOps$OfInt_h_
//$ class java.util.stream.SortedOps$OfInt
//$ extends java.util.stream.IntPipeline$StatefulOp

#include <java/util/stream/IntPipeline$StatefulOp.h>

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

class SortedOps$OfInt : public ::java::util::stream::IntPipeline$StatefulOp {
	$class(SortedOps$OfInt, $NO_CLASS_INIT, ::java::util::stream::IntPipeline$StatefulOp)
public:
	SortedOps$OfInt();
	void init$(::java::util::stream::AbstractPipeline* upstream);
	virtual ::java::util::stream::Node* opEvaluateParallel(::java::util::stream::PipelineHelper* helper, ::java::util::Spliterator* spliterator, ::java::util::function::IntFunction* generator) override;
	virtual ::java::util::stream::Sink* opWrapSink(int32_t flags, ::java::util::stream::Sink* sink) override;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_SortedOps$OfInt_h_