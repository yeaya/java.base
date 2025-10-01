#ifndef _java_util_stream_Node$Builder$OfInt_h_
#define _java_util_stream_Node$Builder$OfInt_h_
//$ interface java.util.stream.Node$Builder$OfInt
//$ extends java.util.stream.Node$Builder,java.util.stream.Sink$OfInt

#include <java/util/stream/Node$Builder.h>
#include <java/util/stream/Sink$OfInt.h>

namespace java {
	namespace util {
		namespace stream {

class Node$Builder$OfInt : public ::java::util::stream::Node$Builder, public ::java::util::stream::Sink$OfInt {
	$interface(Node$Builder$OfInt, $NO_CLASS_INIT, ::java::util::stream::Node$Builder, ::java::util::stream::Sink$OfInt)
public:
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::java::util::stream::Sink$OfInt::accept;
	using ::java::util::stream::Sink$OfInt::andThen;
	virtual void accept(int32_t value) override;
	virtual void accept(int64_t value) override;
	virtual void accept(double value) override;
	virtual void accept(Object$* t) override {}
	virtual ::java::util::function::Consumer* andThen(::java::util::function::Consumer* after) override;
	virtual void begin(int64_t size) override;
	virtual ::java::util::stream::Node* build() override {return nullptr;}
	virtual bool cancellationRequested() override;
	virtual $Object* clone() override;
	virtual void end() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_Node$Builder$OfInt_h_