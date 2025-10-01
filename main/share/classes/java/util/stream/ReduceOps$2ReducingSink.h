#ifndef _java_util_stream_ReduceOps$2ReducingSink_h_
#define _java_util_stream_ReduceOps$2ReducingSink_h_
//$ class java.util.stream.ReduceOps$2ReducingSink
//$ extends java.util.stream.ReduceOps$AccumulatingSink

#include <java/util/stream/ReduceOps$AccumulatingSink.h>

namespace java {
	namespace util {
		namespace function {
			class BinaryOperator;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class ReduceOps$2ReducingSink : public ::java::util::stream::ReduceOps$AccumulatingSink {
	$class(ReduceOps$2ReducingSink, $NO_CLASS_INIT, ::java::util::stream::ReduceOps$AccumulatingSink)
public:
	ReduceOps$2ReducingSink();
	using ::java::util::stream::ReduceOps$AccumulatingSink::accept;
	void init$(::java::util::function::BinaryOperator* val$operator);
	virtual void accept(Object$* t) override;
	virtual void begin(int64_t size) override;
	virtual void combine(::java::util::stream::ReduceOps$2ReducingSink* other);
	virtual void combine(::java::util::stream::ReduceOps$AccumulatingSink* other) override;
	virtual $Object* get() override;
	::java::util::function::BinaryOperator* val$operator = nullptr;
	bool empty = false;
	$Object* state = nullptr;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_ReduceOps$2ReducingSink_h_