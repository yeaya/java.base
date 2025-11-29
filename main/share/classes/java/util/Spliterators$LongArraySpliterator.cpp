#include <java/util/Spliterators$LongArraySpliterator.h>

#include <java/lang/IllegalStateException.h>
#include <java/util/Comparator.h>
#include <java/util/Spliterator$OfLong.h>
#include <java/util/Spliterator.h>
#include <java/util/Spliterators.h>
#include <java/util/function/LongConsumer.h>
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
using $Spliterator$OfLong = ::java::util::Spliterator$OfLong;
using $LongConsumer = ::java::util::function::LongConsumer;

namespace java {
	namespace util {

$FieldInfo _Spliterators$LongArraySpliterator_FieldInfo_[] = {
	{"array", "[J", nullptr, $PRIVATE | $FINAL, $field(Spliterators$LongArraySpliterator, array)},
	{"index", "I", nullptr, $PRIVATE, $field(Spliterators$LongArraySpliterator, index)},
	{"fence", "I", nullptr, $PRIVATE | $FINAL, $field(Spliterators$LongArraySpliterator, fence)},
	{"characteristics", "I", nullptr, $PRIVATE | $FINAL, $field(Spliterators$LongArraySpliterator, characteristics$)},
	{}
};

$MethodInfo _Spliterators$LongArraySpliterator_MethodInfo_[] = {
	{"<init>", "([JI)V", nullptr, $PUBLIC, $method(static_cast<void(Spliterators$LongArraySpliterator::*)($longs*,int32_t)>(&Spliterators$LongArraySpliterator::init$))},
	{"<init>", "([JIII)V", nullptr, $PUBLIC, $method(static_cast<void(Spliterators$LongArraySpliterator::*)($longs*,int32_t,int32_t,int32_t)>(&Spliterators$LongArraySpliterator::init$))},
	{"characteristics", "()I", nullptr, $PUBLIC},
	{"estimateSize", "()J", nullptr, $PUBLIC},
	{"forEachRemaining", "(Ljava/util/function/LongConsumer;)V", nullptr, $PUBLIC},
	{"forEachRemaining", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getComparator", "()Ljava/util/Comparator;", "()Ljava/util/Comparator<-Ljava/lang/Long;>;", $PUBLIC},
	{"tryAdvance", "(Ljava/util/function/LongConsumer;)Z", nullptr, $PUBLIC},
	{"tryAdvance", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"trySplit", "()Ljava/util/Spliterator$OfLong;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Spliterators$LongArraySpliterator_InnerClassesInfo_[] = {
	{"java.util.Spliterators$LongArraySpliterator", "java.util.Spliterators", "LongArraySpliterator", $STATIC | $FINAL},
	{"java.util.Spliterator$OfLong", "java.util.Spliterator", "OfLong", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Spliterators$LongArraySpliterator_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.Spliterators$LongArraySpliterator",
	"java.lang.Object",
	"java.util.Spliterator$OfLong",
	_Spliterators$LongArraySpliterator_FieldInfo_,
	_Spliterators$LongArraySpliterator_MethodInfo_,
	nullptr,
	nullptr,
	_Spliterators$LongArraySpliterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Spliterators"
};

$Object* allocate$Spliterators$LongArraySpliterator($Class* clazz) {
	return $of($alloc(Spliterators$LongArraySpliterator));
}

void Spliterators$LongArraySpliterator::init$($longs* array, int32_t additionalCharacteristics) {
	Spliterators$LongArraySpliterator::init$(array, 0, $nc(array)->length, additionalCharacteristics);
}

void Spliterators$LongArraySpliterator::init$($longs* array, int32_t origin, int32_t fence, int32_t additionalCharacteristics) {
	$set(this, array, array);
	this->index = origin;
	this->fence = fence;
	this->characteristics$ = (additionalCharacteristics | $Spliterator::SIZED) | $Spliterator::SUBSIZED;
}

$Spliterator$OfLong* Spliterators$LongArraySpliterator::trySplit() {
	int32_t lo = this->index;
	int32_t mid = (int32_t)((uint32_t)(lo + this->fence) >> 1);
	return (lo >= mid) ? ($Spliterator$OfLong*)nullptr : static_cast<$Spliterator$OfLong*>($new(Spliterators$LongArraySpliterator, this->array, lo, this->index = mid, this->characteristics$));
}

void Spliterators$LongArraySpliterator::forEachRemaining($LongConsumer* action) {
	$var($longs, a, nullptr);
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

bool Spliterators$LongArraySpliterator::tryAdvance($LongConsumer* action) {
	if (action == nullptr) {
		$throwNew($NullPointerException);
	}
	if (this->index >= 0 && this->index < this->fence) {
		$nc(action)->accept($nc(this->array)->get(this->index++));
		return true;
	}
	return false;
}

int64_t Spliterators$LongArraySpliterator::estimateSize() {
	return (int64_t)(this->fence - this->index);
}

int32_t Spliterators$LongArraySpliterator::characteristics() {
	return this->characteristics$;
}

$Comparator* Spliterators$LongArraySpliterator::getComparator() {
	if (hasCharacteristics($Spliterator::SORTED)) {
		return nullptr;
	}
	$throwNew($IllegalStateException);
}

void Spliterators$LongArraySpliterator::forEachRemaining(Object$* action) {
	this->forEachRemaining($cast($LongConsumer, action));
}

bool Spliterators$LongArraySpliterator::tryAdvance(Object$* action) {
	return this->tryAdvance($cast($LongConsumer, action));
}

Spliterators$LongArraySpliterator::Spliterators$LongArraySpliterator() {
}

$Class* Spliterators$LongArraySpliterator::load$($String* name, bool initialize) {
	$loadClass(Spliterators$LongArraySpliterator, name, initialize, &_Spliterators$LongArraySpliterator_ClassInfo_, allocate$Spliterators$LongArraySpliterator);
	return class$;
}

$Class* Spliterators$LongArraySpliterator::class$ = nullptr;

	} // util
} // java