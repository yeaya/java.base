#ifndef _java_util_stream_ReduceOps$ReduceOp_h_
#define _java_util_stream_ReduceOps$ReduceOp_h_
//$ class java.util.stream.ReduceOps$ReduceOp
//$ extends java.util.stream.TerminalOp

#include <java/util/stream/TerminalOp.h>

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

class ReduceOps$ReduceOp : public ::java::util::stream::TerminalOp {
	$class(ReduceOps$ReduceOp, $PRELOAD | $NO_CLASS_INIT, ::java::util::stream::TerminalOp)
public:
	ReduceOps$ReduceOp();
	void init$(::java::util::stream::StreamShape* shape);
	virtual $Object* evaluateParallel(::java::util::stream::PipelineHelper* helper, ::java::util::Spliterator* spliterator) override;
	virtual $Object* evaluateSequential(::java::util::stream::PipelineHelper* helper, ::java::util::Spliterator* spliterator) override;
	virtual ::java::util::stream::StreamShape* inputShape() override;
	virtual ::java::util::stream::ReduceOps$AccumulatingSink* makeSink() {return nullptr;}
	::java::util::stream::StreamShape* inputShape$ = nullptr;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_ReduceOps$ReduceOp_h_