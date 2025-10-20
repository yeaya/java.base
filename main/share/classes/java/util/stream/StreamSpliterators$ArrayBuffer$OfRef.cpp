#include <java/util/stream/StreamSpliterators$ArrayBuffer$OfRef.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$FieldInfo _StreamSpliterators$ArrayBuffer$OfRef_FieldInfo_[] = {
	{"array", "[Ljava/lang/Object;", nullptr, $FINAL, $field(StreamSpliterators$ArrayBuffer$OfRef, array)},
	{}
};

$MethodInfo _StreamSpliterators$ArrayBuffer$OfRef_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(I)V", nullptr, 0, $method(static_cast<void(StreamSpliterators$ArrayBuffer$OfRef::*)(int32_t)>(&StreamSpliterators$ArrayBuffer$OfRef::init$))},
	{"accept", "(Ljava/lang/Object;)V", "(TT;)V", $PUBLIC},
	{"forEach", "(Ljava/util/function/Consumer;J)V", "(Ljava/util/function/Consumer<-TT;>;J)V", $PUBLIC, $method(static_cast<void(StreamSpliterators$ArrayBuffer$OfRef::*)($Consumer*,int64_t)>(&StreamSpliterators$ArrayBuffer$OfRef::forEach))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _StreamSpliterators$ArrayBuffer$OfRef_InnerClassesInfo_[] = {
	{"java.util.stream.StreamSpliterators$ArrayBuffer", "java.util.stream.StreamSpliterators", "ArrayBuffer", $STATIC | $ABSTRACT},
	{"java.util.stream.StreamSpliterators$ArrayBuffer$OfRef", "java.util.stream.StreamSpliterators$ArrayBuffer", "OfRef", $STATIC | $FINAL},
	{}
};

$ClassInfo _StreamSpliterators$ArrayBuffer$OfRef_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.stream.StreamSpliterators$ArrayBuffer$OfRef",
	"java.util.stream.StreamSpliterators$ArrayBuffer",
	"java.util.function.Consumer",
	_StreamSpliterators$ArrayBuffer$OfRef_FieldInfo_,
	_StreamSpliterators$ArrayBuffer$OfRef_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/util/stream/StreamSpliterators$ArrayBuffer;Ljava/util/function/Consumer<TT;>;",
	nullptr,
	_StreamSpliterators$ArrayBuffer$OfRef_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.StreamSpliterators"
};

$Object* allocate$StreamSpliterators$ArrayBuffer$OfRef($Class* clazz) {
	return $of($alloc(StreamSpliterators$ArrayBuffer$OfRef));
}

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
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < fence; ++i) {
		$var($Object, t, $nc(this->array)->get(i));
		$nc(action)->accept(t);
	}
}

StreamSpliterators$ArrayBuffer$OfRef::StreamSpliterators$ArrayBuffer$OfRef() {
}

$Class* StreamSpliterators$ArrayBuffer$OfRef::load$($String* name, bool initialize) {
	$loadClass(StreamSpliterators$ArrayBuffer$OfRef, name, initialize, &_StreamSpliterators$ArrayBuffer$OfRef_ClassInfo_, allocate$StreamSpliterators$ArrayBuffer$OfRef);
	return class$;
}

$Class* StreamSpliterators$ArrayBuffer$OfRef::class$ = nullptr;

		} // stream
	} // util
} // java