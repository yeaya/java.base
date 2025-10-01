#ifndef _java_util_stream_ReduceOps$13ReducingSink_h_
#define _java_util_stream_ReduceOps$13ReducingSink_h_
//$ class java.util.stream.ReduceOps$13ReducingSink
//$ extends java.util.stream.ReduceOps$Box
//$ implements java.util.stream.ReduceOps$AccumulatingSink,java.util.stream.Sink$OfDouble

#include <java/util/stream/ReduceOps$AccumulatingSink.h>
#include <java/util/stream/ReduceOps$Box.h>
#include <java/util/stream/Sink$OfDouble.h>

namespace java {
	namespace util {
		namespace function {
			class BinaryOperator;
			class ObjDoubleConsumer;
			class Supplier;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class ReduceOps$13ReducingSink : public ::java::util::stream::ReduceOps$Box, public ::java::util::stream::ReduceOps$AccumulatingSink, public ::java::util::stream::Sink$OfDouble {
	$class(ReduceOps$13ReducingSink, $NO_CLASS_INIT, ::java::util::stream::ReduceOps$Box, ::java::util::stream::ReduceOps$AccumulatingSink, ::java::util::stream::Sink$OfDouble)
public:
	ReduceOps$13ReducingSink();
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
	virtual $Object* get() override;
	virtual int32_t hashCode() override;
	void init$(::java::util::function::Supplier* val$supplier, ::java::util::function::ObjDoubleConsumer* val$accumulator, ::java::util::function::BinaryOperator* val$combiner);
	virtual void accept(double t) override;
	virtual void begin(int64_t size) override;
	virtual void combine(::java::util::stream::ReduceOps$13ReducingSink* other);
	virtual void combine(::java::util::stream::ReduceOps$AccumulatingSink* other) override;
	virtual $String* toString() override;
	::java::util::function::BinaryOperator* val$combiner = nullptr;
	::java::util::function::ObjDoubleConsumer* val$accumulator = nullptr;
	::java::util::function::Supplier* val$supplier = nullptr;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_ReduceOps$13ReducingSink_h_