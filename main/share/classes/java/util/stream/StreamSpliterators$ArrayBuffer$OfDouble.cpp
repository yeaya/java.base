#include <java/util/stream/StreamSpliterators$ArrayBuffer$OfDouble.h>
#include <java/util/function/DoubleConsumer.h>
#include <java/util/stream/StreamSpliterators$ArrayBuffer$OfPrimitive.h>
#include <java/util/stream/StreamSpliterators$ArrayBuffer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DoubleConsumer = ::java::util::function::DoubleConsumer;
using $StreamSpliterators$ArrayBuffer$OfPrimitive = ::java::util::stream::StreamSpliterators$ArrayBuffer$OfPrimitive;

namespace java {
	namespace util {
		namespace stream {

int32_t StreamSpliterators$ArrayBuffer$OfDouble::hashCode() {
	 return this->$StreamSpliterators$ArrayBuffer$OfPrimitive::hashCode();
}

bool StreamSpliterators$ArrayBuffer$OfDouble::equals(Object$* obj) {
	 return this->$StreamSpliterators$ArrayBuffer$OfPrimitive::equals(obj);
}

$Object* StreamSpliterators$ArrayBuffer$OfDouble::clone() {
	 return this->$StreamSpliterators$ArrayBuffer$OfPrimitive::clone();
}

$String* StreamSpliterators$ArrayBuffer$OfDouble::toString() {
	 return this->$StreamSpliterators$ArrayBuffer$OfPrimitive::toString();
}

void StreamSpliterators$ArrayBuffer$OfDouble::finalize() {
	this->$StreamSpliterators$ArrayBuffer$OfPrimitive::finalize();
}

void StreamSpliterators$ArrayBuffer$OfDouble::init$(int32_t size) {
	$StreamSpliterators$ArrayBuffer$OfPrimitive::init$();
	$set(this, array, $new($doubles, size));
}

void StreamSpliterators$ArrayBuffer$OfDouble::accept(double t) {
	$nc(this->array)->set(this->index++, t);
}

void StreamSpliterators$ArrayBuffer$OfDouble::forEach($DoubleConsumer* action, int64_t fence) {
	for (int32_t i = 0; i < fence; ++i) {
		$nc(action)->accept($nc(this->array)->get(i));
	}
}

void StreamSpliterators$ArrayBuffer$OfDouble::forEach(Object$* action, int64_t fence) {
	this->forEach($cast($DoubleConsumer, action), fence);
}

StreamSpliterators$ArrayBuffer$OfDouble::StreamSpliterators$ArrayBuffer$OfDouble() {
}

$Class* StreamSpliterators$ArrayBuffer$OfDouble::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"array", "[D", nullptr, $FINAL, $field(StreamSpliterators$ArrayBuffer$OfDouble, array)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(I)V", nullptr, 0, $method(StreamSpliterators$ArrayBuffer$OfDouble, init$, void, int32_t)},
		{"accept", "(D)V", nullptr, $PUBLIC, $virtualMethod(StreamSpliterators$ArrayBuffer$OfDouble, accept, void, double)},
		{"forEach", "(Ljava/util/function/DoubleConsumer;J)V", nullptr, 0, $method(StreamSpliterators$ArrayBuffer$OfDouble, forEach, void, $DoubleConsumer*, int64_t)},
		{"forEach", "(Ljava/lang/Object;J)V", nullptr, $VOLATILE | $SYNTHETIC, $virtualMethod(StreamSpliterators$ArrayBuffer$OfDouble, forEach, void, Object$*, int64_t)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.stream.StreamSpliterators$ArrayBuffer", "java.util.stream.StreamSpliterators", "ArrayBuffer", $STATIC | $ABSTRACT},
		{"java.util.stream.StreamSpliterators$ArrayBuffer$OfDouble", "java.util.stream.StreamSpliterators$ArrayBuffer", "OfDouble", $STATIC | $FINAL},
		{"java.util.stream.StreamSpliterators$ArrayBuffer$OfPrimitive", "java.util.stream.StreamSpliterators$ArrayBuffer", "OfPrimitive", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.stream.StreamSpliterators$ArrayBuffer$OfDouble",
		"java.util.stream.StreamSpliterators$ArrayBuffer$OfPrimitive",
		"java.util.function.DoubleConsumer",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/util/stream/StreamSpliterators$ArrayBuffer$OfPrimitive<Ljava/util/function/DoubleConsumer;>;Ljava/util/function/DoubleConsumer;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.stream.StreamSpliterators"
	};
	$loadClass(StreamSpliterators$ArrayBuffer$OfDouble, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(StreamSpliterators$ArrayBuffer$OfDouble));
	});
	return class$;
}

$Class* StreamSpliterators$ArrayBuffer$OfDouble::class$ = nullptr;

		} // stream
	} // util
} // java