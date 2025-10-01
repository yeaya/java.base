#ifndef _java_util_stream_Nodes$InternalNodeSpliterator$OfRef_h_
#define _java_util_stream_Nodes$InternalNodeSpliterator$OfRef_h_
//$ class java.util.stream.Nodes$InternalNodeSpliterator$OfRef
//$ extends java.util.stream.Nodes$InternalNodeSpliterator

#include <java/util/stream/Nodes$InternalNodeSpliterator.h>

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
			class Node;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class Nodes$InternalNodeSpliterator$OfRef : public ::java::util::stream::Nodes$InternalNodeSpliterator {
	$class(Nodes$InternalNodeSpliterator$OfRef, $NO_CLASS_INIT, ::java::util::stream::Nodes$InternalNodeSpliterator)
public:
	Nodes$InternalNodeSpliterator$OfRef();
	void init$(::java::util::stream::Node* curNode);
	virtual void forEachRemaining(::java::util::function::Consumer* consumer) override;
	virtual bool tryAdvance(::java::util::function::Consumer* consumer) override;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_Nodes$InternalNodeSpliterator$OfRef_h_