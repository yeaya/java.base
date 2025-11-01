#ifndef _java_util_stream_Nodes$FixedNodeBuilder_h_
#define _java_util_stream_Nodes$FixedNodeBuilder_h_
//$ class java.util.stream.Nodes$FixedNodeBuilder
//$ extends java.util.stream.Nodes$ArrayNode
//$ implements java.util.stream.Node$Builder

#include <java/util/stream/Node$Builder.h>
#include <java/util/stream/Nodes$ArrayNode.h>

namespace java {
	namespace util {
		namespace function {
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

class Nodes$FixedNodeBuilder : public ::java::util::stream::Nodes$ArrayNode, public ::java::util::stream::Node$Builder {
	$class(Nodes$FixedNodeBuilder, 0, ::java::util::stream::Nodes$ArrayNode, ::java::util::stream::Node$Builder)
public:
	Nodes$FixedNodeBuilder();
	using ::java::util::stream::Node$Builder::accept;
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(int64_t size, ::java::util::function::IntFunction* generator);
	virtual void accept(Object$* t) override;
	virtual void begin(int64_t size) override;
	virtual ::java::util::stream::Node* build() override;
	virtual void end() override;
	virtual $String* toString() override;
	static bool $assertionsDisabled;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_Nodes$FixedNodeBuilder_h_