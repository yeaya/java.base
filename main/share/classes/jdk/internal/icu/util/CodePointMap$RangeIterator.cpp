#include <jdk/internal/icu/util/CodePointMap$RangeIterator.h>

#include <java/lang/UnsupportedOperationException.h>
#include <java/util/NoSuchElementException.h>
#include <jdk/internal/icu/util/CodePointMap$Range.h>
#include <jdk/internal/icu/util/CodePointMap$ValueFilter.h>
#include <jdk/internal/icu/util/CodePointMap.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $CodePointMap = ::jdk::internal::icu::util::CodePointMap;
using $CodePointMap$Range = ::jdk::internal::icu::util::CodePointMap$Range;
using $CodePointMap$ValueFilter = ::jdk::internal::icu::util::CodePointMap$ValueFilter;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace util {

$FieldInfo _CodePointMap$RangeIterator_FieldInfo_[] = {
	{"this$0", "Ljdk/internal/icu/util/CodePointMap;", nullptr, $FINAL | $SYNTHETIC, $field(CodePointMap$RangeIterator, this$0)},
	{"range", "Ljdk/internal/icu/util/CodePointMap$Range;", nullptr, $PRIVATE, $field(CodePointMap$RangeIterator, range)},
	{}
};

$MethodInfo _CodePointMap$RangeIterator_MethodInfo_[] = {
	{"<init>", "(Ljdk/internal/icu/util/CodePointMap;)V", nullptr, $PRIVATE, $method(static_cast<void(CodePointMap$RangeIterator::*)($CodePointMap*)>(&CodePointMap$RangeIterator::init$))},
	{"hasNext", "()Z", nullptr, $PUBLIC},
	{"next", "()Ljdk/internal/icu/util/CodePointMap$Range;", nullptr, $PUBLIC},
	{"remove", "()V", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _CodePointMap$RangeIterator_InnerClassesInfo_[] = {
	{"jdk.internal.icu.util.CodePointMap$RangeIterator", "jdk.internal.icu.util.CodePointMap", "RangeIterator", $PRIVATE | $FINAL},
	{"jdk.internal.icu.util.CodePointMap$Range", "jdk.internal.icu.util.CodePointMap", "Range", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _CodePointMap$RangeIterator_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"jdk.internal.icu.util.CodePointMap$RangeIterator",
	"java.lang.Object",
	"java.util.Iterator",
	_CodePointMap$RangeIterator_FieldInfo_,
	_CodePointMap$RangeIterator_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Iterator<Ljdk/internal/icu/util/CodePointMap$Range;>;",
	nullptr,
	_CodePointMap$RangeIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.icu.util.CodePointMap"
};

$Object* allocate$CodePointMap$RangeIterator($Class* clazz) {
	return $of($alloc(CodePointMap$RangeIterator));
}

void CodePointMap$RangeIterator::init$($CodePointMap* this$0) {
	$set(this, this$0, this$0);
	$set(this, range, $new($CodePointMap$Range));
}

bool CodePointMap$RangeIterator::hasNext() {
	return -1 <= $nc(this->range)->end && $nc(this->range)->end < 0x0010FFFF;
}

$Object* CodePointMap$RangeIterator::next() {
	if (this->this$0->getRange($nc(this->range)->end + 1, nullptr, this->range)) {
		return $of(this->range);
	} else {
		$throwNew($NoSuchElementException);
	}
}

void CodePointMap$RangeIterator::remove() {
	$throwNew($UnsupportedOperationException);
}

CodePointMap$RangeIterator::CodePointMap$RangeIterator() {
}

$Class* CodePointMap$RangeIterator::load$($String* name, bool initialize) {
	$loadClass(CodePointMap$RangeIterator, name, initialize, &_CodePointMap$RangeIterator_ClassInfo_, allocate$CodePointMap$RangeIterator);
	return class$;
}

$Class* CodePointMap$RangeIterator::class$ = nullptr;

			} // util
		} // icu
	} // internal
} // jdk