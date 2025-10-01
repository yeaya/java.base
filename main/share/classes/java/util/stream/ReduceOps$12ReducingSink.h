#ifndef _java_util_stream_ReduceOps$12ReducingSink_h_
#define _java_util_stream_ReduceOps$12ReducingSink_h_
//$ class java.util.stream.ReduceOps$12ReducingSink
//$ extends java.util.stream.ReduceOps$AccumulatingSink
//$ implements java.util.stream.Sink$OfDouble

#include <java/util/stream/ReduceOps$AccumulatingSink.h>
#include <java/util/stream/Sink$OfDouble.h>

namespace java {
	namespace util {
		namespace function {
			class DoubleBinaryOperator;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class ReduceOps$12ReducingSink : public ::java::util::stream::ReduceOps$AccumulatingSink, public ::java::util::stream::Sink$OfDouble {
	$class(ReduceOps$12ReducingSink, $NO_CLASS_INIT, ::java::util::stream::ReduceOps$AccumulatingSink, ::java::util::stream::Sink$OfDouble)
public:
	ReduceOps$12ReducingSink();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::java::util::stream::Sink$OfDouble::accept;
	using ::java::util::stream::Sink$OfDouble::andThen;
	virtual void accept(int32_t value) override;
	virtual void accept(int64_t value) override;
	virtual void accept(Object$* t) override;
	virtual ::java::util::function::Consumer* andThen(::java::util::function::Consumer* after) override;
	virtual bool cancellationRequested() override;
	virtual $Object* clone() override;
	virtual void end() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::util::function::DoubleBinaryOperator* val$operator);
	virtual void accept(double t) override;
	virtual void begin(int64_t size) override;
	virtual void combine(::java::util::stream::ReduceOps$12ReducingSink* other);
	virtual void combine(::java::util::stream::ReduceOps$AccumulatingSink* other) override;
	virtual $Object* get() override;
	virtual $String* toString() override;
	::java::util::function::DoubleBinaryOperator* val$operator = nullptr;
	bool empty = false;
	double state = 0.0;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_ReduceOps$12ReducingSink_h_