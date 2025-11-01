#ifndef _java_util_stream_Nodes$LongFixedNodeBuilder_h_
#define _java_util_stream_Nodes$LongFixedNodeBuilder_h_
//$ class java.util.stream.Nodes$LongFixedNodeBuilder
//$ extends java.util.stream.Nodes$LongArrayNode
//$ implements java.util.stream.Node$Builder$OfLong

#include <java/util/stream/Node$Builder$OfLong.h>
#include <java/util/stream/Nodes$LongArrayNode.h>

namespace java {
	namespace util {
		namespace stream {
			class Node$OfLong;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class Nodes$LongFixedNodeBuilder : public ::java::util::stream::Nodes$LongArrayNode, public ::java::util::stream::Node$Builder$OfLong {
	$class(Nodes$LongFixedNodeBuilder, 0, ::java::util::stream::Nodes$LongArrayNode, ::java::util::stream::Node$Builder$OfLong)
public:
	Nodes$LongFixedNodeBuilder();
	using ::java::util::stream::Nodes$LongArrayNode::copyInto;
	using ::java::util::stream::Nodes$LongArrayNode::forEach;
	using ::java::util::stream::Node$Builder$OfLong::accept;
	using ::java::util::stream::Node$Builder$OfLong::andThen;
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(int64_t size);
	virtual void accept(int64_t i) override;
	virtual void begin(int64_t size) override;
	virtual ::java::util::stream::Node$OfLong* build() override;
	virtual void end() override;
	virtual $String* toString() override;
	static bool $assertionsDisabled;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_Nodes$LongFixedNodeBuilder_h_