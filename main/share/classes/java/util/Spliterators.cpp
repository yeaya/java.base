#include <java/util/Spliterators.h>

#include <java/lang/Array.h>
#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Collection.h>
#include <java/util/Iterator.h>
#include <java/util/Objects.h>
#include <java/util/PrimitiveIterator$OfDouble.h>
#include <java/util/PrimitiveIterator$OfInt.h>
#include <java/util/PrimitiveIterator$OfLong.h>
#include <java/util/Spliterator$OfDouble.h>
#include <java/util/Spliterator$OfInt.h>
#include <java/util/Spliterator$OfLong.h>
#include <java/util/Spliterator.h>
#include <java/util/Spliterators$1Adapter.h>
#include <java/util/Spliterators$2Adapter.h>
#include <java/util/Spliterators$3Adapter.h>
#include <java/util/Spliterators$4Adapter.h>
#include <java/util/Spliterators$ArraySpliterator.h>
#include <java/util/Spliterators$DoubleArraySpliterator.h>
#include <java/util/Spliterators$DoubleIteratorSpliterator.h>
#include <java/util/Spliterators$EmptySpliterator$OfDouble.h>
#include <java/util/Spliterators$EmptySpliterator$OfInt.h>
#include <java/util/Spliterators$EmptySpliterator$OfLong.h>
#include <java/util/Spliterators$EmptySpliterator$OfRef.h>
#include <java/util/Spliterators$IntArraySpliterator.h>
#include <java/util/Spliterators$IntIteratorSpliterator.h>
#include <java/util/Spliterators$IteratorSpliterator.h>
#include <java/util/Spliterators$LongArraySpliterator.h>
#include <java/util/Spliterators$LongIteratorSpliterator.h>
#include <jcpp.h>

#undef EMPTY_LONG_SPLITERATOR
#undef EMPTY_INT_SPLITERATOR
#undef EMPTY_DOUBLE_SPLITERATOR
#undef EMPTY_SPLITERATOR

using $ArrayIndexOutOfBoundsException = ::java::lang::ArrayIndexOutOfBoundsException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collection = ::java::util::Collection;
using $Iterator = ::java::util::Iterator;
using $Objects = ::java::util::Objects;
using $PrimitiveIterator$OfDouble = ::java::util::PrimitiveIterator$OfDouble;
using $PrimitiveIterator$OfInt = ::java::util::PrimitiveIterator$OfInt;
using $PrimitiveIterator$OfLong = ::java::util::PrimitiveIterator$OfLong;
using $Spliterator = ::java::util::Spliterator;
using $Spliterator$OfDouble = ::java::util::Spliterator$OfDouble;
using $Spliterator$OfInt = ::java::util::Spliterator$OfInt;
using $Spliterator$OfLong = ::java::util::Spliterator$OfLong;
using $Spliterators$1Adapter = ::java::util::Spliterators$1Adapter;
using $Spliterators$2Adapter = ::java::util::Spliterators$2Adapter;
using $Spliterators$3Adapter = ::java::util::Spliterators$3Adapter;
using $Spliterators$4Adapter = ::java::util::Spliterators$4Adapter;
using $Spliterators$ArraySpliterator = ::java::util::Spliterators$ArraySpliterator;
using $Spliterators$DoubleArraySpliterator = ::java::util::Spliterators$DoubleArraySpliterator;
using $Spliterators$DoubleIteratorSpliterator = ::java::util::Spliterators$DoubleIteratorSpliterator;
using $Spliterators$EmptySpliterator$OfDouble = ::java::util::Spliterators$EmptySpliterator$OfDouble;
using $Spliterators$EmptySpliterator$OfInt = ::java::util::Spliterators$EmptySpliterator$OfInt;
using $Spliterators$EmptySpliterator$OfLong = ::java::util::Spliterators$EmptySpliterator$OfLong;
using $Spliterators$EmptySpliterator$OfRef = ::java::util::Spliterators$EmptySpliterator$OfRef;
using $Spliterators$IntArraySpliterator = ::java::util::Spliterators$IntArraySpliterator;
using $Spliterators$IntIteratorSpliterator = ::java::util::Spliterators$IntIteratorSpliterator;
using $Spliterators$IteratorSpliterator = ::java::util::Spliterators$IteratorSpliterator;
using $Spliterators$LongArraySpliterator = ::java::util::Spliterators$LongArraySpliterator;
using $Spliterators$LongIteratorSpliterator = ::java::util::Spliterators$LongIteratorSpliterator;

