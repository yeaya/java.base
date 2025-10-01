#ifndef _java_util_stream_Nodes$EmptyNode_h_
#define _java_util_stream_Nodes$EmptyNode_h_
//$ class java.util.stream.Nodes$EmptyNode
//$ extends java.util.stream.Node

#include <java/lang/Array.h>
#include <java/util/stream/Node.h>

namespace java {
	namespace util {
		namespace function {
			class IntFunction;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class Nodes$EmptyNode : public ::java::util::stream::Node {
	$class(Nodes$EmptyNode, $NO_CLASS_INIT, ::java::util::stream::Node)
public:
	Nodes$EmptyNode();
	using ::java::util::stream::Node::forEach;
	using ::java::util::stream::Node::copyInto;
	void init$();
	virtual $ObjectArray* asArray(::java::util::function::IntFunction* generator) override;
	virtual void copyInto(Object$* array, int32_t offset);
	virtual int64_t count() override;
	virtual void forEach(Object$* consumer);
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_Nodes$EmptyNode_h_