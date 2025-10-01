#ifndef _java_util_stream_Node$OfPrimitive_h_
#define _java_util_stream_Node$OfPrimitive_h_
//$ interface java.util.stream.Node$OfPrimitive
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

class Node$OfPrimitive : public ::java::util::stream::Node {
	$interface(Node$OfPrimitive, $NO_CLASS_INIT, ::java::util::stream::Node)
public:
	virtual $ObjectArray* asArray(::java::util::function::IntFunction* generator) override;
	virtual $Object* asPrimitiveArray() {return nullptr;}
	using ::java::util::stream::Node::copyInto;
	virtual void copyInto(Object$* array, int32_t offset) {}
	using ::java::util::stream::Node::forEach;
	virtual void forEach(Object$* action) {}
	virtual ::java::util::stream::Node* getChild(int32_t i) override;
	virtual $Object* newArray(int32_t count) {return nullptr;}
	virtual ::java::util::Spliterator* spliterator() override {return nullptr;}
	virtual ::java::util::stream::Node* truncate(int64_t from, int64_t to, ::java::util::function::IntFunction* generator) override {return nullptr;}
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_Node$OfPrimitive_h_