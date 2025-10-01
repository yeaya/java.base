#include <java/util/stream/StreamSpliterators$ArrayBuffer.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/stream/StreamSpliterators.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StreamSpliterators = ::java::util::stream::StreamSpliterators;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _StreamSpliterators$ArrayBuffer_FieldInfo_[] = {
	{"index", "I", nullptr, 0, $field(StreamSpliterators$ArrayBuffer, index)},
	{}
};

$MethodInfo _StreamSpliterators$ArrayBuffer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(StreamSpliterators$ArrayBuffer::*)()>(&StreamSpliterators$ArrayBuffer::init$))},
	{"reset", "()V", nullptr, 0},
	{}
};

$InnerClassInfo _StreamSpliterators$ArrayBuffer_InnerClassesInfo_[] = {
	{"java.util.stream.StreamSpliterators$ArrayBuffer", "java.util.stream.StreamSpliterators", "ArrayBuffer", $STATIC | $ABSTRACT},
	{"java.util.stream.StreamSpliterators$ArrayBuffer$OfDouble", "java.util.stream.StreamSpliterators$ArrayBuffer", "OfDouble", $STATIC | $FINAL},
	{"java.util.stream.StreamSpliterators$ArrayBuffer$OfLong", "java.util.stream.StreamSpliterators$ArrayBuffer", "OfLong", $STATIC | $FINAL},
	{"java.util.stream.StreamSpliterators$ArrayBuffer$OfInt", "java.util.stream.StreamSpliterators$ArrayBuffer", "OfInt", $STATIC | $FINAL},
	{"java.util.stream.StreamSpliterators$ArrayBuffer$OfPrimitive", "java.util.stream.StreamSpliterators$ArrayBuffer", "OfPrimitive", $STATIC | $ABSTRACT},
	{"java.util.stream.StreamSpliterators$ArrayBuffer$OfRef", "java.util.stream.StreamSpliterators$ArrayBuffer", "OfRef", $STATIC | $FINAL},
	{}
};

$ClassInfo _StreamSpliterators$ArrayBuffer_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"java.util.stream.StreamSpliterators$ArrayBuffer",
	"java.lang.Object",
	nullptr,
	_StreamSpliterators$ArrayBuffer_FieldInfo_,
	_StreamSpliterators$ArrayBuffer_MethodInfo_,
	nullptr,
	nullptr,
	_StreamSpliterators$ArrayBuffer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.StreamSpliterators"
};

$Object* allocate$StreamSpliterators$ArrayBuffer($Class* clazz) {
	return $of($alloc(StreamSpliterators$ArrayBuffer));
}

void StreamSpliterators$ArrayBuffer::init$() {
}

void StreamSpliterators$ArrayBuffer::reset() {
	this->index = 0;
}

StreamSpliterators$ArrayBuffer::StreamSpliterators$ArrayBuffer() {
}

$Class* StreamSpliterators$ArrayBuffer::load$($String* name, bool initialize) {
	$loadClass(StreamSpliterators$ArrayBuffer, name, initialize, &_StreamSpliterators$ArrayBuffer_ClassInfo_, allocate$StreamSpliterators$ArrayBuffer);
	return class$;
}

$Class* StreamSpliterators$ArrayBuffer::class$ = nullptr;

		} // stream
	} // util
} // java