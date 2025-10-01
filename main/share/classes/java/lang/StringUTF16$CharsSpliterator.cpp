#include <java/lang/StringUTF16$CharsSpliterator.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/StringUTF16.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Spliterator$OfInt.h>
#include <java/util/Spliterator.h>
#include <java/util/function/IntConsumer.h>
#include <jcpp.h>

#undef SUBSIZED
#undef ORDERED
#undef SIZED

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

$FieldInfo _StringUTF16$CharsSpliterator_FieldInfo_[] = {
	{"array", "[B", nullptr, $PRIVATE | $FINAL, $field(StringUTF16$CharsSpliterator, array)},
	{"index", "I", nullptr, $PRIVATE, $field(StringUTF16$CharsSpliterator, index)},
	{"fence", "I", nullptr, $PRIVATE | $FINAL, $field(StringUTF16$CharsSpliterator, fence)},
	{"cs", "I", nullptr, $PRIVATE | $FINAL, $field(StringUTF16$CharsSpliterator, cs)},
	{}
};

$MethodInfo _StringUTF16$CharsSpliterator_MethodInfo_[] = {
	{"<init>", "([BI)V", nullptr, 0, $method(static_cast<void(StringUTF16$CharsSpliterator::*)($bytes*,int32_t)>(&StringUTF16$CharsSpliterator::init$))},
	{"<init>", "([BIII)V", nullptr, 0, $method(static_cast<void(StringUTF16$CharsSpliterator::*)($bytes*,int32_t,int32_t,int32_t)>(&StringUTF16$CharsSpliterator::init$))},
	{"characteristics", "()I", nullptr, $PUBLIC},
	{"estimateSize", "()J", nullptr, $PUBLIC},
	{"forEachRemaining", "(Ljava/util/function/IntConsumer;)V", nullptr, $PUBLIC},
	{"forEachRemaining", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"tryAdvance", "(Ljava/util/function/IntConsumer;)Z", nullptr, $PUBLIC},
	{"tryAdvance", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"trySplit", "()Ljava/util/Spliterator$OfInt;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _StringUTF16$CharsSpliterator_InnerClassesInfo_[] = {
	{"java.lang.StringUTF16$CharsSpliterator", "java.lang.StringUTF16", "CharsSpliterator", $STATIC},
	{"java.util.Spliterator$OfInt", "java.util.Spliterator", "OfInt", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _StringUTF16$CharsSpliterator_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.StringUTF16$CharsSpliterator",
	"java.lang.Object",
	"java.util.Spliterator$OfInt",
	_StringUTF16$CharsSpliterator_FieldInfo_,
	_StringUTF16$CharsSpliterator_MethodInfo_,
	nullptr,
	nullptr,
	_StringUTF16$CharsSpliterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.StringUTF16"
};

$Object* allocate$StringUTF16$CharsSpliterator($Class* clazz) {
	return $of($alloc(StringUTF16$CharsSpliterator));
}

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
	return (lo >= mid) ? ($Spliterator$OfInt*)nullptr : static_cast<$Spliterator$OfInt*>($new(StringUTF16$CharsSpliterator, this->array, lo, this->index = mid, this->cs));
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
	$loadClass(StringUTF16$CharsSpliterator, name, initialize, &_StringUTF16$CharsSpliterator_ClassInfo_, allocate$StringUTF16$CharsSpliterator);
	return class$;
}

$Class* StringUTF16$CharsSpliterator::class$ = nullptr;

	} // lang
} // java