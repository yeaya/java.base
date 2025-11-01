#ifndef _java_util_stream_Nodes$LongSpinedNodeBuilder_h_
#define _java_util_stream_Nodes$LongSpinedNodeBuilder_h_
//$ class java.util.stream.Nodes$LongSpinedNodeBuilder
//$ extends java.util.stream.SpinedBuffer$OfLong
//$ implements java.util.stream.Node$OfLong,java.util.stream.Node$Builder$OfLong

#include <java/lang/Array.h>
#include <java/util/stream/Node$Builder$OfLong.h>
#include <java/util/stream/Node$OfLong.h>
#include <java/util/stream/SpinedBuffer$OfLong.h>

namespace java {
	namespace util {
		class Spliterator;
	}
}
namespace java {
	namespace util {
		namespace function {
			class LongConsumer;
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

class Nodes$LongSpinedNodeBuilder : public ::java::util::stream::SpinedBuffer$OfLong, public ::java::util::stream::Node$OfLong, public ::java::util::stream::Node$Builder$OfLong {
	$class(Nodes$LongSpinedNodeBuilder, 0, ::java::util::stream::SpinedBuffer$OfLong, ::java::util::stream::Node$OfLong, ::java::util::stream::Node$Builder$OfLong)
public:
	Nodes$LongSpinedNodeBuilder();
	using ::java::util::stream::Node$OfLong::copyInto;
	using ::java::util::stream::Node$Builder$OfLong::accept;
	using ::java::util::stream::Node$Builder$OfLong::andThen;
	virtual ::java::util::function::LongConsumer* andThen(::java::util::function::LongConsumer* after) override;
	virtual $Object* clone() override;
	virtual int64_t count() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual void forEach(::java::util::function::Consumer* consumer) override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void accept(int64_t i) override;
	virtual $Object* asPrimitiveArray() override;
	virtual void begin(int64_t size) override;
	virtual ::java::util::stream::Node* build() override;
	void copyInto($longs* array, int32_t offset);
	virtual void copyInto(Object$* array, int32_t offset) override;
	virtual void end() override;
	void forEach(::java::util::function::LongConsumer* consumer);
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

#endif // _java_util_stream_Nodes$LongSpinedNodeBuilder_h_