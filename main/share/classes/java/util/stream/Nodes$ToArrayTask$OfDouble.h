#ifndef _java_util_stream_Nodes$ToArrayTask$OfDouble_h_
#define _java_util_stream_Nodes$ToArrayTask$OfDouble_h_
//$ class java.util.stream.Nodes$ToArrayTask$OfDouble
//$ extends java.util.stream.Nodes$ToArrayTask$OfPrimitive

#include <java/lang/Array.h>
#include <java/util/stream/Nodes$ToArrayTask$OfPrimitive.h>

namespace java {
	namespace util {
		namespace stream {
			class Node$OfDouble;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class Nodes$ToArrayTask$OfDouble : public ::java::util::stream::Nodes$ToArrayTask$OfPrimitive {
	$class(Nodes$ToArrayTask$OfDouble, $NO_CLASS_INIT, ::java::util::stream::Nodes$ToArrayTask$OfPrimitive)
public:
	Nodes$ToArrayTask$OfDouble();
	void init$(::java::util::stream::Node$OfDouble* node, $doubles* array, int32_t offset);
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_Nodes$ToArrayTask$OfDouble_h_