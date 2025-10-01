#ifndef _java_util_stream_TerminalOp_h_
#define _java_util_stream_TerminalOp_h_
//$ interface java.util.stream.TerminalOp
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class Spliterator;
	}
}
namespace java {
	namespace util {
		namespace stream {
			class PipelineHelper;
			class StreamShape;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class TerminalOp : public ::java::lang::Object {
	$interface(TerminalOp, $PRELOAD | $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $Object* evaluateParallel(::java::util::stream::PipelineHelper* helper, ::java::util::Spliterator* spliterator);
	virtual $Object* evaluateSequential(::java::util::stream::PipelineHelper* helper, ::java::util::Spliterator* spliterator) {return nullptr;}
	virtual int32_t getOpFlags();
	virtual ::java::util::stream::StreamShape* inputShape();
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_TerminalOp_h_