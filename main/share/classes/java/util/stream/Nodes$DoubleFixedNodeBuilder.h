#ifndef _java_util_stream_Nodes$DoubleFixedNodeBuilder_h_
#define _java_util_stream_Nodes$DoubleFixedNodeBuilder_h_
//$ class java.util.stream.Nodes$DoubleFixedNodeBuilder
//$ extends java.util.stream.Nodes$DoubleArrayNode
//$ implements java.util.stream.Node$Builder$OfDouble

#include <java/util/stream/Node$Builder$OfDouble.h>
#include <java/util/stream/Nodes$DoubleArrayNode.h>

namespace java {
	namespace util {
		namespace stream {
			class Node$OfDouble;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class Nodes$DoubleFixedNodeBuilder : public ::java::util::stream::Nodes$DoubleArrayNode, public ::java::util::stream::Node$Builder$OfDouble {
	$class(Nodes$DoubleFixedNodeBuilder, 0, ::java::util::stream::Nodes$DoubleArrayNode, ::java::util::stream::Node$Builder$OfDouble)
public:
	Nodes$DoubleFixedNodeBuilder();
	using ::java::util::stream::Nodes$DoubleArrayNode::copyInto;
	using ::java::util::stream::Nodes$DoubleArrayNode::forEach;
	using ::java::util::stream::Node$Builder$OfDouble::accept;
	using ::java::util::stream::Node$Builder$OfDouble::andThen;
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(int64_t size);
	virtual void accept(double i) override;
	virtual void begin(int64_t size) override;
	virtual ::java::util::stream::Node$OfDouble* build() override;
	virtual void end() override;
	virtual $String* toString() override;
	static bool $assertionsDisabled;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_Nodes$DoubleFixedNodeBuilder_h_