#ifndef _java_util_stream_IntPipeline$10_h_
#define _java_util_stream_IntPipeline$10_h_
//$ class java.util.stream.IntPipeline$10
//$ extends java.util.stream.IntPipeline$StatelessOp

#include <java/util/stream/IntPipeline$StatelessOp.h>

namespace java {
	namespace util {
		namespace function {
			class IntPredicate;
		}
	}
}
namespace java {
	namespace util {
		namespace stream {
			class AbstractPipeline;
			class IntPipeline;
			class Sink;
			class StreamShape;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class IntPipeline$10 : public ::java::util::stream::IntPipeline$StatelessOp {
	$class(IntPipeline$10, $NO_CLASS_INIT, ::java::util::stream::IntPipeline$StatelessOp)
public:
	IntPipeline$10();
	void init$(::java::util::stream::IntPipeline* this$0, ::java::util::stream::AbstractPipeline* upstream, ::java::util::stream::StreamShape* inputShape, int32_t opFlags, ::java::util::function::IntPredicate* val$predicate);
	virtual ::java::util::stream::Sink* opWrapSink(int32_t flags, ::java::util::stream::Sink* sink) override;
	::java::util::stream::IntPipeline* this$0 = nullptr;
	::java::util::function::IntPredicate* val$predicate = nullptr;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_IntPipeline$10_h_