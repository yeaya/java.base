#ifndef _java_util_stream_StreamSpliterators$ArrayBuffer$OfDouble_h_
#define _java_util_stream_StreamSpliterators$ArrayBuffer$OfDouble_h_
//$ class java.util.stream.StreamSpliterators$ArrayBuffer$OfDouble
//$ extends java.util.stream.StreamSpliterators$ArrayBuffer$OfPrimitive
//$ implements java.util.function.DoubleConsumer

#include <java/lang/Array.h>
#include <java/util/function/DoubleConsumer.h>
#include <java/util/stream/StreamSpliterators$ArrayBuffer$OfPrimitive.h>

namespace java {
	namespace util {
		namespace stream {

class StreamSpliterators$ArrayBuffer$OfDouble : public ::java::util::stream::StreamSpliterators$ArrayBuffer$OfPrimitive, public ::java::util::function::DoubleConsumer {
	$class(StreamSpliterators$ArrayBuffer$OfDouble, $NO_CLASS_INIT, ::java::util::stream::StreamSpliterators$ArrayBuffer$OfPrimitive, ::java::util::function::DoubleConsumer)
public:
	StreamSpliterators$ArrayBuffer$OfDouble();
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(int32_t size);
	virtual void accept(double t) override;
	void forEach(::java::util::function::DoubleConsumer* action, int64_t fence);
	virtual void forEach(Object$* action, int64_t fence) override;
	virtual $String* toString() override;
	$doubles* array = nullptr;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_StreamSpliterators$ArrayBuffer$OfDouble_h_