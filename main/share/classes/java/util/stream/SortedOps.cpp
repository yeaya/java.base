#include <java/util/stream/SortedOps.h>

#include <java/util/Comparator.h>
#include <java/util/stream/AbstractPipeline.h>
#include <java/util/stream/DoublePipeline$StatefulOp.h>
#include <java/util/stream/DoublePipeline.h>
#include <java/util/stream/DoubleStream.h>
#include <java/util/stream/IntPipeline$StatefulOp.h>
#include <java/util/stream/IntPipeline.h>
#include <java/util/stream/IntStream.h>
#include <java/util/stream/LongPipeline$StatefulOp.h>
#include <java/util/stream/LongPipeline.h>
#include <java/util/stream/LongStream.h>
#include <java/util/stream/ReferencePipeline$StatefulOp.h>
#include <java/util/stream/ReferencePipeline.h>
#include <java/util/stream/SortedOps$OfDouble.h>
#include <java/util/stream/SortedOps$OfInt.h>
#include <java/util/stream/SortedOps$OfLong.h>
#include <java/util/stream/SortedOps$OfRef.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Comparator = ::java::util::Comparator;
using $AbstractPipeline = ::java::util::stream::AbstractPipeline;
using $DoublePipeline = ::java::util::stream::DoublePipeline;
using $DoublePipeline$StatefulOp = ::java::util::stream::DoublePipeline$StatefulOp;
using $DoubleStream = ::java::util::stream::DoubleStream;
using $IntPipeline = ::java::util::stream::IntPipeline;
using $IntPipeline$StatefulOp = ::java::util::stream::IntPipeline$StatefulOp;
using $IntStream = ::java::util::stream::IntStream;
using $LongPipeline = ::java::util::stream::LongPipeline;
using $LongPipeline$StatefulOp = ::java::util::stream::LongPipeline$StatefulOp;
using $LongStream = ::java::util::stream::LongStream;
using $ReferencePipeline = ::java::util::stream::ReferencePipeline;
using $ReferencePipeline$StatefulOp = ::java::util::stream::ReferencePipeline$StatefulOp;
using $SortedOps$OfDouble = ::java::util::stream::SortedOps$OfDouble;
using $SortedOps$OfInt = ::java::util::stream::SortedOps$OfInt;
using $SortedOps$OfLong = ::java::util::stream::SortedOps$OfLong;
using $SortedOps$OfRef = ::java::util::stream::SortedOps$OfRef;
using $Stream = ::java::util::stream::Stream;

namespace java {
	namespace util {
		namespace stream {

$MethodInfo _SortedOps_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(SortedOps::*)()>(&SortedOps::init$))},
	{"makeDouble", "(Ljava/util/stream/AbstractPipeline;)Ljava/util/stream/DoubleStream;", "<T:Ljava/lang/Object;>(Ljava/util/stream/AbstractPipeline<*Ljava/lang/Double;*>;)Ljava/util/stream/DoubleStream;", $STATIC, $method(static_cast<$DoubleStream*(*)($AbstractPipeline*)>(&SortedOps::makeDouble))},
	{"makeInt", "(Ljava/util/stream/AbstractPipeline;)Ljava/util/stream/IntStream;", "<T:Ljava/lang/Object;>(Ljava/util/stream/AbstractPipeline<*Ljava/lang/Integer;*>;)Ljava/util/stream/IntStream;", $STATIC, $method(static_cast<$IntStream*(*)($AbstractPipeline*)>(&SortedOps::makeInt))},
	{"makeLong", "(Ljava/util/stream/AbstractPipeline;)Ljava/util/stream/LongStream;", "<T:Ljava/lang/Object;>(Ljava/util/stream/AbstractPipeline<*Ljava/lang/Long;*>;)Ljava/util/stream/LongStream;", $STATIC, $method(static_cast<$LongStream*(*)($AbstractPipeline*)>(&SortedOps::makeLong))},
	{"makeRef", "(Ljava/util/stream/AbstractPipeline;)Ljava/util/stream/Stream;", "<T:Ljava/lang/Object;>(Ljava/util/stream/AbstractPipeline<*TT;*>;)Ljava/util/stream/Stream<TT;>;", $STATIC, $method(static_cast<$Stream*(*)($AbstractPipeline*)>(&SortedOps::makeRef))},
	{"makeRef", "(Ljava/util/stream/AbstractPipeline;Ljava/util/Comparator;)Ljava/util/stream/Stream;", "<T:Ljava/lang/Object;>(Ljava/util/stream/AbstractPipeline<*TT;*>;Ljava/util/Comparator<-TT;>;)Ljava/util/stream/Stream<TT;>;", $STATIC, $method(static_cast<$Stream*(*)($AbstractPipeline*,$Comparator*)>(&SortedOps::makeRef))},
	{}
};

