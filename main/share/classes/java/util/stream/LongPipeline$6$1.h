#ifndef _java_util_stream_LongPipeline$6$1_h_
#define _java_util_stream_LongPipeline$6$1_h_
//$ class java.util.stream.LongPipeline$6$1
//$ extends java.util.stream.Sink$ChainedLong

#include <java/util/stream/Sink$ChainedLong.h>

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
			class LongPipeline$6;
			class Sink;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class LongPipeline$6$1 : public ::java::util::stream::Sink$ChainedLong {
	$class(LongPipeline$6$1, $NO_CLASS_INIT, ::java::util::stream::Sink$ChainedLong)
public:
	LongPipeline$6$1();
	using ::java::util::stream::Sink$ChainedLong::accept;
	using ::java::util::stream::Sink$ChainedLong::andThen;
	void init$(::java::util::stream::LongPipeline$6* this$1, ::java::util::stream::Sink* downstream);
	virtual void accept(int64_t t) override;
	virtual void begin(int64_t size) override;
	virtual bool cancellationRequested() override;
	::java::util::stream::LongPipeline$6* this$1 = nullptr;
	bool cancellationRequestedCalled = false;
	::java::util::function::LongConsumer* downstreamAsLong = nullptr;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_LongPipeline$6$1_h_