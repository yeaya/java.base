#ifndef _java_util_stream_Nodes$ToArrayTask$OfInt_h_
#define _java_util_stream_Nodes$ToArrayTask$OfInt_h_
//$ class java.util.stream.Nodes$ToArrayTask$OfInt
//$ extends java.util.stream.Nodes$ToArrayTask$OfPrimitive

#include <java/lang/Array.h>
#include <java/util/stream/Nodes$ToArrayTask$OfPrimitive.h>

namespace java {
	namespace util {
		namespace stream {
			class Node$OfInt;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class Nodes$ToArrayTask$OfInt : public ::java::util::stream::Nodes$ToArrayTask$OfPrimitive {
	$class(Nodes$ToArrayTask$OfInt, $NO_CLASS_INIT, ::java::util::stream::Nodes$ToArrayTask$OfPrimitive)
public:
	Nodes$ToArrayTask$OfInt();
	void init$(::java::util::stream::Node$OfInt* node, $ints* array, int32_t offset);
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_Nodes$ToArrayTask$OfInt_h_