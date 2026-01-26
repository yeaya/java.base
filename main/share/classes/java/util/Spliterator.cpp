#include <java/util/Spliterator.h>

#include <java/lang/IllegalStateException.h>
#include <java/util/Comparator.h>
#include <java/util/function/Consumer.h>
#include <jcpp.h>

#undef CONCURRENT
#undef DISTINCT
#undef IMMUTABLE
#undef NONNULL
#undef ORDERED
#undef SIZED
#undef SORTED
#undef SUBSIZED

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Comparator = ::java::util::Comparator;
using $Consumer = ::java::util::function::Consumer;

namespace java {
	namespace util {

$FieldInfo _Spliterator_FieldInfo_[] = {
	{"ORDERED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Spliterator, ORDERED)},
	{"DISTINCT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Spliterator, DISTINCT)},
	{"SORTED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Spliterator, SORTED)},
	{"SIZED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Spliterator, SIZED)},
	{"NONNULL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Spliterator, NONNULL)},
	{"IMMUTABLE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Spliterator, IMMUTABLE)},
	{"CONCURRENT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Spliterator, CONCURRENT)},
	{"SUBSIZED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Spliterator, SUBSIZED)},
	{}
};

$MethodInfo _Spliterator_MethodInfo_[] = {
	{"characteristics", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Spliterator, characteristics, int32_t)},
	{"estimateSize", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Spliterator, estimateSize, int64_t)},
	{"forEachRemaining", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-TT;>;)V", $PUBLIC, $virtualMethod(Spliterator, forEachRemaining, void, $Consumer*)},
	{"getComparator", "()Ljava/util/Comparator;", "()Ljava/util/Comparator<-TT;>;", $PUBLIC, $virtualMethod(Spliterator, getComparator, $Comparator*)},
	{"getExactSizeIfKnown", "()J", nullptr, $PUBLIC, $virtualMethod(Spliterator, getExactSizeIfKnown, int64_t)},
	{"hasCharacteristics", "(I)Z", nullptr, $PUBLIC, $virtualMethod(Spliterator, hasCharacteristics, bool, int32_t)},
	{"tryAdvance", "(Ljava/util/function/Consumer;)Z", "(Ljava/util/function/Consumer<-TT;>;)Z", $PUBLIC | $ABSTRACT, $virtualMethod(Spliterator, tryAdvance, bool, $Consumer*)},
	{"trySplit", "()Ljava/util/Spliterator;", "()Ljava/util/Spliterator<TT;>;", $PUBLIC | $ABSTRACT, $virtualMethod(Spliterator, trySplit, Spliterator*)},
	{}
};

$InnerClassInfo _Spliterator_InnerClassesInfo_[] = {
	{"java.util.Spliterator$OfDouble", "java.util.Spliterator", "OfDouble", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"java.util.Spliterator$OfLong", "java.util.Spliterator", "OfLong", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"java.util.Spliterator$OfInt", "java.util.Spliterator", "OfInt", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"java.util.Spliterator$OfPrimitive", "java.util.Spliterator", "OfPrimitive", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Spliterator_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.util.Spliterator",
	nullptr,
	nullptr,
	_Spliterator_FieldInfo_,
	_Spliterator_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;",
	nullptr,
	_Spliterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.util.Spliterator$OfDouble,java.util.Spliterator$OfLong,java.util.Spliterator$OfInt,java.util.Spliterator$OfPrimitive"
};

$Object* allocate$Spliterator($Class* clazz) {
	return $of($alloc(Spliterator));
}

void Spliterator::forEachRemaining($Consumer* action) {
	do {
	} while (tryAdvance(action));
}

int64_t Spliterator::getExactSizeIfKnown() {
	return ((int32_t)(characteristics() & (uint32_t)Spliterator::SIZED)) == 0 ? (int64_t)-1 : estimateSize();
}

bool Spliterator::hasCharacteristics(int32_t characteristics) {
	return ((int32_t)(this->characteristics() & (uint32_t)characteristics)) == characteristics;
}

$Comparator* Spliterator::getComparator() {
	$throwNew($IllegalStateException);
	$shouldNotReachHere();
}

$Class* Spliterator::load$($String* name, bool initialize) {
	$loadClass(Spliterator, name, initialize, &_Spliterator_ClassInfo_, allocate$Spliterator);
	return class$;
}

$Class* Spliterator::class$ = nullptr;

	} // util
} // java