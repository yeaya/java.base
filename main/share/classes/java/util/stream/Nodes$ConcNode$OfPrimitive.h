#ifndef _java_util_stream_Nodes$ConcNode$OfPrimitive_h_
#define _java_util_stream_Nodes$ConcNode$OfPrimitive_h_
//$ class java.util.stream.Nodes$ConcNode$OfPrimitive
//$ extends java.util.stream.Nodes$AbstractConcNode
//$ implements java.util.stream.Node$OfPrimitive

#include <java/util/stream/Node$OfPrimitive.h>
#include <java/util/stream/Nodes$AbstractConcNode.h>

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

class Nodes$ConcNode$OfPrimitive : public ::java::util::stream::Nodes$AbstractConcNode, public ::java::util::stream::Node$OfPrimitive {
	$class(Nodes$ConcNode$OfPrimitive, $NO_CLASS_INIT, ::java::util::stream::Nodes$AbstractConcNode, ::java::util::stream::Node$OfPrimitive)
public:
	Nodes$ConcNode$OfPrimitive();
	virtual $ObjectArray* asArray(::java::util::function::IntFunction* generator) override;
	virtual $Object* clone() override;
	virtual void copyInto($ObjectArray* array, int32_t offset) override {}
	virtual int64_t count() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual void forEach(::java::util::function::Consumer* consumer) override {}
	virtual int32_t getChildCount() override;
	virtual ::java::util::stream::StreamShape* getShape() override;
	virtual int32_t hashCode() override;
	void init$(::java::util::stream::Node$OfPrimitive* left, ::java::util::stream::Node$OfPrimitive* right);
	virtual $Object* asPrimitiveArray() override;
	virtual void copyInto(Object$* array, int32_t offset) override;
	virtual void forEach(Object$* consumer) override;
	virtual ::java::util::stream::Node* getChild(int32_t i) override;
	virtual ::java::util::Spliterator* spliterator() override {return nullptr;}
	virtual $String* toString() override;
	virtual ::java::util::stream::Node* truncate(int64_t from, int64_t to, ::java::util::function::IntFunction* generator) override;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_Nodes$ConcNode$OfPrimitive_h_