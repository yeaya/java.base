#ifndef _java_util_stream_Nodes$AbstractConcNode_h_
#define _java_util_stream_Nodes$AbstractConcNode_h_
//$ class java.util.stream.Nodes$AbstractConcNode
//$ extends java.util.stream.Node

#include <java/util/stream/Node.h>

namespace java {
	namespace util {
		namespace stream {

class Nodes$AbstractConcNode : public ::java::util::stream::Node {
	$class(Nodes$AbstractConcNode, $NO_CLASS_INIT, ::java::util::stream::Node)
public:
	Nodes$AbstractConcNode();
	void init$(::java::util::stream::Node* left, ::java::util::stream::Node* right);
	virtual int64_t count() override;
	virtual ::java::util::stream::Node* getChild(int32_t i) override;
	virtual int32_t getChildCount() override;
	::java::util::stream::Node* left = nullptr;
	::java::util::stream::Node* right = nullptr;
	int64_t size = 0;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_Nodes$AbstractConcNode_h_