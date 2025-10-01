#ifndef _java_util_stream_ReferencePipeline$3$1_h_
#define _java_util_stream_ReferencePipeline$3$1_h_
//$ class java.util.stream.ReferencePipeline$3$1
//$ extends java.util.stream.Sink$ChainedReference

#include <java/util/stream/Sink$ChainedReference.h>

namespace java {
	namespace util {
		namespace stream {
			class ReferencePipeline$3;
			class Sink;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class ReferencePipeline$3$1 : public ::java::util::stream::Sink$ChainedReference {
	$class(ReferencePipeline$3$1, $PRELOAD | $NO_CLASS_INIT, ::java::util::stream::Sink$ChainedReference)
public:
	ReferencePipeline$3$1();
	using ::java::util::stream::Sink$ChainedReference::accept;
	void init$(::java::util::stream::ReferencePipeline$3* this$1, ::java::util::stream::Sink* downstream);
	virtual void accept(Object$* u) override;
	::java::util::stream::ReferencePipeline$3* this$1 = nullptr;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_ReferencePipeline$3$1_h_