#include <java/util/stream/StreamSpliterators$InfiniteSupplyingSpliterator$OfRef.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Objects.h>
#include <java/util/Spliterator.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/Supplier.h>
#include <java/util/stream/StreamSpliterators$InfiniteSupplyingSpliterator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Objects = ::java::util::Objects;
using $Spliterator = ::java::util::Spliterator;
using $Consumer = ::java::util::function::Consumer;
using $Supplier = ::java::util::function::Supplier;
using $StreamSpliterators$InfiniteSupplyingSpliterator = ::java::util::stream::StreamSpliterators$InfiniteSupplyingSpliterator;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _StreamSpliterators$InfiniteSupplyingSpliterator$OfRef_FieldInfo_[] = {
	{"s", "Ljava/util/function/Supplier;", "Ljava/util/function/Supplier<+TT;>;", $FINAL, $field(StreamSpliterators$InfiniteSupplyingSpliterator$OfRef, s)},
	{}
};

$MethodInfo _StreamSpliterators$InfiniteSupplyingSpliterator$OfRef_MethodInfo_[] = {
	{"<init>", "(JLjava/util/function/Supplier;)V", "(JLjava/util/function/Supplier<+TT;>;)V", 0, $method(static_cast<void(StreamSpliterators$InfiniteSupplyingSpliterator$OfRef::*)(int64_t,$Supplier*)>(&StreamSpliterators$InfiniteSupplyingSpliterator$OfRef::init$))},
	{"tryAdvance", "(Ljava/util/function/Consumer;)Z", "(Ljava/util/function/Consumer<-TT;>;)Z", $PUBLIC},
	{"trySplit", "()Ljava/util/Spliterator;", "()Ljava/util/Spliterator<TT;>;", $PUBLIC},
	{}
};

$InnerClassInfo _StreamSpliterators$InfiniteSupplyingSpliterator$OfRef_InnerClassesInfo_[] = {
	{"java.util.stream.StreamSpliterators$InfiniteSupplyingSpliterator", "java.util.stream.StreamSpliterators", "InfiniteSupplyingSpliterator", $STATIC | $ABSTRACT},
	{"java.util.stream.StreamSpliterators$InfiniteSupplyingSpliterator$OfRef", "java.util.stream.StreamSpliterators$InfiniteSupplyingSpliterator", "OfRef", $STATIC | $FINAL},
	{}
};

$ClassInfo _StreamSpliterators$InfiniteSupplyingSpliterator$OfRef_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.stream.StreamSpliterators$InfiniteSupplyingSpliterator$OfRef",
	"java.util.stream.StreamSpliterators$InfiniteSupplyingSpliterator",
	nullptr,
	_StreamSpliterators$InfiniteSupplyingSpliterator$OfRef_FieldInfo_,
	_StreamSpliterators$InfiniteSupplyingSpliterator$OfRef_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/util/stream/StreamSpliterators$InfiniteSupplyingSpliterator<TT;>;",
	nullptr,
	_StreamSpliterators$InfiniteSupplyingSpliterator$OfRef_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.StreamSpliterators"
};

$Object* allocate$StreamSpliterators$InfiniteSupplyingSpliterator$OfRef($Class* clazz) {
	return $of($alloc(StreamSpliterators$InfiniteSupplyingSpliterator$OfRef));
}

void StreamSpliterators$InfiniteSupplyingSpliterator$OfRef::init$(int64_t size, $Supplier* s) {
	$StreamSpliterators$InfiniteSupplyingSpliterator::init$(size);
	$set(this, s, s);
}

bool StreamSpliterators$InfiniteSupplyingSpliterator$OfRef::tryAdvance($Consumer* action) {
	$Objects::requireNonNull(action);
	action->accept($($nc(this->s)->get()));
	return true;
}

$Spliterator* StreamSpliterators$InfiniteSupplyingSpliterator$OfRef::trySplit() {
	if (this->estimate == 0) {
		return nullptr;
	}
	return $new(StreamSpliterators$InfiniteSupplyingSpliterator$OfRef, $usrAssign(this->estimate, 1), this->s);
}

StreamSpliterators$InfiniteSupplyingSpliterator$OfRef::StreamSpliterators$InfiniteSupplyingSpliterator$OfRef() {
}

$Class* StreamSpliterators$InfiniteSupplyingSpliterator$OfRef::load$($String* name, bool initialize) {
	$loadClass(StreamSpliterators$InfiniteSupplyingSpliterator$OfRef, name, initialize, &_StreamSpliterators$InfiniteSupplyingSpliterator$OfRef_ClassInfo_, allocate$StreamSpliterators$InfiniteSupplyingSpliterator$OfRef);
	return class$;
}

$Class* StreamSpliterators$InfiniteSupplyingSpliterator$OfRef::class$ = nullptr;

		} // stream
	} // util
} // java