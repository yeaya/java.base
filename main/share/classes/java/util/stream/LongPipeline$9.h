#ifndef _java_util_stream_LongPipeline$9_h_
#define _java_util_stream_LongPipeline$9_h_
//$ class java.util.stream.LongPipeline$9
//$ extends java.util.stream.LongPipeline$StatelessOp

#include <java/util/stream/LongPipeline$StatelessOp.h>

namespace java {
	namespace util {
		namespace function {
			class LongPredicate;
		}
	}
}
namespace java {
	namespace util {
		namespace stream {
			class AbstractPipeline;
			class LongPipeline;
			class Sink;
			class StreamShape;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class LongPipeline$9 : public ::java::util::stream::LongPipeline$StatelessOp {
	$class(LongPipeline$9, $NO_CLASS_INIT, ::java::util::stream::LongPipeline$StatelessOp)
public:
	LongPipeline$9();
	void init$(::java::util::stream::LongPipeline* this$0, ::java::util::stream::AbstractPipeline* upstream, ::java::util::stream::StreamShape* inputShape, int32_t opFlags, ::java::util::function::LongPredicate* val$predicate);
	virtual ::java::util::stream::Sink* opWrapSink(int32_t flags, ::java::util::stream::Sink* sink) override;
	::java::util::stream::LongPipeline* this$0 = nullptr;
	::java::util::function::LongPredicate* val$predicate = nullptr;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_LongPipeline$9_h_