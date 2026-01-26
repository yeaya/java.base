#include <java/util/stream/Streams.h>

#include <java/lang/Error.h>
#include <java/lang/Runnable.h>
#include <java/util/stream/BaseStream.h>
#include <java/util/stream/Streams$1.h>
#include <java/util/stream/Streams$2.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $BaseStream = ::java::util::stream::BaseStream;
using $Streams$1 = ::java::util::stream::Streams$1;
using $Streams$2 = ::java::util::stream::Streams$2;

namespace java {
	namespace util {
		namespace stream {

$MethodInfo _Streams_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(Streams, init$, void)},
	{"composeWithExceptions", "(Ljava/lang/Runnable;Ljava/lang/Runnable;)Ljava/lang/Runnable;", nullptr, $STATIC, $staticMethod(Streams, composeWithExceptions, $Runnable*, $Runnable*, $Runnable*)},
	{"composedClose", "(Ljava/util/stream/BaseStream;Ljava/util/stream/BaseStream;)Ljava/lang/Runnable;", "(Ljava/util/stream/BaseStream<**>;Ljava/util/stream/BaseStream<**>;)Ljava/lang/Runnable;", $STATIC, $staticMethod(Streams, composedClose, $Runnable*, $BaseStream*, $BaseStream*)},
	{}
};

$InnerClassInfo _Streams_InnerClassesInfo_[] = {
	{"java.util.stream.Streams$ConcatSpliterator", "java.util.stream.Streams", "ConcatSpliterator", $STATIC | $ABSTRACT},
	{"java.util.stream.Streams$DoubleStreamBuilderImpl", "java.util.stream.Streams", "DoubleStreamBuilderImpl", $STATIC | $FINAL},
	{"java.util.stream.Streams$LongStreamBuilderImpl", "java.util.stream.Streams", "LongStreamBuilderImpl", $STATIC | $FINAL},
	{"java.util.stream.Streams$IntStreamBuilderImpl", "java.util.stream.Streams", "IntStreamBuilderImpl", $STATIC | $FINAL},
	{"java.util.stream.Streams$StreamBuilderImpl", "java.util.stream.Streams", "StreamBuilderImpl", $STATIC | $FINAL},
	{"java.util.stream.Streams$AbstractStreamBuilderImpl", "java.util.stream.Streams", "AbstractStreamBuilderImpl", $PRIVATE | $STATIC | $ABSTRACT},
	{"java.util.stream.Streams$RangeLongSpliterator", "java.util.stream.Streams", "RangeLongSpliterator", $STATIC | $FINAL},
	{"java.util.stream.Streams$RangeIntSpliterator", "java.util.stream.Streams", "RangeIntSpliterator", $STATIC | $FINAL},
	{"java.util.stream.Streams$2", nullptr, nullptr, 0},
	{"java.util.stream.Streams$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Streams_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.stream.Streams",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Streams_MethodInfo_,
	nullptr,
	nullptr,
	_Streams_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.util.stream.Streams$ConcatSpliterator,java.util.stream.Streams$ConcatSpliterator$OfDouble,java.util.stream.Streams$ConcatSpliterator$OfLong,java.util.stream.Streams$ConcatSpliterator$OfInt,java.util.stream.Streams$ConcatSpliterator$OfPrimitive,java.util.stream.Streams$ConcatSpliterator$OfRef,java.util.stream.Streams$DoubleStreamBuilderImpl,java.util.stream.Streams$LongStreamBuilderImpl,java.util.stream.Streams$IntStreamBuilderImpl,java.util.stream.Streams$StreamBuilderImpl,java.util.stream.Streams$AbstractStreamBuilderImpl,java.util.stream.Streams$RangeLongSpliterator,java.util.stream.Streams$RangeIntSpliterator,java.util.stream.Streams$2,java.util.stream.Streams$1"
};

$Object* allocate$Streams($Class* clazz) {
	return $of($alloc(Streams));
}

void Streams::init$() {
	$throwNew($Error, "no instances"_s);
}

$Runnable* Streams::composeWithExceptions($Runnable* a, $Runnable* b) {
	return $new($Streams$1, a, b);
}

$Runnable* Streams::composedClose($BaseStream* a, $BaseStream* b) {
	return $new($Streams$2, a, b);
}

Streams::Streams() {
}

$Class* Streams::load$($String* name, bool initialize) {
	$loadClass(Streams, name, initialize, &_Streams_ClassInfo_, allocate$Streams);
	return class$;
}

$Class* Streams::class$ = nullptr;

		} // stream
	} // util
} // java