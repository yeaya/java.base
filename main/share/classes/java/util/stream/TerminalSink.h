#ifndef _java_util_stream_TerminalSink_h_
#define _java_util_stream_TerminalSink_h_
//$ interface java.util.stream.TerminalSink
//$ extends java.util.stream.Sink,java.util.function.Supplier

#include <java/util/function/Supplier.h>
#include <java/util/stream/Sink.h>

namespace java {
	namespace util {
		namespace stream {

class TerminalSink : public ::java::util::stream::Sink, public ::java::util::function::Supplier {
	$interface(TerminalSink, $PRELOAD | $NO_CLASS_INIT, ::java::util::stream::Sink, ::java::util::function::Supplier)
public:
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::java::util::stream::Sink::accept;
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_TerminalSink_h_