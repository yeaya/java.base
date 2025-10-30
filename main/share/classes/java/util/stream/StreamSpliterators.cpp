#include <java/util/stream/StreamSpliterators.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace stream {

$MethodInfo _StreamSpliterators_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(StreamSpliterators::*)()>(&StreamSpliterators::init$))},
	{}
};

$InnerClassInfo _StreamSpliterators_InnerClassesInfo_[] = {
	{"java.util.stream.StreamSpliterators$ArrayBuffer", "java.util.stream.StreamSpliterators", "ArrayBuffer", $STATIC | $ABSTRACT},
	{"java.util.stream.StreamSpliterators$InfiniteSupplyingSpliterator", "java.util.stream.StreamSpliterators", "InfiniteSupplyingSpliterator", $STATIC | $ABSTRACT},
	{"java.util.stream.StreamSpliterators$DistinctSpliterator", "java.util.stream.StreamSpliterators", "DistinctSpliterator", $STATIC | $FINAL},
	{"java.util.stream.StreamSpliterators$UnorderedSliceSpliterator", "java.util.stream.StreamSpliterators", "UnorderedSliceSpliterator", $STATIC | $ABSTRACT},
	{"java.util.stream.StreamSpliterators$SliceSpliterator", "java.util.stream.StreamSpliterators", "SliceSpliterator", $STATIC | $ABSTRACT},
	{"java.util.stream.StreamSpliterators$DelegatingSpliterator", "java.util.stream.StreamSpliterators", "DelegatingSpliterator", $STATIC},
	{"java.util.stream.StreamSpliterators$DoubleWrappingSpliterator", "java.util.stream.StreamSpliterators", "DoubleWrappingSpliterator", $STATIC | $FINAL},
	{"java.util.stream.StreamSpliterators$LongWrappingSpliterator", "java.util.stream.StreamSpliterators", "LongWrappingSpliterator", $STATIC | $FINAL},
	{"java.util.stream.StreamSpliterators$IntWrappingSpliterator", "java.util.stream.StreamSpliterators", "IntWrappingSpliterator", $STATIC | $FINAL},
	{"java.util.stream.StreamSpliterators$WrappingSpliterator", "java.util.stream.StreamSpliterators", "WrappingSpliterator", $STATIC | $FINAL},
	{"java.util.stream.StreamSpliterators$AbstractWrappingSpliterator", "java.util.stream.StreamSpliterators", "AbstractWrappingSpliterator", $PRIVATE | $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _StreamSpliterators_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.stream.StreamSpliterators",
	"java.lang.Object",
	nullptr,
	nullptr,
	_StreamSpliterators_MethodInfo_,
	nullptr,
	nullptr,
	_StreamSpliterators_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.util.stream.StreamSpliterators$ArrayBuffer,java.util.stream.StreamSpliterators$ArrayBuffer$OfDouble,java.util.stream.StreamSpliterators$ArrayBuffer$OfLong,java.util.stream.StreamSpliterators$ArrayBuffer$OfInt,java.util.stream.StreamSpliterators$ArrayBuffer$OfPrimitive,java.util.stream.StreamSpliterators$ArrayBuffer$OfRef,java.util.stream.StreamSpliterators$InfiniteSupplyingSpliterator,java.util.stream.StreamSpliterators$InfiniteSupplyingSpliterator$OfDouble,java.util.stream.StreamSpliterators$InfiniteSupplyingSpliterator$OfLong,java.util.stream.StreamSpliterators$InfiniteSupplyingSpliterator$OfInt,java.util.stream.StreamSpliterators$InfiniteSupplyingSpliterator$OfRef,java.util.stream.StreamSpliterators$DistinctSpliterator,java.util.stream.StreamSpliterators$UnorderedSliceSpliterator,java.util.stream.StreamSpliterators$UnorderedSliceSpliterator$OfDouble,java.util.stream.StreamSpliterators$UnorderedSliceSpliterator$OfLong,java.util.stream.StreamSpliterators$UnorderedSliceSpliterator$OfInt,java.util.stream.StreamSpliterators$UnorderedSliceSpliterator$OfPrimitive,java.util.stream.StreamSpliterators$UnorderedSliceSpliterator$OfRef,java.util.stream.StreamSpliterators$UnorderedSliceSpliterator$PermitStatus,java.util.stream.StreamSpliterators$SliceSpliterator,java.util.stream.StreamSpliterators$SliceSpliterator$OfDouble,java.util.stream.StreamSpliterators$SliceSpliterator$OfLong,java.util.stream.StreamSpliterators$SliceSpliterator$OfInt,java.util.stream.StreamSpliterators$SliceSpliterator$OfPrimitive,java.util.stream.StreamSpliterators$SliceSpliterator$OfRef,java.util.stream.StreamSpliterators$DelegatingSpliterator,java.util.stream.StreamSpliterators$DelegatingSpliterator$OfDouble,java.util.stream.StreamSpliterators$DelegatingSpliterator$OfLong,java.util.stream.StreamSpliterators$DelegatingSpliterator$OfInt,java.util.stream.StreamSpliterators$DelegatingSpliterator$OfPrimitive,java.util.stream.StreamSpliterators$DoubleWrappingSpliterator,java.util.stream.StreamSpliterators$LongWrappingSpliterator,java.util.stream.StreamSpliterators$IntWrappingSpliterator,java.util.stream.StreamSpliterators$WrappingSpliterator,java.util.stream.StreamSpliterators$AbstractWrappingSpliterator"
};

$Object* allocate$StreamSpliterators($Class* clazz) {
	return $of($alloc(StreamSpliterators));
}

void StreamSpliterators::init$() {
}

StreamSpliterators::StreamSpliterators() {
}

$Class* StreamSpliterators::load$($String* name, bool initialize) {
	$loadClass(StreamSpliterators, name, initialize, &_StreamSpliterators_ClassInfo_, allocate$StreamSpliterators);
	return class$;
}

$Class* StreamSpliterators::class$ = nullptr;

		} // stream
	} // util
} // java