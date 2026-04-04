#include <java/util/stream/StreamSpliterators$ArrayBuffer$OfRef.h>
#include <java/util/function/Consumer.h>
#include <java/util/stream/StreamSpliterators$ArrayBuffer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Consumer = ::java::util::function::Consumer;
using $StreamSpliterators$ArrayBuffer = ::java::util::stream::StreamSpliterators$ArrayBuffer;

namespace java {
	namespace util {
		namespace stream {

int32_t StreamSpliterators$ArrayBuffer$OfRef::hashCode() {
	 return this->$StreamSpliterators$ArrayBuffer::hashCode();
}

bool StreamSpliterators$ArrayBuffer$OfRef::equals(Object$* obj) {
	 return this->$StreamSpliterators$ArrayBuffer::equals(obj);
}

$Object* StreamSpliterators$ArrayBuffer$OfRef::clone() {
	 return this->$StreamSpliterators$ArrayBuffer::clone();
}

$String* StreamSpliterators$ArrayBuffer$OfRef::toString() {
	 return this->$StreamSpliterators$ArrayBuffer::toString();
}

void StreamSpliterators$ArrayBuffer$OfRef::finalize() {
	this->$StreamSpliterators$ArrayBuffer::finalize();
}

void StreamSpliterators$ArrayBuffer$OfRef::init$(int32_t size) {
	$StreamSpliterators$ArrayBuffer::init$();
	$set(this, array, $new($ObjectArray, size));
}

void StreamSpliterators$ArrayBuffer$OfRef::accept(Object$* t) {
	$nc(this->array)->set(this->index++, t);
}

void StreamSpliterators$ArrayBuffer$OfRef::forEach($Consumer* action, int64_t fence) {
	$useLocalObjectStack();
	for (int32_t i = 0; i < fence; ++i) {
		$var($Object, t, $nc(this->array)->get(i));
		$nc(action)->accept(t);
	}
}

StreamSpliterators$ArrayBuffer$OfRef::StreamSpliterators$ArrayBuffer$OfRef() {
}

$Class* StreamSpliterators$ArrayBuffer$OfRef::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"array", "[Ljava/lang/Object;", nullptr, $FINAL, $field(StreamSpliterators$ArrayBuffer$OfRef, array)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(I)V", nullptr, 0, $method(StreamSpliterators$ArrayBuffer$OfRef, init$, void, int32_t)},
		{"accept", "(Ljava/lang/Object;)V", "(TT;)V", $PUBLIC, $virtualMethod(StreamSpliterators$ArrayBuffer$OfRef, accept, void, Object$*)},
		{"forEach", "(Ljava/util/function/Consumer;J)V", "(Ljava/util/function/Consumer<-TT;>;J)V", $PUBLIC, $method(StreamSpliterators$ArrayBuffer$OfRef, forEach, void, $Consumer*, int64_t)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.stream.StreamSpliterators$ArrayBuffer", "java.util.stream.StreamSpliterators", "ArrayBuffer", $STATIC | $ABSTRACT},
		{"java.util.stream.StreamSpliterators$ArrayBuffer$OfRef", "java.util.stream.StreamSpliterators$ArrayBuffer", "OfRef", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.stream.StreamSpliterators$ArrayBuffer$OfRef",
		"java.util.stream.StreamSpliterators$ArrayBuffer",
		"java.util.function.Consumer",
		fieldInfos$$,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/util/stream/StreamSpliterators$ArrayBuffer;Ljava/util/function/Consumer<TT;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.stream.StreamSpliterators"
	};
	$loadClass(StreamSpliterators$ArrayBuffer$OfRef, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(StreamSpliterators$ArrayBuffer$OfRef));
	});
	return class$;
}

$Class* StreamSpliterators$ArrayBuffer$OfRef::class$ = nullptr;

		} // stream
	} // util
} // java