#include <java/util/Spliterators$IntArraySpliterator.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Comparator.h>
#include <java/util/Spliterator$OfInt.h>
#include <java/util/Spliterator.h>
#include <java/util/Spliterators.h>
#include <java/util/function/IntConsumer.h>
#include <jcpp.h>

#undef SUBSIZED
#undef SIZED
#undef SORTED

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Comparator = ::java::util::Comparator;
using $Spliterator = ::java::util::Spliterator;
using $Spliterator$OfInt = ::java::util::Spliterator$OfInt;
using $Spliterators = ::java::util::Spliterators;
using $IntConsumer = ::java::util::function::IntConsumer;

namespace java {
	namespace util {

$FieldInfo _Spliterators$IntArraySpliterator_FieldInfo_[] = {
	{"array", "[I", nullptr, $PRIVATE | $FINAL, $field(Spliterators$IntArraySpliterator, array)},
	{"index", "I", nullptr, $PRIVATE, $field(Spliterators$IntArraySpliterator, index)},
	{"fence", "I", nullptr, $PRIVATE | $FINAL, $field(Spliterators$IntArraySpliterator, fence)},
	{"characteristics", "I", nullptr, $PRIVATE | $FINAL, $field(Spliterators$IntArraySpliterator, characteristics$)},
	{}
};

$MethodInfo _Spliterators$IntArraySpliterator_MethodInfo_[] = {
	{"<init>", "([II)V", nullptr, $PUBLIC, $method(static_cast<void(Spliterators$IntArraySpliterator::*)($ints*,int32_t)>(&Spliterators$IntArraySpliterator::init$))},
	{"<init>", "([IIII)V", nullptr, $PUBLIC, $method(static_cast<void(Spliterators$IntArraySpliterator::*)($ints*,int32_t,int32_t,int32_t)>(&Spliterators$IntArraySpliterator::init$))},
	{"characteristics", "()I", nullptr, $PUBLIC},
	{"estimateSize", "()J", nullptr, $PUBLIC},
	{"forEachRemaining", "(Ljava/util/function/IntConsumer;)V", nullptr, $PUBLIC},
	{"forEachRemaining", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getComparator", "()Ljava/util/Comparator;", "()Ljava/util/Comparator<-Ljava/lang/Integer;>;", $PUBLIC},
	{"tryAdvance", "(Ljava/util/function/IntConsumer;)Z", nullptr, $PUBLIC},
	{"tryAdvance", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"trySplit", "()Ljava/util/Spliterator$OfInt;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Spliterators$IntArraySpliterator_InnerClassesInfo_[] = {
	{"java.util.Spliterators$IntArraySpliterator", "java.util.Spliterators", "IntArraySpliterator", $STATIC | $FINAL},
	{"java.util.Spliterator$OfInt", "java.util.Spliterator", "OfInt", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Spliterators$IntArraySpliterator_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.Spliterators$IntArraySpliterator",
	"java.lang.Object",
	"java.util.Spliterator$OfInt",
	_Spliterators$IntArraySpliterator_FieldInfo_,
	_Spliterators$IntArraySpliterator_MethodInfo_,
	nullptr,
	nullptr,
	_Spliterators$IntArraySpliterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Spliterators"
};

$Object* allocate$Spliterators$IntArraySpliterator($Class* clazz) {
	return $of($alloc(Spliterators$IntArraySpliterator));
}

void Spliterators$IntArraySpliterator::init$($ints* array, int32_t additionalCharacteristics) {
	Spliterators$IntArraySpliterator::init$(array, 0, $nc(array)->length, additionalCharacteristics);
}

void Spliterators$IntArraySpliterator::init$($ints* array, int32_t origin, int32_t fence, int32_t additionalCharacteristics) {
	$set(this, array, array);
	this->index = origin;
	this->fence = fence;
	this->characteristics$ = (additionalCharacteristics | $Spliterator::SIZED) | $Spliterator::SUBSIZED;
}

$Spliterator$OfInt* Spliterators$IntArraySpliterator::trySplit() {
	int32_t lo = this->index;
	int32_t mid = (int32_t)((uint32_t)(lo + this->fence) >> 1);
	return (lo >= mid) ? ($Spliterator$OfInt*)nullptr : static_cast<$Spliterator$OfInt*>($new(Spliterators$IntArraySpliterator, this->array, lo, this->index = mid, this->characteristics$));
}

void Spliterators$IntArraySpliterator::forEachRemaining($IntConsumer* action) {
	$var($ints, a, nullptr);
	int32_t i = 0;
	int32_t hi = 0;
	if (action == nullptr) {
		$throwNew($NullPointerException);
	}
	bool var$0 = $nc(($assign(a, this->array)))->length >= (hi = this->fence) && (i = this->index) >= 0;
	if (var$0 && i < (this->index = hi)) {
		do {
			$nc(action)->accept($nc(a)->get(i));
		} while (++i < hi);
	}
}

bool Spliterators$IntArraySpliterator::tryAdvance($IntConsumer* action) {
	if (action == nullptr) {
		$throwNew($NullPointerException);
	}
	if (this->index >= 0 && this->index < this->fence) {
		$nc(action)->accept($nc(this->array)->get(this->index++));
		return true;
	}
	return false;
}

int64_t Spliterators$IntArraySpliterator::estimateSize() {
	return (int64_t)(this->fence - this->index);
}

int32_t Spliterators$IntArraySpliterator::characteristics() {
	return this->characteristics$;
}

$Comparator* Spliterators$IntArraySpliterator::getComparator() {
	if (hasCharacteristics($Spliterator::SORTED)) {
		return nullptr;
	}
	$throwNew($IllegalStateException);
}

void Spliterators$IntArraySpliterator::forEachRemaining(Object$* action) {
	this->forEachRemaining($cast($IntConsumer, action));
}

bool Spliterators$IntArraySpliterator::tryAdvance(Object$* action) {
	return this->tryAdvance($cast($IntConsumer, action));
}

Spliterators$IntArraySpliterator::Spliterators$IntArraySpliterator() {
}

$Class* Spliterators$IntArraySpliterator::load$($String* name, bool initialize) {
	$loadClass(Spliterators$IntArraySpliterator, name, initialize, &_Spliterators$IntArraySpliterator_ClassInfo_, allocate$Spliterators$IntArraySpliterator);
	return class$;
}

$Class* Spliterators$IntArraySpliterator::class$ = nullptr;

	} // util
} // java