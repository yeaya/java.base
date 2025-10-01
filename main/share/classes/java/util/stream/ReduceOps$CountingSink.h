#ifndef _java_util_stream_ReduceOps$CountingSink_h_
#define _java_util_stream_ReduceOps$CountingSink_h_
//$ class java.util.stream.ReduceOps$CountingSink
//$ extends java.util.stream.ReduceOps$Box
//$ implements java.util.stream.ReduceOps$AccumulatingSink

#include <java/util/stream/ReduceOps$AccumulatingSink.h>
#include <java/util/stream/ReduceOps$Box.h>

namespace java {
	namespace util {
		namespace stream {

class ReduceOps$CountingSink : public ::java::util::stream::ReduceOps$Box, public ::java::util::stream::ReduceOps$AccumulatingSink {
	$class(ReduceOps$CountingSink, $NO_CLASS_INIT, ::java::util::stream::ReduceOps$Box, ::java::util::stream::ReduceOps$AccumulatingSink)
public:
	ReduceOps$CountingSink();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::java::util::stream::ReduceOps$AccumulatingSink::accept;
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void begin(int64_t size) override;
	virtual void combine(::java::util::stream::ReduceOps$CountingSink* other);
	virtual void combine(::java::util::stream::ReduceOps$AccumulatingSink* other) override;
	virtual $Object* get() override;
	virtual $String* toString() override;
	int64_t count = 0;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_ReduceOps$CountingSink_h_