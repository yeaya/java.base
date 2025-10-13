#include <java/util/Spliterators$DoubleArraySpliterator.h>

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
#include <java/util/Spliterator$OfDouble.h>
#include <java/util/Spliterator.h>
#include <java/util/Spliterators.h>
#include <java/util/function/DoubleConsumer.h>
#include <jcpp.h>

#undef SIZED
#undef SORTED
#undef SUBSIZED

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Comparator = ::java::util::Comparator;
using $Spliterator = ::java::util::Spliterator;
using $Spliterator$OfDouble = ::java::util::Spliterator$OfDouble;
using $Spliterators = ::java::util::Spliterators;
using $DoubleConsumer = ::java::util::function::DoubleConsumer;

namespace java {
	namespace util {

$FieldInfo _Spliterators$DoubleArraySpliterator_FieldInfo_[] = {
	{"array", "[D", nullptr, $PRIVATE | $FINAL, $field(Spliterators$DoubleArraySpliterator, array)},
	{"index", "I", nullptr, $PRIVATE, $field(Spliterators$DoubleArraySpliterator, index)},
	{"fence", "I", nullptr, $PRIVATE | $FINAL, $field(Spliterators$DoubleArraySpliterator, fence)},
	{"characteristics", "I", nullptr, $PRIVATE | $FINAL, $field(Spliterators$DoubleArraySpliterator, characteristics$)},
	{}
};

$MethodInfo _Spliterators$DoubleArraySpliterator_MethodInfo_[] = {
	{"<init>", "([DI)V", nullptr, $PUBLIC, $method(static_cast<void(Spliterators$DoubleArraySpliterator::*)($doubles*,int32_t)>(&Spliterators$DoubleArraySpliterator::init$))},
	{"<init>", "([DIII)V", nullptr, $PUBLIC, $method(static_cast<void(Spliterators$DoubleArraySpliterator::*)($doubles*,int32_t,int32_t,int32_t)>(&Spliterators$DoubleArraySpliterator::init$))},
	{"characteristics", "()I", nullptr, $PUBLIC},
	{"estimateSize", "()J", nullptr, $PUBLIC},
	{"forEachRemaining", "(Ljava/util/function/DoubleConsumer;)V", nullptr, $PUBLIC},
	{"forEachRemaining", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getComparator", "()Ljava/util/Comparator;", "()Ljava/util/Comparator<-Ljava/lang/Double;>;", $PUBLIC},
	{"tryAdvance", "(Ljava/util/function/DoubleConsumer;)Z", nullptr, $PUBLIC},
	{"tryAdvance", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"trySplit", "()Ljava/util/Spliterator$OfDouble;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Spliterators$DoubleArraySpliterator_InnerClassesInfo_[] = {
	{"java.util.Spliterators$DoubleArraySpliterator", "java.util.Spliterators", "DoubleArraySpliterator", $STATIC | $FINAL},
	{"java.util.Spliterator$OfDouble", "java.util.Spliterator", "OfDouble", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Spliterators$DoubleArraySpliterator_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.Spliterators$DoubleArraySpliterator",
	"java.lang.Object",
	"java.util.Spliterator$OfDouble",
	_Spliterators$DoubleArraySpliterator_FieldInfo_,
	_Spliterators$DoubleArraySpliterator_MethodInfo_,
	nullptr,
	nullptr,
	_Spliterators$DoubleArraySpliterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Spliterators"
};

$Object* allocate$Spliterators$DoubleArraySpliterator($Class* clazz) {
	return $of($alloc(Spliterators$DoubleArraySpliterator));
}

void Spliterators$DoubleArraySpliterator::init$($doubles* array, int32_t additionalCharacteristics) {
	Spliterators$DoubleArraySpliterator::init$(array, 0, $nc(array)->length, additionalCharacteristics);
}

void Spliterators$DoubleArraySpliterator::init$($doubles* array, int32_t origin, int32_t fence, int32_t additionalCharacteristics) {
	$set(this, array, array);
	this->index = origin;
	this->fence = fence;
	this->characteristics$ = (additionalCharacteristics | $Spliterator::SIZED) | $Spliterator::SUBSIZED;
}

$Spliterator$OfDouble* Spliterators$DoubleArraySpliterator::trySplit() {
	int32_t lo = this->index;
	int32_t mid = (int32_t)((uint32_t)(lo + this->fence) >> 1);
	return (lo >= mid) ? ($Spliterator$OfDouble*)nullptr : static_cast<$Spliterator$OfDouble*>($new(Spliterators$DoubleArraySpliterator, this->array, lo, this->index = mid, this->characteristics$));
}

void Spliterators$DoubleArraySpliterator::forEachRemaining($DoubleConsumer* action) {
	$var($doubles, a, nullptr);
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

bool Spliterators$DoubleArraySpliterator::tryAdvance($DoubleConsumer* action) {
	if (action == nullptr) {
		$throwNew($NullPointerException);
	}
	if (this->index >= 0 && this->index < this->fence) {
		$nc(action)->accept($nc(this->array)->get(this->index++));
		return true;
	}
	return false;
}

int64_t Spliterators$DoubleArraySpliterator::estimateSize() {
	return (int64_t)(this->fence - this->index);
}

int32_t Spliterators$DoubleArraySpliterator::characteristics() {
	return this->characteristics$;
}

$Comparator* Spliterators$DoubleArraySpliterator::getComparator() {
	if (hasCharacteristics($Spliterator::SORTED)) {
		return nullptr;
	}
	$throwNew($IllegalStateException);
}

void Spliterators$DoubleArraySpliterator::forEachRemaining(Object$* action) {
	this->forEachRemaining($cast($DoubleConsumer, action));
}

bool Spliterators$DoubleArraySpliterator::tryAdvance(Object$* action) {
	return this->tryAdvance($cast($DoubleConsumer, action));
}

Spliterators$DoubleArraySpliterator::Spliterators$DoubleArraySpliterator() {
}

$Class* Spliterators$DoubleArraySpliterator::load$($String* name, bool initialize) {
	$loadClass(Spliterators$DoubleArraySpliterator, name, initialize, &_Spliterators$DoubleArraySpliterator_ClassInfo_, allocate$Spliterators$DoubleArraySpliterator);
	return class$;
}

$Class* Spliterators$DoubleArraySpliterator::class$ = nullptr;

	} // util
} // java