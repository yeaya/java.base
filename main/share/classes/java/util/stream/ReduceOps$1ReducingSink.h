#ifndef _java_util_stream_ReduceOps$1ReducingSink_h_
#define _java_util_stream_ReduceOps$1ReducingSink_h_
//$ class java.util.stream.ReduceOps$1ReducingSink
//$ extends java.util.stream.ReduceOps$Box
//$ implements java.util.stream.ReduceOps$AccumulatingSink

#include <java/util/stream/ReduceOps$AccumulatingSink.h>
#include <java/util/stream/ReduceOps$Box.h>

namespace java {
	namespace util {
		namespace function {
			class BiFunction;
			class BinaryOperator;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class ReduceOps$1ReducingSink : public ::java::util::stream::ReduceOps$Box, public ::java::util::stream::ReduceOps$AccumulatingSink {
	$class(ReduceOps$1ReducingSink, $NO_CLASS_INIT, ::java::util::stream::ReduceOps$Box, ::java::util::stream::ReduceOps$AccumulatingSink)
public:
	ReduceOps$1ReducingSink();
	using ::java::util::stream::ReduceOps$AccumulatingSink::accept;
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual $Object* get() override;
	virtual int32_t hashCode() override;
	void init$(Object$* val$seed, ::java::util::function::BiFunction* val$reducer, ::java::util::function::BinaryOperator* val$combiner);
	virtual void accept(Object$* t) override;
	virtual void begin(int64_t size) override;
	virtual void combine(::java::util::stream::ReduceOps$1ReducingSink* other);
	virtual void combine(::java::util::stream::ReduceOps$AccumulatingSink* other) override;
	virtual $String* toString() override;
	::java::util::function::BinaryOperator* val$combiner = nullptr;
	::java::util::function::BiFunction* val$reducer = nullptr;
	$Object* val$seed = nullptr;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_ReduceOps$1ReducingSink_h_