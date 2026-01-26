#include <java/util/stream/StreamSpliterators$InfiniteSupplyingSpliterator.h>

#include <java/util/Spliterator.h>
#include <java/util/stream/StreamSpliterators.h>
#include <jcpp.h>

#undef IMMUTABLE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Spliterator = ::java::util::Spliterator;

namespace java {
	namespace util {
		namespace stream {

$FieldInfo _StreamSpliterators$InfiniteSupplyingSpliterator_FieldInfo_[] = {
	{"estimate", "J", nullptr, 0, $field(StreamSpliterators$InfiniteSupplyingSpliterator, estimate)},
	{}
};

$MethodInfo _StreamSpliterators$InfiniteSupplyingSpliterator_MethodInfo_[] = {
	{"<init>", "(J)V", nullptr, $PROTECTED, $method(StreamSpliterators$InfiniteSupplyingSpliterator, init$, void, int64_t)},
	{"characteristics", "()I", nullptr, $PUBLIC, $virtualMethod(StreamSpliterators$InfiniteSupplyingSpliterator, characteristics, int32_t)},
	{"estimateSize", "()J", nullptr, $PUBLIC, $virtualMethod(StreamSpliterators$InfiniteSupplyingSpliterator, estimateSize, int64_t)},
	{}
};

$InnerClassInfo _StreamSpliterators$InfiniteSupplyingSpliterator_InnerClassesInfo_[] = {
	{"java.util.stream.StreamSpliterators$InfiniteSupplyingSpliterator", "java.util.stream.StreamSpliterators", "InfiniteSupplyingSpliterator", $STATIC | $ABSTRACT},
	{"java.util.stream.StreamSpliterators$InfiniteSupplyingSpliterator$OfDouble", "java.util.stream.StreamSpliterators$InfiniteSupplyingSpliterator", "OfDouble", $STATIC | $FINAL},
	{"java.util.stream.StreamSpliterators$InfiniteSupplyingSpliterator$OfLong", "java.util.stream.StreamSpliterators$InfiniteSupplyingSpliterator", "OfLong", $STATIC | $FINAL},
	{"java.util.stream.StreamSpliterators$InfiniteSupplyingSpliterator$OfInt", "java.util.stream.StreamSpliterators$InfiniteSupplyingSpliterator", "OfInt", $STATIC | $FINAL},
	{"java.util.stream.StreamSpliterators$InfiniteSupplyingSpliterator$OfRef", "java.util.stream.StreamSpliterators$InfiniteSupplyingSpliterator", "OfRef", $STATIC | $FINAL},
	{}
};

$ClassInfo _StreamSpliterators$InfiniteSupplyingSpliterator_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"java.util.stream.StreamSpliterators$InfiniteSupplyingSpliterator",
	"java.lang.Object",
	"java.util.Spliterator",
	_StreamSpliterators$InfiniteSupplyingSpliterator_FieldInfo_,
	_StreamSpliterators$InfiniteSupplyingSpliterator_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/Spliterator<TT;>;",
	nullptr,
	_StreamSpliterators$InfiniteSupplyingSpliterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.stream.StreamSpliterators"
};

$Object* allocate$StreamSpliterators$InfiniteSupplyingSpliterator($Class* clazz) {
	return $of($alloc(StreamSpliterators$InfiniteSupplyingSpliterator));
}

void StreamSpliterators$InfiniteSupplyingSpliterator::init$(int64_t estimate) {
	this->estimate = estimate;
}

int64_t StreamSpliterators$InfiniteSupplyingSpliterator::estimateSize() {
	return this->estimate;
}

int32_t StreamSpliterators$InfiniteSupplyingSpliterator::characteristics() {
	return $Spliterator::IMMUTABLE;
}

StreamSpliterators$InfiniteSupplyingSpliterator::StreamSpliterators$InfiniteSupplyingSpliterator() {
}

$Class* StreamSpliterators$InfiniteSupplyingSpliterator::load$($String* name, bool initialize) {
	$loadClass(StreamSpliterators$InfiniteSupplyingSpliterator, name, initialize, &_StreamSpliterators$InfiniteSupplyingSpliterator_ClassInfo_, allocate$StreamSpliterators$InfiniteSupplyingSpliterator);
	return class$;
}

$Class* StreamSpliterators$InfiniteSupplyingSpliterator::class$ = nullptr;

		} // stream
	} // util
} // java