#ifndef _java_util_stream_Nodes$ToArrayTask$OfLong_h_
#define _java_util_stream_Nodes$ToArrayTask$OfLong_h_
//$ class java.util.stream.Nodes$ToArrayTask$OfLong
//$ extends java.util.stream.Nodes$ToArrayTask$OfPrimitive

#include <java/lang/Array.h>
#include <java/util/stream/Nodes$ToArrayTask$OfPrimitive.h>

namespace java {
	namespace util {
		namespace stream {
			class Node$OfLong;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class Nodes$ToArrayTask$OfLong : public ::java::util::stream::Nodes$ToArrayTask$OfPrimitive {
	$class(Nodes$ToArrayTask$OfLong, $NO_CLASS_INIT, ::java::util::stream::Nodes$ToArrayTask$OfPrimitive)
public:
	Nodes$ToArrayTask$OfLong();
	void init$(::java::util::stream::Node$OfLong* node, $longs* array, int32_t offset);
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_Nodes$ToArrayTask$OfLong_h_