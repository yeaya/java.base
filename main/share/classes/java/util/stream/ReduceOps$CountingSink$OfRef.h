#ifndef _java_util_stream_ReduceOps$CountingSink$OfRef_h_
#define _java_util_stream_ReduceOps$CountingSink$OfRef_h_
//$ class java.util.stream.ReduceOps$CountingSink$OfRef
//$ extends java.util.stream.ReduceOps$CountingSink

#include <java/util/stream/ReduceOps$CountingSink.h>

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

class ReduceOps$CountingSink$OfRef : public ::java::util::stream::ReduceOps$CountingSink {
	$class(ReduceOps$CountingSink$OfRef, $NO_CLASS_INIT, ::java::util::stream::ReduceOps$CountingSink)
public:
	ReduceOps$CountingSink$OfRef();
	using ::java::util::stream::ReduceOps$CountingSink::combine;
	using ::java::util::stream::ReduceOps$CountingSink::accept;
	void init$();
	virtual void accept(Object$* t) override;
	virtual void combine(::java::util::stream::ReduceOps$AccumulatingSink* other) override;
	virtual $Object* get() override;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_ReduceOps$CountingSink$OfRef_h_