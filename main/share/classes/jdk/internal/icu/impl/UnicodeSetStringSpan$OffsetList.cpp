#include <jdk/internal/icu/impl/UnicodeSetStringSpan$OffsetList.h>
#include <java/lang/AssertionError.h>
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
		this->list->set(i, 0);
	}
	this->start = (this->length = 0);
}

bool UnicodeSetStringSpan$OffsetList::isEmpty() {
	return (this->length == 0);
}

void UnicodeSetStringSpan$OffsetList::shift(int32_t delta) {
	int32_t i = this->start + delta;
	if (i >= $nc(this->list)->length) {
		i -= this->list->length;
	}
	if (this->list->get(i) != 0) {
		this->list->set(i, 0);
		--this->length;
	}
	this->start = i;
}

void UnicodeSetStringSpan$OffsetList::addOffset(int32_t offset) {
	int32_t i = this->start + offset;
	if (i >= $nc(this->list)->length) {
		i -= this->list->length;
	}
	if (!UnicodeSetStringSpan$OffsetList::$assertionsDisabled && !(this->list->get(i) == 0)) {
		$throwNew($AssertionError);
	}
	this->list->set(i, 1);
	++this->length;
}

void UnicodeSetStringSpan$OffsetList::addOffsetAndCount(int32_t offset, int32_t count) {
	if (!UnicodeSetStringSpan$OffsetList::$assertionsDisabled && !(count > 0)) {
		$throwNew($AssertionError);
	}
	int32_t i = this->start + offset;
	if (i >= $nc(this->list)->length) {
		i -= this->list->length;
	}
	if (this->list->get(i) == 0) {
		this->list->set(i, count);
		++this->length;
	} else if (count < this->list->get(i)) {
		this->list->set(i, count);
	}
}

bool UnicodeSetStringSpan$OffsetList::containsOffset(int32_t offset) {
	int32_t i = this->start + offset;
	if (i >= $nc(this->list)->length) {
		i -= this->list->length;
	}
	return this->list->get(i) != 0;
}

bool UnicodeSetStringSpan$OffsetList::hasCountAtOffset(int32_t offset, int32_t count) {
	int32_t i = this->start + offset;
	if (i >= $nc(this->list)->length) {
		i -= this->list->length;
	}
	int32_t oldCount = this->list->get(i);
	return oldCount != 0 && oldCount <= count;
}

int32_t UnicodeSetStringSpan$OffsetList::popMinimum($OutputInt* outCount) {
	int32_t i = this->start;
	int32_t result = 0;
	while (++i < $nc(this->list)->length) {
		int32_t count = this->list->get(i);
		if (count != 0) {
			this->list->set(i, 0);
			--this->length;
			result = i - this->start;
			this->start = i;
			if (outCount != nullptr) {
				outCount->value = count;
			}
			return result;
		}
	}
	result = this->list->length - this->start;
	i = 0;
	int32_t count = 0;
	while ((count = this->list->get(i)) == 0) {
		++i;
	}
	this->list->set(i, 0);
	--this->length;
	this->start = i;
	if (outCount != nullptr) {
		outCount->value = count;
	}
	return result + i;
}

void UnicodeSetStringSpan$OffsetList::clinit$($Class* clazz) {
	$load($UnicodeSetStringSpan);
	UnicodeSetStringSpan$OffsetList::$assertionsDisabled = !$UnicodeSetStringSpan::class$->desiredAssertionStatus();
}

UnicodeSetStringSpan$OffsetList::UnicodeSetStringSpan$OffsetList() {
}

$Class* UnicodeSetStringSpan$OffsetList::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(UnicodeSetStringSpan$OffsetList, $assertionsDisabled)},
		{"list", "[I", nullptr, $PRIVATE, $field(UnicodeSetStringSpan$OffsetList, list)},
		{"length", "I", nullptr, $PRIVATE, $field(UnicodeSetStringSpan$OffsetList, length)},
		{"start", "I", nullptr, $PRIVATE, $field(UnicodeSetStringSpan$OffsetList, start)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(UnicodeSetStringSpan$OffsetList, init$, void)},
		{"addOffset", "(I)V", nullptr, $PUBLIC, $method(UnicodeSetStringSpan$OffsetList, addOffset, void, int32_t)},
		{"addOffsetAndCount", "(II)V", nullptr, $PUBLIC, $method(UnicodeSetStringSpan$OffsetList, addOffsetAndCount, void, int32_t, int32_t)},
		{"clear", "()V", nullptr, $PUBLIC, $method(UnicodeSetStringSpan$OffsetList, clear, void)},
		{"containsOffset", "(I)Z", nullptr, $PUBLIC, $method(UnicodeSetStringSpan$OffsetList, containsOffset, bool, int32_t)},
		{"hasCountAtOffset", "(II)Z", nullptr, $PUBLIC, $method(UnicodeSetStringSpan$OffsetList, hasCountAtOffset, bool, int32_t, int32_t)},
		{"isEmpty", "()Z", nullptr, $PUBLIC, $method(UnicodeSetStringSpan$OffsetList, isEmpty, bool)},
		{"popMinimum", "(Ljdk/internal/icu/util/OutputInt;)I", nullptr, $PUBLIC, $method(UnicodeSetStringSpan$OffsetList, popMinimum, int32_t, $OutputInt*)},
		{"setMaxLength", "(I)V", nullptr, $PUBLIC, $method(UnicodeSetStringSpan$OffsetList, setMaxLength, void, int32_t)},
		{"shift", "(I)V", nullptr, $PUBLIC, $method(UnicodeSetStringSpan$OffsetList, shift, void, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.icu.impl.UnicodeSetStringSpan$OffsetList", "jdk.internal.icu.impl.UnicodeSetStringSpan", "OffsetList", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"jdk.internal.icu.impl.UnicodeSetStringSpan$OffsetList",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.icu.impl.UnicodeSetStringSpan"
	};
	$loadClass(UnicodeSetStringSpan$OffsetList, name, initialize, &classInfo$$, UnicodeSetStringSpan$OffsetList::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(UnicodeSetStringSpan$OffsetList);
	});
	return class$;
}

$Class* UnicodeSetStringSpan$OffsetList::class$ = nullptr;

			} // impl
		} // icu
	} // internal
} // jdk