#include <java/util/stream/StreamSpliterators$ArrayBuffer.h>
#include <java/util/stream/StreamSpliterators.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace stream {

void StreamSpliterators$ArrayBuffer::init$() {
}

void StreamSpliterators$ArrayBuffer::reset() {
	this->index = 0;
}

StreamSpliterators$ArrayBuffer::StreamSpliterators$ArrayBuffer() {
}

$Class* StreamSpliterators$ArrayBuffer::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"index", "I", nullptr, 0, $field(StreamSpliterators$ArrayBuffer, index)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(StreamSpliterators$ArrayBuffer, init$, void)},
		{"reset", "()V", nullptr, 0, $virtualMethod(StreamSpliterators$ArrayBuffer, reset, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.stream.StreamSpliterators$ArrayBuffer", "java.util.stream.StreamSpliterators", "ArrayBuffer", $STATIC | $ABSTRACT},
		{"java.util.stream.StreamSpliterators$ArrayBuffer$OfDouble", "java.util.stream.StreamSpliterators$ArrayBuffer", "OfDouble", $STATIC | $FINAL},
		{"java.util.stream.StreamSpliterators$ArrayBuffer$OfLong", "java.util.stream.StreamSpliterators$ArrayBuffer", "OfLong", $STATIC | $FINAL},
		{"java.util.stream.StreamSpliterators$ArrayBuffer$OfInt", "java.util.stream.StreamSpliterators$ArrayBuffer", "OfInt", $STATIC | $FINAL},
		{"java.util.stream.StreamSpliterators$ArrayBuffer$OfPrimitive", "java.util.stream.StreamSpliterators$ArrayBuffer", "OfPrimitive", $STATIC | $ABSTRACT},
		{"java.util.stream.StreamSpliterators$ArrayBuffer$OfRef", "java.util.stream.StreamSpliterators$ArrayBuffer", "OfRef", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"java.util.stream.StreamSpliterators$ArrayBuffer",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.stream.StreamSpliterators"
	};
	$loadClass(StreamSpliterators$ArrayBuffer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StreamSpliterators$ArrayBuffer);
	});
	return class$;
}

$Class* StreamSpliterators$ArrayBuffer::class$ = nullptr;

		} // stream
	} // util
} // java