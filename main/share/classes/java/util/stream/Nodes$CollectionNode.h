#ifndef _java_util_stream_Nodes$CollectionNode_h_
#define _java_util_stream_Nodes$CollectionNode_h_
//$ class java.util.stream.Nodes$CollectionNode
//$ extends java.util.stream.Node

#include <java/lang/Array.h>
#include <java/util/stream/Node.h>

namespace java {
	namespace util {
		class Collection;
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

class Nodes$CollectionNode : public ::java::util::stream::Node {
	$class(Nodes$CollectionNode, $NO_CLASS_INIT, ::java::util::stream::Node)
public:
	Nodes$CollectionNode();
	void init$(::java::util::Collection* c);
	virtual $ObjectArray* asArray(::java::util::function::IntFunction* generator) override;
	virtual void copyInto($ObjectArray* array, int32_t offset) override;
	virtual int64_t count() override;
	virtual void forEach(::java::util::function::Consumer* consumer) override;
	virtual ::java::util::Spliterator* spliterator() override;
	virtual $String* toString() override;
	::java::util::Collection* c = nullptr;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_Nodes$CollectionNode_h_