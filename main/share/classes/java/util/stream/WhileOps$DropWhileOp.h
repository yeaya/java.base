#ifndef _java_util_stream_WhileOps$DropWhileOp_h_
#define _java_util_stream_WhileOps$DropWhileOp_h_
//$ interface java.util.stream.WhileOps$DropWhileOp
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		namespace stream {
			class Sink;
			class WhileOps$DropWhileSink;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class WhileOps$DropWhileOp : public ::java::lang::Object {
	$interface(WhileOps$DropWhileOp, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::util::stream::WhileOps$DropWhileSink* opWrapSink(::java::util::stream::Sink* sink, bool retainAndCountDroppedElements) {return nullptr;}
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_WhileOps$DropWhileOp_h_