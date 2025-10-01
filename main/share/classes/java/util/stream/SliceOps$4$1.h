#ifndef _java_util_stream_SliceOps$4$1_h_
#define _java_util_stream_SliceOps$4$1_h_
//$ class java.util.stream.SliceOps$4$1
//$ extends java.util.stream.Sink$ChainedDouble

#include <java/util/stream/Sink$ChainedDouble.h>

namespace java {
	namespace util {
		namespace stream {
			class Sink;
			class SliceOps$4;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class SliceOps$4$1 : public ::java::util::stream::Sink$ChainedDouble {
	$class(SliceOps$4$1, $NO_CLASS_INIT, ::java::util::stream::Sink$ChainedDouble)
public:
	SliceOps$4$1();
	using ::java::util::stream::Sink$ChainedDouble::accept;
	using ::java::util::stream::Sink$ChainedDouble::andThen;
	void init$(::java::util::stream::SliceOps$4* this$0, ::java::util::stream::Sink* downstream);
	virtual void accept(double t) override;
	virtual void begin(int64_t size) override;
	virtual bool cancellationRequested() override;
	::java::util::stream::SliceOps$4* this$0 = nullptr;
	int64_t n = 0;
	int64_t m = 0;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_SliceOps$4$1_h_