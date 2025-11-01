#ifndef _java_util_stream_ReduceOps$8ReducingSink_h_
#define _java_util_stream_ReduceOps$8ReducingSink_h_
//$ class java.util.stream.ReduceOps$8ReducingSink
//$ extends java.util.stream.ReduceOps$AccumulatingSink
//$ implements java.util.stream.Sink$OfLong

#include <java/util/stream/ReduceOps$AccumulatingSink.h>
#include <java/util/stream/Sink$OfLong.h>

namespace java {
	namespace util {
		namespace function {
			class LongBinaryOperator;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class ReduceOps$8ReducingSink : public ::java::util::stream::ReduceOps$AccumulatingSink, public ::java::util::stream::Sink$OfLong {
	$class(ReduceOps$8ReducingSink, $NO_CLASS_INIT, ::java::util::stream::ReduceOps$AccumulatingSink, ::java::util::stream::Sink$OfLong)
public:
	ReduceOps$8ReducingSink();
	using ::java::util::stream::Sink$OfLong::accept;
	using ::java::util::stream::Sink$OfLong::andThen;
	virtual void accept(int32_t value) override;
	virtual void accept(double value) override;
	virtual void accept(Object$* t) override;
	virtual ::java::util::function::Consumer* andThen(::java::util::function::Consumer* after) override;
	virtual bool cancellationRequested() override;
	virtual $Object* clone() override;
	virtual void end() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(int64_t val$identity, ::java::util::function::LongBinaryOperator* val$operator);
	virtual void accept(int64_t t) override;
	virtual void begin(int64_t size) override;
	virtual void combine(::java::util::stream::ReduceOps$8ReducingSink* other);
	virtual void combine(::java::util::stream::ReduceOps$AccumulatingSink* other) override;
	virtual $Object* get() override;
	virtual $String* toString() override;
	::java::util::function::LongBinaryOperator* val$operator = nullptr;
	int64_t val$identity = 0;
	int64_t state = 0;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_ReduceOps$8ReducingSink_h_