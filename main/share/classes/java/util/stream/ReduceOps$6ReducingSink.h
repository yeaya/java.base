#ifndef _java_util_stream_ReduceOps$6ReducingSink_h_
#define _java_util_stream_ReduceOps$6ReducingSink_h_
//$ class java.util.stream.ReduceOps$6ReducingSink
//$ extends java.util.stream.ReduceOps$AccumulatingSink
//$ implements java.util.stream.Sink$OfInt

#include <java/util/stream/ReduceOps$AccumulatingSink.h>
#include <java/util/stream/Sink$OfInt.h>

namespace java {
	namespace util {
		namespace function {
			class IntBinaryOperator;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class ReduceOps$6ReducingSink : public ::java::util::stream::ReduceOps$AccumulatingSink, public ::java::util::stream::Sink$OfInt {
	$class(ReduceOps$6ReducingSink, $NO_CLASS_INIT, ::java::util::stream::ReduceOps$AccumulatingSink, ::java::util::stream::Sink$OfInt)
public:
	ReduceOps$6ReducingSink();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::java::util::stream::Sink$OfInt::accept;
	using ::java::util::stream::Sink$OfInt::andThen;
	virtual void accept(int64_t value) override;
	virtual void accept(double value) override;
	virtual void accept(Object$* t) override;
	virtual ::java::util::function::Consumer* andThen(::java::util::function::Consumer* after) override;
	virtual bool cancellationRequested() override;
	virtual $Object* clone() override;
	virtual void end() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::util::function::IntBinaryOperator* val$operator);
	virtual void accept(int32_t t) override;
	virtual void begin(int64_t size) override;
	virtual void combine(::java::util::stream::ReduceOps$6ReducingSink* other);
	virtual void combine(::java::util::stream::ReduceOps$AccumulatingSink* other) override;
	virtual $Object* get() override;
	virtual $String* toString() override;
	::java::util::function::IntBinaryOperator* val$operator = nullptr;
	bool empty = false;
	int32_t state = 0;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_ReduceOps$6ReducingSink_h_