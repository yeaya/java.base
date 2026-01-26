#include <java/util/stream/StreamSpliterators$ArrayBuffer$OfInt.h>

#include <java/util/function/IntConsumer.h>
#include <java/util/stream/StreamSpliterators$ArrayBuffer$OfPrimitive.h>
#include <java/util/stream/StreamSpliterators$ArrayBuffer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $IntConsumer = ::java::util::function::IntConsumer;
using $StreamSpliterators$ArrayBuffer$OfPrimitive = ::java::util::stream::StreamSpliterators$ArrayBuffer$OfPrimitive;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _StreamSpliterators$ArrayBuffer$OfInt_FieldInfo_[] = {
	{"array", "[I", nullptr, $FINAL, $field(StreamSpliterators$ArrayBuffer$OfInt, array)},
	{}
};

$MethodInfo _StreamSpliterators$ArrayBuffer$OfInt_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(I)V", nullptr, 0, $method(StreamSpliterators$ArrayBuffer$OfInt, init$, void, int32_t)},
	{"accept", "(I)V", nullptr, $PUBLIC, $virtualMethod(StreamSpliterators$ArrayBuffer$OfInt, accept, void, int32_t)},
	{"forEach", "(Ljava/util/function/IntConsumer;J)V", nullptr, $PUBLIC, $method(StreamSpliterators$ArrayBuffer$OfInt, forEach, void, $IntConsumer*, int64_t)},
	{"forEach", "(Ljava/lang/Object;J)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(StreamSpliterators$ArrayBuffer$OfInt, forEach, void, Object$*, int64_t)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _StreamSpliterators$ArrayBuffer$OfInt_InnerClassesInfo_[] = {
	{"java.util.stream.StreamSpliterators$ArrayBuffer", "java.util.stream.StreamSpliterators", "ArrayBuffer", $STATIC | $ABSTRACT},
	{"java.util.stream.StreamSpliterators$ArrayBuffer$OfInt", "java.util.stream.StreamSpliterators$ArrayBuffer", "OfInt", $STATIC | $FINAL},
	{"java.util.stream.StreamSpliterators$ArrayBuffer$OfPrimitive", "java.util.stream.StreamSpliterators$ArrayBuffer", "OfPrimitive", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _StreamSpliterators$ArrayBuffer$OfInt_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.stream.StreamSpliterators$ArrayBuffer$OfInt",
	"java.util.stream.StreamSpliterators$ArrayBuffer$OfPrimitive",
	"java.util.function.IntConsumer",
	_StreamSpliterators$ArrayBuffer$OfInt_FieldInfo_,
	_StreamSpliterators$ArrayBuffer$OfInt_MethodInfo_,
	"Ljava/util/stream/StreamSpliterators$ArrayBuffer$OfPrimitive<Ljava/util/function/IntConsumer;>;Ljava/util/function/IntConsumer;",
	nullptr,
	_StreamSpliterators$ArrayBuffer$OfInt_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.StreamSpliterators"
};

$Object* allocate$StreamSpliterators$ArrayBuffer$OfInt($Class* clazz) {
	return $of($alloc(StreamSpliterators$ArrayBuffer$OfInt));
}

int32_t StreamSpliterators$ArrayBuffer$OfInt::hashCode() {
	 return this->$StreamSpliterators$ArrayBuffer$OfPrimitive::hashCode();
}

bool StreamSpliterators$ArrayBuffer$OfInt::equals(Object$* obj) {
	 return this->$StreamSpliterators$ArrayBuffer$OfPrimitive::equals(obj);
}

$Object* StreamSpliterators$ArrayBuffer$OfInt::clone() {
	 return this->$StreamSpliterators$ArrayBuffer$OfPrimitive::clone();
}

$String* StreamSpliterators$ArrayBuffer$OfInt::toString() {
	 return this->$StreamSpliterators$ArrayBuffer$OfPrimitive::toString();
}

void StreamSpliterators$ArrayBuffer$OfInt::finalize() {
	this->$StreamSpliterators$ArrayBuffer$OfPrimitive::finalize();
}

void StreamSpliterators$ArrayBuffer$OfInt::init$(int32_t size) {
	$StreamSpliterators$ArrayBuffer$OfPrimitive::init$();
	$set(this, array, $new($ints, size));
}

void StreamSpliterators$ArrayBuffer$OfInt::accept(int32_t t) {
	$nc(this->array)->set(this->index++, t);
}

void StreamSpliterators$ArrayBuffer$OfInt::forEach($IntConsumer* action, int64_t fence) {
	for (int32_t i = 0; i < fence; ++i) {
		$nc(action)->accept($nc(this->array)->get(i));
	}
}

void StreamSpliterators$ArrayBuffer$OfInt::forEach(Object$* action, int64_t fence) {
	this->forEach($cast($IntConsumer, action), fence);
}

StreamSpliterators$ArrayBuffer$OfInt::StreamSpliterators$ArrayBuffer$OfInt() {
}

$Class* StreamSpliterators$ArrayBuffer$OfInt::load$($String* name, bool initialize) {
	$loadClass(StreamSpliterators$ArrayBuffer$OfInt, name, initialize, &_StreamSpliterators$ArrayBuffer$OfInt_ClassInfo_, allocate$StreamSpliterators$ArrayBuffer$OfInt);
	return class$;
}

$Class* StreamSpliterators$ArrayBuffer$OfInt::class$ = nullptr;

		} // stream
	} // util
} // java