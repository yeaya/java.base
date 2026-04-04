#include <java/lang/StringUTF16$CharsSpliterator.h>
#include <java/lang/StringUTF16.h>
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
using $StringUTF16 = ::java::lang::StringUTF16;
using $Spliterator = ::java::util::Spliterator;
using $Spliterator$OfInt = ::java::util::Spliterator$OfInt;
using $IntConsumer = ::java::util::function::IntConsumer;

namespace java {
	namespace lang {

void StringUTF16$CharsSpliterator::init$($bytes* array, int32_t acs) {
	StringUTF16$CharsSpliterator::init$(array, 0, $nc(array)->length >> 1, acs);
}

void StringUTF16$CharsSpliterator::init$($bytes* array, int32_t origin, int32_t fence, int32_t acs) {
	$set(this, array, array);
	this->index = origin;
	this->fence = fence;
	this->cs = ((acs | $Spliterator::ORDERED) | $Spliterator::SIZED) | $Spliterator::SUBSIZED;
}

$Spliterator$OfInt* StringUTF16$CharsSpliterator::trySplit() {
	int32_t lo = this->index;
	int32_t mid = (int32_t)((uint32_t)(lo + this->fence) >> 1);
	return (lo >= mid) ? ($Spliterator$OfInt*)nullptr : $cast($Spliterator$OfInt, $new(StringUTF16$CharsSpliterator, this->array, lo, this->index = mid, this->cs));
}

void StringUTF16$CharsSpliterator::forEachRemaining($IntConsumer* action) {
	$var($bytes, a, nullptr);
	int32_t i = 0;
	int32_t hi = 0;
	if (action == nullptr) {
		$throwNew($NullPointerException);
	}
	bool var$0 = ($nc(($assign(a, this->array)))->length >> 1) >= (hi = this->fence) && (i = this->index) >= 0;
	if (var$0 && i < (this->index = hi)) {
		do {
			$nc(action)->accept($StringUTF16::charAt(a, i));
		} while (++i < hi);
	}
}

bool StringUTF16$CharsSpliterator::tryAdvance($IntConsumer* action) {
	if (action == nullptr) {
		$throwNew($NullPointerException);
	}
	int32_t i = this->index;
	if (i >= 0 && i < this->fence) {
		$nc(action)->accept($StringUTF16::charAt(this->array, i));
		++this->index;
		return true;
	}
	return false;
}

int64_t StringUTF16$CharsSpliterator::estimateSize() {
	return (int64_t)(this->fence - this->index);
}

int32_t StringUTF16$CharsSpliterator::characteristics() {
	return this->cs;
}

void StringUTF16$CharsSpliterator::forEachRemaining(Object$* action) {
	this->forEachRemaining($cast($IntConsumer, action));
}

bool StringUTF16$CharsSpliterator::tryAdvance(Object$* action) {
	return this->tryAdvance($cast($IntConsumer, action));
}

StringUTF16$CharsSpliterator::StringUTF16$CharsSpliterator() {
}

$Class* StringUTF16$CharsSpliterator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"array", "[B", nullptr, $PRIVATE | $FINAL, $field(StringUTF16$CharsSpliterator, array)},
		{"index", "I", nullptr, $PRIVATE, $field(StringUTF16$CharsSpliterator, index)},
		{"fence", "I", nullptr, $PRIVATE | $FINAL, $field(StringUTF16$CharsSpliterator, fence)},
		{"cs", "I", nullptr, $PRIVATE | $FINAL, $field(StringUTF16$CharsSpliterator, cs)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([BI)V", nullptr, 0, $method(StringUTF16$CharsSpliterator, init$, void, $bytes*, int32_t)},
		{"<init>", "([BIII)V", nullptr, 0, $method(StringUTF16$CharsSpliterator, init$, void, $bytes*, int32_t, int32_t, int32_t)},
		{"characteristics", "()I", nullptr, $PUBLIC, $virtualMethod(StringUTF16$CharsSpliterator, characteristics, int32_t)},
		{"estimateSize", "()J", nullptr, $PUBLIC, $virtualMethod(StringUTF16$CharsSpliterator, estimateSize, int64_t)},
		{"forEachRemaining", "(Ljava/util/function/IntConsumer;)V", nullptr, $PUBLIC, $virtualMethod(StringUTF16$CharsSpliterator, forEachRemaining, void, $IntConsumer*)},
		{"forEachRemaining", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(StringUTF16$CharsSpliterator, forEachRemaining, void, Object$*)},
		{"tryAdvance", "(Ljava/util/function/IntConsumer;)Z", nullptr, $PUBLIC, $virtualMethod(StringUTF16$CharsSpliterator, tryAdvance, bool, $IntConsumer*)},
		{"tryAdvance", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(StringUTF16$CharsSpliterator, tryAdvance, bool, Object$*)},
		{"trySplit", "()Ljava/util/Spliterator$OfInt;", nullptr, $PUBLIC, $virtualMethod(StringUTF16$CharsSpliterator, trySplit, $Spliterator$OfInt*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.StringUTF16$CharsSpliterator", "java.lang.StringUTF16", "CharsSpliterator", $STATIC},
		{"java.util.Spliterator$OfInt", "java.util.Spliterator", "OfInt", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.StringUTF16$CharsSpliterator",
		"java.lang.Object",
		"java.util.Spliterator$OfInt",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.StringUTF16"
	};
	$loadClass(StringUTF16$CharsSpliterator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StringUTF16$CharsSpliterator);
	});
	return class$;
}

$Class* StringUTF16$CharsSpliterator::class$ = nullptr;

	} // lang
} // java