namespace java {
	namespace util {

$FieldInfo _Spliterators_FieldInfo_[] = {
	{"EMPTY_SPLITERATOR", "Ljava/util/Spliterator;", "Ljava/util/Spliterator<Ljava/lang/Object;>;", $PRIVATE | $STATIC | $FINAL, $staticField(Spliterators, EMPTY_SPLITERATOR)},
	{"EMPTY_INT_SPLITERATOR", "Ljava/util/Spliterator$OfInt;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Spliterators, EMPTY_INT_SPLITERATOR)},
	{"EMPTY_LONG_SPLITERATOR", "Ljava/util/Spliterator$OfLong;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Spliterators, EMPTY_LONG_SPLITERATOR)},
	{"EMPTY_DOUBLE_SPLITERATOR", "Ljava/util/Spliterator$OfDouble;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Spliterators, EMPTY_DOUBLE_SPLITERATOR)},
	{}
};

$MethodInfo _Spliterators_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(Spliterators::*)()>(&Spliterators::init$))},
	{"checkFromToBounds", "(III)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)(int32_t,int32_t,int32_t)>(&Spliterators::checkFromToBounds))},
	{"emptyDoubleSpliterator", "()Ljava/util/Spliterator$OfDouble;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Spliterator$OfDouble*(*)()>(&Spliterators::emptyDoubleSpliterator))},
	{"emptyIntSpliterator", "()Ljava/util/Spliterator$OfInt;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Spliterator$OfInt*(*)()>(&Spliterators::emptyIntSpliterator))},
	{"emptyLongSpliterator", "()Ljava/util/Spliterator$OfLong;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Spliterator$OfLong*(*)()>(&Spliterators::emptyLongSpliterator))},
	{"emptySpliterator", "()Ljava/util/Spliterator;", "<T:Ljava/lang/Object;>()Ljava/util/Spliterator<TT;>;", $PUBLIC | $STATIC, $method(static_cast<$Spliterator*(*)()>(&Spliterators::emptySpliterator))},
	{"iterator", "(Ljava/util/Spliterator;)Ljava/util/Iterator;", "<T:Ljava/lang/Object;>(Ljava/util/Spliterator<+TT;>;)Ljava/util/Iterator<TT;>;", $PUBLIC | $STATIC, $method(static_cast<$Iterator*(*)($Spliterator*)>(&Spliterators::iterator))},
	{"iterator", "(Ljava/util/Spliterator$OfInt;)Ljava/util/PrimitiveIterator$OfInt;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$PrimitiveIterator$OfInt*(*)($Spliterator$OfInt*)>(&Spliterators::iterator))},
	{"iterator", "(Ljava/util/Spliterator$OfLong;)Ljava/util/PrimitiveIterator$OfLong;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$PrimitiveIterator$OfLong*(*)($Spliterator$OfLong*)>(&Spliterators::iterator))},
	{"iterator", "(Ljava/util/Spliterator$OfDouble;)Ljava/util/PrimitiveIterator$OfDouble;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$PrimitiveIterator$OfDouble*(*)($Spliterator$OfDouble*)>(&Spliterators::iterator))},
	{"spliterator", "([Ljava/lang/Object;I)Ljava/util/Spliterator;", "<T:Ljava/lang/Object;>([Ljava/lang/Object;I)Ljava/util/Spliterator<TT;>;", $PUBLIC | $STATIC, $method(static_cast<$Spliterator*(*)($ObjectArray*,int32_t)>(&Spliterators::spliterator))},
	{"spliterator", "([Ljava/lang/Object;III)Ljava/util/Spliterator;", "<T:Ljava/lang/Object;>([Ljava/lang/Object;III)Ljava/util/Spliterator<TT;>;", $PUBLIC | $STATIC, $method(static_cast<$Spliterator*(*)($ObjectArray*,int32_t,int32_t,int32_t)>(&Spliterators::spliterator))},
	{"spliterator", "([II)Ljava/util/Spliterator$OfInt;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Spliterator$OfInt*(*)($ints*,int32_t)>(&Spliterators::spliterator))},
	{"spliterator", "([IIII)Ljava/util/Spliterator$OfInt;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Spliterator$OfInt*(*)($ints*,int32_t,int32_t,int32_t)>(&Spliterators::spliterator))},
	{"spliterator", "([JI)Ljava/util/Spliterator$OfLong;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Spliterator$OfLong*(*)($longs*,int32_t)>(&Spliterators::spliterator))},
	{"spliterator", "([JIII)Ljava/util/Spliterator$OfLong;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Spliterator$OfLong*(*)($longs*,int32_t,int32_t,int32_t)>(&Spliterators::spliterator))},
	{"spliterator", "([DI)Ljava/util/Spliterator$OfDouble;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Spliterator$OfDouble*(*)($doubles*,int32_t)>(&Spliterators::spliterator))},
	{"spliterator", "([DIII)Ljava/util/Spliterator$OfDouble;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Spliterator$OfDouble*(*)($doubles*,int32_t,int32_t,int32_t)>(&Spliterators::spliterator))},
	{"spliterator", "(Ljava/util/Collection;I)Ljava/util/Spliterator;", "<T:Ljava/lang/Object;>(Ljava/util/Collection<+TT;>;I)Ljava/util/Spliterator<TT;>;", $PUBLIC | $STATIC, $method(static_cast<$Spliterator*(*)($Collection*,int32_t)>(&Spliterators::spliterator))},
	{"spliterator", "(Ljava/util/Iterator;JI)Ljava/util/Spliterator;", "<T:Ljava/lang/Object;>(Ljava/util/Iterator<+TT;>;JI)Ljava/util/Spliterator<TT;>;", $PUBLIC | $STATIC, $method(static_cast<$Spliterator*(*)($Iterator*,int64_t,int32_t)>(&Spliterators::spliterator))},
	{"spliterator", "(Ljava/util/PrimitiveIterator$OfInt;JI)Ljava/util/Spliterator$OfInt;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Spliterator$OfInt*(*)($PrimitiveIterator$OfInt*,int64_t,int32_t)>(&Spliterators::spliterator))},
	{"spliterator", "(Ljava/util/PrimitiveIterator$OfLong;JI)Ljava/util/Spliterator$OfLong;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Spliterator$OfLong*(*)($PrimitiveIterator$OfLong*,int64_t,int32_t)>(&Spliterators::spliterator))},
	{"spliterator", "(Ljava/util/PrimitiveIterator$OfDouble;JI)Ljava/util/Spliterator$OfDouble;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Spliterator$OfDouble*(*)($PrimitiveIterator$OfDouble*,int64_t,int32_t)>(&Spliterators::spliterator))},
	{"spliteratorUnknownSize", "(Ljava/util/Iterator;I)Ljava/util/Spliterator;", "<T:Ljava/lang/Object;>(Ljava/util/Iterator<+TT;>;I)Ljava/util/Spliterator<TT;>;", $PUBLIC | $STATIC, $method(static_cast<$Spliterator*(*)($Iterator*,int32_t)>(&Spliterators::spliteratorUnknownSize))},
	{"spliteratorUnknownSize", "(Ljava/util/PrimitiveIterator$OfInt;I)Ljava/util/Spliterator$OfInt;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Spliterator$OfInt*(*)($PrimitiveIterator$OfInt*,int32_t)>(&Spliterators::spliteratorUnknownSize))},
	{"spliteratorUnknownSize", "(Ljava/util/PrimitiveIterator$OfLong;I)Ljava/util/Spliterator$OfLong;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Spliterator$OfLong*(*)($PrimitiveIterator$OfLong*,int32_t)>(&Spliterators::spliteratorUnknownSize))},
	{"spliteratorUnknownSize", "(Ljava/util/PrimitiveIterator$OfDouble;I)Ljava/util/Spliterator$OfDouble;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Spliterator$OfDouble*(*)($PrimitiveIterator$OfDouble*,int32_t)>(&Spliterators::spliteratorUnknownSize))},
	{}
};

$InnerClassInfo _Spliterators_InnerClassesInfo_[] = {
	{"java.util.Spliterators$DoubleIteratorSpliterator", "java.util.Spliterators", "DoubleIteratorSpliterator", $STATIC | $FINAL},
	{"java.util.Spliterators$LongIteratorSpliterator", "java.util.Spliterators", "LongIteratorSpliterator", $STATIC | $FINAL},
	{"java.util.Spliterators$IntIteratorSpliterator", "java.util.Spliterators", "IntIteratorSpliterator", $STATIC | $FINAL},
	{"java.util.Spliterators$IteratorSpliterator", "java.util.Spliterators", "IteratorSpliterator", $STATIC},
	{"java.util.Spliterators$AbstractDoubleSpliterator", "java.util.Spliterators", "AbstractDoubleSpliterator", $PUBLIC | $STATIC | $ABSTRACT},
	{"java.util.Spliterators$AbstractLongSpliterator", "java.util.Spliterators", "AbstractLongSpliterator", $PUBLIC | $STATIC | $ABSTRACT},
	{"java.util.Spliterators$AbstractIntSpliterator", "java.util.Spliterators", "AbstractIntSpliterator", $PUBLIC | $STATIC | $ABSTRACT},
	{"java.util.Spliterators$AbstractSpliterator", "java.util.Spliterators", "AbstractSpliterator", $PUBLIC | $STATIC | $ABSTRACT},
	{"java.util.Spliterators$DoubleArraySpliterator", "java.util.Spliterators", "DoubleArraySpliterator", $STATIC | $FINAL},
	{"java.util.Spliterators$LongArraySpliterator", "java.util.Spliterators", "LongArraySpliterator", $STATIC | $FINAL},
	{"java.util.Spliterators$IntArraySpliterator", "java.util.Spliterators", "IntArraySpliterator", $STATIC | $FINAL},
	{"java.util.Spliterators$ArraySpliterator", "java.util.Spliterators", "ArraySpliterator", $STATIC | $FINAL},
	{"java.util.Spliterators$EmptySpliterator", "java.util.Spliterators", "EmptySpliterator", $PRIVATE | $STATIC | $ABSTRACT},
	{"java.util.Spliterators$4Adapter", nullptr, "Adapter", 0},
	{"java.util.Spliterators$3Adapter", nullptr, "Adapter", 0},
	{"java.util.Spliterators$2Adapter", nullptr, "Adapter", 0},
	{"java.util.Spliterators$1Adapter", nullptr, "Adapter", 0},
	{}
};

$ClassInfo _Spliterators_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.util.Spliterators",
	"java.lang.Object",
	nullptr,
	_Spliterators_FieldInfo_,
	_Spliterators_MethodInfo_,
	nullptr,
	nullptr,
	_Spliterators_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.util.Spliterators$DoubleIteratorSpliterator,java.util.Spliterators$LongIteratorSpliterator,java.util.Spliterators$IntIteratorSpliterator,java.util.Spliterators$IteratorSpliterator,java.util.Spliterators$AbstractDoubleSpliterator,java.util.Spliterators$AbstractDoubleSpliterator$HoldingDoubleConsumer,java.util.Spliterators$AbstractLongSpliterator,java.util.Spliterators$AbstractLongSpliterator$HoldingLongConsumer,java.util.Spliterators$AbstractIntSpliterator,java.util.Spliterators$AbstractIntSpliterator$HoldingIntConsumer,java.util.Spliterators$AbstractSpliterator,java.util.Spliterators$AbstractSpliterator$HoldingConsumer,java.util.Spliterators$DoubleArraySpliterator,java.util.Spliterators$LongArraySpliterator,java.util.Spliterators$IntArraySpliterator,java.util.Spliterators$ArraySpliterator,java.util.Spliterators$EmptySpliterator,java.util.Spliterators$EmptySpliterator$OfDouble,java.util.Spliterators$EmptySpliterator$OfLong,java.util.Spliterators$EmptySpliterator$OfInt,java.util.Spliterators$EmptySpliterator$OfRef,java.util.Spliterators$4Adapter,java.util.Spliterators$3Adapter,java.util.Spliterators$2Adapter,java.util.Spliterators$1Adapter"
};

$Object* allocate$Spliterators($Class* clazz) {
	return $of($alloc(Spliterators));
}

$Spliterator* Spliterators::EMPTY_SPLITERATOR = nullptr;
$Spliterator$OfInt* Spliterators::EMPTY_INT_SPLITERATOR = nullptr;
$Spliterator$OfLong* Spliterators::EMPTY_LONG_SPLITERATOR = nullptr;
$Spliterator$OfDouble* Spliterators::EMPTY_DOUBLE_SPLITERATOR = nullptr;

void Spliterators::init$() {
}

$Spliterator* Spliterators::emptySpliterator() {
	$init(Spliterators);
	return Spliterators::EMPTY_SPLITERATOR;
}

$Spliterator$OfInt* Spliterators::emptyIntSpliterator() {
	$init(Spliterators);
	return Spliterators::EMPTY_INT_SPLITERATOR;
}

$Spliterator$OfLong* Spliterators::emptyLongSpliterator() {
	$init(Spliterators);
	return Spliterators::EMPTY_LONG_SPLITERATOR;
}

$Spliterator$OfDouble* Spliterators::emptyDoubleSpliterator() {
	$init(Spliterators);
	return Spliterators::EMPTY_DOUBLE_SPLITERATOR;
}

$Spliterator* Spliterators::spliterator($ObjectArray* array, int32_t additionalCharacteristics) {
	$init(Spliterators);
	return $new($Spliterators$ArraySpliterator, $cast($ObjectArray, $Objects::requireNonNull(array)), additionalCharacteristics);
}

$Spliterator* Spliterators::spliterator($ObjectArray* array, int32_t fromIndex, int32_t toIndex, int32_t additionalCharacteristics) {
	$init(Spliterators);
	checkFromToBounds($nc(($cast($ObjectArray, $Objects::requireNonNull(array))))->length, fromIndex, toIndex);
	return $new($Spliterators$ArraySpliterator, array, fromIndex, toIndex, additionalCharacteristics);
}

$Spliterator$OfInt* Spliterators::spliterator($ints* array, int32_t additionalCharacteristics) {
	$init(Spliterators);
	return $new($Spliterators$IntArraySpliterator, $cast($ints, $Objects::requireNonNull(array)), additionalCharacteristics);
}

$Spliterator$OfInt* Spliterators::spliterator($ints* array, int32_t fromIndex, int32_t toIndex, int32_t additionalCharacteristics) {
	$init(Spliterators);
	checkFromToBounds($nc(($cast($ints, $Objects::requireNonNull(array))))->length, fromIndex, toIndex);
	return $new($Spliterators$IntArraySpliterator, array, fromIndex, toIndex, additionalCharacteristics);
}

$Spliterator$OfLong* Spliterators::spliterator($longs* array, int32_t additionalCharacteristics) {
	$init(Spliterators);
	return $new($Spliterators$LongArraySpliterator, $cast($longs, $Objects::requireNonNull(array)), additionalCharacteristics);
}

$Spliterator$OfLong* Spliterators::spliterator($longs* array, int32_t fromIndex, int32_t toIndex, int32_t additionalCharacteristics) {
	$init(Spliterators);
	checkFromToBounds($nc(($cast($longs, $Objects::requireNonNull(array))))->length, fromIndex, toIndex);
	return $new($Spliterators$LongArraySpliterator, array, fromIndex, toIndex, additionalCharacteristics);
}

$Spliterator$OfDouble* Spliterators::spliterator($doubles* array, int32_t additionalCharacteristics) {
	$init(Spliterators);
	return $new($Spliterators$DoubleArraySpliterator, $cast($doubles, $Objects::requireNonNull(array)), additionalCharacteristics);
}

$Spliterator$OfDouble* Spliterators::spliterator($doubles* array, int32_t fromIndex, int32_t toIndex, int32_t additionalCharacteristics) {
	$init(Spliterators);
	checkFromToBounds($nc(($cast($doubles, $Objects::requireNonNull(array))))->length, fromIndex, toIndex);
	return $new($Spliterators$DoubleArraySpliterator, array, fromIndex, toIndex, additionalCharacteristics);
}

void Spliterators::checkFromToBounds(int32_t arrayLength, int32_t origin, int32_t fence) {
	$init(Spliterators);
	if (origin > fence) {
		$throwNew($ArrayIndexOutOfBoundsException, $$str({"origin("_s, $$str(origin), ") > fence("_s, $$str(fence), ")"_s}));
	}
	if (origin < 0) {
		$throwNew($ArrayIndexOutOfBoundsException, origin);
	}
	if (fence > arrayLength) {
		$throwNew($ArrayIndexOutOfBoundsException, fence);
	}
}

$Spliterator* Spliterators::spliterator($Collection* c, int32_t characteristics) {
	$init(Spliterators);
	return $new($Spliterators$IteratorSpliterator, $cast($Collection, $Objects::requireNonNull(c)), characteristics);
}

$Spliterator* Spliterators::spliterator($Iterator* iterator, int64_t size, int32_t characteristics) {
	$init(Spliterators);
	return $new($Spliterators$IteratorSpliterator, $cast($Iterator, $Objects::requireNonNull(iterator)), size, characteristics);
}

$Spliterator* Spliterators::spliteratorUnknownSize($Iterator* iterator, int32_t characteristics) {
	$init(Spliterators);
	return $new($Spliterators$IteratorSpliterator, $cast($Iterator, $Objects::requireNonNull(iterator)), characteristics);
}

$Spliterator$OfInt* Spliterators::spliterator($PrimitiveIterator$OfInt* iterator, int64_t size, int32_t characteristics) {
	$init(Spliterators);
	return $new($Spliterators$IntIteratorSpliterator, $cast($PrimitiveIterator$OfInt, $Objects::requireNonNull(iterator)), size, characteristics);
}

$Spliterator$OfInt* Spliterators::spliteratorUnknownSize($PrimitiveIterator$OfInt* iterator, int32_t characteristics) {
	$init(Spliterators);
	return $new($Spliterators$IntIteratorSpliterator, $cast($PrimitiveIterator$OfInt, $Objects::requireNonNull(iterator)), characteristics);
}

$Spliterator$OfLong* Spliterators::spliterator($PrimitiveIterator$OfLong* iterator, int64_t size, int32_t characteristics) {
	$init(Spliterators);
	return $new($Spliterators$LongIteratorSpliterator, $cast($PrimitiveIterator$OfLong, $Objects::requireNonNull(iterator)), size, characteristics);
}

$Spliterator$OfLong* Spliterators::spliteratorUnknownSize($PrimitiveIterator$OfLong* iterator, int32_t characteristics) {
	$init(Spliterators);
	return $new($Spliterators$LongIteratorSpliterator, $cast($PrimitiveIterator$OfLong, $Objects::requireNonNull(iterator)), characteristics);
}

$Spliterator$OfDouble* Spliterators::spliterator($PrimitiveIterator$OfDouble* iterator, int64_t size, int32_t characteristics) {
	$init(Spliterators);
	return $new($Spliterators$DoubleIteratorSpliterator, $cast($PrimitiveIterator$OfDouble, $Objects::requireNonNull(iterator)), size, characteristics);
}

$Spliterator$OfDouble* Spliterators::spliteratorUnknownSize($PrimitiveIterator$OfDouble* iterator, int32_t characteristics) {
	$init(Spliterators);
	return $new($Spliterators$DoubleIteratorSpliterator, $cast($PrimitiveIterator$OfDouble, $Objects::requireNonNull(iterator)), characteristics);
}

$Iterator* Spliterators::iterator($Spliterator* spliterator) {
	$init(Spliterators);
	$Objects::requireNonNull(spliterator);
	{
	}
	return $new($Spliterators$1Adapter, spliterator);
}

$PrimitiveIterator$OfInt* Spliterators::iterator($Spliterator$OfInt* spliterator) {
	$init(Spliterators);
	$Objects::requireNonNull(spliterator);
	{
	}
	return $new($Spliterators$2Adapter, spliterator);
}

$PrimitiveIterator$OfLong* Spliterators::iterator($Spliterator$OfLong* spliterator) {
	$init(Spliterators);
	$Objects::requireNonNull(spliterator);
	{
	}
	return $new($Spliterators$3Adapter, spliterator);
}

$PrimitiveIterator$OfDouble* Spliterators::iterator($Spliterator$OfDouble* spliterator) {
	$init(Spliterators);
	$Objects::requireNonNull(spliterator);
	{
	}
	return $new($Spliterators$4Adapter, spliterator);
}

void clinit$Spliterators($Class* class$) {
	$assignStatic(Spliterators::EMPTY_SPLITERATOR, $new($Spliterators$EmptySpliterator$OfRef));
	$assignStatic(Spliterators::EMPTY_INT_SPLITERATOR, $as($Spliterator$OfInt, $new($Spliterators$EmptySpliterator$OfInt)));
	$assignStatic(Spliterators::EMPTY_LONG_SPLITERATOR, $as($Spliterator$OfLong, $new($Spliterators$EmptySpliterator$OfLong)));
	$assignStatic(Spliterators::EMPTY_DOUBLE_SPLITERATOR, $as($Spliterator$OfDouble, $new($Spliterators$EmptySpliterator$OfDouble)));
}

Spliterators::Spliterators() {
}

$Class* Spliterators::load$($String* name, bool initialize) {
	$loadClass(Spliterators, name, initialize, &_Spliterators_ClassInfo_, clinit$Spliterators, allocate$Spliterators);
	return class$;
}

$Class* Spliterators::class$ = nullptr;

	} // util
} // java