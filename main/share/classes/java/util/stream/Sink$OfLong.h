#ifndef _java_util_stream_Sink$OfLong_h_
#define _java_util_stream_Sink$OfLong_h_
//$ interface java.util.stream.Sink$OfLong
//$ extends java.util.stream.Sink,java.util.function.LongConsumer

#include <java/util/function/LongConsumer.h>
#include <java/util/stream/Sink.h>

namespace java {
	namespace lang {
		class Long;
	}
}

namespace java {
	namespace util {
		namespace stream {

class Sink$OfLong : public ::java::util::stream::Sink, public ::java::util::function::LongConsumer {
	$interface(Sink$OfLong, $NO_CLASS_INIT, ::java::util::stream::Sink, ::java::util::function::LongConsumer)
public:
	using ::java::util::stream::Sink::accept;
	virtual void accept(int64_t value) override {}
	virtual void accept(::java::lang::Long* i);
	virtual void accept(Object$* i) override;
	using ::java::util::stream::Sink::andThen;
	using ::java::util::function::LongConsumer::andThen;
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_Sink$OfLong_h_