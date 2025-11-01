#ifndef _java_util_stream_Nodes$ConcNode$OfLong_h_
#define _java_util_stream_Nodes$ConcNode$OfLong_h_
//$ class java.util.stream.Nodes$ConcNode$OfLong
//$ extends java.util.stream.Nodes$ConcNode$OfPrimitive
//$ implements java.util.stream.Node$OfLong

#include <java/util/stream/Node$OfLong.h>
#include <java/util/stream/Nodes$ConcNode$OfPrimitive.h>

namespace java {
	namespace util {
		class Spliterator;
	}
}

namespace java {
	namespace util {
		namespace stream {

class Nodes$ConcNode$OfLong : public ::java::util::stream::Nodes$ConcNode$OfPrimitive {
	$class(Nodes$ConcNode$OfLong, $NO_CLASS_INIT, ::java::util::stream::Nodes$ConcNode$OfPrimitive, ::java::util::stream::Node$OfLong)
public:
	Nodes$ConcNode$OfLong();
	virtual $ObjectArray* asArray(::java::util::function::IntFunction* generator) override;
	virtual $Object* asPrimitiveArray() override;
	virtual $Object* clone() override;
	virtual void copyInto(Object$* array, int32_t offset) override;
	virtual void copyInto($ObjectArray* array, int32_t offset) override;
	virtual void copyInto($Array<::java::lang::Long>* boxed, int32_t offset);
	virtual int64_t count() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual void forEach(Object$* consumer) override;
	virtual void forEach(::java::util::function::Consumer* consumer) override;
	virtual ::java::util::stream::Node* getChild(int32_t i) override;
	virtual int32_t getChildCount() override;
	virtual ::java::util::stream::StreamShape* getShape() override;
	virtual int32_t hashCode() override;
	void init$(::java::util::stream::Node$OfLong* left, ::java::util::stream::Node$OfLong* right);
	virtual $Object* newArray(int32_t count) override;
	virtual ::java::util::Spliterator* spliterator() override;
	virtual $String* toString() override;
	virtual ::java::util::stream::Node* truncate(int64_t from, int64_t to, ::java::util::function::IntFunction* generator) override;
	class MemberClass0$ : public ::java::util::stream::Node$OfLong {
	public:
		MemberClass0$();
		virtual void forEach(::java::util::function::Consumer* consumer) override;
		virtual void copyInto($Array<::java::lang::Long>* boxed, int32_t offset) override;
		virtual ::java::util::stream::Node$OfLong* truncate(int64_t from, int64_t to, ::java::util::function::IntFunction* generator) override;
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
	::java::util::stream::Node$OfLong* as$(::java::util::stream::Node$OfLong**) {
		return &memberClass0$;
	}
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_Nodes$ConcNode$OfLong_h_