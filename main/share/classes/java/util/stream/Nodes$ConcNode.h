#ifndef _java_util_stream_Nodes$ConcNode_h_
#define _java_util_stream_Nodes$ConcNode_h_
//$ class java.util.stream.Nodes$ConcNode
//$ extends java.util.stream.Nodes$AbstractConcNode

#include <java/lang/Array.h>
#include <java/util/stream/Nodes$AbstractConcNode.h>

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
			class Node;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class Nodes$ConcNode : public ::java::util::stream::Nodes$AbstractConcNode {
	$class(Nodes$ConcNode, $NO_CLASS_INIT, ::java::util::stream::Nodes$AbstractConcNode)
public:
	Nodes$ConcNode();
	void init$(::java::util::stream::Node* left, ::java::util::stream::Node* right);
	virtual $ObjectArray* asArray(::java::util::function::IntFunction* generator) override;
	virtual void copyInto($ObjectArray* array, int32_t offset) override;
	virtual void forEach(::java::util::function::Consumer* consumer) override;
	virtual ::java::util::Spliterator* spliterator() override;
	virtual $String* toString() override;
	virtual ::java::util::stream::Node* truncate(int64_t from, int64_t to, ::java::util::function::IntFunction* generator) override;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_Nodes$ConcNode_h_