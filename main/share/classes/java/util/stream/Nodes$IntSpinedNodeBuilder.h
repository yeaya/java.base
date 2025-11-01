#ifndef _java_util_stream_Nodes$IntSpinedNodeBuilder_h_
#define _java_util_stream_Nodes$IntSpinedNodeBuilder_h_
//$ class java.util.stream.Nodes$IntSpinedNodeBuilder
//$ extends java.util.stream.SpinedBuffer$OfInt
//$ implements java.util.stream.Node$OfInt,java.util.stream.Node$Builder$OfInt

#include <java/lang/Array.h>
#include <java/util/stream/Node$Builder$OfInt.h>
#include <java/util/stream/Node$OfInt.h>
#include <java/util/stream/SpinedBuffer$OfInt.h>

namespace java {
	namespace util {
		class Spliterator;
	}
}
namespace java {
	namespace util {
		namespace function {
			class IntConsumer;
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

class Nodes$IntSpinedNodeBuilder : public ::java::util::stream::SpinedBuffer$OfInt, public ::java::util::stream::Node$OfInt, public ::java::util::stream::Node$Builder$OfInt {
	$class(Nodes$IntSpinedNodeBuilder, 0, ::java::util::stream::SpinedBuffer$OfInt, ::java::util::stream::Node$OfInt, ::java::util::stream::Node$Builder$OfInt)
public:
	Nodes$IntSpinedNodeBuilder();
	using ::java::util::stream::Node$OfInt::copyInto;
	using ::java::util::stream::Node$Builder$OfInt::accept;
	using ::java::util::stream::Node$Builder$OfInt::andThen;
	virtual ::java::util::function::IntConsumer* andThen(::java::util::function::IntConsumer* after) override;
	virtual $Object* clone() override;
	virtual int64_t count() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual void forEach(::java::util::function::Consumer* consumer) override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void accept(int32_t i) override;
	virtual $Object* asPrimitiveArray() override;
	virtual void begin(int64_t size) override;
	virtual ::java::util::stream::Node* build() override;
	void copyInto($ints* array, int32_t offset);
	virtual void copyInto(Object$* array, int32_t offset) override;
	virtual void end() override;
	void forEach(::java::util::function::IntConsumer* consumer);
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

#endif // _java_util_stream_Nodes$IntSpinedNodeBuilder_h_