#include <jdk/internal/icu/impl/UnicodeSetStringSpan$OffsetList.h>

#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jdk/internal/icu/impl/UnicodeSetStringSpan.h>
#include <jdk/internal/icu/util/OutputInt.h>
#include <jcpp.h>

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnicodeSetStringSpan = ::jdk::internal::icu::impl::UnicodeSetStringSpan;
using $OutputInt = ::jdk::internal::icu::util::OutputInt;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace impl {

$FieldInfo _UnicodeSetStringSpan$OffsetList_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(UnicodeSetStringSpan$OffsetList, $assertionsDisabled)},
	{"list", "[I", nullptr, $PRIVATE, $field(UnicodeSetStringSpan$OffsetList, list)},
	{"length", "I", nullptr, $PRIVATE, $field(UnicodeSetStringSpan$OffsetList, length)},
	{"start", "I", nullptr, $PRIVATE, $field(UnicodeSetStringSpan$OffsetList, start)},
	{}
};

$MethodInfo _UnicodeSetStringSpan$OffsetList_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(UnicodeSetStringSpan$OffsetList::*)()>(&UnicodeSetStringSpan$OffsetList::init$))},
	{"addOffset", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(UnicodeSetStringSpan$OffsetList::*)(int32_t)>(&UnicodeSetStringSpan$OffsetList::addOffset))},
	{"addOffsetAndCount", "(II)V", nullptr, $PUBLIC, $method(static_cast<void(UnicodeSetStringSpan$OffsetList::*)(int32_t,int32_t)>(&UnicodeSetStringSpan$OffsetList::addOffsetAndCount))},
	{"clear", "()V", nullptr, $PUBLIC, $method(static_cast<void(UnicodeSetStringSpan$OffsetList::*)()>(&UnicodeSetStringSpan$OffsetList::clear))},
	{"containsOffset", "(I)Z", nullptr, $PUBLIC, $method(static_cast<bool(UnicodeSetStringSpan$OffsetList::*)(int32_t)>(&UnicodeSetStringSpan$OffsetList::containsOffset))},
	{"hasCountAtOffset", "(II)Z", nullptr, $PUBLIC, $method(static_cast<bool(UnicodeSetStringSpan$OffsetList::*)(int32_t,int32_t)>(&UnicodeSetStringSpan$OffsetList::hasCountAtOffset))},
	{"isEmpty", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(UnicodeSetStringSpan$OffsetList::*)()>(&UnicodeSetStringSpan$OffsetList::isEmpty))},
	{"popMinimum", "(Ljdk/internal/icu/util/OutputInt;)I", nullptr, $PUBLIC, $method(static_cast<int32_t(UnicodeSetStringSpan$OffsetList::*)($OutputInt*)>(&UnicodeSetStringSpan$OffsetList::popMinimum))},
	{"setMaxLength", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(UnicodeSetStringSpan$OffsetList::*)(int32_t)>(&UnicodeSetStringSpan$OffsetList::setMaxLength))},
	{"shift", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(UnicodeSetStringSpan$OffsetList::*)(int32_t)>(&UnicodeSetStringSpan$OffsetList::shift))},
	{}
};

