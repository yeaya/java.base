#ifndef _java_util_stream_Nodes$InternalNodeSpliterator_h_
#define _java_util_stream_Nodes$InternalNodeSpliterator_h_
//$ class java.util.stream.Nodes$InternalNodeSpliterator
//$ extends java.util.Spliterator

#include <java/util/Spliterator.h>

namespace java {
	namespace util {
		class Deque;
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

class Nodes$InternalNodeSpliterator : public ::java::util::Spliterator {
	$class(Nodes$InternalNodeSpliterator, $NO_CLASS_INIT, ::java::util::Spliterator)
public:
	Nodes$InternalNodeSpliterator();
	void init$(::java::util::stream::Node* curNode);
	virtual int32_t characteristics() override;
	virtual int64_t estimateSize() override;
	::java::util::stream::Node* findNextLeafNode(::java::util::Deque* stack);
	::java::util::Deque* initStack();
	bool initTryAdvance();
	virtual ::java::util::Spliterator* trySplit() override;
	::java::util::stream::Node* curNode = nullptr;
	int32_t curChildIndex = 0;
	::java::util::Spliterator* lastNodeSpliterator = nullptr;
	::java::util::Spliterator* tryAdvanceSpliterator = nullptr;
	::java::util::Deque* tryAdvanceStack = nullptr;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_Nodes$InternalNodeSpliterator_h_