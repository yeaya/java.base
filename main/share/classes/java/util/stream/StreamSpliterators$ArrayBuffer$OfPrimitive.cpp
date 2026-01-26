#include <java/util/stream/StreamSpliterators$ArrayBuffer$OfPrimitive.h>

#include <java/util/stream/StreamSpliterators$ArrayBuffer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StreamSpliterators$ArrayBuffer = ::java::util::stream::StreamSpliterators$ArrayBuffer;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _StreamSpliterators$ArrayBuffer$OfPrimitive_FieldInfo_[] = {
	{"index", "I", nullptr, 0, $field(StreamSpliterators$ArrayBuffer$OfPrimitive, index)},
	{}
};

$MethodInfo _StreamSpliterators$ArrayBuffer$OfPrimitive_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(StreamSpliterators$ArrayBuffer$OfPrimitive, init$, void)},
	{"forEach", "(Ljava/lang/Object;J)V", "(TT_CONS;J)V", $ABSTRACT, $virtualMethod(StreamSpliterators$ArrayBuffer$OfPrimitive, forEach, void, Object$*, int64_t)},
	{"reset", "()V", nullptr, 0, $virtualMethod(StreamSpliterators$ArrayBuffer$OfPrimitive, reset, void)},
	{}
};

$InnerClassInfo _StreamSpliterators$ArrayBuffer$OfPrimitive_InnerClassesInfo_[] = {
	{"java.util.stream.StreamSpliterators$ArrayBuffer", "java.util.stream.StreamSpliterators", "ArrayBuffer", $STATIC | $ABSTRACT},
	{"java.util.stream.StreamSpliterators$ArrayBuffer$OfPrimitive", "java.util.stream.StreamSpliterators$ArrayBuffer", "OfPrimitive", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _StreamSpliterators$ArrayBuffer$OfPrimitive_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"java.util.stream.StreamSpliterators$ArrayBuffer$OfPrimitive",
	"java.util.stream.StreamSpliterators$ArrayBuffer",
	nullptr,
	_StreamSpliterators$ArrayBuffer$OfPrimitive_FieldInfo_,
	_StreamSpliterators$ArrayBuffer$OfPrimitive_MethodInfo_,
	"<T_CONS:Ljava/lang/Object;>Ljava/util/stream/StreamSpliterators$ArrayBuffer;",
	nullptr,
	_StreamSpliterators$ArrayBuffer$OfPrimitive_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.StreamSpliterators"
};

$Object* allocate$StreamSpliterators$ArrayBuffer$OfPrimitive($Class* clazz) {
	return $of($alloc(StreamSpliterators$ArrayBuffer$OfPrimitive));
}

void StreamSpliterators$ArrayBuffer$OfPrimitive::init$() {
	$StreamSpliterators$ArrayBuffer::init$();
}

void StreamSpliterators$ArrayBuffer$OfPrimitive::reset() {
	this->index = 0;
}

StreamSpliterators$ArrayBuffer$OfPrimitive::StreamSpliterators$ArrayBuffer$OfPrimitive() {
}

$Class* StreamSpliterators$ArrayBuffer$OfPrimitive::load$($String* name, bool initialize) {
	$loadClass(StreamSpliterators$ArrayBuffer$OfPrimitive, name, initialize, &_StreamSpliterators$ArrayBuffer$OfPrimitive_ClassInfo_, allocate$StreamSpliterators$ArrayBuffer$OfPrimitive);
	return class$;
}

$Class* StreamSpliterators$ArrayBuffer$OfPrimitive::class$ = nullptr;

		} // stream
	} // util
} // java