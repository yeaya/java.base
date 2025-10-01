#ifndef _java_util_stream_ReduceOps$CountingSink$OfDouble_h_
#define _java_util_stream_ReduceOps$CountingSink$OfDouble_h_
//$ class java.util.stream.ReduceOps$CountingSink$OfDouble
//$ extends java.util.stream.ReduceOps$CountingSink
//$ implements java.util.stream.Sink$OfDouble

#include <java/util/stream/ReduceOps$CountingSink.h>
#include <java/util/stream/Sink$OfDouble.h>

namespace java {
	namespace util {
		namespace stream {
			class ReduceOps$AccumulatingSink;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class ReduceOps$CountingSink$OfDouble : public ::java::util::stream::ReduceOps$CountingSink, public ::java::util::stream::Sink$OfDouble {
	$class(ReduceOps$CountingSink$OfDouble, $NO_CLASS_INIT, ::java::util::stream::ReduceOps$CountingSink, ::java::util::stream::Sink$OfDouble)
public:
	ReduceOps$CountingSink$OfDouble();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::java::util::stream::ReduceOps$CountingSink::combine;
	using ::java::util::stream::Sink$OfDouble::accept;
	using ::java::util::stream::Sink$OfDouble::andThen;
	virtual void accept(int32_t value) override;
	virtual void accept(int64_t value) override;
	virtual void accept(Object$* t) override;
	virtual ::java::util::function::Consumer* andThen(::java::util::function::Consumer* after) override;
	virtual void begin(int64_t size) override;
	virtual bool cancellationRequested() override;
	virtual $Object* clone() override;
	virtual void end() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void accept(double t) override;
	virtual void combine(::java::util::stream::ReduceOps$AccumulatingSink* other) override;
	virtual $Object* get() override;
	virtual $String* toString() override;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_ReduceOps$CountingSink$OfDouble_h_