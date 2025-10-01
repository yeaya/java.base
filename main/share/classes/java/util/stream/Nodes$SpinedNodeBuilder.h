#ifndef _java_util_stream_Nodes$SpinedNodeBuilder_h_
#define _java_util_stream_Nodes$SpinedNodeBuilder_h_
//$ class java.util.stream.Nodes$SpinedNodeBuilder
//$ extends java.util.stream.SpinedBuffer
//$ implements java.util.stream.Node,java.util.stream.Node$Builder

#include <java/lang/Array.h>
#include <java/util/stream/Node$Builder.h>
#include <java/util/stream/Node.h>
#include <java/util/stream/SpinedBuffer.h>

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

class Nodes$SpinedNodeBuilder : public ::java::util::stream::SpinedBuffer, public ::java::util::stream::Node, public ::java::util::stream::Node$Builder {
	$class(Nodes$SpinedNodeBuilder, 0, ::java::util::stream::SpinedBuffer, ::java::util::stream::Node, ::java::util::stream::Node$Builder)
public:
	Nodes$SpinedNodeBuilder();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::java::util::stream::Node$Builder::accept;
	virtual ::java::util::function::Consumer* andThen(::java::util::function::Consumer* after) override;
	virtual $Object* clone() override;
	virtual int64_t count() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void accept(Object$* t) override;
	virtual $ObjectArray* asArray(::java::util::function::IntFunction* arrayFactory) override;
	virtual void begin(int64_t size) override;
	virtual ::java::util::stream::Node* build() override;
	virtual void copyInto($ObjectArray* array, int32_t offset) override;
	virtual void end() override;
	virtual void forEach(::java::util::function::Consumer* consumer) override;
	virtual ::java::util::Spliterator* spliterator() override;
	virtual $String* toString() override;
	static bool $assertionsDisabled;
	bool building = false;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_Nodes$SpinedNodeBuilder_h_