#ifndef _java_util_stream_ReduceOps$17_h_
#define _java_util_stream_ReduceOps$17_h_
//$ class java.util.stream.ReduceOps$17
//$ extends java.util.stream.ReduceOps$ReduceOp

#include <java/util/stream/ReduceOps$ReduceOp.h>

namespace java {
	namespace util {
		class Spliterator;
	}
}
namespace java {
	namespace util {
		namespace stream {
			class PipelineHelper;
			class ReduceOps$AccumulatingSink;
			class StreamShape;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class ReduceOps$17 : public ::java::util::stream::ReduceOps$ReduceOp {
	$class(ReduceOps$17, $NO_CLASS_INIT, ::java::util::stream::ReduceOps$ReduceOp)
public:
	ReduceOps$17();
	void init$(::java::util::stream::StreamShape* shape);
	virtual $Object* evaluateParallel(::java::util::stream::PipelineHelper* helper, ::java::util::Spliterator* spliterator) override;
	virtual $Object* evaluateSequential(::java::util::stream::PipelineHelper* helper, ::java::util::Spliterator* spliterator) override;
	virtual int32_t getOpFlags() override;
	virtual ::java::util::stream::ReduceOps$AccumulatingSink* makeSink() override;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_ReduceOps$17_h_