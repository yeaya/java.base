#ifndef _java_util_stream_StreamSpliterators$UnorderedSliceSpliterator$PermitStatus_h_
#define _java_util_stream_StreamSpliterators$UnorderedSliceSpliterator$PermitStatus_h_
//$ class java.util.stream.StreamSpliterators$UnorderedSliceSpliterator$PermitStatus
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("NO_MORE")
#undef NO_MORE
#pragma push_macro("MAYBE_MORE")
#undef MAYBE_MORE
#pragma push_macro("UNLIMITED")
#undef UNLIMITED

namespace java {
	namespace util {
		namespace stream {

class StreamSpliterators$UnorderedSliceSpliterator$PermitStatus : public ::java::lang::Enum {
	$class(StreamSpliterators$UnorderedSliceSpliterator$PermitStatus, 0, ::java::lang::Enum)
public:
	StreamSpliterators$UnorderedSliceSpliterator$PermitStatus();
	static $Array<::java::util::stream::StreamSpliterators$UnorderedSliceSpliterator$PermitStatus>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::java::util::stream::StreamSpliterators$UnorderedSliceSpliterator$PermitStatus* valueOf($String* name);
	static $Array<::java::util::stream::StreamSpliterators$UnorderedSliceSpliterator$PermitStatus>* values();
	static ::java::util::stream::StreamSpliterators$UnorderedSliceSpliterator$PermitStatus* NO_MORE;
	static ::java::util::stream::StreamSpliterators$UnorderedSliceSpliterator$PermitStatus* MAYBE_MORE;
	static ::java::util::stream::StreamSpliterators$UnorderedSliceSpliterator$PermitStatus* UNLIMITED;
	static $Array<::java::util::stream::StreamSpliterators$UnorderedSliceSpliterator$PermitStatus>* $VALUES;
};

		} // stream
	} // util
} // java

#pragma pop_macro("NO_MORE")
#pragma pop_macro("MAYBE_MORE")
#pragma pop_macro("UNLIMITED")

#endif // _java_util_stream_StreamSpliterators$UnorderedSliceSpliterator$PermitStatus_h_