$InnerClassInfo _UnicodeSetStringSpan$OffsetList_InnerClassesInfo_[] = {
	{"jdk.internal.icu.impl.UnicodeSetStringSpan$OffsetList", "jdk.internal.icu.impl.UnicodeSetStringSpan", "OffsetList", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _UnicodeSetStringSpan$OffsetList_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"jdk.internal.icu.impl.UnicodeSetStringSpan$OffsetList",
	"java.lang.Object",
	nullptr,
	_UnicodeSetStringSpan$OffsetList_FieldInfo_,
	_UnicodeSetStringSpan$OffsetList_MethodInfo_,
	nullptr,
	nullptr,
	_UnicodeSetStringSpan$OffsetList_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.icu.impl.UnicodeSetStringSpan"
};

$Object* allocate$UnicodeSetStringSpan$OffsetList($Class* clazz) {
	return $of($alloc(UnicodeSetStringSpan$OffsetList));
}

bool UnicodeSetStringSpan$OffsetList::$assertionsDisabled = false;

void UnicodeSetStringSpan$OffsetList::init$() {
	$set(this, list, $new($ints, 16));
}

void UnicodeSetStringSpan$OffsetList::setMaxLength(int32_t maxLength) {
	if (maxLength > $nc(this->list)->length) {
		$set(this, list, $new($ints, maxLength));
	}
	clear();
}

void UnicodeSetStringSpan$OffsetList::clear() {
	for (int32_t i = $nc(this->list)->length; i-- > 0;) {
		$nc(this->list)->set(i, 0);
	}
	this->start = (this->length = 0);
}

bool UnicodeSetStringSpan$OffsetList::isEmpty() {
	return (this->length == 0);
}

void UnicodeSetStringSpan$OffsetList::shift(int32_t delta) {
	int32_t i = this->start + delta;
	if (i >= $nc(this->list)->length) {
		i -= $nc(this->list)->length;
	}
	if ($nc(this->list)->get(i) != 0) {
		$nc(this->list)->set(i, 0);
		--this->length;
	}
	this->start = i;
}

void UnicodeSetStringSpan$OffsetList::addOffset(int32_t offset) {
	int32_t i = this->start + offset;
	if (i >= $nc(this->list)->length) {
		i -= $nc(this->list)->length;
	}
	if (!UnicodeSetStringSpan$OffsetList::$assertionsDisabled && !($nc(this->list)->get(i) == 0)) {
		$throwNew($AssertionError);
	}
	$nc(this->list)->set(i, 1);
	++this->length;
}

void UnicodeSetStringSpan$OffsetList::addOffsetAndCount(int32_t offset, int32_t count) {
	if (!UnicodeSetStringSpan$OffsetList::$assertionsDisabled && !(count > 0)) {
		$throwNew($AssertionError);
	}
	int32_t i = this->start + offset;
	if (i >= $nc(this->list)->length) {
		i -= $nc(this->list)->length;
	}
	if ($nc(this->list)->get(i) == 0) {
		$nc(this->list)->set(i, count);
		++this->length;
	} else if (count < $nc(this->list)->get(i)) {
		$nc(this->list)->set(i, count);
	}
}

bool UnicodeSetStringSpan$OffsetList::containsOffset(int32_t offset) {
	int32_t i = this->start + offset;
	if (i >= $nc(this->list)->length) {
		i -= $nc(this->list)->length;
	}
	return $nc(this->list)->get(i) != 0;
}

bool UnicodeSetStringSpan$OffsetList::hasCountAtOffset(int32_t offset, int32_t count) {
	int32_t i = this->start + offset;
	if (i >= $nc(this->list)->length) {
		i -= $nc(this->list)->length;
	}
	int32_t oldCount = $nc(this->list)->get(i);
	return oldCount != 0 && oldCount <= count;
}

int32_t UnicodeSetStringSpan$OffsetList::popMinimum($OutputInt* outCount) {
	int32_t i = this->start;
	int32_t result = 0;
	while (++i < $nc(this->list)->length) {
		int32_t count = $nc(this->list)->get(i);
		if (count != 0) {
			$nc(this->list)->set(i, 0);
			--this->length;
			result = i - this->start;
			this->start = i;
			if (outCount != nullptr) {
				outCount->value = count;
			}
			return result;
		}
	}
	result = $nc(this->list)->length - this->start;
	i = 0;
	int32_t count = 0;
	while ((count = $nc(this->list)->get(i)) == 0) {
		++i;
	}
	$nc(this->list)->set(i, 0);
	--this->length;
	this->start = i;
	if (outCount != nullptr) {
		outCount->value = count;
	}
	return result + i;
}

void clinit$UnicodeSetStringSpan$OffsetList($Class* class$) {
	$load($UnicodeSetStringSpan);
	UnicodeSetStringSpan$OffsetList::$assertionsDisabled = !$UnicodeSetStringSpan::class$->desiredAssertionStatus();
}

UnicodeSetStringSpan$OffsetList::UnicodeSetStringSpan$OffsetList() {
}

$Class* UnicodeSetStringSpan$OffsetList::load$($String* name, bool initialize) {
	$loadClass(UnicodeSetStringSpan$OffsetList, name, initialize, &_UnicodeSetStringSpan$OffsetList_ClassInfo_, clinit$UnicodeSetStringSpan$OffsetList, allocate$UnicodeSetStringSpan$OffsetList);
	return class$;
}

$Class* UnicodeSetStringSpan$OffsetList::class$ = nullptr;

			} // impl
		} // icu
	} // internal
} // jdk