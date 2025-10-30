#include <java/util/Arrays.h>

#include <java/io/Serializable.h>
#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Comparable.h>
#include <java/lang/Math.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Array.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractSet.h>
#include <java/util/ArrayPrefixHelpers$CumulateTask.h>
#include <java/util/ArrayPrefixHelpers$DoubleCumulateTask.h>
#include <java/util/ArrayPrefixHelpers$IntCumulateTask.h>
#include <java/util/ArrayPrefixHelpers$LongCumulateTask.h>
#include <java/util/Arrays$ArrayList.h>
#include <java/util/Arrays$LegacyMergeSort.h>
#include <java/util/Arrays$NaturalOrder.h>
#include <java/util/ArraysParallelSortHelpers$FJObject$Sorter.h>
#include <java/util/ComparableTimSort.h>
#include <java/util/Comparator.h>
#include <java/util/DualPivotQuicksort.h>
#include <java/util/HashSet.h>
#include <java/util/List.h>
#include <java/util/Objects.h>
#include <java/util/Set.h>
#include <java/util/Spliterator$OfDouble.h>
#include <java/util/Spliterator$OfInt.h>
#include <java/util/Spliterator$OfLong.h>
#include <java/util/Spliterator.h>
#include <java/util/Spliterators.h>
#include <java/util/TimSort.h>
#include <java/util/concurrent/CountedCompleter.h>
#include <java/util/concurrent/ForkJoinPool.h>
#include <java/util/function/BinaryOperator.h>
#include <java/util/function/DoubleBinaryOperator.h>
#include <java/util/function/IntBinaryOperator.h>
#include <java/util/function/IntConsumer.h>
#include <java/util/function/IntFunction.h>
#include <java/util/function/IntToDoubleFunction.h>
#include <java/util/function/IntToLongFunction.h>
#include <java/util/function/IntUnaryOperator.h>
#include <java/util/function/LongBinaryOperator.h>
#include <java/util/stream/DoubleStream.h>
#include <java/util/stream/IntStream.h>
#include <java/util/stream/LongStream.h>
#include <java/util/stream/Stream.h>
#include <java/util/stream/StreamSupport.h>
#include <jdk/internal/util/ArraysSupport.h>
#include <jcpp.h>

#include <string.h>

using ::java::lang::ObjectManager;

#undef IMMUTABLE
#undef INSERTIONSORT_THRESHOLD
#undef INSTANCE
#undef MAX_VALUE
#undef MIN_ARRAY_SORT_GRAN
#undef ORDERED
#undef TYPE

using $ComparableArray = $Array<::java::lang::Comparable>;
using $Serializable = ::java::io::Serializable;
using $ArrayIndexOutOfBoundsException = ::java::lang::ArrayIndexOutOfBoundsException;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $Byte = ::java::lang::Byte;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $Comparable = ::java::lang::Comparable;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Short = ::java::lang::Short;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $1Array = ::java::lang::reflect::Array;
using $AbstractList = ::java::util::AbstractList;
using $AbstractSet = ::java::util::AbstractSet;
using $ArrayPrefixHelpers$CumulateTask = ::java::util::ArrayPrefixHelpers$CumulateTask;
using $ArrayPrefixHelpers$DoubleCumulateTask = ::java::util::ArrayPrefixHelpers$DoubleCumulateTask;
using $ArrayPrefixHelpers$IntCumulateTask = ::java::util::ArrayPrefixHelpers$IntCumulateTask;
using $ArrayPrefixHelpers$LongCumulateTask = ::java::util::ArrayPrefixHelpers$LongCumulateTask;
using $Arrays$ArrayList = ::java::util::Arrays$ArrayList;
using $Arrays$LegacyMergeSort = ::java::util::Arrays$LegacyMergeSort;
using $Arrays$NaturalOrder = ::java::util::Arrays$NaturalOrder;
using $ArraysParallelSortHelpers$FJObject$Sorter = ::java::util::ArraysParallelSortHelpers$FJObject$Sorter;
using $ComparableTimSort = ::java::util::ComparableTimSort;
using $Comparator = ::java::util::Comparator;
using $DualPivotQuicksort = ::java::util::DualPivotQuicksort;
using $HashSet = ::java::util::HashSet;
using $List = ::java::util::List;
using $Objects = ::java::util::Objects;
using $Set = ::java::util::Set;
using $Spliterator = ::java::util::Spliterator;
using $Spliterator$OfDouble = ::java::util::Spliterator$OfDouble;
using $Spliterator$OfInt = ::java::util::Spliterator$OfInt;
using $Spliterator$OfLong = ::java::util::Spliterator$OfLong;
using $Spliterators = ::java::util::Spliterators;
using $TimSort = ::java::util::TimSort;
using $CountedCompleter = ::java::util::concurrent::CountedCompleter;
using $ForkJoinPool = ::java::util::concurrent::ForkJoinPool;
using $ForkJoinTask = ::java::util::concurrent::ForkJoinTask;
using $BinaryOperator = ::java::util::function::BinaryOperator;
using $DoubleBinaryOperator = ::java::util::function::DoubleBinaryOperator;
using $IntBinaryOperator = ::java::util::function::IntBinaryOperator;
using $IntConsumer = ::java::util::function::IntConsumer;
using $IntFunction = ::java::util::function::IntFunction;
using $IntToDoubleFunction = ::java::util::function::IntToDoubleFunction;
using $IntToLongFunction = ::java::util::function::IntToLongFunction;
using $IntUnaryOperator = ::java::util::function::IntUnaryOperator;
using $LongBinaryOperator = ::java::util::function::LongBinaryOperator;
using $DoubleStream = ::java::util::stream::DoubleStream;
using $IntStream = ::java::util::stream::IntStream;
using $LongStream = ::java::util::stream::LongStream;
using $Stream = ::java::util::stream::Stream;
using $StreamSupport = ::java::util::stream::StreamSupport;
using $ArraysSupport = ::jdk::internal::util::ArraysSupport;

