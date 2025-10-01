#ifndef _java_util_stream_Nodes$EmptyNode$OfRef_h_
#define _java_util_stream_Nodes$EmptyNode$OfRef_h_
//$ class java.util.stream.Nodes$EmptyNode$OfRef
//$ extends java.util.stream.Nodes$EmptyNode

#include <java/lang/Array.h>
#include <java/util/stream/Nodes$EmptyNode.h>

namespace java {
	namespace util {
		class Spliterator;
	}
}
namespace java {
	namespace util {
		namespace function {
			class Consumer;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class Nodes$EmptyNode$OfRef : public ::java::util::stream::Nodes$EmptyNode {
	$class(Nodes$EmptyNode$OfRef, $NO_CLASS_INIT, ::java::util::stream::Nodes$EmptyNode)
public:
	Nodes$EmptyNode$OfRef();
	using ::java::util::stream::Nodes$EmptyNode::copyInto;
	using ::java::util::stream::Nodes$EmptyNode::forEach;
	void init$();
	virtual void copyInto($ObjectArray* array, int32_t offset) override;
	virtual void forEach(::java::util::function::Consumer* consumer) override;
	virtual ::java::util::Spliterator* spliterator() override;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_Nodes$EmptyNode$OfRef_h_