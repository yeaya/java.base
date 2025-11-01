#ifndef _java_util_stream_StreamSpliterators$ArrayBuffer$OfRef_h_
#define _java_util_stream_StreamSpliterators$ArrayBuffer$OfRef_h_
//$ class java.util.stream.StreamSpliterators$ArrayBuffer$OfRef
//$ extends java.util.stream.StreamSpliterators$ArrayBuffer
//$ implements java.util.function.Consumer

#include <java/lang/Array.h>
#include <java/util/function/Consumer.h>
#include <java/util/stream/StreamSpliterators$ArrayBuffer.h>

namespace java {
	namespace util {
		namespace stream {

class StreamSpliterators$ArrayBuffer$OfRef : public ::java::util::stream::StreamSpliterators$ArrayBuffer, public ::java::util::function::Consumer {
	$class(StreamSpliterators$ArrayBuffer$OfRef, $NO_CLASS_INIT, ::java::util::stream::StreamSpliterators$ArrayBuffer, ::java::util::function::Consumer)
public:
	StreamSpliterators$ArrayBuffer$OfRef();
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(int32_t size);
	virtual void accept(Object$* t) override;
	void forEach(::java::util::function::Consumer* action, int64_t fence);
	virtual $String* toString() override;
	$ObjectArray* array = nullptr;
};

		} // stream
	} // util
} // java

#endif // _java_util_stream_StreamSpliterators$ArrayBuffer$OfRef_h_