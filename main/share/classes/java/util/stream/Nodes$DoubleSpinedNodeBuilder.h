#ifndef _java_util_stream_Nodes$DoubleSpinedNodeBuilder_h_
#define _java_util_stream_Nodes$DoubleSpinedNodeBuilder_h_
//$ class java.util.stream.Nodes$DoubleSpinedNodeBuilder
//$ extends java.util.stream.SpinedBuffer$OfDouble
//$ implements java.util.stream.Node$OfDouble,java.util.stream.Node$Builder$OfDouble

#include <java/lang/Array.h>
#include <java/util/stream/Node$Builder$OfDouble.h>
#include <java/util/stream/Node$OfDouble.h>
#include <java/util/stream/SpinedBuffer$OfDouble.h>

namespace java {
	namespace util {
		class Spliterator;
	}
}
namespace java {
	namespace util {
		namespace function {
			class DoubleConsumer;
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

class Nodes$DoubleSpinedNodeBuilder : public ::java::util::stream::SpinedBuffer$OfDouble, public ::java::util::stream::Node$OfDouble, public ::java::util::stream::Node$Builder$OfDouble {
	$class(Nodes$DoubleSpinedNodeBuilder, 0, ::java::util::stream::SpinedBuffer$OfDouble, ::java::util::stream::Node$OfDouble, ::java::util::stream::Node$Builder$OfDouble)
public:
	Nodes$DoubleSpinedNodeBuilder();
	using ::java::util::stream::Node$OfDouble::copyInto;
	using ::java::util::stream::Node$Builder$OfDouble::accept;
	using ::java::util::stream::Node$Builder$OfDouble::andThen;
	virtual ::java::util::function::DoubleConsumer* andThen(::java::util::function::DoubleConsumer* after) override;
	virtual $Object* clone() override;
	virtual int64_t count() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual void forEach(::java::util::function::Consumer* consumer) override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void accept(double i) override;
	virtual $Object* asPrimitiveArray() override;
	virtual void begin(int64_t size) override;
	virtual ::java::util::stream::Node* build() override;
	void copyInto($doubles* array, int32_t offset);
	virtual void copyInto(Object$* array, int32_t offset) override;
	virtual void end() override;
	void forEach(::java::util::function::DoubleConsumer* consumer);
	virtual void forEach(Object$* consumer) override;
	virtual $Object* newArray(int32_t size) override;
	virtual ::java::util::Spliterator* spliterator() override;
	virtual $String* toString() override;
	static bool $assertionsDisabled;
	bool building = false;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_Nodes$DoubleSpinedNodeBuilder_h_