$InnerClassInfo _SortedOps_InnerClassesInfo_[] = {
	{"java.util.stream.SortedOps$DoubleSortingSink", "java.util.stream.SortedOps", "DoubleSortingSink", $PRIVATE | $STATIC | $FINAL},
	{"java.util.stream.SortedOps$SizedDoubleSortingSink", "java.util.stream.SortedOps", "SizedDoubleSortingSink", $PRIVATE | $STATIC | $FINAL},
	{"java.util.stream.SortedOps$AbstractDoubleSortingSink", "java.util.stream.SortedOps", "AbstractDoubleSortingSink", $PRIVATE | $STATIC | $ABSTRACT},
	{"java.util.stream.SortedOps$LongSortingSink", "java.util.stream.SortedOps", "LongSortingSink", $PRIVATE | $STATIC | $FINAL},
	{"java.util.stream.SortedOps$SizedLongSortingSink", "java.util.stream.SortedOps", "SizedLongSortingSink", $PRIVATE | $STATIC | $FINAL},
	{"java.util.stream.SortedOps$AbstractLongSortingSink", "java.util.stream.SortedOps", "AbstractLongSortingSink", $PRIVATE | $STATIC | $ABSTRACT},
	{"java.util.stream.SortedOps$IntSortingSink", "java.util.stream.SortedOps", "IntSortingSink", $PRIVATE | $STATIC | $FINAL},
	{"java.util.stream.SortedOps$SizedIntSortingSink", "java.util.stream.SortedOps", "SizedIntSortingSink", $PRIVATE | $STATIC | $FINAL},
	{"java.util.stream.SortedOps$AbstractIntSortingSink", "java.util.stream.SortedOps", "AbstractIntSortingSink", $PRIVATE | $STATIC | $ABSTRACT},
	{"java.util.stream.SortedOps$RefSortingSink", "java.util.stream.SortedOps", "RefSortingSink", $PRIVATE | $STATIC | $FINAL},
	{"java.util.stream.SortedOps$SizedRefSortingSink", "java.util.stream.SortedOps", "SizedRefSortingSink", $PRIVATE | $STATIC | $FINAL},
	{"java.util.stream.SortedOps$AbstractRefSortingSink", "java.util.stream.SortedOps", "AbstractRefSortingSink", $PRIVATE | $STATIC | $ABSTRACT},
	{"java.util.stream.SortedOps$OfDouble", "java.util.stream.SortedOps", "OfDouble", $PRIVATE | $STATIC | $FINAL},
	{"java.util.stream.SortedOps$OfLong", "java.util.stream.SortedOps", "OfLong", $PRIVATE | $STATIC | $FINAL},
	{"java.util.stream.SortedOps$OfInt", "java.util.stream.SortedOps", "OfInt", $PRIVATE | $STATIC | $FINAL},
	{"java.util.stream.SortedOps$OfRef", "java.util.stream.SortedOps", "OfRef", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _SortedOps_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.stream.SortedOps",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SortedOps_MethodInfo_,
	nullptr,
	nullptr,
	_SortedOps_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.util.stream.SortedOps$DoubleSortingSink,java.util.stream.SortedOps$SizedDoubleSortingSink,java.util.stream.SortedOps$AbstractDoubleSortingSink,java.util.stream.SortedOps$LongSortingSink,java.util.stream.SortedOps$SizedLongSortingSink,java.util.stream.SortedOps$AbstractLongSortingSink,java.util.stream.SortedOps$IntSortingSink,java.util.stream.SortedOps$SizedIntSortingSink,java.util.stream.SortedOps$AbstractIntSortingSink,java.util.stream.SortedOps$RefSortingSink,java.util.stream.SortedOps$SizedRefSortingSink,java.util.stream.SortedOps$AbstractRefSortingSink,java.util.stream.SortedOps$OfDouble,java.util.stream.SortedOps$OfLong,java.util.stream.SortedOps$OfInt,java.util.stream.SortedOps$OfRef"
};

$Object* allocate$SortedOps($Class* clazz) {
	return $of($alloc(SortedOps));
}

void SortedOps::init$() {
}

$Stream* SortedOps::makeRef($AbstractPipeline* upstream) {
	return $new($SortedOps$OfRef, upstream);
}

$Stream* SortedOps::makeRef($AbstractPipeline* upstream, $Comparator* comparator) {
	return $new($SortedOps$OfRef, upstream, comparator);
}

$IntStream* SortedOps::makeInt($AbstractPipeline* upstream) {
	return $as($IntStream, $new($SortedOps$OfInt, upstream));
}

$LongStream* SortedOps::makeLong($AbstractPipeline* upstream) {
	return $as($LongStream, $new($SortedOps$OfLong, upstream));
}

$DoubleStream* SortedOps::makeDouble($AbstractPipeline* upstream) {
	return $as($DoubleStream, $new($SortedOps$OfDouble, upstream));
}

SortedOps::SortedOps() {
}

$Class* SortedOps::load$($String* name, bool initialize) {
	$loadClass(SortedOps, name, initialize, &_SortedOps_ClassInfo_, allocate$SortedOps);
	return class$;
}

$Class* SortedOps::class$ = nullptr;

		} // stream
	} // util
} // java