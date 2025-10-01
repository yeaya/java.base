#ifndef _java_util_stream_DoublePipeline$6$1_h_
#define _java_util_stream_DoublePipeline$6$1_h_
//$ class java.util.stream.DoublePipeline$6$1
//$ extends java.util.stream.Sink$ChainedDouble

#include <java/util/stream/Sink$ChainedDouble.h>

namespace java {
	namespace util {
		namespace stream {
			class DoublePipeline$6;
			class Sink;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class DoublePipeline$6$1 : public ::java::util::stream::Sink$ChainedDouble {
	$class(DoublePipeline$6$1, $NO_CLASS_INIT, ::java::util::stream::Sink$ChainedDouble)
public:
	DoublePipeline$6$1();
	using ::java::util::stream::Sink$ChainedDouble::accept;
	using ::java::util::stream::Sink$ChainedDouble::andThen;
	void init$(::java::util::stream::DoublePipeline$6* this$1, ::java::util::stream::Sink* downstream);
	virtual void accept(double t) override;
	virtual void begin(int64_t size) override;
	::java::util::stream::DoublePipeline$6* this$1 = nullptr;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_DoublePipeline$6$1_h_