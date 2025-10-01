#ifndef _java_util_stream_DoublePipeline$5$1_h_
#define _java_util_stream_DoublePipeline$5$1_h_
//$ class java.util.stream.DoublePipeline$5$1
//$ extends java.util.stream.Sink$ChainedDouble

#include <java/util/stream/Sink$ChainedDouble.h>

namespace java {
	namespace util {
		namespace function {
			class DoubleConsumer;
		}
	}
}
namespace java {
	namespace util {
		namespace stream {
			class DoublePipeline$5;
			class Sink;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class DoublePipeline$5$1 : public ::java::util::stream::Sink$ChainedDouble {
	$class(DoublePipeline$5$1, $NO_CLASS_INIT, ::java::util::stream::Sink$ChainedDouble)
public:
	DoublePipeline$5$1();
	using ::java::util::stream::Sink$ChainedDouble::accept;
	using ::java::util::stream::Sink$ChainedDouble::andThen;
	void init$(::java::util::stream::DoublePipeline$5* this$1, ::java::util::stream::Sink* downstream);
	virtual void accept(double t) override;
	virtual void begin(int64_t size) override;
	virtual bool cancellationRequested() override;
	::java::util::stream::DoublePipeline$5* this$1 = nullptr;
	bool cancellationRequestedCalled = false;
	::java::util::function::DoubleConsumer* downstreamAsDouble = nullptr;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_DoublePipeline$5$1_h_