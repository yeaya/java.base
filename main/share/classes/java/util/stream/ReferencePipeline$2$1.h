#ifndef _java_util_stream_ReferencePipeline$2$1_h_
#define _java_util_stream_ReferencePipeline$2$1_h_
//$ class java.util.stream.ReferencePipeline$2$1
//$ extends java.util.stream.Sink$ChainedReference

#include <java/util/stream/Sink$ChainedReference.h>

namespace java {
	namespace util {
		namespace stream {
			class ReferencePipeline$2;
			class Sink;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class ReferencePipeline$2$1 : public ::java::util::stream::Sink$ChainedReference {
	$class(ReferencePipeline$2$1, $PRELOAD | $NO_CLASS_INIT, ::java::util::stream::Sink$ChainedReference)
public:
	ReferencePipeline$2$1();
	using ::java::util::stream::Sink$ChainedReference::accept;
	void init$(::java::util::stream::ReferencePipeline$2* this$1, ::java::util::stream::Sink* downstream);
	virtual void accept(Object$* u) override;
	virtual void begin(int64_t size) override;
	::java::util::stream::ReferencePipeline$2* this$1 = nullptr;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_ReferencePipeline$2$1_h_