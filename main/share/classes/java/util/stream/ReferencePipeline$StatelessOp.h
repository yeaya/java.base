#ifndef _java_util_stream_ReferencePipeline$StatelessOp_h_
#define _java_util_stream_ReferencePipeline$StatelessOp_h_
//$ class java.util.stream.ReferencePipeline$StatelessOp
//$ extends java.util.stream.ReferencePipeline

#include <java/util/stream/ReferencePipeline.h>

namespace java {
	namespace util {
		namespace stream {
			class AbstractPipeline;
			class BaseStream;
			class StreamShape;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class ReferencePipeline$StatelessOp : public ::java::util::stream::ReferencePipeline {
	$class(ReferencePipeline$StatelessOp, $PRELOAD, ::java::util::stream::ReferencePipeline)
public:
	ReferencePipeline$StatelessOp();
	void init$(::java::util::stream::AbstractPipeline* upstream, ::java::util::stream::StreamShape* inputShape, int32_t opFlags);
	virtual bool opIsStateful() override;
	virtual ::java::util::stream::BaseStream* unordered() override;
	static bool $assertionsDisabled;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_ReferencePipeline$StatelessOp_h_