#ifndef _java_util_stream_Sink$OfInt_h_
#define _java_util_stream_Sink$OfInt_h_
//$ interface java.util.stream.Sink$OfInt
//$ extends java.util.stream.Sink,java.util.function.IntConsumer

#include <java/util/function/IntConsumer.h>
#include <java/util/stream/Sink.h>

namespace java {
	namespace lang {
		class Integer;
	}
}

namespace java {
	namespace util {
		namespace stream {

class Sink$OfInt : public ::java::util::stream::Sink, public ::java::util::function::IntConsumer {
	$interface(Sink$OfInt, $NO_CLASS_INIT, ::java::util::stream::Sink, ::java::util::function::IntConsumer)
public:
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::java::util::stream::Sink::accept;
	virtual void accept(int32_t value) override {}
	virtual void accept(::java::lang::Integer* i);
	virtual void accept(Object$* i) override;
	using ::java::util::stream::Sink::andThen;
	using ::java::util::function::IntConsumer::andThen;
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_Sink$OfInt_h_