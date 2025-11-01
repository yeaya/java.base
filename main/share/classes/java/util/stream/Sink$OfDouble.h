#ifndef _java_util_stream_Sink$OfDouble_h_
#define _java_util_stream_Sink$OfDouble_h_
//$ interface java.util.stream.Sink$OfDouble
//$ extends java.util.stream.Sink,java.util.function.DoubleConsumer

#include <java/util/function/DoubleConsumer.h>
#include <java/util/stream/Sink.h>

namespace java {
	namespace lang {
		class Double;
	}
}

namespace java {
	namespace util {
		namespace stream {

class Sink$OfDouble : public ::java::util::stream::Sink, public ::java::util::function::DoubleConsumer {
	$interface(Sink$OfDouble, $NO_CLASS_INIT, ::java::util::stream::Sink, ::java::util::function::DoubleConsumer)
public:
	using ::java::util::stream::Sink::accept;
	virtual void accept(double value) override {}
	virtual void accept(::java::lang::Double* i);
	virtual void accept(Object$* i) override;
	using ::java::util::stream::Sink::andThen;
	using ::java::util::function::DoubleConsumer::andThen;
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_Sink$OfDouble_h_