#ifndef _java_util_stream_Nodes$EmptyNode$OfInt_h_
#define _java_util_stream_Nodes$EmptyNode$OfInt_h_
//$ class java.util.stream.Nodes$EmptyNode$OfInt
//$ extends java.util.stream.Nodes$EmptyNode
//$ implements java.util.stream.Node$OfInt

#include <java/lang/Array.h>
#include <java/util/stream/Node$OfInt.h>
#include <java/util/stream/Nodes$EmptyNode.h>

namespace java {
	namespace util {
		class Spliterator;
	}
}

namespace java {
	namespace util {
		namespace stream {

class Nodes$EmptyNode$OfInt : public ::java::util::stream::Nodes$EmptyNode {
	$class(Nodes$EmptyNode$OfInt, $NO_CLASS_INIT, ::java::util::stream::Nodes$EmptyNode, ::java::util::stream::Node$OfInt)
public:
	Nodes$EmptyNode$OfInt();
	virtual $ObjectArray* asArray(::java::util::function::IntFunction* generator) override;
	virtual $Object* clone() override;
	virtual void copyInto(Object$* array, int32_t offset) override;
	virtual void copyInto($ObjectArray* array, int32_t offset) override;
	virtual void copyInto($Array<::java::lang::Integer>* boxed, int32_t offset);
	virtual int64_t count() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual void forEach(Object$* consumer) override;
	virtual void forEach(::java::util::function::Consumer* consumer) override;
	virtual ::java::util::stream::Node* getChild(int32_t i) override;
	virtual int32_t getChildCount() override;
	virtual ::java::util::stream::StreamShape* getShape() override;
	virtual int32_t hashCode() override;
	void init$();
	$ints* asPrimitiveArray();
	virtual $Object* newArray(int32_t count);
	virtual ::java::util::Spliterator* spliterator() override;
	virtual $String* toString() override;
	virtual ::java::util::stream::Node* truncate(int64_t from, int64_t to, ::java::util::function::IntFunction* generator) override;
	class MemberClass0$ : public ::java::util::stream::Node$OfInt {
	public:
		MemberClass0$();
		virtual void forEach(::java::util::function::Consumer* consumer) override;
		virtual void copyInto($Array<::java::lang::Integer>* boxed, int32_t offset) override;
		virtual ::java::util::stream::Node$OfInt* truncate(int64_t from, int64_t to, ::java::util::function::IntFunction* generator) override;
		virtual $Object* newArray(int32_t count) override;
		virtual ::java::util::stream::StreamShape* getShape() override;
		virtual void copyInto($ObjectArray* boxed, int32_t offset) override;
		virtual ::java::util::Spliterator* spliterator() override;
		virtual void forEach(Object$* action) override;
		virtual ::java::util::stream::Node* getChild(int32_t i) override;
		virtual $ObjectArray* asArray(::java::util::function::IntFunction* generator) override;
		virtual $Object* asPrimitiveArray() override;
		virtual void copyInto(Object$* array, int32_t offset) override;
		virtual int32_t getChildCount() override;
		virtual int64_t count() override;
		virtual int32_t hashCode() override;
		virtual bool equals(Object$* obj) override;
		virtual $Object* clone() override;
		virtual $String* toString() override;
		virtual void finalize() override;
	};
	MemberClass0$ memberClass0$;
	::java::util::stream::Node$OfInt* as$(::java::util::stream::Node$OfInt**) {
		return &memberClass0$;
	}
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_Nodes$EmptyNode$OfInt_h_