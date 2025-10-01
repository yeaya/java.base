#ifndef _java_util_stream_MatchOps$MatchOp_h_
#define _java_util_stream_MatchOps$MatchOp_h_
//$ class java.util.stream.MatchOps$MatchOp
//$ extends java.util.stream.TerminalOp

#include <java/util/stream/TerminalOp.h>

namespace java {
	namespace util {
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
			class MatchOps$MatchKind;
			class PipelineHelper;
			class StreamShape;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class MatchOps$MatchOp : public ::java::util::stream::TerminalOp {
	$class(MatchOps$MatchOp, $NO_CLASS_INIT, ::java::util::stream::TerminalOp)
public:
	MatchOps$MatchOp();
	void init$(::java::util::stream::StreamShape* shape, ::java::util::stream::MatchOps$MatchKind* matchKind, ::java::util::function::Supplier* sinkSupplier);
	virtual $Object* evaluateParallel(::java::util::stream::PipelineHelper* helper, ::java::util::Spliterator* spliterator) override;
	virtual $Object* evaluateSequential(::java::util::stream::PipelineHelper* helper, ::java::util::Spliterator* spliterator) override;
	virtual int32_t getOpFlags() override;
	virtual ::java::util::stream::StreamShape* inputShape() override;
	::java::util::stream::StreamShape* inputShape$ = nullptr;
	::java::util::stream::MatchOps$MatchKind* matchKind = nullptr;
	::java::util::function::Supplier* sinkSupplier = nullptr;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_MatchOps$MatchOp_h_