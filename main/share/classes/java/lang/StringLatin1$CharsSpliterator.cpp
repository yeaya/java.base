#include <java/lang/StringLatin1$CharsSpliterator.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/StringLatin1.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Spliterator$OfInt.h>
#include <java/util/Spliterator.h>
#include <java/util/function/IntConsumer.h>
#include <jcpp.h>

#undef ORDERED
#undef SIZED
#undef SUBSIZED

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $StringLatin1 = ::java::lang::StringLatin1;
using $Spliterator = ::java::util::Spliterator;
using $Spliterator$OfInt = ::java::util::Spliterator$OfInt;
using $IntConsumer = ::java::util::function::IntConsumer;

namespace java {
	namespace lang {

$FieldInfo _StringLatin1$CharsSpliterator_FieldInfo_[] = {
	{"array", "[B", nullptr, $PRIVATE | $FINAL, $field(StringLatin1$CharsSpliterator, array)},
	{"index", "I", nullptr, $PRIVATE, $field(StringLatin1$CharsSpliterator, index)},
	{"fence", "I", nullptr, $PRIVATE | $FINAL, $field(StringLatin1$CharsSpliterator, fence)},
	{"cs", "I", nullptr, $PRIVATE | $FINAL, $field(StringLatin1$CharsSpliterator, cs)},
	{}
};

$MethodInfo _StringLatin1$CharsSpliterator_MethodInfo_[] = {
	{"<init>", "([BI)V", nullptr, 0, $method(static_cast<void(StringLatin1$CharsSpliterator::*)($bytes*,int32_t)>(&StringLatin1$CharsSpliterator::init$))},
	{"<init>", "([BIII)V", nullptr, 0, $method(static_cast<void(StringLatin1$CharsSpliterator::*)($bytes*,int32_t,int32_t,int32_t)>(&StringLatin1$CharsSpliterator::init$))},
	{"characteristics", "()I", nullptr, $PUBLIC},
	{"estimateSize", "()J", nullptr, $PUBLIC},
	{"forEachRemaining", "(Ljava/util/function/IntConsumer;)V", nullptr, $PUBLIC},
	{"forEachRemaining", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"tryAdvance", "(Ljava/util/function/IntConsumer;)Z", nullptr, $PUBLIC},
	{"tryAdvance", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"trySplit", "()Ljava/util/Spliterator$OfInt;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _StringLatin1$CharsSpliterator_InnerClassesInfo_[] = {
	{"java.lang.StringLatin1$CharsSpliterator", "java.lang.StringLatin1", "CharsSpliterator", $STATIC},
	{"java.util.Spliterator$OfInt", "java.util.Spliterator", "OfInt", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _StringLatin1$CharsSpliterator_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.StringLatin1$CharsSpliterator",
	"java.lang.Object",
	"java.util.Spliterator$OfInt",
	_StringLatin1$CharsSpliterator_FieldInfo_,
	_StringLatin1$CharsSpliterator_MethodInfo_,
	nullptr,
	nullptr,
	_StringLatin1$CharsSpliterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.StringLatin1"
};

$Object* allocate$StringLatin1$CharsSpliterator($Class* clazz) {
	return $of($alloc(StringLatin1$CharsSpliterator));
}

void StringLatin1$CharsSpliterator::init$($bytes* array, int32_t acs) {
	StringLatin1$CharsSpliterator::init$(array, 0, $nc(array)->length, acs);
}

void StringLatin1$CharsSpliterator::init$($bytes* array, int32_t origin, int32_t fence, int32_t acs) {
	$set(this, array, array);
	this->index = origin;
	this->fence = fence;
	this->cs = ((acs | $Spliterator::ORDERED) | $Spliterator::SIZED) | $Spliterator::SUBSIZED;
}

$Spliterator$OfInt* StringLatin1$CharsSpliterator::trySplit() {
	int32_t lo = this->index;
	int32_t mid = (int32_t)((uint32_t)(lo + this->fence) >> 1);
	return (lo >= mid) ? ($Spliterator$OfInt*)nullptr : static_cast<$Spliterator$OfInt*>($new(StringLatin1$CharsSpliterator, this->array, lo, this->index = mid, this->cs));
}

void StringLatin1$CharsSpliterator::forEachRemaining($IntConsumer* action) {
	$var($bytes, a, nullptr);
	int32_t i = 0;
	int32_t hi = 0;
	if (action == nullptr) {
		$throwNew($NullPointerException);
	}
	bool var$0 = $nc(($assign(a, this->array)))->length >= (hi = this->fence) && (i = this->index) >= 0;
	if (var$0 && i < (this->index = hi)) {
		do {
			$nc(action)->accept((int32_t)($nc(a)->get(i) & (uint32_t)255));
		} while (++i < hi);
	}
}

bool StringLatin1$CharsSpliterator::tryAdvance($IntConsumer* action) {
	if (action == nullptr) {
		$throwNew($NullPointerException);
	}
	if (this->index >= 0 && this->index < this->fence) {
		$nc(action)->accept((int32_t)($nc(this->array)->get(this->index++) & (uint32_t)255));
		return true;
	}
	return false;
}

int64_t StringLatin1$CharsSpliterator::estimateSize() {
	return (int64_t)(this->fence - this->index);
}

int32_t StringLatin1$CharsSpliterator::characteristics() {
	return this->cs;
}

void StringLatin1$CharsSpliterator::forEachRemaining(Object$* action) {
	this->forEachRemaining($cast($IntConsumer, action));
}

bool StringLatin1$CharsSpliterator::tryAdvance(Object$* action) {
	return this->tryAdvance($cast($IntConsumer, action));
}

StringLatin1$CharsSpliterator::StringLatin1$CharsSpliterator() {
}

$Class* StringLatin1$CharsSpliterator::load$($String* name, bool initialize) {
	$loadClass(StringLatin1$CharsSpliterator, name, initialize, &_StringLatin1$CharsSpliterator_ClassInfo_, allocate$StringLatin1$CharsSpliterator);
	return class$;
}

$Class* StringLatin1$CharsSpliterator::class$ = nullptr;

	} // lang
} // java