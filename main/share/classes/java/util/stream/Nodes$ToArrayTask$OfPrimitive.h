#ifndef _java_util_stream_Nodes$ToArrayTask$OfPrimitive_h_
#define _java_util_stream_Nodes$ToArrayTask$OfPrimitive_h_
//$ class java.util.stream.Nodes$ToArrayTask$OfPrimitive
//$ extends java.util.stream.Nodes$ToArrayTask

#include <java/util/stream/Nodes$ToArrayTask.h>

namespace java {
	namespace util {
		namespace stream {
			class Node$OfPrimitive;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class Nodes$ToArrayTask$OfPrimitive : public ::java::util::stream::Nodes$ToArrayTask {
	$class(Nodes$ToArrayTask$OfPrimitive, $NO_CLASS_INIT, ::java::util::stream::Nodes$ToArrayTask)
public:
	Nodes$ToArrayTask$OfPrimitive();
	void init$(::java::util::stream::Node$OfPrimitive* node, Object$* array, int32_t offset);
	void init$(::java::util::stream::Nodes$ToArrayTask$OfPrimitive* parent, ::java::util::stream::Node$OfPrimitive* node, int32_t offset);
	virtual void copyNodeToArray() override;
	virtual ::java::util::stream::Nodes$ToArrayTask$OfPrimitive* makeChild(int32_t childIndex, int32_t offset) override;
	$Object* array = nullptr;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_Nodes$ToArrayTask$OfPrimitive_h_