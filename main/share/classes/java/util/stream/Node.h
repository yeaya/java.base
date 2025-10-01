#ifndef _java_util_stream_Node_h_
#define _java_util_stream_Node_h_
//$ interface java.util.stream.Node
//$ extends java.lang.Object

#include <java/lang/Array.h>

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
			class StreamShape;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class Node : public ::java::lang::Object {
	$interface(Node, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $ObjectArray* asArray(::java::util::function::IntFunction* generator) {return nullptr;}
	virtual void copyInto($ObjectArray* array, int32_t offset) {}
	virtual int64_t count() {return 0;}
	virtual void forEach(::java::util::function::Consumer* consumer) {}
	virtual ::java::util::stream::Node* getChild(int32_t i);
	virtual int32_t getChildCount();
	virtual ::java::util::stream::StreamShape* getShape();
	static void lambda$truncate$0(Object$* e);
	virtual ::java::util::Spliterator* spliterator() {return nullptr;}
	virtual ::java::util::stream::Node* truncate(int64_t from, int64_t to, ::java::util::function::IntFunction* generator);
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_Node_h_