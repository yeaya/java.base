#ifndef _java_util_stream_StreamSpliterators$ArrayBuffer$OfInt_h_
#define _java_util_stream_StreamSpliterators$ArrayBuffer$OfInt_h_
//$ class java.util.stream.StreamSpliterators$ArrayBuffer$OfInt
//$ extends java.util.stream.StreamSpliterators$ArrayBuffer$OfPrimitive
//$ implements java.util.function.IntConsumer

#include <java/lang/Array.h>
#include <java/util/function/IntConsumer.h>
#include <java/util/stream/StreamSpliterators$ArrayBuffer$OfPrimitive.h>

namespace java {
	namespace util {
		namespace stream {

class StreamSpliterators$ArrayBuffer$OfInt : public ::java::util::stream::StreamSpliterators$ArrayBuffer$OfPrimitive, public ::java::util::function::IntConsumer {
	$class(StreamSpliterators$ArrayBuffer$OfInt, $NO_CLASS_INIT, ::java::util::stream::StreamSpliterators$ArrayBuffer$OfPrimitive, ::java::util::function::IntConsumer)
public:
	StreamSpliterators$ArrayBuffer$OfInt();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(int32_t size);
	virtual void accept(int32_t t) override;
	void forEach(::java::util::function::IntConsumer* action, int64_t fence);
	virtual void forEach(Object$* action, int64_t fence) override;
	virtual $String* toString() override;
	$ints* array = nullptr;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_StreamSpliterators$ArrayBuffer$OfInt_h_