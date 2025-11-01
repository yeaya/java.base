#ifndef _java_util_stream_StreamSpliterators$ArrayBuffer$OfLong_h_
#define _java_util_stream_StreamSpliterators$ArrayBuffer$OfLong_h_
//$ class java.util.stream.StreamSpliterators$ArrayBuffer$OfLong
//$ extends java.util.stream.StreamSpliterators$ArrayBuffer$OfPrimitive
//$ implements java.util.function.LongConsumer

#include <java/lang/Array.h>
#include <java/util/function/LongConsumer.h>
#include <java/util/stream/StreamSpliterators$ArrayBuffer$OfPrimitive.h>

namespace java {
	namespace util {
		namespace stream {

class StreamSpliterators$ArrayBuffer$OfLong : public ::java::util::stream::StreamSpliterators$ArrayBuffer$OfPrimitive, public ::java::util::function::LongConsumer {
	$class(StreamSpliterators$ArrayBuffer$OfLong, $NO_CLASS_INIT, ::java::util::stream::StreamSpliterators$ArrayBuffer$OfPrimitive, ::java::util::function::LongConsumer)
public:
	StreamSpliterators$ArrayBuffer$OfLong();
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(int32_t size);
	virtual void accept(int64_t t) override;
	void forEach(::java::util::function::LongConsumer* action, int64_t fence);
	virtual void forEach(Object$* action, int64_t fence) override;
	virtual $String* toString() override;
	$longs* array = nullptr;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_StreamSpliterators$ArrayBuffer$OfLong_h_