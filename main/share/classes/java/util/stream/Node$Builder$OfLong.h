#ifndef _java_util_stream_Node$Builder$OfLong_h_
#define _java_util_stream_Node$Builder$OfLong_h_
//$ interface java.util.stream.Node$Builder$OfLong
//$ extends java.util.stream.Node$Builder,java.util.stream.Sink$OfLong

#include <java/util/stream/Node$Builder.h>
#include <java/util/stream/Sink$OfLong.h>

namespace java {
	namespace util {
		namespace stream {

class Node$Builder$OfLong : public ::java::util::stream::Node$Builder, public ::java::util::stream::Sink$OfLong {
	$interface(Node$Builder$OfLong, $NO_CLASS_INIT, ::java::util::stream::Node$Builder, ::java::util::stream::Sink$OfLong)
public:
	using ::java::util::stream::Sink$OfLong::accept;
	using ::java::util::stream::Sink$OfLong::andThen;
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

#endif // _java_util_stream_Node$Builder$OfLong_h_