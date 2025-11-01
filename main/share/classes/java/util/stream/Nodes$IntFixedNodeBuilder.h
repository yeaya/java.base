#ifndef _java_util_stream_Nodes$IntFixedNodeBuilder_h_
#define _java_util_stream_Nodes$IntFixedNodeBuilder_h_
//$ class java.util.stream.Nodes$IntFixedNodeBuilder
//$ extends java.util.stream.Nodes$IntArrayNode
//$ implements java.util.stream.Node$Builder$OfInt

#include <java/util/stream/Node$Builder$OfInt.h>
#include <java/util/stream/Nodes$IntArrayNode.h>

namespace java {
	namespace util {
		namespace stream {
			class Node$OfInt;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class Nodes$IntFixedNodeBuilder : public ::java::util::stream::Nodes$IntArrayNode, public ::java::util::stream::Node$Builder$OfInt {
	$class(Nodes$IntFixedNodeBuilder, 0, ::java::util::stream::Nodes$IntArrayNode, ::java::util::stream::Node$Builder$OfInt)
public:
	Nodes$IntFixedNodeBuilder();
	using ::java::util::stream::Nodes$IntArrayNode::copyInto;
	using ::java::util::stream::Nodes$IntArrayNode::forEach;
	using ::java::util::stream::Node$Builder$OfInt::accept;
	using ::java::util::stream::Node$Builder$OfInt::andThen;
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(int64_t size);
	virtual void accept(int32_t i) override;
	virtual void begin(int64_t size) override;
	virtual ::java::util::stream::Node$OfInt* build() override;
	virtual void end() override;
	virtual $String* toString() override;
	static bool $assertionsDisabled;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_Nodes$IntFixedNodeBuilder_h_