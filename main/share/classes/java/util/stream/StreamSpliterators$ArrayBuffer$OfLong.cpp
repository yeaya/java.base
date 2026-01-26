#include <java/util/stream/StreamSpliterators$ArrayBuffer$OfLong.h>

#include <java/util/function/LongConsumer.h>
#include <java/util/stream/StreamSpliterators$ArrayBuffer$OfPrimitive.h>
#include <java/util/stream/StreamSpliterators$ArrayBuffer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LongConsumer = ::java::util::function::LongConsumer;
using $StreamSpliterators$ArrayBuffer$OfPrimitive = ::java::util::stream::StreamSpliterators$ArrayBuffer$OfPrimitive;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _StreamSpliterators$ArrayBuffer$OfLong_FieldInfo_[] = {
	{"array", "[J", nullptr, $FINAL, $field(StreamSpliterators$ArrayBuffer$OfLong, array)},
	{}
};

$MethodInfo _StreamSpliterators$ArrayBuffer$OfLong_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(I)V", nullptr, 0, $method(StreamSpliterators$ArrayBuffer$OfLong, init$, void, int32_t)},
	{"accept", "(J)V", nullptr, $PUBLIC, $virtualMethod(StreamSpliterators$ArrayBuffer$OfLong, accept, void, int64_t)},
	{"forEach", "(Ljava/util/function/LongConsumer;J)V", nullptr, $PUBLIC, $method(StreamSpliterators$ArrayBuffer$OfLong, forEach, void, $LongConsumer*, int64_t)},
	{"forEach", "(Ljava/lang/Object;J)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(StreamSpliterators$ArrayBuffer$OfLong, forEach, void, Object$*, int64_t)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _StreamSpliterators$ArrayBuffer$OfLong_InnerClassesInfo_[] = {
	{"java.util.stream.StreamSpliterators$ArrayBuffer", "java.util.stream.StreamSpliterators", "ArrayBuffer", $STATIC | $ABSTRACT},
	{"java.util.stream.StreamSpliterators$ArrayBuffer$OfLong", "java.util.stream.StreamSpliterators$ArrayBuffer", "OfLong", $STATIC | $FINAL},
	{"java.util.stream.StreamSpliterators$ArrayBuffer$OfPrimitive", "java.util.stream.StreamSpliterators$ArrayBuffer", "OfPrimitive", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _StreamSpliterators$ArrayBuffer$OfLong_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.stream.StreamSpliterators$ArrayBuffer$OfLong",
	"java.util.stream.StreamSpliterators$ArrayBuffer$OfPrimitive",
	"java.util.function.LongConsumer",
	_StreamSpliterators$ArrayBuffer$OfLong_FieldInfo_,
	_StreamSpliterators$ArrayBuffer$OfLong_MethodInfo_,
	"Ljava/util/stream/StreamSpliterators$ArrayBuffer$OfPrimitive<Ljava/util/function/LongConsumer;>;Ljava/util/function/LongConsumer;",
	nullptr,
	_StreamSpliterators$ArrayBuffer$OfLong_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.StreamSpliterators"
};

$Object* allocate$StreamSpliterators$ArrayBuffer$OfLong($Class* clazz) {
	return $of($alloc(StreamSpliterators$ArrayBuffer$OfLong));
}

int32_t StreamSpliterators$ArrayBuffer$OfLong::hashCode() {
	 return this->$StreamSpliterators$ArrayBuffer$OfPrimitive::hashCode();
}

bool StreamSpliterators$ArrayBuffer$OfLong::equals(Object$* obj) {
	 return this->$StreamSpliterators$ArrayBuffer$OfPrimitive::equals(obj);
}

$Object* StreamSpliterators$ArrayBuffer$OfLong::clone() {
	 return this->$StreamSpliterators$ArrayBuffer$OfPrimitive::clone();
}

$String* StreamSpliterators$ArrayBuffer$OfLong::toString() {
	 return this->$StreamSpliterators$ArrayBuffer$OfPrimitive::toString();
}

void StreamSpliterators$ArrayBuffer$OfLong::finalize() {
	this->$StreamSpliterators$ArrayBuffer$OfPrimitive::finalize();
}

void StreamSpliterators$ArrayBuffer$OfLong::init$(int32_t size) {
	$StreamSpliterators$ArrayBuffer$OfPrimitive::init$();
	$set(this, array, $new($longs, size));
}

void StreamSpliterators$ArrayBuffer$OfLong::accept(int64_t t) {
	$nc(this->array)->set(this->index++, t);
}

void StreamSpliterators$ArrayBuffer$OfLong::forEach($LongConsumer* action, int64_t fence) {
	for (int32_t i = 0; i < fence; ++i) {
		$nc(action)->accept($nc(this->array)->get(i));
	}
}

void StreamSpliterators$ArrayBuffer$OfLong::forEach(Object$* action, int64_t fence) {
	this->forEach($cast($LongConsumer, action), fence);
}

StreamSpliterators$ArrayBuffer$OfLong::StreamSpliterators$ArrayBuffer$OfLong() {
}

$Class* StreamSpliterators$ArrayBuffer$OfLong::load$($String* name, bool initialize) {
	$loadClass(StreamSpliterators$ArrayBuffer$OfLong, name, initialize, &_StreamSpliterators$ArrayBuffer$OfLong_ClassInfo_, allocate$StreamSpliterators$ArrayBuffer$OfLong);
	return class$;
}

$Class* StreamSpliterators$ArrayBuffer$OfLong::class$ = nullptr;

		} // stream
	} // util
} // java