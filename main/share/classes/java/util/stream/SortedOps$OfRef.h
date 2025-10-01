#ifndef _java_util_stream_SortedOps$OfRef_h_
#define _java_util_stream_SortedOps$OfRef_h_
//$ class java.util.stream.SortedOps$OfRef
//$ extends java.util.stream.ReferencePipeline$StatefulOp

#include <java/util/stream/ReferencePipeline$StatefulOp.h>

namespace java {
	namespace util {
		class Comparator;
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

class SortedOps$OfRef : public ::java::util::stream::ReferencePipeline$StatefulOp {
	$class(SortedOps$OfRef, $NO_CLASS_INIT, ::java::util::stream::ReferencePipeline$StatefulOp)
public:
	SortedOps$OfRef();
	void init$(::java::util::stream::AbstractPipeline* upstream);
	void init$(::java::util::stream::AbstractPipeline* upstream, ::java::util::Comparator* comparator);
	virtual ::java::util::stream::Node* opEvaluateParallel(::java::util::stream::PipelineHelper* helper, ::java::util::Spliterator* spliterator, ::java::util::function::IntFunction* generator) override;
	virtual ::java::util::stream::Sink* opWrapSink(int32_t flags, ::java::util::stream::Sink* sink) override;
	bool isNaturalSort = false;
	::java::util::Comparator* comparator = nullptr;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_SortedOps$OfRef_h_