#ifndef _java_util_stream_LongPipeline$10_h_
#define _java_util_stream_LongPipeline$10_h_
//$ class java.util.stream.LongPipeline$10
//$ extends java.util.stream.LongPipeline$StatelessOp

#include <java/util/stream/LongPipeline$StatelessOp.h>

namespace java {
	namespace util {
		namespace function {
			class LongConsumer;
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

class LongPipeline$10 : public ::java::util::stream::LongPipeline$StatelessOp {
	$class(LongPipeline$10, $NO_CLASS_INIT, ::java::util::stream::LongPipeline$StatelessOp)
public:
	LongPipeline$10();
	void init$(::java::util::stream::LongPipeline* this$0, ::java::util::stream::AbstractPipeline* upstream, ::java::util::stream::StreamShape* inputShape, int32_t opFlags, ::java::util::function::LongConsumer* val$action);
	virtual ::java::util::stream::Sink* opWrapSink(int32_t flags, ::java::util::stream::Sink* sink) override;
	::java::util::stream::LongPipeline* this$0 = nullptr;
	::java::util::function::LongConsumer* val$action = nullptr;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_LongPipeline$10_h_