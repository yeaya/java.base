#ifndef _java_util_stream_Node$Builder_h_
#define _java_util_stream_Node$Builder_h_
//$ interface java.util.stream.Node$Builder
//$ extends java.util.stream.Sink

#include <java/util/stream/Sink.h>

namespace java {
	namespace util {
		namespace stream {
			class Node;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class Node$Builder : public ::java::util::stream::Sink {
	$interface(Node$Builder, $NO_CLASS_INIT, ::java::util::stream::Sink)
public:
	using ::java::util::stream::Sink::accept;
	virtual ::java::util::stream::Node* build() {return nullptr;}
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_Node$Builder_h_