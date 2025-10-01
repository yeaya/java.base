#ifndef _java_util_stream_ReduceOps$4ReducingSink_h_
#define _java_util_stream_ReduceOps$4ReducingSink_h_
//$ class java.util.stream.ReduceOps$4ReducingSink
//$ extends java.util.stream.ReduceOps$Box
//$ implements java.util.stream.ReduceOps$AccumulatingSink

#include <java/util/stream/ReduceOps$AccumulatingSink.h>
#include <java/util/stream/ReduceOps$Box.h>

namespace java {
	namespace util {
		namespace function {
			class BiConsumer;
			class Supplier;
		}
	}
}

namespace java {
	namespace util {
		namespace stream {

class ReduceOps$4ReducingSink : public ::java::util::stream::ReduceOps$Box, public ::java::util::stream::ReduceOps$AccumulatingSink {
	$class(ReduceOps$4ReducingSink, $NO_CLASS_INIT, ::java::util::stream::ReduceOps$Box, ::java::util::stream::ReduceOps$AccumulatingSink)
public:
	ReduceOps$4ReducingSink();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::java::util::stream::ReduceOps$AccumulatingSink::accept;
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual $Object* get() override;
	virtual int32_t hashCode() override;
	void init$(::java::util::function::Supplier* val$seedFactory, ::java::util::function::BiConsumer* val$accumulator, ::java::util::function::BiConsumer* val$reducer);
	virtual void accept(Object$* t) override;
	virtual void begin(int64_t size) override;
	virtual void combine(::java::util::stream::ReduceOps$4ReducingSink* other);
	virtual void combine(::java::util::stream::ReduceOps$AccumulatingSink* other) override;
	virtual $String* toString() override;
	::java::util::function::BiConsumer* val$reducer = nullptr;
	::java::util::function::BiConsumer* val$accumulator = nullptr;
	::java::util::function::Supplier* val$seedFactory = nullptr;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_ReduceOps$4ReducingSink_h_