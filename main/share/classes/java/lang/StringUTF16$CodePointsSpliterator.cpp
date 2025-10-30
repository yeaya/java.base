#include <java/lang/StringUTF16$CodePointsSpliterator.h>

#include <java/lang/StringUTF16.h>
#include <java/util/Spliterator$OfInt.h>
#include <java/util/Spliterator.h>
#include <java/util/function/IntConsumer.h>
#include <jcpp.h>

#undef ORDERED

using $Character = ::java::lang::Character;
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

$FieldInfo _StringUTF16$CodePointsSpliterator_FieldInfo_[] = {
	{"array", "[B", nullptr, $PRIVATE | $FINAL, $field(StringUTF16$CodePointsSpliterator, array)},
	{"index", "I", nullptr, $PRIVATE, $field(StringUTF16$CodePointsSpliterator, index)},
	{"fence", "I", nullptr, $PRIVATE | $FINAL, $field(StringUTF16$CodePointsSpliterator, fence)},
	{"cs", "I", nullptr, $PRIVATE | $FINAL, $field(StringUTF16$CodePointsSpliterator, cs)},
	{}
};

$MethodInfo _StringUTF16$CodePointsSpliterator_MethodInfo_[] = {
	{"<init>", "([BI)V", nullptr, 0, $method(static_cast<void(StringUTF16$CodePointsSpliterator::*)($bytes*,int32_t)>(&StringUTF16$CodePointsSpliterator::init$))},
	{"<init>", "([BIII)V", nullptr, 0, $method(static_cast<void(StringUTF16$CodePointsSpliterator::*)($bytes*,int32_t,int32_t,int32_t)>(&StringUTF16$CodePointsSpliterator::init$))},
	{"advance", "([BIILjava/util/function/IntConsumer;)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($bytes*,int32_t,int32_t,$IntConsumer*)>(&StringUTF16$CodePointsSpliterator::advance))},
	{"characteristics", "()I", nullptr, $PUBLIC},
	{"estimateSize", "()J", nullptr, $PUBLIC},
	{"forEachRemaining", "(Ljava/util/function/IntConsumer;)V", nullptr, $PUBLIC},
	{"forEachRemaining", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"tryAdvance", "(Ljava/util/function/IntConsumer;)Z", nullptr, $PUBLIC},
	{"tryAdvance", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"trySplit", "()Ljava/util/Spliterator$OfInt;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _StringUTF16$CodePointsSpliterator_InnerClassesInfo_[] = {
	{"java.lang.StringUTF16$CodePointsSpliterator", "java.lang.StringUTF16", "CodePointsSpliterator", $STATIC},
	{"java.util.Spliterator$OfInt", "java.util.Spliterator", "OfInt", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _StringUTF16$CodePointsSpliterator_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.StringUTF16$CodePointsSpliterator",
	"java.lang.Object",
	"java.util.Spliterator$OfInt",
	_StringUTF16$CodePointsSpliterator_FieldInfo_,
	_StringUTF16$CodePointsSpliterator_MethodInfo_,
	nullptr,
	nullptr,
	_StringUTF16$CodePointsSpliterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.StringUTF16"
};

$Object* allocate$StringUTF16$CodePointsSpliterator($Class* clazz) {
	return $of($alloc(StringUTF16$CodePointsSpliterator));
}

void StringUTF16$CodePointsSpliterator::init$($bytes* array, int32_t acs) {
	StringUTF16$CodePointsSpliterator::init$(array, 0, $nc(array)->length >> 1, acs);
}

void StringUTF16$CodePointsSpliterator::init$($bytes* array, int32_t origin, int32_t fence, int32_t acs) {
	$set(this, array, array);
	this->index = origin;
	this->fence = fence;
	this->cs = acs | $Spliterator::ORDERED;
}

$Spliterator$OfInt* StringUTF16$CodePointsSpliterator::trySplit() {
	int32_t lo = this->index;
	int32_t mid = (int32_t)((uint32_t)(lo + this->fence) >> 1);
	if (lo >= mid) {
		return nullptr;
	}
	int32_t midOneLess = 0;
	bool var$0 = $Character::isLowSurrogate($StringUTF16::charAt(this->array, mid));
	if (var$0 && $Character::isHighSurrogate($StringUTF16::charAt(this->array, midOneLess = (mid - 1)))) {
		if (lo >= midOneLess) {
			return nullptr;
		}
		return $new(StringUTF16$CodePointsSpliterator, this->array, lo, this->index = midOneLess, this->cs);
	}
	return $new(StringUTF16$CodePointsSpliterator, this->array, lo, this->index = mid, this->cs);
}

void StringUTF16$CodePointsSpliterator::forEachRemaining($IntConsumer* action) {
	$var($bytes, a, nullptr);
	int32_t i = 0;
	int32_t hi = 0;
	if (action == nullptr) {
		$throwNew($NullPointerException);
	}
	bool var$0 = ($nc(($assign(a, this->array)))->length >> 1) >= (hi = this->fence) && (i = this->index) >= 0;
	if (var$0 && i < (this->index = hi)) {
		do {
			i = advance(a, i, hi, action);
		} while (i < hi);
	}
}

bool StringUTF16$CodePointsSpliterator::tryAdvance($IntConsumer* action) {
	if (action == nullptr) {
		$throwNew($NullPointerException);
	}
	if (this->index >= 0 && this->index < this->fence) {
		this->index = advance(this->array, this->index, this->fence, action);
		return true;
	}
	return false;
}

int32_t StringUTF16$CodePointsSpliterator::advance($bytes* a, int32_t i, int32_t hi, $IntConsumer* action) {
	$init(StringUTF16$CodePointsSpliterator);
	char16_t c1 = $StringUTF16::charAt(a, i++);
	int32_t cp = c1;
	if ($Character::isHighSurrogate(c1) && i < hi) {
		char16_t c2 = $StringUTF16::charAt(a, i);
		if ($Character::isLowSurrogate(c2)) {
			++i;
			cp = $Character::toCodePoint(c1, c2);
		}
	}
	$nc(action)->accept(cp);
	return i;
}

int64_t StringUTF16$CodePointsSpliterator::estimateSize() {
	return (int64_t)(this->fence - this->index);
}

int32_t StringUTF16$CodePointsSpliterator::characteristics() {
	return this->cs;
}

void StringUTF16$CodePointsSpliterator::forEachRemaining(Object$* action) {
	this->forEachRemaining($cast($IntConsumer, action));
}

bool StringUTF16$CodePointsSpliterator::tryAdvance(Object$* action) {
	return this->tryAdvance($cast($IntConsumer, action));
}

StringUTF16$CodePointsSpliterator::StringUTF16$CodePointsSpliterator() {
}

$Class* StringUTF16$CodePointsSpliterator::load$($String* name, bool initialize) {
	$loadClass(StringUTF16$CodePointsSpliterator, name, initialize, &_StringUTF16$CodePointsSpliterator_ClassInfo_, allocate$StringUTF16$CodePointsSpliterator);
	return class$;
}

$Class* StringUTF16$CodePointsSpliterator::class$ = nullptr;

	} // lang
} // java