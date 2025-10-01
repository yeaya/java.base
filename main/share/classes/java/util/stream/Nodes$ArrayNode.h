#ifndef _java_util_stream_Nodes$ArrayNode_h_
#define _java_util_stream_Nodes$ArrayNode_h_
//$ class java.util.stream.Nodes$ArrayNode
//$ extends java.util.stream.Node

#include <java/lang/Array.h>
#include <java/util/stream/Node.h>

namespace java {
	namespace util {
		class Spliterator;
	}
}
namespace java {
	namespace util {
		namespace function {
			class Consumer;
			class IntFunction;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class Nodes$ArrayNode : public ::java::util::stream::Node {
	$class(Nodes$ArrayNode, $NO_CLASS_INIT, ::java::util::stream::Node)
public:
	Nodes$ArrayNode();
	void init$(int64_t size, ::java::util::function::IntFunction* generator);
	void init$($ObjectArray* array);
	virtual $ObjectArray* asArray(::java::util::function::IntFunction* generator) override;
	virtual void copyInto($ObjectArray* dest, int32_t destOffset) override;
	virtual int64_t count() override;
	virtual void forEach(::java::util::function::Consumer* consumer) override;
	virtual ::java::util::Spliterator* spliterator() override;
	virtual $String* toString() override;
	$ObjectArray* array = nullptr;
	int32_t curSize = 0;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_Nodes$ArrayNode_h_