namespace java {
	namespace util {

class Arrays$$Lambda$lambda$parallelSetAll$0 : public $IntConsumer {
	$class(Arrays$$Lambda$lambda$parallelSetAll$0, $NO_CLASS_INIT, $IntConsumer)
public:
	void init$($ObjectArray* array, $IntFunction* generator) {
		$set(this, array, array);
		$set(this, generator, generator);
	}
	virtual void accept(int32_t i) override {
		Arrays::lambda$parallelSetAll$0(array, generator, i);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Arrays$$Lambda$lambda$parallelSetAll$0>());
	}
	$ObjectArray* array = nullptr;
	$IntFunction* generator = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Arrays$$Lambda$lambda$parallelSetAll$0::fieldInfos[3] = {
	{"array", "[Ljava/lang/Object;", nullptr, $PUBLIC, $field(Arrays$$Lambda$lambda$parallelSetAll$0, array)},
	{"generator", "Ljava/util/function/IntFunction;", nullptr, $PUBLIC, $field(Arrays$$Lambda$lambda$parallelSetAll$0, generator)},
	{}
};
$MethodInfo Arrays$$Lambda$lambda$parallelSetAll$0::methodInfos[3] = {
	{"<init>", "([Ljava/lang/Object;Ljava/util/function/IntFunction;)V", nullptr, $PUBLIC, $method(static_cast<void(Arrays$$Lambda$lambda$parallelSetAll$0::*)($ObjectArray*,$IntFunction*)>(&Arrays$$Lambda$lambda$parallelSetAll$0::init$))},
	{"accept", "(I)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Arrays$$Lambda$lambda$parallelSetAll$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.Arrays$$Lambda$lambda$parallelSetAll$0",
	"java.lang.Object",
	"java.util.function.IntConsumer",
	fieldInfos,
	methodInfos
};
$Class* Arrays$$Lambda$lambda$parallelSetAll$0::load$($String* name, bool initialize) {
	$loadClass(Arrays$$Lambda$lambda$parallelSetAll$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Arrays$$Lambda$lambda$parallelSetAll$0::class$ = nullptr;

class Arrays$$Lambda$lambda$parallelSetAll$1$1 : public $IntConsumer {
	$class(Arrays$$Lambda$lambda$parallelSetAll$1$1, $NO_CLASS_INIT, $IntConsumer)
public:
	void init$($ints* array, $IntUnaryOperator* generator) {
		$set(this, array, array);
		$set(this, generator, generator);
	}
	virtual void accept(int32_t i) override {
		Arrays::lambda$parallelSetAll$1(array, generator, i);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Arrays$$Lambda$lambda$parallelSetAll$1$1>());
	}
	$ints* array = nullptr;
	$IntUnaryOperator* generator = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Arrays$$Lambda$lambda$parallelSetAll$1$1::fieldInfos[3] = {
	{"array", "[I", nullptr, $PUBLIC, $field(Arrays$$Lambda$lambda$parallelSetAll$1$1, array)},
	{"generator", "Ljava/util/function/IntUnaryOperator;", nullptr, $PUBLIC, $field(Arrays$$Lambda$lambda$parallelSetAll$1$1, generator)},
	{}
};
$MethodInfo Arrays$$Lambda$lambda$parallelSetAll$1$1::methodInfos[3] = {
	{"<init>", "([ILjava/util/function/IntUnaryOperator;)V", nullptr, $PUBLIC, $method(static_cast<void(Arrays$$Lambda$lambda$parallelSetAll$1$1::*)($ints*,$IntUnaryOperator*)>(&Arrays$$Lambda$lambda$parallelSetAll$1$1::init$))},
	{"accept", "(I)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Arrays$$Lambda$lambda$parallelSetAll$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.Arrays$$Lambda$lambda$parallelSetAll$1$1",
	"java.lang.Object",
	"java.util.function.IntConsumer",
	fieldInfos,
	methodInfos
};
$Class* Arrays$$Lambda$lambda$parallelSetAll$1$1::load$($String* name, bool initialize) {
	$loadClass(Arrays$$Lambda$lambda$parallelSetAll$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Arrays$$Lambda$lambda$parallelSetAll$1$1::class$ = nullptr;

class Arrays$$Lambda$lambda$parallelSetAll$2$2 : public $IntConsumer {
	$class(Arrays$$Lambda$lambda$parallelSetAll$2$2, $NO_CLASS_INIT, $IntConsumer)
public:
	void init$($longs* array, $IntToLongFunction* generator) {
		$set(this, array, array);
		$set(this, generator, generator);
	}
	virtual void accept(int32_t i) override {
		Arrays::lambda$parallelSetAll$2(array, generator, i);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Arrays$$Lambda$lambda$parallelSetAll$2$2>());
	}
	$longs* array = nullptr;
	$IntToLongFunction* generator = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Arrays$$Lambda$lambda$parallelSetAll$2$2::fieldInfos[3] = {
	{"array", "[J", nullptr, $PUBLIC, $field(Arrays$$Lambda$lambda$parallelSetAll$2$2, array)},
	{"generator", "Ljava/util/function/IntToLongFunction;", nullptr, $PUBLIC, $field(Arrays$$Lambda$lambda$parallelSetAll$2$2, generator)},
	{}
};
$MethodInfo Arrays$$Lambda$lambda$parallelSetAll$2$2::methodInfos[3] = {
	{"<init>", "([JLjava/util/function/IntToLongFunction;)V", nullptr, $PUBLIC, $method(static_cast<void(Arrays$$Lambda$lambda$parallelSetAll$2$2::*)($longs*,$IntToLongFunction*)>(&Arrays$$Lambda$lambda$parallelSetAll$2$2::init$))},
	{"accept", "(I)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Arrays$$Lambda$lambda$parallelSetAll$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.Arrays$$Lambda$lambda$parallelSetAll$2$2",
	"java.lang.Object",
	"java.util.function.IntConsumer",
	fieldInfos,
	methodInfos
};
$Class* Arrays$$Lambda$lambda$parallelSetAll$2$2::load$($String* name, bool initialize) {
	$loadClass(Arrays$$Lambda$lambda$parallelSetAll$2$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Arrays$$Lambda$lambda$parallelSetAll$2$2::class$ = nullptr;

class Arrays$$Lambda$lambda$parallelSetAll$3$3 : public $IntConsumer {
	$class(Arrays$$Lambda$lambda$parallelSetAll$3$3, $NO_CLASS_INIT, $IntConsumer)
public:
	void init$($doubles* array, $IntToDoubleFunction* generator) {
		$set(this, array, array);
		$set(this, generator, generator);
	}
	virtual void accept(int32_t i) override {
		Arrays::lambda$parallelSetAll$3(array, generator, i);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Arrays$$Lambda$lambda$parallelSetAll$3$3>());
	}
	$doubles* array = nullptr;
	$IntToDoubleFunction* generator = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo Arrays$$Lambda$lambda$parallelSetAll$3$3::fieldInfos[3] = {
	{"array", "[D", nullptr, $PUBLIC, $field(Arrays$$Lambda$lambda$parallelSetAll$3$3, array)},
	{"generator", "Ljava/util/function/IntToDoubleFunction;", nullptr, $PUBLIC, $field(Arrays$$Lambda$lambda$parallelSetAll$3$3, generator)},
	{}
};
$MethodInfo Arrays$$Lambda$lambda$parallelSetAll$3$3::methodInfos[3] = {
	{"<init>", "([DLjava/util/function/IntToDoubleFunction;)V", nullptr, $PUBLIC, $method(static_cast<void(Arrays$$Lambda$lambda$parallelSetAll$3$3::*)($doubles*,$IntToDoubleFunction*)>(&Arrays$$Lambda$lambda$parallelSetAll$3$3::init$))},
	{"accept", "(I)V", nullptr, $PUBLIC},
	{}
};
$ClassInfo Arrays$$Lambda$lambda$parallelSetAll$3$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.Arrays$$Lambda$lambda$parallelSetAll$3$3",
	"java.lang.Object",
	"java.util.function.IntConsumer",
	fieldInfos,
	methodInfos
};
$Class* Arrays$$Lambda$lambda$parallelSetAll$3$3::load$($String* name, bool initialize) {
	$loadClass(Arrays$$Lambda$lambda$parallelSetAll$3$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Arrays$$Lambda$lambda$parallelSetAll$3$3::class$ = nullptr;

$CompoundAttribute _Arrays_MethodAnnotations_asList1[] = {
	{"Ljava/lang/SafeVarargs;", nullptr},
	{}
};

$CompoundAttribute _Arrays_MethodAnnotations_copyOf58[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Arrays_MethodAnnotations_copyOfRange68[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Arrays_MethodAnnotations_equals88[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Arrays_MethodAnnotations_equals90[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$FieldInfo _Arrays_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Arrays, $assertionsDisabled)},
	{"MIN_ARRAY_SORT_GRAN", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Arrays, MIN_ARRAY_SORT_GRAN)},
	{"INSERTIONSORT_THRESHOLD", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Arrays, INSERTIONSORT_THRESHOLD)},
	{}
};

$MethodInfo _Arrays_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(Arrays::*)()>(&Arrays::init$))},
	{"asList", "([Ljava/lang/Object;)Ljava/util/List;", "<T:Ljava/lang/Object;>([TT;)Ljava/util/List<TT;>;", $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<$List*(*)($ObjectArray*)>(&Arrays::asList)), nullptr, nullptr, _Arrays_MethodAnnotations_asList1},
	{"binarySearch", "([JJ)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($longs*,int64_t)>(&Arrays::binarySearch))},
	{"binarySearch", "([JIIJ)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($longs*,int32_t,int32_t,int64_t)>(&Arrays::binarySearch))},
	{"binarySearch", "([II)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($ints*,int32_t)>(&Arrays::binarySearch))},
	{"binarySearch", "([IIII)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($ints*,int32_t,int32_t,int32_t)>(&Arrays::binarySearch))},
	{"binarySearch", "([SS)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($shorts*,int16_t)>(&Arrays::binarySearch))},
	{"binarySearch", "([SIIS)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($shorts*,int32_t,int32_t,int16_t)>(&Arrays::binarySearch))},
	{"binarySearch", "([CC)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($chars*,char16_t)>(&Arrays::binarySearch))},
	{"binarySearch", "([CIIC)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($chars*,int32_t,int32_t,char16_t)>(&Arrays::binarySearch))},
	{"binarySearch", "([BB)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($bytes*,int8_t)>(&Arrays::binarySearch))},
	{"binarySearch", "([BIIB)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($bytes*,int32_t,int32_t,int8_t)>(&Arrays::binarySearch))},
	{"binarySearch", "([DD)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($doubles*,double)>(&Arrays::binarySearch))},
	{"binarySearch", "([DIID)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($doubles*,int32_t,int32_t,double)>(&Arrays::binarySearch))},
	{"binarySearch", "([FF)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($floats*,float)>(&Arrays::binarySearch))},
	{"binarySearch", "([FIIF)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($floats*,int32_t,int32_t,float)>(&Arrays::binarySearch))},
	{"binarySearch", "([Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($ObjectArray*,Object$*)>(&Arrays::binarySearch))},
	{"binarySearch", "([Ljava/lang/Object;IILjava/lang/Object;)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($ObjectArray*,int32_t,int32_t,Object$*)>(&Arrays::binarySearch))},
	{"binarySearch", "([Ljava/lang/Object;Ljava/lang/Object;Ljava/util/Comparator;)I", "<T:Ljava/lang/Object;>([TT;TT;Ljava/util/Comparator<-TT;>;)I", $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($ObjectArray*,Object$*,$Comparator*)>(&Arrays::binarySearch))},
	{"binarySearch", "([Ljava/lang/Object;IILjava/lang/Object;Ljava/util/Comparator;)I", "<T:Ljava/lang/Object;>([TT;IITT;Ljava/util/Comparator<-TT;>;)I", $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($ObjectArray*,int32_t,int32_t,Object$*,$Comparator*)>(&Arrays::binarySearch))},
	{"binarySearch0", "([JIIJ)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($longs*,int32_t,int32_t,int64_t)>(&Arrays::binarySearch0))},
	{"binarySearch0", "([IIII)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($ints*,int32_t,int32_t,int32_t)>(&Arrays::binarySearch0))},
	{"binarySearch0", "([SIIS)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($shorts*,int32_t,int32_t,int16_t)>(&Arrays::binarySearch0))},
	{"binarySearch0", "([CIIC)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($chars*,int32_t,int32_t,char16_t)>(&Arrays::binarySearch0))},
	{"binarySearch0", "([BIIB)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($bytes*,int32_t,int32_t,int8_t)>(&Arrays::binarySearch0))},
	{"binarySearch0", "([DIID)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($doubles*,int32_t,int32_t,double)>(&Arrays::binarySearch0))},
	{"binarySearch0", "([FIIF)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($floats*,int32_t,int32_t,float)>(&Arrays::binarySearch0))},
	{"binarySearch0", "([Ljava/lang/Object;IILjava/lang/Object;)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($ObjectArray*,int32_t,int32_t,Object$*)>(&Arrays::binarySearch0))},
	{"binarySearch0", "([Ljava/lang/Object;IILjava/lang/Object;Ljava/util/Comparator;)I", "<T:Ljava/lang/Object;>([TT;IITT;Ljava/util/Comparator<-TT;>;)I", $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($ObjectArray*,int32_t,int32_t,Object$*,$Comparator*)>(&Arrays::binarySearch0))},
	{"compare", "([Z[Z)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($booleans*,$booleans*)>(&Arrays::compare))},
	{"compare", "([ZII[ZII)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($booleans*,int32_t,int32_t,$booleans*,int32_t,int32_t)>(&Arrays::compare))},
	{"compare", "([B[B)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($bytes*,$bytes*)>(&Arrays::compare))},
	{"compare", "([BII[BII)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($bytes*,int32_t,int32_t,$bytes*,int32_t,int32_t)>(&Arrays::compare))},
	{"compare", "([S[S)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($shorts*,$shorts*)>(&Arrays::compare))},
	{"compare", "([SII[SII)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($shorts*,int32_t,int32_t,$shorts*,int32_t,int32_t)>(&Arrays::compare))},
	{"compare", "([C[C)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($chars*,$chars*)>(&Arrays::compare))},
	{"compare", "([CII[CII)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($chars*,int32_t,int32_t,$chars*,int32_t,int32_t)>(&Arrays::compare))},
	{"compare", "([I[I)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($ints*,$ints*)>(&Arrays::compare))},
	{"compare", "([III[III)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($ints*,int32_t,int32_t,$ints*,int32_t,int32_t)>(&Arrays::compare))},
	{"compare", "([J[J)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($longs*,$longs*)>(&Arrays::compare))},
	{"compare", "([JII[JII)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($longs*,int32_t,int32_t,$longs*,int32_t,int32_t)>(&Arrays::compare))},
	{"compare", "([F[F)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($floats*,$floats*)>(&Arrays::compare))},
	{"compare", "([FII[FII)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($floats*,int32_t,int32_t,$floats*,int32_t,int32_t)>(&Arrays::compare))},
	{"compare", "([D[D)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($doubles*,$doubles*)>(&Arrays::compare))},
	{"compare", "([DII[DII)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($doubles*,int32_t,int32_t,$doubles*,int32_t,int32_t)>(&Arrays::compare))},
	{"compare", "([Ljava/lang/Comparable;[Ljava/lang/Comparable;)I", "<T::Ljava/lang/Comparable<-TT;>;>([TT;[TT;)I", $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($ComparableArray*,$ComparableArray*)>(&Arrays::compare))},
	{"compare", "([Ljava/lang/Comparable;II[Ljava/lang/Comparable;II)I", "<T::Ljava/lang/Comparable<-TT;>;>([TT;II[TT;II)I", $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($ComparableArray*,int32_t,int32_t,$ComparableArray*,int32_t,int32_t)>(&Arrays::compare))},
	{"compare", "([Ljava/lang/Object;[Ljava/lang/Object;Ljava/util/Comparator;)I", "<T:Ljava/lang/Object;>([TT;[TT;Ljava/util/Comparator<-TT;>;)I", $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($ObjectArray*,$ObjectArray*,$Comparator*)>(&Arrays::compare))},
	{"compare", "([Ljava/lang/Object;II[Ljava/lang/Object;IILjava/util/Comparator;)I", "<T:Ljava/lang/Object;>([TT;II[TT;IILjava/util/Comparator<-TT;>;)I", $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($ObjectArray*,int32_t,int32_t,$ObjectArray*,int32_t,int32_t,$Comparator*)>(&Arrays::compare))},
	{"compareUnsigned", "([B[B)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($bytes*,$bytes*)>(&Arrays::compareUnsigned))},
	{"compareUnsigned", "([BII[BII)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($bytes*,int32_t,int32_t,$bytes*,int32_t,int32_t)>(&Arrays::compareUnsigned))},
	{"compareUnsigned", "([S[S)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($shorts*,$shorts*)>(&Arrays::compareUnsigned))},
	{"compareUnsigned", "([SII[SII)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($shorts*,int32_t,int32_t,$shorts*,int32_t,int32_t)>(&Arrays::compareUnsigned))},
	{"compareUnsigned", "([I[I)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($ints*,$ints*)>(&Arrays::compareUnsigned))},
	{"compareUnsigned", "([III[III)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($ints*,int32_t,int32_t,$ints*,int32_t,int32_t)>(&Arrays::compareUnsigned))},
	{"compareUnsigned", "([J[J)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($longs*,$longs*)>(&Arrays::compareUnsigned))},
	{"compareUnsigned", "([JII[JII)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($longs*,int32_t,int32_t,$longs*,int32_t,int32_t)>(&Arrays::compareUnsigned))},
	{"copyOf", "([Ljava/lang/Object;I)[Ljava/lang/Object;", "<T:Ljava/lang/Object;>([TT;I)[TT;", $PUBLIC | $STATIC, $method(static_cast<$ObjectArray*(*)($ObjectArray*,int32_t)>(&Arrays::copyOf))},
	{"copyOf", "([Ljava/lang/Object;ILjava/lang/Class;)[Ljava/lang/Object;", "<T:Ljava/lang/Object;U:Ljava/lang/Object;>([TU;ILjava/lang/Class<+[TT;>;)[TT;", $PUBLIC | $STATIC, $method(static_cast<$ObjectArray*(*)($ObjectArray*,int32_t,$Class*)>(&Arrays::copyOf)), nullptr, nullptr, _Arrays_MethodAnnotations_copyOf58},
	{"copyOf", "([BI)[B", nullptr, $PUBLIC | $STATIC, $method(static_cast<$bytes*(*)($bytes*,int32_t)>(&Arrays::copyOf))},
	{"copyOf", "([SI)[S", nullptr, $PUBLIC | $STATIC, $method(static_cast<$shorts*(*)($shorts*,int32_t)>(&Arrays::copyOf))},
	{"copyOf", "([II)[I", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ints*(*)($ints*,int32_t)>(&Arrays::copyOf))},
	{"copyOf", "([JI)[J", nullptr, $PUBLIC | $STATIC, $method(static_cast<$longs*(*)($longs*,int32_t)>(&Arrays::copyOf))},
	{"copyOf", "([CI)[C", nullptr, $PUBLIC | $STATIC, $method(static_cast<$chars*(*)($chars*,int32_t)>(&Arrays::copyOf))},
	{"copyOf", "([FI)[F", nullptr, $PUBLIC | $STATIC, $method(static_cast<$floats*(*)($floats*,int32_t)>(&Arrays::copyOf))},
	{"copyOf", "([DI)[D", nullptr, $PUBLIC | $STATIC, $method(static_cast<$doubles*(*)($doubles*,int32_t)>(&Arrays::copyOf))},
	{"copyOf", "([ZI)[Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<$booleans*(*)($booleans*,int32_t)>(&Arrays::copyOf))},
	{"copyOfRange", "([Ljava/lang/Object;II)[Ljava/lang/Object;", "<T:Ljava/lang/Object;>([TT;II)[TT;", $PUBLIC | $STATIC, $method(static_cast<$ObjectArray*(*)($ObjectArray*,int32_t,int32_t)>(&Arrays::copyOfRange))},
	{"copyOfRange", "([Ljava/lang/Object;IILjava/lang/Class;)[Ljava/lang/Object;", "<T:Ljava/lang/Object;U:Ljava/lang/Object;>([TU;IILjava/lang/Class<+[TT;>;)[TT;", $PUBLIC | $STATIC, $method(static_cast<$ObjectArray*(*)($ObjectArray*,int32_t,int32_t,$Class*)>(&Arrays::copyOfRange)), nullptr, nullptr, _Arrays_MethodAnnotations_copyOfRange68},
	{"copyOfRange", "([BII)[B", nullptr, $PUBLIC | $STATIC, $method(static_cast<$bytes*(*)($bytes*,int32_t,int32_t)>(&Arrays::copyOfRange))},
	{"copyOfRange", "([SII)[S", nullptr, $PUBLIC | $STATIC, $method(static_cast<$shorts*(*)($shorts*,int32_t,int32_t)>(&Arrays::copyOfRange))},
	{"copyOfRange", "([III)[I", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ints*(*)($ints*,int32_t,int32_t)>(&Arrays::copyOfRange))},
	{"copyOfRange", "([JII)[J", nullptr, $PUBLIC | $STATIC, $method(static_cast<$longs*(*)($longs*,int32_t,int32_t)>(&Arrays::copyOfRange))},
	{"copyOfRange", "([CII)[C", nullptr, $PUBLIC | $STATIC, $method(static_cast<$chars*(*)($chars*,int32_t,int32_t)>(&Arrays::copyOfRange))},
	{"copyOfRange", "([FII)[F", nullptr, $PUBLIC | $STATIC, $method(static_cast<$floats*(*)($floats*,int32_t,int32_t)>(&Arrays::copyOfRange))},
	{"copyOfRange", "([DII)[D", nullptr, $PUBLIC | $STATIC, $method(static_cast<$doubles*(*)($doubles*,int32_t,int32_t)>(&Arrays::copyOfRange))},
	{"copyOfRange", "([ZII)[Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<$booleans*(*)($booleans*,int32_t,int32_t)>(&Arrays::copyOfRange))},
	{"deepEquals", "([Ljava/lang/Object;[Ljava/lang/Object;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($ObjectArray*,$ObjectArray*)>(&Arrays::deepEquals))},
	{"deepEquals0", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $STATIC, $method(static_cast<bool(*)(Object$*,Object$*)>(&Arrays::deepEquals0))},
	{"deepHashCode", "([Ljava/lang/Object;)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($ObjectArray*)>(&Arrays::deepHashCode))},
	{"deepToString", "([Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($ObjectArray*)>(&Arrays::deepToString))},
	{"deepToString", "([Ljava/lang/Object;Ljava/lang/StringBuilder;Ljava/util/Set;)V", "([Ljava/lang/Object;Ljava/lang/StringBuilder;Ljava/util/Set<[Ljava/lang/Object;>;)V", $PRIVATE | $STATIC, $method(static_cast<void(*)($ObjectArray*,$StringBuilder*,$Set*)>(&Arrays::deepToString))},
	{"equals", "([J[J)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($longs*,$longs*)>(&Arrays::equals))},
	{"equals", "([JII[JII)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($longs*,int32_t,int32_t,$longs*,int32_t,int32_t)>(&Arrays::equals))},
	{"equals", "([I[I)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($ints*,$ints*)>(&Arrays::equals))},
	{"equals", "([III[III)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($ints*,int32_t,int32_t,$ints*,int32_t,int32_t)>(&Arrays::equals))},
	{"equals", "([S[S)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($shorts*,$shorts*)>(&Arrays::equals))},
	{"equals", "([SII[SII)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($shorts*,int32_t,int32_t,$shorts*,int32_t,int32_t)>(&Arrays::equals))},
	{"equals", "([C[C)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($chars*,$chars*)>(&Arrays::equals)), nullptr, nullptr, _Arrays_MethodAnnotations_equals88},
	{"equals", "([CII[CII)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($chars*,int32_t,int32_t,$chars*,int32_t,int32_t)>(&Arrays::equals))},
	{"equals", "([B[B)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($bytes*,$bytes*)>(&Arrays::equals)), nullptr, nullptr, _Arrays_MethodAnnotations_equals90},
	{"equals", "([BII[BII)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($bytes*,int32_t,int32_t,$bytes*,int32_t,int32_t)>(&Arrays::equals))},
	{"equals", "([Z[Z)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($booleans*,$booleans*)>(&Arrays::equals))},
	{"equals", "([ZII[ZII)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($booleans*,int32_t,int32_t,$booleans*,int32_t,int32_t)>(&Arrays::equals))},
	{"equals", "([D[D)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($doubles*,$doubles*)>(&Arrays::equals))},
	{"equals", "([DII[DII)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($doubles*,int32_t,int32_t,$doubles*,int32_t,int32_t)>(&Arrays::equals))},
	{"equals", "([F[F)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($floats*,$floats*)>(&Arrays::equals))},
	{"equals", "([FII[FII)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($floats*,int32_t,int32_t,$floats*,int32_t,int32_t)>(&Arrays::equals))},
	{"equals", "([Ljava/lang/Object;[Ljava/lang/Object;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($ObjectArray*,$ObjectArray*)>(&Arrays::equals))},
	{"equals", "([Ljava/lang/Object;II[Ljava/lang/Object;II)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($ObjectArray*,int32_t,int32_t,$ObjectArray*,int32_t,int32_t)>(&Arrays::equals))},
	{"equals", "([Ljava/lang/Object;[Ljava/lang/Object;Ljava/util/Comparator;)Z", "<T:Ljava/lang/Object;>([TT;[TT;Ljava/util/Comparator<-TT;>;)Z", $PUBLIC | $STATIC, $method(static_cast<bool(*)($ObjectArray*,$ObjectArray*,$Comparator*)>(&Arrays::equals))},
	{"equals", "([Ljava/lang/Object;II[Ljava/lang/Object;IILjava/util/Comparator;)Z", "<T:Ljava/lang/Object;>([TT;II[TT;IILjava/util/Comparator<-TT;>;)Z", $PUBLIC | $STATIC, $method(static_cast<bool(*)($ObjectArray*,int32_t,int32_t,$ObjectArray*,int32_t,int32_t,$Comparator*)>(&Arrays::equals))},
	{"fill", "([JJ)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($longs*,int64_t)>(&Arrays::fill))},
	{"fill", "([JIIJ)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($longs*,int32_t,int32_t,int64_t)>(&Arrays::fill))},
	{"fill", "([II)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($ints*,int32_t)>(&Arrays::fill))},
	{"fill", "([IIII)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($ints*,int32_t,int32_t,int32_t)>(&Arrays::fill))},
	{"fill", "([SS)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($shorts*,int16_t)>(&Arrays::fill))},
	{"fill", "([SIIS)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($shorts*,int32_t,int32_t,int16_t)>(&Arrays::fill))},
	{"fill", "([CC)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($chars*,char16_t)>(&Arrays::fill))},
	{"fill", "([CIIC)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($chars*,int32_t,int32_t,char16_t)>(&Arrays::fill))},
	{"fill", "([BB)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($bytes*,int8_t)>(&Arrays::fill))},
	{"fill", "([BIIB)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($bytes*,int32_t,int32_t,int8_t)>(&Arrays::fill))},
	{"fill", "([ZZ)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($booleans*,bool)>(&Arrays::fill))},
	{"fill", "([ZIIZ)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($booleans*,int32_t,int32_t,bool)>(&Arrays::fill))},
	{"fill", "([DD)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($doubles*,double)>(&Arrays::fill))},
	{"fill", "([DIID)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($doubles*,int32_t,int32_t,double)>(&Arrays::fill))},
	{"fill", "([FF)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($floats*,float)>(&Arrays::fill))},
	{"fill", "([FIIF)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($floats*,int32_t,int32_t,float)>(&Arrays::fill))},
	{"fill", "([Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($ObjectArray*,Object$*)>(&Arrays::fill))},
	{"fill", "([Ljava/lang/Object;IILjava/lang/Object;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($ObjectArray*,int32_t,int32_t,Object$*)>(&Arrays::fill))},
	{"hashCode", "([J)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($longs*)>(&Arrays::hashCode))},
	{"hashCode", "([I)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($ints*)>(&Arrays::hashCode))},
	{"hashCode", "([S)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($shorts*)>(&Arrays::hashCode))},
	{"hashCode", "([C)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($chars*)>(&Arrays::hashCode))},
	{"hashCode", "([B)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($bytes*)>(&Arrays::hashCode))},
	{"hashCode", "([Z)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($booleans*)>(&Arrays::hashCode))},
	{"hashCode", "([F)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($floats*)>(&Arrays::hashCode))},
	{"hashCode", "([D)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($doubles*)>(&Arrays::hashCode))},
	{"hashCode", "([Ljava/lang/Object;)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($ObjectArray*)>(&Arrays::hashCode))},
	{"lambda$parallelSetAll$0", "([Ljava/lang/Object;Ljava/util/function/IntFunction;I)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($ObjectArray*,$IntFunction*,int32_t)>(&Arrays::lambda$parallelSetAll$0))},
	{"lambda$parallelSetAll$1", "([ILjava/util/function/IntUnaryOperator;I)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($ints*,$IntUnaryOperator*,int32_t)>(&Arrays::lambda$parallelSetAll$1))},
	{"lambda$parallelSetAll$2", "([JLjava/util/function/IntToLongFunction;I)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($longs*,$IntToLongFunction*,int32_t)>(&Arrays::lambda$parallelSetAll$2))},
	{"lambda$parallelSetAll$3", "([DLjava/util/function/IntToDoubleFunction;I)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($doubles*,$IntToDoubleFunction*,int32_t)>(&Arrays::lambda$parallelSetAll$3))},
	{"legacyMergeSort", "([Ljava/lang/Object;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($ObjectArray*)>(&Arrays::legacyMergeSort))},
	{"legacyMergeSort", "([Ljava/lang/Object;II)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($ObjectArray*,int32_t,int32_t)>(&Arrays::legacyMergeSort))},
	{"legacyMergeSort", "([Ljava/lang/Object;Ljava/util/Comparator;)V", "<T:Ljava/lang/Object;>([TT;Ljava/util/Comparator<-TT;>;)V", $PRIVATE | $STATIC, $method(static_cast<void(*)($ObjectArray*,$Comparator*)>(&Arrays::legacyMergeSort))},
	{"legacyMergeSort", "([Ljava/lang/Object;IILjava/util/Comparator;)V", "<T:Ljava/lang/Object;>([TT;IILjava/util/Comparator<-TT;>;)V", $PRIVATE | $STATIC, $method(static_cast<void(*)($ObjectArray*,int32_t,int32_t,$Comparator*)>(&Arrays::legacyMergeSort))},
	{"mergeSort", "([Ljava/lang/Object;[Ljava/lang/Object;III)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($ObjectArray*,$ObjectArray*,int32_t,int32_t,int32_t)>(&Arrays::mergeSort))},
	{"mergeSort", "([Ljava/lang/Object;[Ljava/lang/Object;IIILjava/util/Comparator;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($ObjectArray*,$ObjectArray*,int32_t,int32_t,int32_t,$Comparator*)>(&Arrays::mergeSort))},
	{"mismatch", "([Z[Z)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($booleans*,$booleans*)>(&Arrays::mismatch))},
	{"mismatch", "([ZII[ZII)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($booleans*,int32_t,int32_t,$booleans*,int32_t,int32_t)>(&Arrays::mismatch))},
	{"mismatch", "([B[B)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($bytes*,$bytes*)>(&Arrays::mismatch))},
	{"mismatch", "([BII[BII)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($bytes*,int32_t,int32_t,$bytes*,int32_t,int32_t)>(&Arrays::mismatch))},
	{"mismatch", "([C[C)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($chars*,$chars*)>(&Arrays::mismatch))},
	{"mismatch", "([CII[CII)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($chars*,int32_t,int32_t,$chars*,int32_t,int32_t)>(&Arrays::mismatch))},
	{"mismatch", "([S[S)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($shorts*,$shorts*)>(&Arrays::mismatch))},
	{"mismatch", "([SII[SII)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($shorts*,int32_t,int32_t,$shorts*,int32_t,int32_t)>(&Arrays::mismatch))},
	{"mismatch", "([I[I)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($ints*,$ints*)>(&Arrays::mismatch))},
	{"mismatch", "([III[III)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($ints*,int32_t,int32_t,$ints*,int32_t,int32_t)>(&Arrays::mismatch))},
	{"mismatch", "([J[J)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($longs*,$longs*)>(&Arrays::mismatch))},
	{"mismatch", "([JII[JII)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($longs*,int32_t,int32_t,$longs*,int32_t,int32_t)>(&Arrays::mismatch))},
	{"mismatch", "([F[F)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($floats*,$floats*)>(&Arrays::mismatch))},
	{"mismatch", "([FII[FII)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($floats*,int32_t,int32_t,$floats*,int32_t,int32_t)>(&Arrays::mismatch))},
	{"mismatch", "([D[D)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($doubles*,$doubles*)>(&Arrays::mismatch))},
	{"mismatch", "([DII[DII)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($doubles*,int32_t,int32_t,$doubles*,int32_t,int32_t)>(&Arrays::mismatch))},
	{"mismatch", "([Ljava/lang/Object;[Ljava/lang/Object;)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($ObjectArray*,$ObjectArray*)>(&Arrays::mismatch))},
	{"mismatch", "([Ljava/lang/Object;II[Ljava/lang/Object;II)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($ObjectArray*,int32_t,int32_t,$ObjectArray*,int32_t,int32_t)>(&Arrays::mismatch))},
	{"mismatch", "([Ljava/lang/Object;[Ljava/lang/Object;Ljava/util/Comparator;)I", "<T:Ljava/lang/Object;>([TT;[TT;Ljava/util/Comparator<-TT;>;)I", $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($ObjectArray*,$ObjectArray*,$Comparator*)>(&Arrays::mismatch))},
	{"mismatch", "([Ljava/lang/Object;II[Ljava/lang/Object;IILjava/util/Comparator;)I", "<T:Ljava/lang/Object;>([TT;II[TT;IILjava/util/Comparator<-TT;>;)I", $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($ObjectArray*,int32_t,int32_t,$ObjectArray*,int32_t,int32_t,$Comparator*)>(&Arrays::mismatch))},
	{"parallelPrefix", "([Ljava/lang/Object;Ljava/util/function/BinaryOperator;)V", "<T:Ljava/lang/Object;>([TT;Ljava/util/function/BinaryOperator<TT;>;)V", $PUBLIC | $STATIC, $method(static_cast<void(*)($ObjectArray*,$BinaryOperator*)>(&Arrays::parallelPrefix))},
	{"parallelPrefix", "([Ljava/lang/Object;IILjava/util/function/BinaryOperator;)V", "<T:Ljava/lang/Object;>([TT;IILjava/util/function/BinaryOperator<TT;>;)V", $PUBLIC | $STATIC, $method(static_cast<void(*)($ObjectArray*,int32_t,int32_t,$BinaryOperator*)>(&Arrays::parallelPrefix))},
	{"parallelPrefix", "([JLjava/util/function/LongBinaryOperator;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($longs*,$LongBinaryOperator*)>(&Arrays::parallelPrefix))},
	{"parallelPrefix", "([JIILjava/util/function/LongBinaryOperator;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($longs*,int32_t,int32_t,$LongBinaryOperator*)>(&Arrays::parallelPrefix))},
	{"parallelPrefix", "([DLjava/util/function/DoubleBinaryOperator;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($doubles*,$DoubleBinaryOperator*)>(&Arrays::parallelPrefix))},
	{"parallelPrefix", "([DIILjava/util/function/DoubleBinaryOperator;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($doubles*,int32_t,int32_t,$DoubleBinaryOperator*)>(&Arrays::parallelPrefix))},
	{"parallelPrefix", "([ILjava/util/function/IntBinaryOperator;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($ints*,$IntBinaryOperator*)>(&Arrays::parallelPrefix))},
	{"parallelPrefix", "([IIILjava/util/function/IntBinaryOperator;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($ints*,int32_t,int32_t,$IntBinaryOperator*)>(&Arrays::parallelPrefix))},
	{"parallelSetAll", "([Ljava/lang/Object;Ljava/util/function/IntFunction;)V", "<T:Ljava/lang/Object;>([TT;Ljava/util/function/IntFunction<+TT;>;)V", $PUBLIC | $STATIC, $method(static_cast<void(*)($ObjectArray*,$IntFunction*)>(&Arrays::parallelSetAll))},
	{"parallelSetAll", "([ILjava/util/function/IntUnaryOperator;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($ints*,$IntUnaryOperator*)>(&Arrays::parallelSetAll))},
	{"parallelSetAll", "([JLjava/util/function/IntToLongFunction;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($longs*,$IntToLongFunction*)>(&Arrays::parallelSetAll))},
	{"parallelSetAll", "([DLjava/util/function/IntToDoubleFunction;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($doubles*,$IntToDoubleFunction*)>(&Arrays::parallelSetAll))},
	{"parallelSort", "([B)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($bytes*)>(&Arrays::parallelSort))},
	{"parallelSort", "([BII)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($bytes*,int32_t,int32_t)>(&Arrays::parallelSort))},
	{"parallelSort", "([C)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($chars*)>(&Arrays::parallelSort))},
	{"parallelSort", "([CII)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($chars*,int32_t,int32_t)>(&Arrays::parallelSort))},
	{"parallelSort", "([S)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($shorts*)>(&Arrays::parallelSort))},
	{"parallelSort", "([SII)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($shorts*,int32_t,int32_t)>(&Arrays::parallelSort))},
	{"parallelSort", "([I)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($ints*)>(&Arrays::parallelSort))},
	{"parallelSort", "([III)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($ints*,int32_t,int32_t)>(&Arrays::parallelSort))},
	{"parallelSort", "([J)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($longs*)>(&Arrays::parallelSort))},
	{"parallelSort", "([JII)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($longs*,int32_t,int32_t)>(&Arrays::parallelSort))},
	{"parallelSort", "([F)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($floats*)>(&Arrays::parallelSort))},
	{"parallelSort", "([FII)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($floats*,int32_t,int32_t)>(&Arrays::parallelSort))},
	{"parallelSort", "([D)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($doubles*)>(&Arrays::parallelSort))},
	{"parallelSort", "([DII)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($doubles*,int32_t,int32_t)>(&Arrays::parallelSort))},
	{"parallelSort", "([Ljava/lang/Comparable;)V", "<T::Ljava/lang/Comparable<-TT;>;>([TT;)V", $PUBLIC | $STATIC, $method(static_cast<void(*)($ComparableArray*)>(&Arrays::parallelSort))},
	{"parallelSort", "([Ljava/lang/Comparable;II)V", "<T::Ljava/lang/Comparable<-TT;>;>([TT;II)V", $PUBLIC | $STATIC, $method(static_cast<void(*)($ComparableArray*,int32_t,int32_t)>(&Arrays::parallelSort))},
	{"parallelSort", "([Ljava/lang/Object;Ljava/util/Comparator;)V", "<T:Ljava/lang/Object;>([TT;Ljava/util/Comparator<-TT;>;)V", $PUBLIC | $STATIC, $method(static_cast<void(*)($ObjectArray*,$Comparator*)>(&Arrays::parallelSort))},
	{"parallelSort", "([Ljava/lang/Object;IILjava/util/Comparator;)V", "<T:Ljava/lang/Object;>([TT;IILjava/util/Comparator<-TT;>;)V", $PUBLIC | $STATIC, $method(static_cast<void(*)($ObjectArray*,int32_t,int32_t,$Comparator*)>(&Arrays::parallelSort))},
	{"primitiveArrayHashCode", "(Ljava/lang/Object;Ljava/lang/Class;)I", "(Ljava/lang/Object;Ljava/lang/Class<*>;)I", $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(Object$*,$Class*)>(&Arrays::primitiveArrayHashCode))},
	{"rangeCheck", "(III)V", nullptr, $STATIC, $method(static_cast<void(*)(int32_t,int32_t,int32_t)>(&Arrays::rangeCheck))},
	{"setAll", "([Ljava/lang/Object;Ljava/util/function/IntFunction;)V", "<T:Ljava/lang/Object;>([TT;Ljava/util/function/IntFunction<+TT;>;)V", $PUBLIC | $STATIC, $method(static_cast<void(*)($ObjectArray*,$IntFunction*)>(&Arrays::setAll))},
	{"setAll", "([ILjava/util/function/IntUnaryOperator;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($ints*,$IntUnaryOperator*)>(&Arrays::setAll))},
	{"setAll", "([JLjava/util/function/IntToLongFunction;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($longs*,$IntToLongFunction*)>(&Arrays::setAll))},
	{"setAll", "([DLjava/util/function/IntToDoubleFunction;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($doubles*,$IntToDoubleFunction*)>(&Arrays::setAll))},
	{"sort", "([I)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($ints*)>(&Arrays::sort))},
	{"sort", "([III)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($ints*,int32_t,int32_t)>(&Arrays::sort))},
	{"sort", "([J)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($longs*)>(&Arrays::sort))},
	{"sort", "([JII)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($longs*,int32_t,int32_t)>(&Arrays::sort))},
	{"sort", "([S)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($shorts*)>(&Arrays::sort))},
	{"sort", "([SII)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($shorts*,int32_t,int32_t)>(&Arrays::sort))},
	{"sort", "([C)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($chars*)>(&Arrays::sort))},
	{"sort", "([CII)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($chars*,int32_t,int32_t)>(&Arrays::sort))},
	{"sort", "([B)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($bytes*)>(&Arrays::sort))},
	{"sort", "([BII)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($bytes*,int32_t,int32_t)>(&Arrays::sort))},
	{"sort", "([F)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($floats*)>(&Arrays::sort))},
	{"sort", "([FII)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($floats*,int32_t,int32_t)>(&Arrays::sort))},
	{"sort", "([D)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($doubles*)>(&Arrays::sort))},
	{"sort", "([DII)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($doubles*,int32_t,int32_t)>(&Arrays::sort))},
	{"sort", "([Ljava/lang/Object;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($ObjectArray*)>(&Arrays::sort))},
	{"sort", "([Ljava/lang/Object;II)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($ObjectArray*,int32_t,int32_t)>(&Arrays::sort))},
	{"sort", "([Ljava/lang/Object;Ljava/util/Comparator;)V", "<T:Ljava/lang/Object;>([TT;Ljava/util/Comparator<-TT;>;)V", $PUBLIC | $STATIC, $method(static_cast<void(*)($ObjectArray*,$Comparator*)>(&Arrays::sort))},
	{"sort", "([Ljava/lang/Object;IILjava/util/Comparator;)V", "<T:Ljava/lang/Object;>([TT;IILjava/util/Comparator<-TT;>;)V", $PUBLIC | $STATIC, $method(static_cast<void(*)($ObjectArray*,int32_t,int32_t,$Comparator*)>(&Arrays::sort))},
	{"spliterator", "([Ljava/lang/Object;)Ljava/util/Spliterator;", "<T:Ljava/lang/Object;>([TT;)Ljava/util/Spliterator<TT;>;", $PUBLIC | $STATIC, $method(static_cast<$Spliterator*(*)($ObjectArray*)>(&Arrays::spliterator))},
	{"spliterator", "([Ljava/lang/Object;II)Ljava/util/Spliterator;", "<T:Ljava/lang/Object;>([TT;II)Ljava/util/Spliterator<TT;>;", $PUBLIC | $STATIC, $method(static_cast<$Spliterator*(*)($ObjectArray*,int32_t,int32_t)>(&Arrays::spliterator))},
	{"spliterator", "([I)Ljava/util/Spliterator$OfInt;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Spliterator$OfInt*(*)($ints*)>(&Arrays::spliterator))},
	{"spliterator", "([III)Ljava/util/Spliterator$OfInt;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Spliterator$OfInt*(*)($ints*,int32_t,int32_t)>(&Arrays::spliterator))},
	{"spliterator", "([J)Ljava/util/Spliterator$OfLong;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Spliterator$OfLong*(*)($longs*)>(&Arrays::spliterator))},
	{"spliterator", "([JII)Ljava/util/Spliterator$OfLong;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Spliterator$OfLong*(*)($longs*,int32_t,int32_t)>(&Arrays::spliterator))},
	{"spliterator", "([D)Ljava/util/Spliterator$OfDouble;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Spliterator$OfDouble*(*)($doubles*)>(&Arrays::spliterator))},
	{"spliterator", "([DII)Ljava/util/Spliterator$OfDouble;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Spliterator$OfDouble*(*)($doubles*,int32_t,int32_t)>(&Arrays::spliterator))},
	{"stream", "([Ljava/lang/Object;)Ljava/util/stream/Stream;", "<T:Ljava/lang/Object;>([TT;)Ljava/util/stream/Stream<TT;>;", $PUBLIC | $STATIC, $method(static_cast<$Stream*(*)($ObjectArray*)>(&Arrays::stream))},
	{"stream", "([Ljava/lang/Object;II)Ljava/util/stream/Stream;", "<T:Ljava/lang/Object;>([TT;II)Ljava/util/stream/Stream<TT;>;", $PUBLIC | $STATIC, $method(static_cast<$Stream*(*)($ObjectArray*,int32_t,int32_t)>(&Arrays::stream))},
	{"stream", "([I)Ljava/util/stream/IntStream;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$IntStream*(*)($ints*)>(&Arrays::stream))},
	{"stream", "([III)Ljava/util/stream/IntStream;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$IntStream*(*)($ints*,int32_t,int32_t)>(&Arrays::stream))},
	{"stream", "([J)Ljava/util/stream/LongStream;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$LongStream*(*)($longs*)>(&Arrays::stream))},
	{"stream", "([JII)Ljava/util/stream/LongStream;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$LongStream*(*)($longs*,int32_t,int32_t)>(&Arrays::stream))},
	{"stream", "([D)Ljava/util/stream/DoubleStream;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$DoubleStream*(*)($doubles*)>(&Arrays::stream))},
	{"stream", "([DII)Ljava/util/stream/DoubleStream;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$DoubleStream*(*)($doubles*,int32_t,int32_t)>(&Arrays::stream))},
	{"swap", "([Ljava/lang/Object;II)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($ObjectArray*,int32_t,int32_t)>(&Arrays::swap))},
	{"toString", "([J)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($longs*)>(&Arrays::toString))},
	{"toString", "([I)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($ints*)>(&Arrays::toString))},
	{"toString", "([S)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($shorts*)>(&Arrays::toString))},
	{"toString", "([C)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($chars*)>(&Arrays::toString))},
	{"toString", "([B)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($bytes*)>(&Arrays::toString))},
	{"toString", "([Z)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($booleans*)>(&Arrays::toString))},
	{"toString", "([F)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($floats*)>(&Arrays::toString))},
	{"toString", "([D)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($doubles*)>(&Arrays::toString))},
	{"toString", "([Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($ObjectArray*)>(&Arrays::toString))},
	{}
};

$InnerClassInfo _Arrays_InnerClassesInfo_[] = {
	{"java.util.Arrays$ArrayItr", "java.util.Arrays", "ArrayItr", $PRIVATE | $STATIC},
	{"java.util.Arrays$ArrayList", "java.util.Arrays", "ArrayList", $PRIVATE | $STATIC},
	{"java.util.Arrays$LegacyMergeSort", "java.util.Arrays", "LegacyMergeSort", $STATIC | $FINAL},
	{"java.util.Arrays$NaturalOrder", "java.util.Arrays", "NaturalOrder", $STATIC | $FINAL},
	{}
};

$ClassInfo _Arrays_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.util.Arrays",
	"java.lang.Object",
	nullptr,
	_Arrays_FieldInfo_,
	_Arrays_MethodInfo_,
	nullptr,
	nullptr,
	_Arrays_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.util.Arrays$ArrayItr,java.util.Arrays$ArrayList,java.util.Arrays$LegacyMergeSort,java.util.Arrays$NaturalOrder"
};

$Object* allocate$Arrays($Class* clazz) {
	return $of($alloc(Arrays));
}

bool Arrays::$assertionsDisabled = false;

void Arrays::init$() {
}

void Arrays::sort($ints* a) {
	$init(Arrays);
	$DualPivotQuicksort::sort(a, 0, 0, $nc(a)->length);
}

void Arrays::sort($ints* a, int32_t fromIndex, int32_t toIndex) {
	$init(Arrays);
	rangeCheck($nc(a)->length, fromIndex, toIndex);
	$DualPivotQuicksort::sort(a, 0, fromIndex, toIndex);
}

void Arrays::sort($longs* a) {
	$init(Arrays);
	$DualPivotQuicksort::sort(a, 0, 0, $nc(a)->length);
}

void Arrays::sort($longs* a, int32_t fromIndex, int32_t toIndex) {
	$init(Arrays);
	rangeCheck($nc(a)->length, fromIndex, toIndex);
	$DualPivotQuicksort::sort(a, 0, fromIndex, toIndex);
}

void Arrays::sort($shorts* a) {
	$init(Arrays);
	$DualPivotQuicksort::sort(a, 0, $nc(a)->length);
}

void Arrays::sort($shorts* a, int32_t fromIndex, int32_t toIndex) {
	$init(Arrays);
	rangeCheck($nc(a)->length, fromIndex, toIndex);
	$DualPivotQuicksort::sort(a, fromIndex, toIndex);
}

void Arrays::sort($chars* a) {
	$init(Arrays);
	$DualPivotQuicksort::sort(a, 0, $nc(a)->length);
}

void Arrays::sort($chars* a, int32_t fromIndex, int32_t toIndex) {
	$init(Arrays);
	rangeCheck($nc(a)->length, fromIndex, toIndex);
	$DualPivotQuicksort::sort(a, fromIndex, toIndex);
}

void Arrays::sort($bytes* a) {
	$init(Arrays);
	$DualPivotQuicksort::sort(a, 0, $nc(a)->length);
}

void Arrays::sort($bytes* a, int32_t fromIndex, int32_t toIndex) {
	$init(Arrays);
	rangeCheck($nc(a)->length, fromIndex, toIndex);
	$DualPivotQuicksort::sort(a, fromIndex, toIndex);
}

void Arrays::sort($floats* a) {
	$init(Arrays);
	$DualPivotQuicksort::sort(a, 0, 0, $nc(a)->length);
}

void Arrays::sort($floats* a, int32_t fromIndex, int32_t toIndex) {
	$init(Arrays);
	rangeCheck($nc(a)->length, fromIndex, toIndex);
	$DualPivotQuicksort::sort(a, 0, fromIndex, toIndex);
}

void Arrays::sort($doubles* a) {
	$init(Arrays);
	$DualPivotQuicksort::sort(a, 0, 0, $nc(a)->length);
}

void Arrays::sort($doubles* a, int32_t fromIndex, int32_t toIndex) {
	$init(Arrays);
	rangeCheck($nc(a)->length, fromIndex, toIndex);
	$DualPivotQuicksort::sort(a, 0, fromIndex, toIndex);
}

void Arrays::parallelSort($bytes* a) {
	$init(Arrays);
	$DualPivotQuicksort::sort(a, 0, $nc(a)->length);
}

void Arrays::parallelSort($bytes* a, int32_t fromIndex, int32_t toIndex) {
	$init(Arrays);
	rangeCheck($nc(a)->length, fromIndex, toIndex);
	$DualPivotQuicksort::sort(a, fromIndex, toIndex);
}

void Arrays::parallelSort($chars* a) {
	$init(Arrays);
	$DualPivotQuicksort::sort(a, 0, $nc(a)->length);
}

void Arrays::parallelSort($chars* a, int32_t fromIndex, int32_t toIndex) {
	$init(Arrays);
	rangeCheck($nc(a)->length, fromIndex, toIndex);
	$DualPivotQuicksort::sort(a, fromIndex, toIndex);
}

void Arrays::parallelSort($shorts* a) {
	$init(Arrays);
	$DualPivotQuicksort::sort(a, 0, $nc(a)->length);
}

void Arrays::parallelSort($shorts* a, int32_t fromIndex, int32_t toIndex) {
	$init(Arrays);
	rangeCheck($nc(a)->length, fromIndex, toIndex);
	$DualPivotQuicksort::sort(a, fromIndex, toIndex);
}

void Arrays::parallelSort($ints* a) {
	$init(Arrays);
	$DualPivotQuicksort::sort(a, $ForkJoinPool::getCommonPoolParallelism(), 0, $nc(a)->length);
}

void Arrays::parallelSort($ints* a, int32_t fromIndex, int32_t toIndex) {
	$init(Arrays);
	rangeCheck($nc(a)->length, fromIndex, toIndex);
	$DualPivotQuicksort::sort(a, $ForkJoinPool::getCommonPoolParallelism(), fromIndex, toIndex);
}

void Arrays::parallelSort($longs* a) {
	$init(Arrays);
	$DualPivotQuicksort::sort(a, $ForkJoinPool::getCommonPoolParallelism(), 0, $nc(a)->length);
}

void Arrays::parallelSort($longs* a, int32_t fromIndex, int32_t toIndex) {
	$init(Arrays);
	rangeCheck($nc(a)->length, fromIndex, toIndex);
	$DualPivotQuicksort::sort(a, $ForkJoinPool::getCommonPoolParallelism(), fromIndex, toIndex);
}

void Arrays::parallelSort($floats* a) {
	$init(Arrays);
	$DualPivotQuicksort::sort(a, $ForkJoinPool::getCommonPoolParallelism(), 0, $nc(a)->length);
}

void Arrays::parallelSort($floats* a, int32_t fromIndex, int32_t toIndex) {
	$init(Arrays);
	rangeCheck($nc(a)->length, fromIndex, toIndex);
	$DualPivotQuicksort::sort(a, $ForkJoinPool::getCommonPoolParallelism(), fromIndex, toIndex);
}

void Arrays::parallelSort($doubles* a) {
	$init(Arrays);
	$DualPivotQuicksort::sort(a, $ForkJoinPool::getCommonPoolParallelism(), 0, $nc(a)->length);
}

void Arrays::parallelSort($doubles* a, int32_t fromIndex, int32_t toIndex) {
	$init(Arrays);
	rangeCheck($nc(a)->length, fromIndex, toIndex);
	$DualPivotQuicksort::sort(a, $ForkJoinPool::getCommonPoolParallelism(), fromIndex, toIndex);
}

void Arrays::rangeCheck(int32_t arrayLength, int32_t fromIndex, int32_t toIndex) {
	$init(Arrays);
	$useLocalCurrentObjectStackCache();
	if (fromIndex > toIndex) {
		$throwNew($IllegalArgumentException, $$str({"fromIndex("_s, $$str(fromIndex), ") > toIndex("_s, $$str(toIndex), ")"_s}));
	}
	if (fromIndex < 0) {
		$throwNew($ArrayIndexOutOfBoundsException, fromIndex);
	}
	if (toIndex > arrayLength) {
		$throwNew($ArrayIndexOutOfBoundsException, toIndex);
	}
}

void Arrays::parallelSort($ComparableArray* a) {
	$init(Arrays);
	$useLocalCurrentObjectStackCache();
	int32_t n = $nc(a)->length;
	int32_t p = 0;
	int32_t g = 0;
	if (n <= Arrays::MIN_ARRAY_SORT_GRAN || (p = $ForkJoinPool::getCommonPoolParallelism()) == 1) {
		$init($Arrays$NaturalOrder);
		$TimSort::sort(a, 0, n, $Arrays$NaturalOrder::INSTANCE, nullptr, 0, 0);
	} else {
		$init($Arrays$NaturalOrder);
		$$new($ArraysParallelSortHelpers$FJObject$Sorter, nullptr, a, $cast($ComparableArray, $($1Array::newInstance($of(a)->getClass()->getComponentType(), n))), 0, n, 0, ((g = $div(n, (p << 2))) <= Arrays::MIN_ARRAY_SORT_GRAN) ? Arrays::MIN_ARRAY_SORT_GRAN : g, $Arrays$NaturalOrder::INSTANCE)->invoke();
	}
}

void Arrays::parallelSort($ComparableArray* a, int32_t fromIndex, int32_t toIndex) {
	$init(Arrays);
	$useLocalCurrentObjectStackCache();
	rangeCheck($nc(a)->length, fromIndex, toIndex);
	int32_t n = toIndex - fromIndex;
	int32_t p = 0;
	int32_t g = 0;
	if (n <= Arrays::MIN_ARRAY_SORT_GRAN || (p = $ForkJoinPool::getCommonPoolParallelism()) == 1) {
		$init($Arrays$NaturalOrder);
		$TimSort::sort(a, fromIndex, toIndex, $Arrays$NaturalOrder::INSTANCE, nullptr, 0, 0);
	} else {
		$init($Arrays$NaturalOrder);
		$$new($ArraysParallelSortHelpers$FJObject$Sorter, nullptr, a, $cast($ComparableArray, $($1Array::newInstance($nc($of(a))->getClass()->getComponentType(), n))), fromIndex, n, 0, ((g = $div(n, (p << 2))) <= Arrays::MIN_ARRAY_SORT_GRAN) ? Arrays::MIN_ARRAY_SORT_GRAN : g, $Arrays$NaturalOrder::INSTANCE)->invoke();
	}
}

void Arrays::parallelSort($ObjectArray* a, $Comparator* cmp$renamed) {
	$init(Arrays);
	$useLocalCurrentObjectStackCache();
	$var($Comparator, cmp, cmp$renamed);
	if (cmp == nullptr) {
		$init($Arrays$NaturalOrder);
		$assign(cmp, $Arrays$NaturalOrder::INSTANCE);
	}
	int32_t n = $nc(a)->length;
	int32_t p = 0;
	int32_t g = 0;
	if (n <= Arrays::MIN_ARRAY_SORT_GRAN || (p = $ForkJoinPool::getCommonPoolParallelism()) == 1) {
		$TimSort::sort(a, 0, n, cmp, nullptr, 0, 0);
	} else {
		$$new($ArraysParallelSortHelpers$FJObject$Sorter, nullptr, a, $cast($ObjectArray, $($1Array::newInstance($of(a)->getClass()->getComponentType(), n))), 0, n, 0, ((g = $div(n, (p << 2))) <= Arrays::MIN_ARRAY_SORT_GRAN) ? Arrays::MIN_ARRAY_SORT_GRAN : g, cmp)->invoke();
	}
}

void Arrays::parallelSort($ObjectArray* a, int32_t fromIndex, int32_t toIndex, $Comparator* cmp$renamed) {
	$init(Arrays);
	$useLocalCurrentObjectStackCache();
	$var($Comparator, cmp, cmp$renamed);
	rangeCheck($nc(a)->length, fromIndex, toIndex);
	if (cmp == nullptr) {
		$init($Arrays$NaturalOrder);
		$assign(cmp, $Arrays$NaturalOrder::INSTANCE);
	}
	int32_t n = toIndex - fromIndex;
	int32_t p = 0;
	int32_t g = 0;
	if (n <= Arrays::MIN_ARRAY_SORT_GRAN || (p = $ForkJoinPool::getCommonPoolParallelism()) == 1) {
		$TimSort::sort(a, fromIndex, toIndex, cmp, nullptr, 0, 0);
	} else {
		$$new($ArraysParallelSortHelpers$FJObject$Sorter, nullptr, a, $cast($ObjectArray, $($1Array::newInstance($nc($of(a))->getClass()->getComponentType(), n))), fromIndex, n, 0, ((g = $div(n, (p << 2))) <= Arrays::MIN_ARRAY_SORT_GRAN) ? Arrays::MIN_ARRAY_SORT_GRAN : g, cmp)->invoke();
	}
}

void Arrays::sort($ObjectArray* a) {
	$init(Arrays);
	$init($Arrays$LegacyMergeSort);
	if ($Arrays$LegacyMergeSort::userRequested) {
		legacyMergeSort(a);
	} else {
		$ComparableTimSort::sort(a, 0, $nc(a)->length, nullptr, 0, 0);
	}
}

void Arrays::legacyMergeSort($ObjectArray* a) {
	$init(Arrays);
	$var($ObjectArray, aux, $cast($ObjectArray, $nc(a)->clone()));
	mergeSort(aux, a, 0, a->length, 0);
}

void Arrays::sort($ObjectArray* a, int32_t fromIndex, int32_t toIndex) {
	$init(Arrays);
	rangeCheck($nc(a)->length, fromIndex, toIndex);
	$init($Arrays$LegacyMergeSort);
	if ($Arrays$LegacyMergeSort::userRequested) {
		legacyMergeSort(a, fromIndex, toIndex);
	} else {
		$ComparableTimSort::sort(a, fromIndex, toIndex, nullptr, 0, 0);
	}
}

void Arrays::legacyMergeSort($ObjectArray* a, int32_t fromIndex, int32_t toIndex) {
	$init(Arrays);
	$var($ObjectArray, aux, copyOfRange(a, fromIndex, toIndex));
	mergeSort(aux, a, fromIndex, toIndex, -fromIndex);
}

void Arrays::mergeSort($ObjectArray* src, $ObjectArray* dest, int32_t low, int32_t high, int32_t off) {
	$init(Arrays);
	int32_t length = high - low;
	if (length < Arrays::INSERTIONSORT_THRESHOLD) {
		for (int32_t i = low; i < high; ++i) {
			for (int32_t j = i; j > low && $nc(($cast($Comparable, $nc(dest)->get(j - 1))))->compareTo(dest->get(j)) > 0; --j) {
				swap(dest, j, j - 1);
			}
		}
		return;
	}
	int32_t destLow = low;
	int32_t destHigh = high;
	low += off;
	high += off;
	int32_t mid = (int32_t)((uint32_t)(low + high) >> 1);
	mergeSort(dest, src, low, mid, -off);
	mergeSort(dest, src, mid, high, -off);
	if ($nc(($cast($Comparable, $nc(src)->get(mid - 1))))->compareTo(src->get(mid)) <= 0) {
		$System::arraycopy(src, low, dest, destLow, length);
		return;
	}
	{
		int32_t i = destLow;
		int32_t p = low;
		int32_t q = mid;
		for (; i < destHigh; ++i) {
			if (q >= high || p < mid && $nc(($cast($Comparable, $nc(src)->get(p))))->compareTo(src->get(q)) <= 0) {
				$nc(dest)->set(i, src->get(p++));
			} else {
				$nc(dest)->set(i, src->get(q++));
			}
		}
	}
}

void Arrays::swap($ObjectArray* x, int32_t a, int32_t b) {
	$init(Arrays);
	$var($Object0, t, $nc(x)->get(a));
	x->set(a, x->get(b));
	x->set(b, t);
}

void Arrays::sort($ObjectArray* a, $Comparator* c) {
	$init(Arrays);
	if (c == nullptr) {
		sort(a);
	} else {
		$init($Arrays$LegacyMergeSort);
		if ($Arrays$LegacyMergeSort::userRequested) {
			legacyMergeSort(a, c);
		} else {
			$TimSort::sort(a, 0, $nc(a)->length, c, nullptr, 0, 0);
		}
	}
}

void Arrays::legacyMergeSort($ObjectArray* a, $Comparator* c) {
	$init(Arrays);
	$var($ObjectArray, aux, $cast($ObjectArray, $nc(a)->clone()));
	if (c == nullptr) {
		mergeSort(aux, a, 0, a->length, 0);
	} else {
		mergeSort(aux, a, 0, a->length, 0, c);
	}
}

void Arrays::sort($ObjectArray* a, int32_t fromIndex, int32_t toIndex, $Comparator* c) {
	$init(Arrays);
	if (c == nullptr) {
		sort(a, fromIndex, toIndex);
	} else {
		rangeCheck($nc(a)->length, fromIndex, toIndex);
		$init($Arrays$LegacyMergeSort);
		if ($Arrays$LegacyMergeSort::userRequested) {
			legacyMergeSort(a, fromIndex, toIndex, c);
		} else {
			$TimSort::sort(a, fromIndex, toIndex, c, nullptr, 0, 0);
		}
	}
}

void Arrays::legacyMergeSort($ObjectArray* a, int32_t fromIndex, int32_t toIndex, $Comparator* c) {
	$init(Arrays);
	$var($ObjectArray, aux, copyOfRange(a, fromIndex, toIndex));
	if (c == nullptr) {
		mergeSort(aux, a, fromIndex, toIndex, -fromIndex);
	} else {
		mergeSort(aux, a, fromIndex, toIndex, -fromIndex, c);
	}
}

void Arrays::mergeSort($ObjectArray* src, $ObjectArray* dest, int32_t low, int32_t high, int32_t off, $Comparator* c) {
	$init(Arrays);
	int32_t length = high - low;
	if (length < Arrays::INSERTIONSORT_THRESHOLD) {
		for (int32_t i = low; i < high; ++i) {
			for (int32_t j = i; j > low && $nc(c)->compare($nc(dest)->get(j - 1), dest->get(j)) > 0; --j) {
				swap(dest, j, j - 1);
			}
		}
		return;
	}
	int32_t destLow = low;
	int32_t destHigh = high;
	low += off;
	high += off;
	int32_t mid = (int32_t)((uint32_t)(low + high) >> 1);
	mergeSort(dest, src, low, mid, -off, c);
	mergeSort(dest, src, mid, high, -off, c);
	if ($nc(c)->compare($nc(src)->get(mid - 1), src->get(mid)) <= 0) {
		$System::arraycopy(src, low, dest, destLow, length);
		return;
	}
	{
		int32_t i = destLow;
		int32_t p = low;
		int32_t q = mid;
		for (; i < destHigh; ++i) {
			if (q >= high || p < mid && $nc(c)->compare($nc(src)->get(p), src->get(q)) <= 0) {
				$nc(dest)->set(i, $nc(src)->get(p++));
			} else {
				$nc(dest)->set(i, $nc(src)->get(q++));
			}
		}
	}
}

void Arrays::parallelPrefix($ObjectArray* array, $BinaryOperator* op) {
	$init(Arrays);
	$Objects::requireNonNull(op);
	if ($nc(array)->length > 0) {
		$$new($ArrayPrefixHelpers$CumulateTask, nullptr, op, array, 0, array->length)->invoke();
	}
}

void Arrays::parallelPrefix($ObjectArray* array, int32_t fromIndex, int32_t toIndex, $BinaryOperator* op) {
	$init(Arrays);
	$Objects::requireNonNull(op);
	rangeCheck($nc(array)->length, fromIndex, toIndex);
	if (fromIndex < toIndex) {
		$$new($ArrayPrefixHelpers$CumulateTask, nullptr, op, array, fromIndex, toIndex)->invoke();
	}
}

void Arrays::parallelPrefix($longs* array, $LongBinaryOperator* op) {
	$init(Arrays);
	$Objects::requireNonNull(op);
	if ($nc(array)->length > 0) {
		$$new($ArrayPrefixHelpers$LongCumulateTask, nullptr, op, array, 0, array->length)->invoke();
	}
}

void Arrays::parallelPrefix($longs* array, int32_t fromIndex, int32_t toIndex, $LongBinaryOperator* op) {
	$init(Arrays);
	$Objects::requireNonNull(op);
	rangeCheck($nc(array)->length, fromIndex, toIndex);
	if (fromIndex < toIndex) {
		$$new($ArrayPrefixHelpers$LongCumulateTask, nullptr, op, array, fromIndex, toIndex)->invoke();
	}
}

void Arrays::parallelPrefix($doubles* array, $DoubleBinaryOperator* op) {
	$init(Arrays);
	$Objects::requireNonNull(op);
	if ($nc(array)->length > 0) {
		$$new($ArrayPrefixHelpers$DoubleCumulateTask, nullptr, op, array, 0, array->length)->invoke();
	}
}

void Arrays::parallelPrefix($doubles* array, int32_t fromIndex, int32_t toIndex, $DoubleBinaryOperator* op) {
	$init(Arrays);
	$Objects::requireNonNull(op);
	rangeCheck($nc(array)->length, fromIndex, toIndex);
	if (fromIndex < toIndex) {
		$$new($ArrayPrefixHelpers$DoubleCumulateTask, nullptr, op, array, fromIndex, toIndex)->invoke();
	}
}

void Arrays::parallelPrefix($ints* array, $IntBinaryOperator* op) {
	$init(Arrays);
	$Objects::requireNonNull(op);
	if ($nc(array)->length > 0) {
		$$new($ArrayPrefixHelpers$IntCumulateTask, nullptr, op, array, 0, array->length)->invoke();
	}
}

void Arrays::parallelPrefix($ints* array, int32_t fromIndex, int32_t toIndex, $IntBinaryOperator* op) {
	$init(Arrays);
	$Objects::requireNonNull(op);
	rangeCheck($nc(array)->length, fromIndex, toIndex);
	if (fromIndex < toIndex) {
		$$new($ArrayPrefixHelpers$IntCumulateTask, nullptr, op, array, fromIndex, toIndex)->invoke();
	}
}

int32_t Arrays::binarySearch($longs* a, int64_t key) {
	$init(Arrays);
	return binarySearch0(a, 0, $nc(a)->length, key);
}

int32_t Arrays::binarySearch($longs* a, int32_t fromIndex, int32_t toIndex, int64_t key) {
	$init(Arrays);
	rangeCheck($nc(a)->length, fromIndex, toIndex);
	return binarySearch0(a, fromIndex, toIndex, key);
}

int32_t Arrays::binarySearch0($longs* a, int32_t fromIndex, int32_t toIndex, int64_t key) {
	$init(Arrays);
	int32_t low = fromIndex;
	int32_t high = toIndex - 1;
	while (low <= high) {
		int32_t mid = (int32_t)((uint32_t)(low + high) >> 1);
		int64_t midVal = $nc(a)->get(mid);
		if (midVal < key) {
			low = mid + 1;
		} else if (midVal > key) {
			high = mid - 1;
		} else {
			return mid;
		}
	}
	return -(low + 1);
}

int32_t Arrays::binarySearch($ints* a, int32_t key) {
	$init(Arrays);
	return binarySearch0(a, 0, $nc(a)->length, key);
}

int32_t Arrays::binarySearch($ints* a, int32_t fromIndex, int32_t toIndex, int32_t key) {
	$init(Arrays);
	rangeCheck($nc(a)->length, fromIndex, toIndex);
	return binarySearch0(a, fromIndex, toIndex, key);
}

int32_t Arrays::binarySearch0($ints* a, int32_t fromIndex, int32_t toIndex, int32_t key) {
	$init(Arrays);
	int32_t low = fromIndex;
	int32_t high = toIndex - 1;
	while (low <= high) {
		int32_t mid = (int32_t)((uint32_t)(low + high) >> 1);
		int32_t midVal = $nc(a)->get(mid);
		if (midVal < key) {
			low = mid + 1;
		} else if (midVal > key) {
			high = mid - 1;
		} else {
			return mid;
		}
	}
	return -(low + 1);
}

int32_t Arrays::binarySearch($shorts* a, int16_t key) {
	$init(Arrays);
	return binarySearch0(a, 0, $nc(a)->length, key);
}

int32_t Arrays::binarySearch($shorts* a, int32_t fromIndex, int32_t toIndex, int16_t key) {
	$init(Arrays);
	rangeCheck($nc(a)->length, fromIndex, toIndex);
	return binarySearch0(a, fromIndex, toIndex, key);
}

int32_t Arrays::binarySearch0($shorts* a, int32_t fromIndex, int32_t toIndex, int16_t key) {
	$init(Arrays);
	int32_t low = fromIndex;
	int32_t high = toIndex - 1;
	while (low <= high) {
		int32_t mid = (int32_t)((uint32_t)(low + high) >> 1);
		int16_t midVal = $nc(a)->get(mid);
		if (midVal < key) {
			low = mid + 1;
		} else if (midVal > key) {
			high = mid - 1;
		} else {
			return mid;
		}
	}
	return -(low + 1);
}

int32_t Arrays::binarySearch($chars* a, char16_t key) {
	$init(Arrays);
	return binarySearch0(a, 0, $nc(a)->length, key);
}

int32_t Arrays::binarySearch($chars* a, int32_t fromIndex, int32_t toIndex, char16_t key) {
	$init(Arrays);
	rangeCheck($nc(a)->length, fromIndex, toIndex);
	return binarySearch0(a, fromIndex, toIndex, key);
}

int32_t Arrays::binarySearch0($chars* a, int32_t fromIndex, int32_t toIndex, char16_t key) {
	$init(Arrays);
	int32_t low = fromIndex;
	int32_t high = toIndex - 1;
	while (low <= high) {
		int32_t mid = (int32_t)((uint32_t)(low + high) >> 1);
		char16_t midVal = $nc(a)->get(mid);
		if (midVal < key) {
			low = mid + 1;
		} else if (midVal > key) {
			high = mid - 1;
		} else {
			return mid;
		}
	}
	return -(low + 1);
}

int32_t Arrays::binarySearch($bytes* a, int8_t key) {
	$init(Arrays);
	return binarySearch0(a, 0, $nc(a)->length, key);
}

int32_t Arrays::binarySearch($bytes* a, int32_t fromIndex, int32_t toIndex, int8_t key) {
	$init(Arrays);
	rangeCheck($nc(a)->length, fromIndex, toIndex);
	return binarySearch0(a, fromIndex, toIndex, key);
}

int32_t Arrays::binarySearch0($bytes* a, int32_t fromIndex, int32_t toIndex, int8_t key) {
	$init(Arrays);
	int32_t low = fromIndex;
	int32_t high = toIndex - 1;
	while (low <= high) {
		int32_t mid = (int32_t)((uint32_t)(low + high) >> 1);
		int8_t midVal = $nc(a)->get(mid);
		if (midVal < key) {
			low = mid + 1;
		} else if (midVal > key) {
			high = mid - 1;
		} else {
			return mid;
		}
	}
	return -(low + 1);
}

int32_t Arrays::binarySearch($doubles* a, double key) {
	$init(Arrays);
	return binarySearch0(a, 0, $nc(a)->length, key);
}

int32_t Arrays::binarySearch($doubles* a, int32_t fromIndex, int32_t toIndex, double key) {
	$init(Arrays);
	rangeCheck($nc(a)->length, fromIndex, toIndex);
	return binarySearch0(a, fromIndex, toIndex, key);
}

int32_t Arrays::binarySearch0($doubles* a, int32_t fromIndex, int32_t toIndex, double key) {
	$init(Arrays);
	int32_t low = fromIndex;
	int32_t high = toIndex - 1;
	while (low <= high) {
		int32_t mid = (int32_t)((uint32_t)(low + high) >> 1);
		double midVal = $nc(a)->get(mid);
		if (midVal < key) {
			low = mid + 1;
		} else if (midVal > key) {
			high = mid - 1;
		} else {
			int64_t midBits = $Double::doubleToLongBits(midVal);
			int64_t keyBits = $Double::doubleToLongBits(key);
			if (midBits == keyBits) {
				return mid;
			} else if (midBits < keyBits) {
				low = mid + 1;
			} else {
				high = mid - 1;
			}
		}
	}
	return -(low + 1);
}

int32_t Arrays::binarySearch($floats* a, float key) {
	$init(Arrays);
	return binarySearch0(a, 0, $nc(a)->length, key);
}

int32_t Arrays::binarySearch($floats* a, int32_t fromIndex, int32_t toIndex, float key) {
	$init(Arrays);
	rangeCheck($nc(a)->length, fromIndex, toIndex);
	return binarySearch0(a, fromIndex, toIndex, key);
}

int32_t Arrays::binarySearch0($floats* a, int32_t fromIndex, int32_t toIndex, float key) {
	$init(Arrays);
	int32_t low = fromIndex;
	int32_t high = toIndex - 1;
	while (low <= high) {
		int32_t mid = (int32_t)((uint32_t)(low + high) >> 1);
		float midVal = $nc(a)->get(mid);
		if (midVal < key) {
			low = mid + 1;
		} else if (midVal > key) {
			high = mid - 1;
		} else {
			int32_t midBits = $Float::floatToIntBits(midVal);
			int32_t keyBits = $Float::floatToIntBits(key);
			if (midBits == keyBits) {
				return mid;
			} else if (midBits < keyBits) {
				low = mid + 1;
			} else {
				high = mid - 1;
			}
		}
	}
	return -(low + 1);
}

int32_t Arrays::binarySearch($ObjectArray* a, Object$* key) {
	$init(Arrays);
	return binarySearch0(a, 0, $nc(a)->length, key);
}

int32_t Arrays::binarySearch($ObjectArray* a, int32_t fromIndex, int32_t toIndex, Object$* key) {
	$init(Arrays);
	rangeCheck($nc(a)->length, fromIndex, toIndex);
	return binarySearch0(a, fromIndex, toIndex, key);
}

int32_t Arrays::binarySearch0($ObjectArray* a, int32_t fromIndex, int32_t toIndex, Object$* key) {
	$init(Arrays);
	$useLocalCurrentObjectStackCache();
	int32_t low = fromIndex;
	int32_t high = toIndex - 1;
	while (low <= high) {
		int32_t mid = (int32_t)((uint32_t)(low + high) >> 1);
		$var($Comparable, midVal, $cast($Comparable, $nc(a)->get(mid)));
		int32_t cmp = $nc(midVal)->compareTo(key);
		if (cmp < 0) {
			low = mid + 1;
		} else if (cmp > 0) {
			high = mid - 1;
		} else {
			return mid;
		}
	}
	return -(low + 1);
}

int32_t Arrays::binarySearch($ObjectArray* a, Object$* key, $Comparator* c) {
	$init(Arrays);
	return binarySearch0(a, 0, $nc(a)->length, key, c);
}

int32_t Arrays::binarySearch($ObjectArray* a, int32_t fromIndex, int32_t toIndex, Object$* key, $Comparator* c) {
	$init(Arrays);
	rangeCheck($nc(a)->length, fromIndex, toIndex);
	return binarySearch0(a, fromIndex, toIndex, key, c);
}

int32_t Arrays::binarySearch0($ObjectArray* a, int32_t fromIndex, int32_t toIndex, Object$* key, $Comparator* c) {
	$init(Arrays);
	$useLocalCurrentObjectStackCache();
	if (c == nullptr) {
		return binarySearch0(a, fromIndex, toIndex, key);
	}
	int32_t low = fromIndex;
	int32_t high = toIndex - 1;
	while (low <= high) {
		int32_t mid = (int32_t)((uint32_t)(low + high) >> 1);
		$var($Object0, midVal, $nc(a)->get(mid));
		int32_t cmp = $nc(c)->compare(midVal, key);
		if (cmp < 0) {
			low = mid + 1;
		} else if (cmp > 0) {
			high = mid - 1;
		} else {
			return mid;
		}
	}
	return -(low + 1);
}

bool Arrays::equals($longs* a, $longs* a2) {
	$init(Arrays);
	if (a == a2) {
		return true;
	}
	if (a == nullptr || a2 == nullptr) {
		return false;
	}
	int32_t length = $nc(a)->length;
	if ($nc(a2)->length != length) {
		return false;
	}
	return $ArraysSupport::mismatch(a, a2, length) < 0;
}

bool Arrays::equals($longs* a, int32_t aFromIndex, int32_t aToIndex, $longs* b, int32_t bFromIndex, int32_t bToIndex) {
	$init(Arrays);
	rangeCheck($nc(a)->length, aFromIndex, aToIndex);
	rangeCheck($nc(b)->length, bFromIndex, bToIndex);
	int32_t aLength = aToIndex - aFromIndex;
	int32_t bLength = bToIndex - bFromIndex;
	if (aLength != bLength) {
		return false;
	}
	return $ArraysSupport::mismatch(a, aFromIndex, b, bFromIndex, aLength) < 0;
}

bool Arrays::equals($ints* a, $ints* a2) {
	$init(Arrays);
	if (a == a2) {
		return true;
	}
	if (a == nullptr || a2 == nullptr) {
		return false;
	}
	int32_t length = $nc(a)->length;
	if ($nc(a2)->length != length) {
		return false;
	}
	return $ArraysSupport::mismatch(a, a2, length) < 0;
}

bool Arrays::equals($ints* a, int32_t aFromIndex, int32_t aToIndex, $ints* b, int32_t bFromIndex, int32_t bToIndex) {
	$init(Arrays);
	rangeCheck($nc(a)->length, aFromIndex, aToIndex);
	rangeCheck($nc(b)->length, bFromIndex, bToIndex);
	int32_t aLength = aToIndex - aFromIndex;
	int32_t bLength = bToIndex - bFromIndex;
	if (aLength != bLength) {
		return false;
	}
	return $ArraysSupport::mismatch(a, aFromIndex, b, bFromIndex, aLength) < 0;
}

bool Arrays::equals($shorts* a, $shorts* a2) {
	$init(Arrays);
	if (a == a2) {
		return true;
	}
	if (a == nullptr || a2 == nullptr) {
		return false;
	}
	int32_t length = $nc(a)->length;
	if ($nc(a2)->length != length) {
		return false;
	}
	return $ArraysSupport::mismatch(a, a2, length) < 0;
}

bool Arrays::equals($shorts* a, int32_t aFromIndex, int32_t aToIndex, $shorts* b, int32_t bFromIndex, int32_t bToIndex) {
	$init(Arrays);
	rangeCheck($nc(a)->length, aFromIndex, aToIndex);
	rangeCheck($nc(b)->length, bFromIndex, bToIndex);
	int32_t aLength = aToIndex - aFromIndex;
	int32_t bLength = bToIndex - bFromIndex;
	if (aLength != bLength) {
		return false;
	}
	return $ArraysSupport::mismatch(a, aFromIndex, b, bFromIndex, aLength) < 0;
}

bool Arrays::equals($chars* a, $chars* a2) {
	$init(Arrays);
	if (a == a2) {
		return true;
	}
	if (a == nullptr || a2 == nullptr) {
		return false;
	}
	int32_t length = $nc(a)->length;
	if ($nc(a2)->length != length) {
		return false;
	}
	return $ArraysSupport::mismatch(a, a2, length) < 0;
}

bool Arrays::equals($chars* a, int32_t aFromIndex, int32_t aToIndex, $chars* b, int32_t bFromIndex, int32_t bToIndex) {
	$init(Arrays);
	rangeCheck($nc(a)->length, aFromIndex, aToIndex);
	rangeCheck($nc(b)->length, bFromIndex, bToIndex);
	int32_t aLength = aToIndex - aFromIndex;
	int32_t bLength = bToIndex - bFromIndex;
	if (aLength != bLength) {
		return false;
	}
	return $ArraysSupport::mismatch(a, aFromIndex, b, bFromIndex, aLength) < 0;
}

bool Arrays::equals($bytes* a, $bytes* a2) {
	$init(Arrays);
	if (a == a2) {
		return true;
	}
	if (a == nullptr || a2 == nullptr) {
		return false;
	}
	int32_t length = $nc(a)->length;
	if ($nc(a2)->length != length) {
		return false;
	}
	return $ArraysSupport::mismatch(a, a2, length) < 0;
}

bool Arrays::equals($bytes* a, int32_t aFromIndex, int32_t aToIndex, $bytes* b, int32_t bFromIndex, int32_t bToIndex) {
	$init(Arrays);
	rangeCheck($nc(a)->length, aFromIndex, aToIndex);
	rangeCheck($nc(b)->length, bFromIndex, bToIndex);
	int32_t aLength = aToIndex - aFromIndex;
	int32_t bLength = bToIndex - bFromIndex;
	if (aLength != bLength) {
		return false;
	}
	return $ArraysSupport::mismatch(a, aFromIndex, b, bFromIndex, aLength) < 0;
}

bool Arrays::equals($booleans* a, $booleans* a2) {
	$init(Arrays);
	if (a == a2) {
		return true;
	}
	if (a == nullptr || a2 == nullptr) {
		return false;
	}
	int32_t length = $nc(a)->length;
	if ($nc(a2)->length != length) {
		return false;
	}
	return $ArraysSupport::mismatch(a, a2, length) < 0;
}

bool Arrays::equals($booleans* a, int32_t aFromIndex, int32_t aToIndex, $booleans* b, int32_t bFromIndex, int32_t bToIndex) {
	$init(Arrays);
	rangeCheck($nc(a)->length, aFromIndex, aToIndex);
	rangeCheck($nc(b)->length, bFromIndex, bToIndex);
	int32_t aLength = aToIndex - aFromIndex;
	int32_t bLength = bToIndex - bFromIndex;
	if (aLength != bLength) {
		return false;
	}
	return $ArraysSupport::mismatch(a, aFromIndex, b, bFromIndex, aLength) < 0;
}

bool Arrays::equals($doubles* a, $doubles* a2) {
	$init(Arrays);
	if (a == a2) {
		return true;
	}
	if (a == nullptr || a2 == nullptr) {
		return false;
	}
	int32_t length = $nc(a)->length;
	if ($nc(a2)->length != length) {
		return false;
	}
	return $ArraysSupport::mismatch(a, a2, length) < 0;
}

bool Arrays::equals($doubles* a, int32_t aFromIndex, int32_t aToIndex, $doubles* b, int32_t bFromIndex, int32_t bToIndex) {
	$init(Arrays);
	rangeCheck($nc(a)->length, aFromIndex, aToIndex);
	rangeCheck($nc(b)->length, bFromIndex, bToIndex);
	int32_t aLength = aToIndex - aFromIndex;
	int32_t bLength = bToIndex - bFromIndex;
	if (aLength != bLength) {
		return false;
	}
	return $ArraysSupport::mismatch(a, aFromIndex, b, bFromIndex, aLength) < 0;
}

bool Arrays::equals($floats* a, $floats* a2) {
	$init(Arrays);
	if (a == a2) {
		return true;
	}
	if (a == nullptr || a2 == nullptr) {
		return false;
	}
	int32_t length = $nc(a)->length;
	if ($nc(a2)->length != length) {
		return false;
	}
	return $ArraysSupport::mismatch(a, a2, length) < 0;
}

bool Arrays::equals($floats* a, int32_t aFromIndex, int32_t aToIndex, $floats* b, int32_t bFromIndex, int32_t bToIndex) {
	$init(Arrays);
	rangeCheck($nc(a)->length, aFromIndex, aToIndex);
	rangeCheck($nc(b)->length, bFromIndex, bToIndex);
	int32_t aLength = aToIndex - aFromIndex;
	int32_t bLength = bToIndex - bFromIndex;
	if (aLength != bLength) {
		return false;
	}
	return $ArraysSupport::mismatch(a, aFromIndex, b, bFromIndex, aLength) < 0;
}

bool Arrays::equals($ObjectArray* a, $ObjectArray* a2) {
	$init(Arrays);
	if (a == a2) {
		return true;
	}
	if (a == nullptr || a2 == nullptr) {
		return false;
	}
	int32_t length = $nc(a)->length;
	if ($nc(a2)->length != length) {
		return false;
	}
	for (int32_t i = 0; i < length; ++i) {
		if (!$Objects::equals(a->get(i), $nc(a2)->get(i))) {
			return false;
		}
	}
	return true;
}

bool Arrays::equals($ObjectArray* a, int32_t aFromIndex, int32_t aToIndex, $ObjectArray* b, int32_t bFromIndex, int32_t bToIndex) {
	$init(Arrays);
	rangeCheck($nc(a)->length, aFromIndex, aToIndex);
	rangeCheck($nc(b)->length, bFromIndex, bToIndex);
	int32_t aLength = aToIndex - aFromIndex;
	int32_t bLength = bToIndex - bFromIndex;
	if (aLength != bLength) {
		return false;
	}
	for (int32_t i = 0; i < aLength; ++i) {
		if (!$Objects::equals($nc(a)->get(aFromIndex++), $nc(b)->get(bFromIndex++))) {
			return false;
		}
	}
	return true;
}

bool Arrays::equals($ObjectArray* a, $ObjectArray* a2, $Comparator* cmp) {
	$init(Arrays);
	$Objects::requireNonNull(cmp);
	if (a == a2) {
		return true;
	}
	if (a == nullptr || a2 == nullptr) {
		return false;
	}
	int32_t length = $nc(a)->length;
	if ($nc(a2)->length != length) {
		return false;
	}
	for (int32_t i = 0; i < length; ++i) {
		if (cmp->compare(a->get(i), $nc(a2)->get(i)) != 0) {
			return false;
		}
	}
	return true;
}

bool Arrays::equals($ObjectArray* a, int32_t aFromIndex, int32_t aToIndex, $ObjectArray* b, int32_t bFromIndex, int32_t bToIndex, $Comparator* cmp) {
	$init(Arrays);
	$Objects::requireNonNull(cmp);
	rangeCheck($nc(a)->length, aFromIndex, aToIndex);
	rangeCheck($nc(b)->length, bFromIndex, bToIndex);
	int32_t aLength = aToIndex - aFromIndex;
	int32_t bLength = bToIndex - bFromIndex;
	if (aLength != bLength) {
		return false;
	}
	for (int32_t i = 0; i < aLength; ++i) {
		if (cmp->compare($nc(a)->get(aFromIndex++), $nc(b)->get(bFromIndex++)) != 0) {
			return false;
		}
	}
	return true;
}

void Arrays::fill($longs* a, int64_t val) {
	$nc(a)->fill(val);
}

void Arrays::fill($longs* a, int32_t fromIndex, int32_t toIndex, int64_t val) {
	$nc(a)->fill(fromIndex, toIndex, val);
}

void Arrays::fill($ints* a, int32_t val) {
	$nc(a)->fill(val);
}

void Arrays::fill($ints* a, int32_t fromIndex, int32_t toIndex, int32_t val) {
	$nc(a)->fill(fromIndex, toIndex, val);
}

void Arrays::fill($shorts* a, int16_t val) {
	$nc(a)->fill(val);
}

void Arrays::fill($shorts* a, int32_t fromIndex, int32_t toIndex, int16_t val) {
	$nc(a)->fill(fromIndex, toIndex, val);
}

void Arrays::fill($chars* a, char16_t val) {
	$nc(a)->fill(val);
}

void Arrays::fill($chars* a, int32_t fromIndex, int32_t toIndex, char16_t val) {
	$nc(a)->fill(fromIndex, toIndex, val);
}

void Arrays::fill($bytes* a, int8_t val) {
	$nc(a)->fill(val);
}

void Arrays::fill($bytes* a, int32_t fromIndex, int32_t toIndex, int8_t val) {
	$nc(a)->fill(fromIndex, toIndex, val);
}

void Arrays::fill($booleans* a, bool val) {
	$nc(a)->fill(val);
}

void Arrays::fill($booleans* a, int32_t fromIndex, int32_t toIndex, bool val) {
	$nc(a)->fill(fromIndex, toIndex, val);
}

void Arrays::fill($doubles* a, double val) {
	$nc(a)->fill(val);
}

void Arrays::fill($doubles* a, int32_t fromIndex, int32_t toIndex, double val) {
	$nc(a)->fill(fromIndex, toIndex, val);
}

void Arrays::fill($floats* a, float val) {
	$nc(a)->fill(val);
}

void Arrays::fill($floats* a, int32_t fromIndex, int32_t toIndex, float val) {
	$nc(a)->fill(fromIndex, toIndex, val);
}

void Arrays::fill($ObjectArray* a, Object$* val) {
	$nc(a)->fill(val);
}

void Arrays::fill($ObjectArray* a, int32_t fromIndex, int32_t toIndex, Object$* val) {
	$nc(a)->fill(fromIndex, toIndex, val);
}

$ObjectArray* Arrays::copyOf($ObjectArray* original, int32_t newLength) {
	return copyOf(original, newLength, $nc($of(original))->getClass());
}

$ObjectArray* Arrays::copyOf($ObjectArray* original, int32_t newLength, $Class* newType) {
	$var($ObjectArray, copy,
		(newType == $ObjectArray::class$)
			? $new<$ObjectArray>(newLength)
			: $fcast<$ObjectArray>($1Array::newInstance($($nc(newType)->getComponentType()), newLength))
	);
	int32_t length = $Math::min($nc(original)->length, newLength);
	copy->setArray(0, original, 0, length);
	return copy;
}

$bytes* Arrays::copyOf($bytes* original, int32_t newLength) {
	$var($bytes, copy, $new<$bytes>(newLength));
	int32_t length = $Math::min($nc(original)->length, newLength);
	copy->setArray(0, original, 0, length);
	return copy;
}

$shorts* Arrays::copyOf($shorts* original, int32_t newLength) {
	$var($shorts, copy, $new<$shorts>(newLength));
	int32_t length = $Math::min($nc(original)->length, newLength);
	copy->setArray(0, original, 0, length);
	return copy;
}

$ints* Arrays::copyOf($ints* original, int32_t newLength) {
	$var($ints, copy, $new<$ints>(newLength));
	int32_t length = $Math::min($nc(original)->length, newLength);
	copy->setArray(0, original, 0, length);
	return copy;
}

$longs* Arrays::copyOf($longs* original, int32_t newLength) {
	$var($longs, copy, $new<$longs>(newLength));
	int32_t length = $Math::min($nc(original)->length, newLength);
	copy->setArray(0, original, 0, length);
	return copy;
}

$chars* Arrays::copyOf($chars* original, int32_t newLength) {
	$var($chars, copy, $new<$chars>(newLength));
	int32_t length = $Math::min($nc(original)->length, newLength);
	copy->setArray(0, original, 0, length);
	return copy;
}

$floats* Arrays::copyOf($floats* original, int32_t newLength) {
	$var($floats, copy, $new<$floats>(newLength));
	int32_t length = $Math::min($nc(original)->length, newLength);
	copy->setArray(0, original, 0, length);
	return copy;
}

$doubles* Arrays::copyOf($doubles* original, int32_t newLength) {
	$var($doubles, copy, $new<$doubles>(newLength));
	int32_t length = $Math::min($nc(original)->length, newLength);
	copy->setArray(0, original, 0, length);
	return copy;
}

$booleans* Arrays::copyOf($booleans* original, int32_t newLength) {
	$var($booleans, copy, $new<$booleans>(newLength));
	int32_t length = $Math::min($nc(original)->length, newLength);
	copy->setArray(0, original, 0, length);
	return copy;
}

$ObjectArray* Arrays::copyOfRange($ObjectArray* original, int32_t from, int32_t to) {
	return copyOfRange(original, from, to, $nc($of(original))->getClass());
}

$ObjectArray* Arrays::copyOfRange($ObjectArray* original, int32_t from, int32_t to, $Class* newType) {
	int32_t newLength = to - from;
	if (newLength < 0) {
		$throwNew($IllegalArgumentException, $($String::valueOf({$$str(from), $cstr(" > "), $$str(to)})));
	}
	$var($ObjectArray, copy,
		(newType == $ObjectArray::class$)
			? $new<$ObjectArray>(newLength)
			: $fcast<$ObjectArray>($1Array::newInstance($($nc(newType)->getComponentType()), newLength))
	);
	int32_t length = $Math::min($nc(original)->length - from, newLength);
	copy->setArray(0, original, from, length);
	return copy;
}

$bytes* Arrays::copyOfRange($bytes* original, int32_t from, int32_t to) {
	int32_t newLength = to - from;
	if (newLength < 0) {
		$throwNew($IllegalArgumentException, $($String::valueOf({$$str(from), $cstr(" > "), $$str(to)})));
	}
	$var($bytes, copy, $new<$bytes>(newLength));
	int32_t length = $Math::min($nc(original)->length - from, newLength);
	copy->setArray(0, original, from, length);
	return copy;
}

$shorts* Arrays::copyOfRange($shorts* original, int32_t from, int32_t to) {
	int32_t newLength = to - from;
	if (newLength < 0) {
		$throwNew($IllegalArgumentException, $($String::valueOf({$$str(from), $cstr(" > "), $$str(to)})));
	}
	$var($shorts, copy, $new<$shorts>(newLength));
	int32_t length = $Math::min($nc(original)->length - from, newLength);
	copy->setArray(0, original, from, length);
	return copy;
}

$ints* Arrays::copyOfRange($ints* original, int32_t from, int32_t to) {
	int32_t newLength = to - from;
	if (newLength < 0) {
		$throwNew($IllegalArgumentException, $($String::valueOf({$$str(from), $cstr(" > "), $$str(to)})));
	}
	$var($ints, copy, $new<$ints>(newLength));
	int32_t length = $Math::min($nc(original)->length - from, newLength);
	copy->setArray(0, original, from, length);
	return copy;
}

$longs* Arrays::copyOfRange($longs* original, int32_t from, int32_t to) {
	int32_t newLength = to - from;
	if (newLength < 0) {
		$throwNew($IllegalArgumentException, $($String::valueOf({$$str(from), $cstr(" > "), $$str(to)})));
	}
	$var($longs, copy, $new<$longs>(newLength));
	int32_t length = $Math::min($nc(original)->length - from, newLength);
	copy->setArray(0, original, from, length);
	return copy;
}

$chars* Arrays::copyOfRange($chars* original, int32_t from, int32_t to) {
	int32_t newLength = to - from;
	if (newLength < 0) {
		$throwNew($IllegalArgumentException, $($String::valueOf({$$str(from), $cstr(" > "), $$str(to)})));
	}
	$var($chars, copy, $new<$chars>(newLength));
	int32_t length = $Math::min($nc(original)->length - from, newLength);
	copy->setArray(0, original, from, length);
	return copy;
}

$floats* Arrays::copyOfRange($floats* original, int32_t from, int32_t to) {
	int32_t newLength = to - from;
	if (newLength < 0) {
		$throwNew($IllegalArgumentException, $($String::valueOf({$$str(from), $cstr(" > "), $$str(to)})));
	}
	$var($floats, copy, $new<$floats>(newLength));
	int32_t length = $Math::min($nc(original)->length - from, newLength);
	copy->setArray(0, original, from, length);
	return copy;
}

$doubles* Arrays::copyOfRange($doubles* original, int32_t from, int32_t to) {
	int32_t newLength = to - from;
	if (newLength < 0) {
		$throwNew($IllegalArgumentException, $($String::valueOf({$$str(from), $cstr(" > "), $$str(to)})));
	}
	$var($doubles, copy, $new<$doubles>(newLength));
	int32_t length = $Math::min($nc(original)->length - from, newLength);
	copy->setArray(0, original, from, length);
	return copy;
}

$booleans* Arrays::copyOfRange($booleans* original, int32_t from, int32_t to) {
	int32_t newLength = to - from;
	if (newLength < 0) {
		$throwNew($IllegalArgumentException, $($String::valueOf({$$str(from), $cstr(" > "), $$str(to)})));
	}
	$var($booleans, copy, $new<$booleans>(newLength));
	int32_t length = $Math::min($nc(original)->length - from, newLength);
	copy->setArray(0, original, from, length);
	return copy;
}

$List* Arrays::asList($ObjectArray* a) {
	$init(Arrays);
	return $new($Arrays$ArrayList, a);
}

int32_t Arrays::hashCode($longs* a) {
	$init(Arrays);
	if (a == nullptr) {
		return 0;
	}
	int32_t result = 1;
	{
		$var($longs, arr$, a);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			int64_t element = arr$->get(i$);
			{
				int32_t elementHash = (int32_t)(element ^ ((int64_t)((uint64_t)element >> 32)));
				result = 31 * result + elementHash;
			}
		}
	}
	return result;
}

int32_t Arrays::hashCode($ints* a) {
	$init(Arrays);
	if (a == nullptr) {
		return 0;
	}
	int32_t result = 1;
	{
		$var($ints, arr$, a);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			int32_t element = arr$->get(i$);
			result = 31 * result + element;
		}
	}
	return result;
}

int32_t Arrays::hashCode($shorts* a) {
	$init(Arrays);
	if (a == nullptr) {
		return 0;
	}
	int32_t result = 1;
	{
		$var($shorts, arr$, a);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			int16_t element = arr$->get(i$);
			result = 31 * result + element;
		}
	}
	return result;
}

int32_t Arrays::hashCode($chars* a) {
	$init(Arrays);
	if (a == nullptr) {
		return 0;
	}
	int32_t result = 1;
	{
		$var($chars, arr$, a);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			char16_t element = arr$->get(i$);
			result = 31 * result + element;
		}
	}
	return result;
}

int32_t Arrays::hashCode($bytes* a) {
	$init(Arrays);
	if (a == nullptr) {
		return 0;
	}
	int32_t result = 1;
	{
		$var($bytes, arr$, a);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			int8_t element = arr$->get(i$);
			result = 31 * result + element;
		}
	}
	return result;
}

int32_t Arrays::hashCode($booleans* a) {
	$init(Arrays);
	if (a == nullptr) {
		return 0;
	}
	int32_t result = 1;
	{
		$var($booleans, arr$, a);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			bool element = arr$->get(i$);
			result = 31 * result + (element ? 1231 : 1237);
		}
	}
	return result;
}

int32_t Arrays::hashCode($floats* a) {
	$init(Arrays);
	if (a == nullptr) {
		return 0;
	}
	int32_t result = 1;
	{
		$var($floats, arr$, a);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			float element = arr$->get(i$);
			result = 31 * result + $Float::floatToIntBits(element);
		}
	}
	return result;
}

int32_t Arrays::hashCode($doubles* a) {
	$init(Arrays);
	if (a == nullptr) {
		return 0;
	}
	int32_t result = 1;
	{
		$var($doubles, arr$, a);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			double element = arr$->get(i$);
			{
				int64_t bits = $Double::doubleToLongBits(element);
				result = 31 * result + (int32_t)(bits ^ ((int64_t)((uint64_t)bits >> 32)));
			}
		}
	}
	return result;
}

int32_t Arrays::hashCode($ObjectArray* a) {
	$init(Arrays);
	$useLocalCurrentObjectStackCache();
	if (a == nullptr) {
		return 0;
	}
	int32_t result = 1;
	{
		$var($ObjectArray, arr$, a);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Object0, element, arr$->get(i$));
			result = 31 * result + (element == nullptr ? 0 : $nc($of(element))->hashCode());
		}
	}
	return result;
}

int32_t Arrays::deepHashCode($ObjectArray* a) {
	$init(Arrays);
	$useLocalCurrentObjectStackCache();
	if (a == nullptr) {
		return 0;
	}
	int32_t result = 1;
	{
		$var($ObjectArray, arr$, a);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Object0, element, arr$->get(i$));
			{
				int32_t elementHash = 0;
				$Class* cl = nullptr;
				if (element == nullptr) {
					elementHash = 0;
				} else if ((cl = $nc($of(element))->getClass()->getComponentType()) == nullptr) {
					elementHash = $of(element)->hashCode();
				} else if ($instanceOf($ObjectArray, element)) {
					elementHash = deepHashCode($cast($ObjectArray, element));
				} else {
					elementHash = primitiveArrayHashCode(element, cl);
				}
				result = 31 * result + elementHash;
			}
		}
	}
	return result;
}

int32_t Arrays::primitiveArrayHashCode(Object$* a, $Class* cl) {
	$init(Arrays);
	$init($Byte);
	$init($Integer);
	$init($Long);
	$init($Character);
	$init($Short);
	$init($Boolean);
	$init($Double);
	return (cl == $Byte::TYPE) ? hashCode($cast($bytes, a)) : (cl == $Integer::TYPE) ? hashCode($cast($ints, a)) : (cl == $Long::TYPE) ? hashCode($cast($longs, a)) : (cl == $Character::TYPE) ? hashCode($cast($chars, a)) : (cl == $Short::TYPE) ? hashCode($cast($shorts, a)) : (cl == $Boolean::TYPE) ? hashCode($cast($booleans, a)) : (cl == $Double::TYPE) ? hashCode($cast($doubles, a)) : hashCode($cast($floats, a));
}

bool Arrays::deepEquals($ObjectArray* a1, $ObjectArray* a2) {
	$init(Arrays);
	$useLocalCurrentObjectStackCache();
	if (a1 == a2) {
		return true;
	}
	if (a1 == nullptr || a2 == nullptr) {
		return false;
	}
	int32_t length = $nc(a1)->length;
	if ($nc(a2)->length != length) {
		return false;
	}
	for (int32_t i = 0; i < length; ++i) {
		$var($Object0, e1, a1->get(i));
		$var($Object0, e2, $nc(a2)->get(i));
		if ($equals(e1, e2)) {
			continue;
		}
		if (e1 == nullptr) {
			return false;
		}
		bool eq = deepEquals0(e1, e2);
		if (!eq) {
			return false;
		}
	}
	return true;
}

bool Arrays::deepEquals0(Object$* e1, Object$* e2) {
	$init(Arrays);
	if (!Arrays::$assertionsDisabled && !(e1 != nullptr)) {
		$throwNew($AssertionError);
	}
	bool eq = false;
	if ($instanceOf($ObjectArray, e1) && $instanceOf($ObjectArray, e2)) {
		eq = deepEquals($cast($ObjectArray, e1), $cast($ObjectArray, e2));
	} else if ($instanceOf($bytes, e1) && $instanceOf($bytes, e2)) {
		eq = equals($cast($bytes, e1), $cast($bytes, e2));
	} else if ($instanceOf($shorts, e1) && $instanceOf($shorts, e2)) {
		eq = equals($cast($shorts, e1), $cast($shorts, e2));
	} else if ($instanceOf($ints, e1) && $instanceOf($ints, e2)) {
		eq = equals($cast($ints, e1), $cast($ints, e2));
	} else if ($instanceOf($longs, e1) && $instanceOf($longs, e2)) {
		eq = equals($cast($longs, e1), $cast($longs, e2));
	} else if ($instanceOf($chars, e1) && $instanceOf($chars, e2)) {
		eq = equals($cast($chars, e1), $cast($chars, e2));
	} else if ($instanceOf($floats, e1) && $instanceOf($floats, e2)) {
		eq = equals($cast($floats, e1), $cast($floats, e2));
	} else if ($instanceOf($doubles, e1) && $instanceOf($doubles, e2)) {
		eq = equals($cast($doubles, e1), $cast($doubles, e2));
	} else if ($instanceOf($booleans, e1) && $instanceOf($booleans, e2)) {
		eq = equals($cast($booleans, e1), $cast($booleans, e2));
	} else {
		eq = $nc($of(e1))->equals(e2);
	}
	return eq;
}

$String* Arrays::toString($longs* a) {
	$init(Arrays);
	if (a == nullptr) {
		return "null"_s;
	}
	int32_t iMax = $nc(a)->length - 1;
	if (iMax == -1) {
		return "[]"_s;
	}
	$var($StringBuilder, b, $new($StringBuilder));
	b->append(u'[');
	for (int32_t i = 0;; ++i) {
		b->append(a->get(i));
		if (i == iMax) {
			return b->append(u']')->toString();
		}
		b->append(", "_s);
	}
}

$String* Arrays::toString($ints* a) {
	$init(Arrays);
	if (a == nullptr) {
		return "null"_s;
	}
	int32_t iMax = $nc(a)->length - 1;
	if (iMax == -1) {
		return "[]"_s;
	}
	$var($StringBuilder, b, $new($StringBuilder));
	b->append(u'[');
	for (int32_t i = 0;; ++i) {
		b->append(a->get(i));
		if (i == iMax) {
			return b->append(u']')->toString();
		}
		b->append(", "_s);
	}
}

$String* Arrays::toString($shorts* a) {
	$init(Arrays);
	if (a == nullptr) {
		return "null"_s;
	}
	int32_t iMax = $nc(a)->length - 1;
	if (iMax == -1) {
		return "[]"_s;
	}
	$var($StringBuilder, b, $new($StringBuilder));
	b->append(u'[');
	for (int32_t i = 0;; ++i) {
		b->append((int32_t)a->get(i));
		if (i == iMax) {
			return b->append(u']')->toString();
		}
		b->append(", "_s);
	}
}

$String* Arrays::toString($chars* a) {
	$init(Arrays);
	if (a == nullptr) {
		return "null"_s;
	}
	int32_t iMax = $nc(a)->length - 1;
	if (iMax == -1) {
		return "[]"_s;
	}
	$var($StringBuilder, b, $new($StringBuilder));
	b->append(u'[');
	for (int32_t i = 0;; ++i) {
		b->append(a->get(i));
		if (i == iMax) {
			return b->append(u']')->toString();
		}
		b->append(", "_s);
	}
}

$String* Arrays::toString($bytes* a) {
	$init(Arrays);
	if (a == nullptr) {
		return "null"_s;
	}
	int32_t iMax = $nc(a)->length - 1;
	if (iMax == -1) {
		return "[]"_s;
	}
	$var($StringBuilder, b, $new($StringBuilder));
	b->append(u'[');
	for (int32_t i = 0;; ++i) {
		b->append((int32_t)a->get(i));
		if (i == iMax) {
			return b->append(u']')->toString();
		}
		b->append(", "_s);
	}
}

$String* Arrays::toString($booleans* a) {
	$init(Arrays);
	if (a == nullptr) {
		return "null"_s;
	}
	int32_t iMax = $nc(a)->length - 1;
	if (iMax == -1) {
		return "[]"_s;
	}
	$var($StringBuilder, b, $new($StringBuilder));
	b->append(u'[');
	for (int32_t i = 0;; ++i) {
		b->append(a->get(i));
		if (i == iMax) {
			return b->append(u']')->toString();
		}
		b->append(", "_s);
	}
}

$String* Arrays::toString($floats* a) {
	$init(Arrays);
	if (a == nullptr) {
		return "null"_s;
	}
	int32_t iMax = $nc(a)->length - 1;
	if (iMax == -1) {
		return "[]"_s;
	}
	$var($StringBuilder, b, $new($StringBuilder));
	b->append(u'[');
	for (int32_t i = 0;; ++i) {
		b->append(a->get(i));
		if (i == iMax) {
			return b->append(u']')->toString();
		}
		b->append(", "_s);
	}
}

$String* Arrays::toString($doubles* a) {
	$init(Arrays);
	if (a == nullptr) {
		return "null"_s;
	}
	int32_t iMax = $nc(a)->length - 1;
	if (iMax == -1) {
		return "[]"_s;
	}
	$var($StringBuilder, b, $new($StringBuilder));
	b->append(u'[');
	for (int32_t i = 0;; ++i) {
		b->append(a->get(i));
		if (i == iMax) {
			return b->append(u']')->toString();
		}
		b->append(", "_s);
	}
}

$String* Arrays::toString($ObjectArray* a) {
	$init(Arrays);
	$useLocalCurrentObjectStackCache();
	if (a == nullptr) {
		return "null"_s;
	}
	int32_t iMax = $nc(a)->length - 1;
	if (iMax == -1) {
		return "[]"_s;
	}
	$var($StringBuilder, b, $new($StringBuilder));
	b->append(u'[');
	for (int32_t i = 0;; ++i) {
		b->append($($String::valueOf(a->get(i))));
		if (i == iMax) {
			return b->append(u']')->toString();
		}
		b->append(", "_s);
	}
}

$String* Arrays::deepToString($ObjectArray* a) {
	$init(Arrays);
	$useLocalCurrentObjectStackCache();
	if (a == nullptr) {
		return "null"_s;
	}
	int32_t bufLen = 20 * $nc(a)->length;
	if (a->length != 0 && bufLen <= 0) {
		bufLen = $Integer::MAX_VALUE;
	}
	$var($StringBuilder, buf, $new($StringBuilder, bufLen));
	deepToString(a, buf, $$new($HashSet));
	return buf->toString();
}

void Arrays::deepToString($ObjectArray* a, $StringBuilder* buf, $Set* dejaVu) {
	$init(Arrays);
	$useLocalCurrentObjectStackCache();
	if (a == nullptr) {
		$nc(buf)->append("null"_s);
		return;
	}
	int32_t iMax = $nc(a)->length - 1;
	if (iMax == -1) {
		$nc(buf)->append("[]"_s);
		return;
	}
	$nc(dejaVu)->add(a);
	$nc(buf)->append(u'[');
	for (int32_t i = 0;; ++i) {
		$var($Object0, element, a->get(i));
		if (element == nullptr) {
			buf->append("null"_s);
		} else {
			$Class* eClass = $nc($of(element))->getClass();
			if ($nc(eClass)->isArray()) {
				$load($bytes);
				if (eClass == $getClass($bytes)) {
					buf->append($(toString($cast($bytes, element))));
				} else {
					$load($shorts);
					if (eClass == $getClass($shorts)) {
						buf->append($(toString($cast($shorts, element))));
					} else {
						$load($ints);
						if (eClass == $getClass($ints)) {
							buf->append($(toString($cast($ints, element))));
						} else {
							$load($longs);
							if (eClass == $getClass($longs)) {
								buf->append($(toString($cast($longs, element))));
							} else {
								$load($chars);
								if (eClass == $getClass($chars)) {
									buf->append($(toString($cast($chars, element))));
								} else {
									$load($floats);
									if (eClass == $getClass($floats)) {
										buf->append($(toString($cast($floats, element))));
									} else {
										$load($doubles);
										if (eClass == $getClass($doubles)) {
											buf->append($(toString($cast($doubles, element))));
										} else {
											$load($booleans);
											if (eClass == $getClass($booleans)) {
												buf->append($(toString($cast($booleans, element))));
											} else if (dejaVu->contains(element)) {
												buf->append("[...]"_s);
											} else {
												deepToString($cast($ObjectArray, element), buf, dejaVu);
											}
										}
									}
								}
							}
						}
					}
				}
			} else {
				buf->append($($of(element)->toString()));
			}
		}
		if (i == iMax) {
			break;
		}
		buf->append(", "_s);
	}
	buf->append(u']');
	dejaVu->remove(a);
}

void Arrays::setAll($ObjectArray* array, $IntFunction* generator) {
	$init(Arrays);
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(generator);
	for (int32_t i = 0; i < $nc(array)->length; ++i) {
		array->set(i, $(generator->apply(i)));
	}
}

void Arrays::parallelSetAll($ObjectArray* array, $IntFunction* generator) {
	$init(Arrays);
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(generator);
	$nc($($nc($($IntStream::range(0, $nc(array)->length)))->parallel()))->forEach(static_cast<$IntConsumer*>($$new(Arrays$$Lambda$lambda$parallelSetAll$0, array, generator)));
}

void Arrays::setAll($ints* array, $IntUnaryOperator* generator) {
	$init(Arrays);
	$Objects::requireNonNull(generator);
	for (int32_t i = 0; i < $nc(array)->length; ++i) {
		array->set(i, generator->applyAsInt(i));
	}
}

void Arrays::parallelSetAll($ints* array, $IntUnaryOperator* generator) {
	$init(Arrays);
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(generator);
	$nc($($nc($($IntStream::range(0, $nc(array)->length)))->parallel()))->forEach(static_cast<$IntConsumer*>($$new(Arrays$$Lambda$lambda$parallelSetAll$1$1, array, generator)));
}

void Arrays::setAll($longs* array, $IntToLongFunction* generator) {
	$init(Arrays);
	$Objects::requireNonNull(generator);
	for (int32_t i = 0; i < $nc(array)->length; ++i) {
		array->set(i, generator->applyAsLong(i));
	}
}

void Arrays::parallelSetAll($longs* array, $IntToLongFunction* generator) {
	$init(Arrays);
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(generator);
	$nc($($nc($($IntStream::range(0, $nc(array)->length)))->parallel()))->forEach(static_cast<$IntConsumer*>($$new(Arrays$$Lambda$lambda$parallelSetAll$2$2, array, generator)));
}

void Arrays::setAll($doubles* array, $IntToDoubleFunction* generator) {
	$init(Arrays);
	$Objects::requireNonNull(generator);
	for (int32_t i = 0; i < $nc(array)->length; ++i) {
		array->set(i, generator->applyAsDouble(i));
	}
}

void Arrays::parallelSetAll($doubles* array, $IntToDoubleFunction* generator) {
	$init(Arrays);
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(generator);
	$nc($($nc($($IntStream::range(0, $nc(array)->length)))->parallel()))->forEach(static_cast<$IntConsumer*>($$new(Arrays$$Lambda$lambda$parallelSetAll$3$3, array, generator)));
}

$Spliterator* Arrays::spliterator($ObjectArray* array) {
	$init(Arrays);
	return $Spliterators::spliterator(array, $Spliterator::ORDERED | $Spliterator::IMMUTABLE);
}

$Spliterator* Arrays::spliterator($ObjectArray* array, int32_t startInclusive, int32_t endExclusive) {
	$init(Arrays);
	return $Spliterators::spliterator(array, startInclusive, endExclusive, $Spliterator::ORDERED | $Spliterator::IMMUTABLE);
}

$Spliterator$OfInt* Arrays::spliterator($ints* array) {
	$init(Arrays);
	return $Spliterators::spliterator(array, $Spliterator::ORDERED | $Spliterator::IMMUTABLE);
}

$Spliterator$OfInt* Arrays::spliterator($ints* array, int32_t startInclusive, int32_t endExclusive) {
	$init(Arrays);
	return $Spliterators::spliterator(array, startInclusive, endExclusive, $Spliterator::ORDERED | $Spliterator::IMMUTABLE);
}

$Spliterator$OfLong* Arrays::spliterator($longs* array) {
	$init(Arrays);
	return $Spliterators::spliterator(array, $Spliterator::ORDERED | $Spliterator::IMMUTABLE);
}

$Spliterator$OfLong* Arrays::spliterator($longs* array, int32_t startInclusive, int32_t endExclusive) {
	$init(Arrays);
	return $Spliterators::spliterator(array, startInclusive, endExclusive, $Spliterator::ORDERED | $Spliterator::IMMUTABLE);
}

$Spliterator$OfDouble* Arrays::spliterator($doubles* array) {
	$init(Arrays);
	return $Spliterators::spliterator(array, $Spliterator::ORDERED | $Spliterator::IMMUTABLE);
}

$Spliterator$OfDouble* Arrays::spliterator($doubles* array, int32_t startInclusive, int32_t endExclusive) {
	$init(Arrays);
	return $Spliterators::spliterator(array, startInclusive, endExclusive, $Spliterator::ORDERED | $Spliterator::IMMUTABLE);
}

$Stream* Arrays::stream($ObjectArray* array) {
	$init(Arrays);
	return stream(array, 0, $nc(array)->length);
}

$Stream* Arrays::stream($ObjectArray* array, int32_t startInclusive, int32_t endExclusive) {
	$init(Arrays);
	return $StreamSupport::stream($(spliterator(array, startInclusive, endExclusive)), false);
}

$IntStream* Arrays::stream($ints* array) {
	$init(Arrays);
	return stream(array, 0, $nc(array)->length);
}

$IntStream* Arrays::stream($ints* array, int32_t startInclusive, int32_t endExclusive) {
	$init(Arrays);
	return $StreamSupport::intStream($(spliterator(array, startInclusive, endExclusive)), false);
}

$LongStream* Arrays::stream($longs* array) {
	$init(Arrays);
	return stream(array, 0, $nc(array)->length);
}

$LongStream* Arrays::stream($longs* array, int32_t startInclusive, int32_t endExclusive) {
	$init(Arrays);
	return $StreamSupport::longStream($(spliterator(array, startInclusive, endExclusive)), false);
}

$DoubleStream* Arrays::stream($doubles* array) {
	$init(Arrays);
	return stream(array, 0, $nc(array)->length);
}

$DoubleStream* Arrays::stream($doubles* array, int32_t startInclusive, int32_t endExclusive) {
	$init(Arrays);
	return $StreamSupport::doubleStream($(spliterator(array, startInclusive, endExclusive)), false);
}

int32_t Arrays::compare($booleans* a, $booleans* b) {
	$init(Arrays);
	if (a == b) {
		return 0;
	}
	if (a == nullptr || b == nullptr) {
		return a == nullptr ? -1 : 1;
	}
	int32_t i = $ArraysSupport::mismatch(a, b, $Math::min($nc(a)->length, $nc(b)->length));
	if (i >= 0) {
		return $Boolean::compare($nc(a)->get(i), $nc(b)->get(i));
	}
	return $nc(a)->length - $nc(b)->length;
}

int32_t Arrays::compare($booleans* a, int32_t aFromIndex, int32_t aToIndex, $booleans* b, int32_t bFromIndex, int32_t bToIndex) {
	$init(Arrays);
	rangeCheck($nc(a)->length, aFromIndex, aToIndex);
	rangeCheck($nc(b)->length, bFromIndex, bToIndex);
	int32_t aLength = aToIndex - aFromIndex;
	int32_t bLength = bToIndex - bFromIndex;
	int32_t i = $ArraysSupport::mismatch(a, aFromIndex, b, bFromIndex, $Math::min(aLength, bLength));
	if (i >= 0) {
		return $Boolean::compare($nc(a)->get(aFromIndex + i), $nc(b)->get(bFromIndex + i));
	}
	return aLength - bLength;
}

int32_t Arrays::compare($bytes* a, $bytes* b) {
	$init(Arrays);
	if (a == b) {
		return 0;
	}
	if (a == nullptr || b == nullptr) {
		return a == nullptr ? -1 : 1;
	}
	int32_t i = $ArraysSupport::mismatch(a, b, $Math::min($nc(a)->length, $nc(b)->length));
	if (i >= 0) {
		return $Byte::compare($nc(a)->get(i), $nc(b)->get(i));
	}
	return $nc(a)->length - $nc(b)->length;
}

int32_t Arrays::compare($bytes* a, int32_t aFromIndex, int32_t aToIndex, $bytes* b, int32_t bFromIndex, int32_t bToIndex) {
	$init(Arrays);
	rangeCheck($nc(a)->length, aFromIndex, aToIndex);
	rangeCheck($nc(b)->length, bFromIndex, bToIndex);
	int32_t aLength = aToIndex - aFromIndex;
	int32_t bLength = bToIndex - bFromIndex;
	int32_t i = $ArraysSupport::mismatch(a, aFromIndex, b, bFromIndex, $Math::min(aLength, bLength));
	if (i >= 0) {
		return $Byte::compare($nc(a)->get(aFromIndex + i), $nc(b)->get(bFromIndex + i));
	}
	return aLength - bLength;
}

int32_t Arrays::compareUnsigned($bytes* a, $bytes* b) {
	$init(Arrays);
	if (a == b) {
		return 0;
	}
	if (a == nullptr || b == nullptr) {
		return a == nullptr ? -1 : 1;
	}
	int32_t i = $ArraysSupport::mismatch(a, b, $Math::min($nc(a)->length, $nc(b)->length));
	if (i >= 0) {
		return $Byte::compareUnsigned($nc(a)->get(i), $nc(b)->get(i));
	}
	return $nc(a)->length - $nc(b)->length;
}

int32_t Arrays::compareUnsigned($bytes* a, int32_t aFromIndex, int32_t aToIndex, $bytes* b, int32_t bFromIndex, int32_t bToIndex) {
	$init(Arrays);
	rangeCheck($nc(a)->length, aFromIndex, aToIndex);
	rangeCheck($nc(b)->length, bFromIndex, bToIndex);
	int32_t aLength = aToIndex - aFromIndex;
	int32_t bLength = bToIndex - bFromIndex;
	int32_t i = $ArraysSupport::mismatch(a, aFromIndex, b, bFromIndex, $Math::min(aLength, bLength));
	if (i >= 0) {
		return $Byte::compareUnsigned($nc(a)->get(aFromIndex + i), $nc(b)->get(bFromIndex + i));
	}
	return aLength - bLength;
}

int32_t Arrays::compare($shorts* a, $shorts* b) {
	$init(Arrays);
	if (a == b) {
		return 0;
	}
	if (a == nullptr || b == nullptr) {
		return a == nullptr ? -1 : 1;
	}
	int32_t i = $ArraysSupport::mismatch(a, b, $Math::min($nc(a)->length, $nc(b)->length));
	if (i >= 0) {
		return $Short::compare($nc(a)->get(i), $nc(b)->get(i));
	}
	return $nc(a)->length - $nc(b)->length;
}

int32_t Arrays::compare($shorts* a, int32_t aFromIndex, int32_t aToIndex, $shorts* b, int32_t bFromIndex, int32_t bToIndex) {
	$init(Arrays);
	rangeCheck($nc(a)->length, aFromIndex, aToIndex);
	rangeCheck($nc(b)->length, bFromIndex, bToIndex);
	int32_t aLength = aToIndex - aFromIndex;
	int32_t bLength = bToIndex - bFromIndex;
	int32_t i = $ArraysSupport::mismatch(a, aFromIndex, b, bFromIndex, $Math::min(aLength, bLength));
	if (i >= 0) {
		return $Short::compare($nc(a)->get(aFromIndex + i), $nc(b)->get(bFromIndex + i));
	}
	return aLength - bLength;
}

int32_t Arrays::compareUnsigned($shorts* a, $shorts* b) {
	$init(Arrays);
	if (a == b) {
		return 0;
	}
	if (a == nullptr || b == nullptr) {
		return a == nullptr ? -1 : 1;
	}
	int32_t i = $ArraysSupport::mismatch(a, b, $Math::min($nc(a)->length, $nc(b)->length));
	if (i >= 0) {
		return $Short::compareUnsigned($nc(a)->get(i), $nc(b)->get(i));
	}
	return $nc(a)->length - $nc(b)->length;
}

int32_t Arrays::compareUnsigned($shorts* a, int32_t aFromIndex, int32_t aToIndex, $shorts* b, int32_t bFromIndex, int32_t bToIndex) {
	$init(Arrays);
	rangeCheck($nc(a)->length, aFromIndex, aToIndex);
	rangeCheck($nc(b)->length, bFromIndex, bToIndex);
	int32_t aLength = aToIndex - aFromIndex;
	int32_t bLength = bToIndex - bFromIndex;
	int32_t i = $ArraysSupport::mismatch(a, aFromIndex, b, bFromIndex, $Math::min(aLength, bLength));
	if (i >= 0) {
		return $Short::compareUnsigned($nc(a)->get(aFromIndex + i), $nc(b)->get(bFromIndex + i));
	}
	return aLength - bLength;
}

int32_t Arrays::compare($chars* a, $chars* b) {
	$init(Arrays);
	if (a == b) {
		return 0;
	}
	if (a == nullptr || b == nullptr) {
		return a == nullptr ? -1 : 1;
	}
	int32_t i = $ArraysSupport::mismatch(a, b, $Math::min($nc(a)->length, $nc(b)->length));
	if (i >= 0) {
		return $Character::compare($nc(a)->get(i), $nc(b)->get(i));
	}
	return $nc(a)->length - $nc(b)->length;
}

int32_t Arrays::compare($chars* a, int32_t aFromIndex, int32_t aToIndex, $chars* b, int32_t bFromIndex, int32_t bToIndex) {
	$init(Arrays);
	rangeCheck($nc(a)->length, aFromIndex, aToIndex);
	rangeCheck($nc(b)->length, bFromIndex, bToIndex);
	int32_t aLength = aToIndex - aFromIndex;
	int32_t bLength = bToIndex - bFromIndex;
	int32_t i = $ArraysSupport::mismatch(a, aFromIndex, b, bFromIndex, $Math::min(aLength, bLength));
	if (i >= 0) {
		return $Character::compare($nc(a)->get(aFromIndex + i), $nc(b)->get(bFromIndex + i));
	}
	return aLength - bLength;
}

int32_t Arrays::compare($ints* a, $ints* b) {
	$init(Arrays);
	if (a == b) {
		return 0;
	}
	if (a == nullptr || b == nullptr) {
		return a == nullptr ? -1 : 1;
	}
	int32_t i = $ArraysSupport::mismatch(a, b, $Math::min($nc(a)->length, $nc(b)->length));
	if (i >= 0) {
		return $Integer::compare($nc(a)->get(i), $nc(b)->get(i));
	}
	return $nc(a)->length - $nc(b)->length;
}

int32_t Arrays::compare($ints* a, int32_t aFromIndex, int32_t aToIndex, $ints* b, int32_t bFromIndex, int32_t bToIndex) {
	$init(Arrays);
	rangeCheck($nc(a)->length, aFromIndex, aToIndex);
	rangeCheck($nc(b)->length, bFromIndex, bToIndex);
	int32_t aLength = aToIndex - aFromIndex;
	int32_t bLength = bToIndex - bFromIndex;
	int32_t i = $ArraysSupport::mismatch(a, aFromIndex, b, bFromIndex, $Math::min(aLength, bLength));
	if (i >= 0) {
		return $Integer::compare($nc(a)->get(aFromIndex + i), $nc(b)->get(bFromIndex + i));
	}
	return aLength - bLength;
}

int32_t Arrays::compareUnsigned($ints* a, $ints* b) {
	$init(Arrays);
	if (a == b) {
		return 0;
	}
	if (a == nullptr || b == nullptr) {
		return a == nullptr ? -1 : 1;
	}
	int32_t i = $ArraysSupport::mismatch(a, b, $Math::min($nc(a)->length, $nc(b)->length));
	if (i >= 0) {
		return $Integer::compareUnsigned($nc(a)->get(i), $nc(b)->get(i));
	}
	return $nc(a)->length - $nc(b)->length;
}

int32_t Arrays::compareUnsigned($ints* a, int32_t aFromIndex, int32_t aToIndex, $ints* b, int32_t bFromIndex, int32_t bToIndex) {
	$init(Arrays);
	rangeCheck($nc(a)->length, aFromIndex, aToIndex);
	rangeCheck($nc(b)->length, bFromIndex, bToIndex);
	int32_t aLength = aToIndex - aFromIndex;
	int32_t bLength = bToIndex - bFromIndex;
	int32_t i = $ArraysSupport::mismatch(a, aFromIndex, b, bFromIndex, $Math::min(aLength, bLength));
	if (i >= 0) {
		return $Integer::compareUnsigned($nc(a)->get(aFromIndex + i), $nc(b)->get(bFromIndex + i));
	}
	return aLength - bLength;
}

int32_t Arrays::compare($longs* a, $longs* b) {
	$init(Arrays);
	if (a == b) {
		return 0;
	}
	if (a == nullptr || b == nullptr) {
		return a == nullptr ? -1 : 1;
	}
	int32_t i = $ArraysSupport::mismatch(a, b, $Math::min($nc(a)->length, $nc(b)->length));
	if (i >= 0) {
		return $Long::compare($nc(a)->get(i), $nc(b)->get(i));
	}
	return $nc(a)->length - $nc(b)->length;
}

int32_t Arrays::compare($longs* a, int32_t aFromIndex, int32_t aToIndex, $longs* b, int32_t bFromIndex, int32_t bToIndex) {
	$init(Arrays);
	rangeCheck($nc(a)->length, aFromIndex, aToIndex);
	rangeCheck($nc(b)->length, bFromIndex, bToIndex);
	int32_t aLength = aToIndex - aFromIndex;
	int32_t bLength = bToIndex - bFromIndex;
	int32_t i = $ArraysSupport::mismatch(a, aFromIndex, b, bFromIndex, $Math::min(aLength, bLength));
	if (i >= 0) {
		return $Long::compare($nc(a)->get(aFromIndex + i), $nc(b)->get(bFromIndex + i));
	}
	return aLength - bLength;
}

int32_t Arrays::compareUnsigned($longs* a, $longs* b) {
	$init(Arrays);
	if (a == b) {
		return 0;
	}
	if (a == nullptr || b == nullptr) {
		return a == nullptr ? -1 : 1;
	}
	int32_t i = $ArraysSupport::mismatch(a, b, $Math::min($nc(a)->length, $nc(b)->length));
	if (i >= 0) {
		return $Long::compareUnsigned($nc(a)->get(i), $nc(b)->get(i));
	}
	return $nc(a)->length - $nc(b)->length;
}

int32_t Arrays::compareUnsigned($longs* a, int32_t aFromIndex, int32_t aToIndex, $longs* b, int32_t bFromIndex, int32_t bToIndex) {
	$init(Arrays);
	rangeCheck($nc(a)->length, aFromIndex, aToIndex);
	rangeCheck($nc(b)->length, bFromIndex, bToIndex);
	int32_t aLength = aToIndex - aFromIndex;
	int32_t bLength = bToIndex - bFromIndex;
	int32_t i = $ArraysSupport::mismatch(a, aFromIndex, b, bFromIndex, $Math::min(aLength, bLength));
	if (i >= 0) {
		return $Long::compareUnsigned($nc(a)->get(aFromIndex + i), $nc(b)->get(bFromIndex + i));
	}
	return aLength - bLength;
}

int32_t Arrays::compare($floats* a, $floats* b) {
	$init(Arrays);
	if (a == b) {
		return 0;
	}
	if (a == nullptr || b == nullptr) {
		return a == nullptr ? -1 : 1;
	}
	int32_t i = $ArraysSupport::mismatch(a, b, $Math::min($nc(a)->length, $nc(b)->length));
	if (i >= 0) {
		return $Float::compare($nc(a)->get(i), $nc(b)->get(i));
	}
	return $nc(a)->length - $nc(b)->length;
}

int32_t Arrays::compare($floats* a, int32_t aFromIndex, int32_t aToIndex, $floats* b, int32_t bFromIndex, int32_t bToIndex) {
	$init(Arrays);
	rangeCheck($nc(a)->length, aFromIndex, aToIndex);
	rangeCheck($nc(b)->length, bFromIndex, bToIndex);
	int32_t aLength = aToIndex - aFromIndex;
	int32_t bLength = bToIndex - bFromIndex;
	int32_t i = $ArraysSupport::mismatch(a, aFromIndex, b, bFromIndex, $Math::min(aLength, bLength));
	if (i >= 0) {
		return $Float::compare($nc(a)->get(aFromIndex + i), $nc(b)->get(bFromIndex + i));
	}
	return aLength - bLength;
}

int32_t Arrays::compare($doubles* a, $doubles* b) {
	$init(Arrays);
	if (a == b) {
		return 0;
	}
	if (a == nullptr || b == nullptr) {
		return a == nullptr ? -1 : 1;
	}
	int32_t i = $ArraysSupport::mismatch(a, b, $Math::min($nc(a)->length, $nc(b)->length));
	if (i >= 0) {
		return $Double::compare($nc(a)->get(i), $nc(b)->get(i));
	}
	return $nc(a)->length - $nc(b)->length;
}

int32_t Arrays::compare($doubles* a, int32_t aFromIndex, int32_t aToIndex, $doubles* b, int32_t bFromIndex, int32_t bToIndex) {
	$init(Arrays);
	rangeCheck($nc(a)->length, aFromIndex, aToIndex);
	rangeCheck($nc(b)->length, bFromIndex, bToIndex);
	int32_t aLength = aToIndex - aFromIndex;
	int32_t bLength = bToIndex - bFromIndex;
	int32_t i = $ArraysSupport::mismatch(a, aFromIndex, b, bFromIndex, $Math::min(aLength, bLength));
	if (i >= 0) {
		return $Double::compare($nc(a)->get(aFromIndex + i), $nc(b)->get(bFromIndex + i));
	}
	return aLength - bLength;
}

int32_t Arrays::compare($ComparableArray* a, $ComparableArray* b) {
	$init(Arrays);
	$useLocalCurrentObjectStackCache();
	if (a == b) {
		return 0;
	}
	if (a == nullptr || b == nullptr) {
		return a == nullptr ? -1 : 1;
	}
	int32_t length = $Math::min($nc(a)->length, $nc(b)->length);
	for (int32_t i = 0; i < length; ++i) {
		$var($Comparable, oa, $nc(a)->get(i));
		$var($Comparable, ob, $nc(b)->get(i));
		if (oa != ob) {
			if (oa == nullptr || ob == nullptr) {
				return oa == nullptr ? -1 : 1;
			}
			int32_t v = $nc(oa)->compareTo(ob);
			if (v != 0) {
				return v;
			}
		}
	}
	return $nc(a)->length - $nc(b)->length;
}

int32_t Arrays::compare($ComparableArray* a, int32_t aFromIndex, int32_t aToIndex, $ComparableArray* b, int32_t bFromIndex, int32_t bToIndex) {
	$init(Arrays);
	$useLocalCurrentObjectStackCache();
	rangeCheck($nc(a)->length, aFromIndex, aToIndex);
	rangeCheck($nc(b)->length, bFromIndex, bToIndex);
	int32_t aLength = aToIndex - aFromIndex;
	int32_t bLength = bToIndex - bFromIndex;
	int32_t length = $Math::min(aLength, bLength);
	for (int32_t i = 0; i < length; ++i) {
		$var($Comparable, oa, $nc(a)->get(aFromIndex++));
		$var($Comparable, ob, $nc(b)->get(bFromIndex++));
		if (oa != ob) {
			if (oa == nullptr || ob == nullptr) {
				return oa == nullptr ? -1 : 1;
			}
			int32_t v = $nc(oa)->compareTo(ob);
			if (v != 0) {
				return v;
			}
		}
	}
	return aLength - bLength;
}

int32_t Arrays::compare($ObjectArray* a, $ObjectArray* b, $Comparator* cmp) {
	$init(Arrays);
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(cmp);
	if (a == b) {
		return 0;
	}
	if (a == nullptr || b == nullptr) {
		return a == nullptr ? -1 : 1;
	}
	int32_t length = $Math::min($nc(a)->length, $nc(b)->length);
	for (int32_t i = 0; i < length; ++i) {
		$var($Object0, oa, $nc(a)->get(i));
		$var($Object0, ob, $nc(b)->get(i));
		if (!$equals(oa, ob)) {
			int32_t v = cmp->compare(oa, ob);
			if (v != 0) {
				return v;
			}
		}
	}
	return $nc(a)->length - $nc(b)->length;
}

int32_t Arrays::compare($ObjectArray* a, int32_t aFromIndex, int32_t aToIndex, $ObjectArray* b, int32_t bFromIndex, int32_t bToIndex, $Comparator* cmp) {
	$init(Arrays);
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(cmp);
	rangeCheck($nc(a)->length, aFromIndex, aToIndex);
	rangeCheck($nc(b)->length, bFromIndex, bToIndex);
	int32_t aLength = aToIndex - aFromIndex;
	int32_t bLength = bToIndex - bFromIndex;
	int32_t length = $Math::min(aLength, bLength);
	for (int32_t i = 0; i < length; ++i) {
		$var($Object0, oa, $nc(a)->get(aFromIndex++));
		$var($Object0, ob, $nc(b)->get(bFromIndex++));
		if (!$equals(oa, ob)) {
			int32_t v = cmp->compare(oa, ob);
			if (v != 0) {
				return v;
			}
		}
	}
	return aLength - bLength;
}

int32_t Arrays::mismatch($booleans* a, $booleans* b) {
	$init(Arrays);
	int32_t length = $Math::min($nc(a)->length, $nc(b)->length);
	if (a == b) {
		return -1;
	}
	int32_t i = $ArraysSupport::mismatch(a, b, length);
	return (i < 0 && $nc(a)->length != $nc(b)->length) ? length : i;
}

int32_t Arrays::mismatch($booleans* a, int32_t aFromIndex, int32_t aToIndex, $booleans* b, int32_t bFromIndex, int32_t bToIndex) {
	$init(Arrays);
	rangeCheck($nc(a)->length, aFromIndex, aToIndex);
	rangeCheck($nc(b)->length, bFromIndex, bToIndex);
	int32_t aLength = aToIndex - aFromIndex;
	int32_t bLength = bToIndex - bFromIndex;
	int32_t length = $Math::min(aLength, bLength);
	int32_t i = $ArraysSupport::mismatch(a, aFromIndex, b, bFromIndex, length);
	return (i < 0 && aLength != bLength) ? length : i;
}

int32_t Arrays::mismatch($bytes* a, $bytes* b) {
	$init(Arrays);
	int32_t length = $Math::min($nc(a)->length, $nc(b)->length);
	if (a == b) {
		return -1;
	}
	int32_t i = $ArraysSupport::mismatch(a, b, length);
	return (i < 0 && $nc(a)->length != $nc(b)->length) ? length : i;
}

int32_t Arrays::mismatch($bytes* a, int32_t aFromIndex, int32_t aToIndex, $bytes* b, int32_t bFromIndex, int32_t bToIndex) {
	$init(Arrays);
	rangeCheck($nc(a)->length, aFromIndex, aToIndex);
	rangeCheck($nc(b)->length, bFromIndex, bToIndex);
	int32_t aLength = aToIndex - aFromIndex;
	int32_t bLength = bToIndex - bFromIndex;
	int32_t length = $Math::min(aLength, bLength);
	int32_t i = $ArraysSupport::mismatch(a, aFromIndex, b, bFromIndex, length);
	return (i < 0 && aLength != bLength) ? length : i;
}

int32_t Arrays::mismatch($chars* a, $chars* b) {
	$init(Arrays);
	int32_t length = $Math::min($nc(a)->length, $nc(b)->length);
	if (a == b) {
		return -1;
	}
	int32_t i = $ArraysSupport::mismatch(a, b, length);
	return (i < 0 && $nc(a)->length != $nc(b)->length) ? length : i;
}

int32_t Arrays::mismatch($chars* a, int32_t aFromIndex, int32_t aToIndex, $chars* b, int32_t bFromIndex, int32_t bToIndex) {
	$init(Arrays);
	rangeCheck($nc(a)->length, aFromIndex, aToIndex);
	rangeCheck($nc(b)->length, bFromIndex, bToIndex);
	int32_t aLength = aToIndex - aFromIndex;
	int32_t bLength = bToIndex - bFromIndex;
	int32_t length = $Math::min(aLength, bLength);
	int32_t i = $ArraysSupport::mismatch(a, aFromIndex, b, bFromIndex, length);
	return (i < 0 && aLength != bLength) ? length : i;
}

int32_t Arrays::mismatch($shorts* a, $shorts* b) {
	$init(Arrays);
	int32_t length = $Math::min($nc(a)->length, $nc(b)->length);
	if (a == b) {
		return -1;
	}
	int32_t i = $ArraysSupport::mismatch(a, b, length);
	return (i < 0 && $nc(a)->length != $nc(b)->length) ? length : i;
}

int32_t Arrays::mismatch($shorts* a, int32_t aFromIndex, int32_t aToIndex, $shorts* b, int32_t bFromIndex, int32_t bToIndex) {
	$init(Arrays);
	rangeCheck($nc(a)->length, aFromIndex, aToIndex);
	rangeCheck($nc(b)->length, bFromIndex, bToIndex);
	int32_t aLength = aToIndex - aFromIndex;
	int32_t bLength = bToIndex - bFromIndex;
	int32_t length = $Math::min(aLength, bLength);
	int32_t i = $ArraysSupport::mismatch(a, aFromIndex, b, bFromIndex, length);
	return (i < 0 && aLength != bLength) ? length : i;
}

int32_t Arrays::mismatch($ints* a, $ints* b) {
	$init(Arrays);
	int32_t length = $Math::min($nc(a)->length, $nc(b)->length);
	if (a == b) {
		return -1;
	}
	int32_t i = $ArraysSupport::mismatch(a, b, length);
	return (i < 0 && $nc(a)->length != $nc(b)->length) ? length : i;
}

int32_t Arrays::mismatch($ints* a, int32_t aFromIndex, int32_t aToIndex, $ints* b, int32_t bFromIndex, int32_t bToIndex) {
	$init(Arrays);
	rangeCheck($nc(a)->length, aFromIndex, aToIndex);
	rangeCheck($nc(b)->length, bFromIndex, bToIndex);
	int32_t aLength = aToIndex - aFromIndex;
	int32_t bLength = bToIndex - bFromIndex;
	int32_t length = $Math::min(aLength, bLength);
	int32_t i = $ArraysSupport::mismatch(a, aFromIndex, b, bFromIndex, length);
	return (i < 0 && aLength != bLength) ? length : i;
}

int32_t Arrays::mismatch($longs* a, $longs* b) {
	$init(Arrays);
	int32_t length = $Math::min($nc(a)->length, $nc(b)->length);
	if (a == b) {
		return -1;
	}
	int32_t i = $ArraysSupport::mismatch(a, b, length);
	return (i < 0 && $nc(a)->length != $nc(b)->length) ? length : i;
}

int32_t Arrays::mismatch($longs* a, int32_t aFromIndex, int32_t aToIndex, $longs* b, int32_t bFromIndex, int32_t bToIndex) {
	$init(Arrays);
	rangeCheck($nc(a)->length, aFromIndex, aToIndex);
	rangeCheck($nc(b)->length, bFromIndex, bToIndex);
	int32_t aLength = aToIndex - aFromIndex;
	int32_t bLength = bToIndex - bFromIndex;
	int32_t length = $Math::min(aLength, bLength);
	int32_t i = $ArraysSupport::mismatch(a, aFromIndex, b, bFromIndex, length);
	return (i < 0 && aLength != bLength) ? length : i;
}

int32_t Arrays::mismatch($floats* a, $floats* b) {
	$init(Arrays);
	int32_t length = $Math::min($nc(a)->length, $nc(b)->length);
	if (a == b) {
		return -1;
	}
	int32_t i = $ArraysSupport::mismatch(a, b, length);
	return (i < 0 && $nc(a)->length != $nc(b)->length) ? length : i;
}

int32_t Arrays::mismatch($floats* a, int32_t aFromIndex, int32_t aToIndex, $floats* b, int32_t bFromIndex, int32_t bToIndex) {
	$init(Arrays);
	rangeCheck($nc(a)->length, aFromIndex, aToIndex);
	rangeCheck($nc(b)->length, bFromIndex, bToIndex);
	int32_t aLength = aToIndex - aFromIndex;
	int32_t bLength = bToIndex - bFromIndex;
	int32_t length = $Math::min(aLength, bLength);
	int32_t i = $ArraysSupport::mismatch(a, aFromIndex, b, bFromIndex, length);
	return (i < 0 && aLength != bLength) ? length : i;
}

int32_t Arrays::mismatch($doubles* a, $doubles* b) {
	$init(Arrays);
	int32_t length = $Math::min($nc(a)->length, $nc(b)->length);
	if (a == b) {
		return -1;
	}
	int32_t i = $ArraysSupport::mismatch(a, b, length);
	return (i < 0 && $nc(a)->length != $nc(b)->length) ? length : i;
}

int32_t Arrays::mismatch($doubles* a, int32_t aFromIndex, int32_t aToIndex, $doubles* b, int32_t bFromIndex, int32_t bToIndex) {
	$init(Arrays);
	rangeCheck($nc(a)->length, aFromIndex, aToIndex);
	rangeCheck($nc(b)->length, bFromIndex, bToIndex);
	int32_t aLength = aToIndex - aFromIndex;
	int32_t bLength = bToIndex - bFromIndex;
	int32_t length = $Math::min(aLength, bLength);
	int32_t i = $ArraysSupport::mismatch(a, aFromIndex, b, bFromIndex, length);
	return (i < 0 && aLength != bLength) ? length : i;
}

int32_t Arrays::mismatch($ObjectArray* a, $ObjectArray* b) {
	$init(Arrays);
	int32_t length = $Math::min($nc(a)->length, $nc(b)->length);
	if (a == b) {
		return -1;
	}
	for (int32_t i = 0; i < length; ++i) {
		if (!$Objects::equals($nc(a)->get(i), $nc(b)->get(i))) {
			return i;
		}
	}
	return $nc(a)->length != $nc(b)->length ? length : -1;
}

int32_t Arrays::mismatch($ObjectArray* a, int32_t aFromIndex, int32_t aToIndex, $ObjectArray* b, int32_t bFromIndex, int32_t bToIndex) {
	$init(Arrays);
	rangeCheck($nc(a)->length, aFromIndex, aToIndex);
	rangeCheck($nc(b)->length, bFromIndex, bToIndex);
	int32_t aLength = aToIndex - aFromIndex;
	int32_t bLength = bToIndex - bFromIndex;
	int32_t length = $Math::min(aLength, bLength);
	for (int32_t i = 0; i < length; ++i) {
		if (!$Objects::equals($nc(a)->get(aFromIndex++), $nc(b)->get(bFromIndex++))) {
			return i;
		}
	}
	return aLength != bLength ? length : -1;
}

int32_t Arrays::mismatch($ObjectArray* a, $ObjectArray* b, $Comparator* cmp) {
	$init(Arrays);
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(cmp);
	int32_t length = $Math::min($nc(a)->length, $nc(b)->length);
	if (a == b) {
		return -1;
	}
	for (int32_t i = 0; i < length; ++i) {
		$var($Object0, oa, $nc(a)->get(i));
		$var($Object0, ob, $nc(b)->get(i));
		if (!$equals(oa, ob)) {
			int32_t v = cmp->compare(oa, ob);
			if (v != 0) {
				return i;
			}
		}
	}
	return $nc(a)->length != $nc(b)->length ? length : -1;
}

int32_t Arrays::mismatch($ObjectArray* a, int32_t aFromIndex, int32_t aToIndex, $ObjectArray* b, int32_t bFromIndex, int32_t bToIndex, $Comparator* cmp) {
	$init(Arrays);
	$useLocalCurrentObjectStackCache();
	$Objects::requireNonNull(cmp);
	rangeCheck($nc(a)->length, aFromIndex, aToIndex);
	rangeCheck($nc(b)->length, bFromIndex, bToIndex);
	int32_t aLength = aToIndex - aFromIndex;
	int32_t bLength = bToIndex - bFromIndex;
	int32_t length = $Math::min(aLength, bLength);
	for (int32_t i = 0; i < length; ++i) {
		$var($Object0, oa, $nc(a)->get(aFromIndex++));
		$var($Object0, ob, $nc(b)->get(bFromIndex++));
		if (!$equals(oa, ob)) {
			int32_t v = cmp->compare(oa, ob);
			if (v != 0) {
				return i;
			}
		}
	}
	return aLength != bLength ? length : -1;
}

void Arrays::lambda$parallelSetAll$3($doubles* array, $IntToDoubleFunction* generator, int32_t i) {
	$init(Arrays);
	$nc(array)->set(i, $nc(generator)->applyAsDouble(i));
}

void Arrays::lambda$parallelSetAll$2($longs* array, $IntToLongFunction* generator, int32_t i) {
	$init(Arrays);
	$nc(array)->set(i, $nc(generator)->applyAsLong(i));
}

void Arrays::lambda$parallelSetAll$1($ints* array, $IntUnaryOperator* generator, int32_t i) {
	$init(Arrays);
	$nc(array)->set(i, $nc(generator)->applyAsInt(i));
}

void Arrays::lambda$parallelSetAll$0($ObjectArray* array, $IntFunction* generator, int32_t i) {
	$init(Arrays);
	$nc(array)->set(i, $($nc(generator)->apply(i)));
}

void clinit$Arrays($Class* class$) {
	Arrays::$assertionsDisabled = !Arrays::class$->desiredAssertionStatus();
}

Arrays::Arrays() {
}

$Class* Arrays::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Arrays$$Lambda$lambda$parallelSetAll$0::classInfo$.name)) {
			return Arrays$$Lambda$lambda$parallelSetAll$0::load$(name, initialize);
		}
		if (name->equals(Arrays$$Lambda$lambda$parallelSetAll$1$1::classInfo$.name)) {
			return Arrays$$Lambda$lambda$parallelSetAll$1$1::load$(name, initialize);
		}
		if (name->equals(Arrays$$Lambda$lambda$parallelSetAll$2$2::classInfo$.name)) {
			return Arrays$$Lambda$lambda$parallelSetAll$2$2::load$(name, initialize);
		}
		if (name->equals(Arrays$$Lambda$lambda$parallelSetAll$3$3::classInfo$.name)) {
			return Arrays$$Lambda$lambda$parallelSetAll$3$3::load$(name, initialize);
		}
	}
	$loadClass(Arrays, name, initialize, &_Arrays_ClassInfo_, clinit$Arrays, allocate$Arrays);
	return class$;
}

$Class* Arrays::class$ = nullptr;

	} // util
} // java