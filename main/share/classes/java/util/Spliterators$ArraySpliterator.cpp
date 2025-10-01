#include <java/util/Spliterators$ArraySpliterator.h>

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
#include <java/util/Spliterator.h>
#include <java/util/Spliterators.h>
#include <java/util/function/Consumer.h>
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
using $Spliterators = ::java::util::Spliterators;
using $Consumer = ::java::util::function::Consumer;

namespace java {
	namespace util {

$FieldInfo _Spliterators$ArraySpliterator_FieldInfo_[] = {
	{"array", "[Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(Spliterators$ArraySpliterator, array)},
	{"index", "I", nullptr, $PRIVATE, $field(Spliterators$ArraySpliterator, index)},
	{"fence", "I", nullptr, $PRIVATE | $FINAL, $field(Spliterators$ArraySpliterator, fence)},
	{"characteristics", "I", nullptr, $PRIVATE | $FINAL, $field(Spliterators$ArraySpliterator, characteristics$)},
	{}
};

$MethodInfo _Spliterators$ArraySpliterator_MethodInfo_[] = {
	{"<init>", "([Ljava/lang/Object;I)V", nullptr, $PUBLIC, $method(static_cast<void(Spliterators$ArraySpliterator::*)($ObjectArray*,int32_t)>(&Spliterators$ArraySpliterator::init$))},
	{"<init>", "([Ljava/lang/Object;III)V", nullptr, $PUBLIC, $method(static_cast<void(Spliterators$ArraySpliterator::*)($ObjectArray*,int32_t,int32_t,int32_t)>(&Spliterators$ArraySpliterator::init$))},
	{"characteristics", "()I", nullptr, $PUBLIC},
	{"estimateSize", "()J", nullptr, $PUBLIC},
	{"forEachRemaining", "(Ljava/util/function/Consumer;)V", "(Ljava/util/function/Consumer<-TT;>;)V", $PUBLIC},
	{"getComparator", "()Ljava/util/Comparator;", "()Ljava/util/Comparator<-TT;>;", $PUBLIC},
	{"tryAdvance", "(Ljava/util/function/Consumer;)Z", "(Ljava/util/function/Consumer<-TT;>;)Z", $PUBLIC},
	{"trySplit", "()Ljava/util/Spliterator;", "()Ljava/util/Spliterator<TT;>;", $PUBLIC},
	{}
};

$InnerClassInfo _Spliterators$ArraySpliterator_InnerClassesInfo_[] = {
	{"java.util.Spliterators$ArraySpliterator", "java.util.Spliterators", "ArraySpliterator", $STATIC | $FINAL},
	{}
};

$ClassInfo _Spliterators$ArraySpliterator_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.Spliterators$ArraySpliterator",
	"java.lang.Object",
	"java.util.Spliterator",
	_Spliterators$ArraySpliterator_FieldInfo_,
	_Spliterators$ArraySpliterator_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;Ljava/util/Spliterator<TT;>;",
	nullptr,
	_Spliterators$ArraySpliterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.Spliterators"
};

$Object* allocate$Spliterators$ArraySpliterator($Class* clazz) {
	return $of($alloc(Spliterators$ArraySpliterator));
}

void Spliterators$ArraySpliterator::init$($ObjectArray* array, int32_t additionalCharacteristics) {
	Spliterators$ArraySpliterator::init$(array, 0, $nc(array)->length, additionalCharacteristics);
}

void Spliterators$ArraySpliterator::init$($ObjectArray* array, int32_t origin, int32_t fence, int32_t additionalCharacteristics) {
	$set(this, array, array);
	this->index = origin;
	this->fence = fence;
	this->characteristics$ = (additionalCharacteristics | $Spliterator::SIZED) | $Spliterator::SUBSIZED;
}

$Spliterator* Spliterators$ArraySpliterator::trySplit() {
	int32_t lo = this->index;
	int32_t mid = (int32_t)((uint32_t)(lo + this->fence) >> 1);
	return (lo >= mid) ? ($Spliterator*)nullptr : static_cast<$Spliterator*>($new(Spliterators$ArraySpliterator, this->array, lo, this->index = mid, this->characteristics$));
}

void Spliterators$ArraySpliterator::forEachRemaining($Consumer* action) {
	$var($ObjectArray, a, nullptr);
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

bool Spliterators$ArraySpliterator::tryAdvance($Consumer* action) {
	if (action == nullptr) {
		$throwNew($NullPointerException);
	}
	if (this->index >= 0 && this->index < this->fence) {
		$var($Object, e, $nc(this->array)->get(this->index++));
		$nc(action)->accept(e);
		return true;
	}
	return false;
}

int64_t Spliterators$ArraySpliterator::estimateSize() {
	return (int64_t)(this->fence - this->index);
}

int32_t Spliterators$ArraySpliterator::characteristics() {
	return this->characteristics$;
}

$Comparator* Spliterators$ArraySpliterator::getComparator() {
	if (hasCharacteristics($Spliterator::SORTED)) {
		return nullptr;
	}
	$throwNew($IllegalStateException);
}

Spliterators$ArraySpliterator::Spliterators$ArraySpliterator() {
}

$Class* Spliterators$ArraySpliterator::load$($String* name, bool initialize) {
	$loadClass(Spliterators$ArraySpliterator, name, initialize, &_Spliterators$ArraySpliterator_ClassInfo_, allocate$Spliterators$ArraySpliterator);
	return class$;
}

$Class* Spliterators$ArraySpliterator::class$ = nullptr;

	} // util
} // java