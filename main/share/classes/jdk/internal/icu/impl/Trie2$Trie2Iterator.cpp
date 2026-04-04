#include <jdk/internal/icu/impl/Trie2$Trie2Iterator.h>
#include <java/util/NoSuchElementException.h>
#include <jdk/internal/icu/impl/Trie2$Range.h>
#include <jdk/internal/icu/impl/Trie2$ValueMapper.h>
#include <jdk/internal/icu/impl/Trie2.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $Trie2 = ::jdk::internal::icu::impl::Trie2;
using $Trie2$Range = ::jdk::internal::icu::impl::Trie2$Range;
using $Trie2$ValueMapper = ::jdk::internal::icu::impl::Trie2$ValueMapper;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace impl {

void Trie2$Trie2Iterator::init$($Trie2* this$0, $Trie2$ValueMapper* vm) {
	$set(this, this$0, this$0);
	$set(this, returnValue, $new($Trie2$Range));
	this->doingCodePoints = true;
	this->doLeadSurrogates = true;
	$set(this, mapper, vm);
	this->nextStart = 0;
	this->limitCP = 0x00110000;
	this->doLeadSurrogates = true;
}

$Object* Trie2$Trie2Iterator::next() {
	if (!hasNext()) {
		$throwNew($NoSuchElementException);
	}
	if (this->nextStart >= this->limitCP) {
		this->doingCodePoints = false;
		this->nextStart = 0x0000d800;
	}
	int32_t endOfRange = 0;
	int32_t val = 0;
	int32_t mappedVal = 0;
	if (this->doingCodePoints) {
		val = this->this$0->get(this->nextStart);
		mappedVal = $nc(this->mapper)->map(val);
		endOfRange = this->this$0->rangeEnd(this->nextStart, this->limitCP, val);
		for (;;) {
			if (endOfRange >= this->limitCP - 1) {
				break;
			}
			val = this->this$0->get(endOfRange + 1);
			if (this->mapper->map(val) != mappedVal) {
				break;
			}
			endOfRange = this->this$0->rangeEnd(endOfRange + 1, this->limitCP, val);
		}
	} else {
		val = this->this$0->getFromU16SingleLead((char16_t)this->nextStart);
		mappedVal = $nc(this->mapper)->map(val);
		endOfRange = rangeEndLS((char16_t)this->nextStart);
		for (;;) {
			if (endOfRange >= 0x0000dbff) {
				break;
			}
			val = this->this$0->getFromU16SingleLead((char16_t)(endOfRange + 1));
			if (this->mapper->map(val) != mappedVal) {
				break;
			}
			endOfRange = rangeEndLS((char16_t)(endOfRange + 1));
		}
	}
	$nc(this->returnValue)->startCodePoint = this->nextStart;
	this->returnValue->endCodePoint = endOfRange;
	this->returnValue->value = mappedVal;
	this->returnValue->leadSurrogate = !this->doingCodePoints;
	this->nextStart = endOfRange + 1;
	return this->returnValue;
}

bool Trie2$Trie2Iterator::hasNext() {
	return this->doingCodePoints && (this->doLeadSurrogates || this->nextStart < this->limitCP) || this->nextStart < 0x0000dc00;
}

int32_t Trie2$Trie2Iterator::rangeEndLS(char16_t startingLS) {
	if (startingLS >= 0x0000dbff) {
		return 0x0000dbff;
	}
	int32_t c = 0;
	int32_t val = this->this$0->getFromU16SingleLead(startingLS);
	for (c = startingLS + 1; c <= 0x0000dbff; ++c) {
		if (this->this$0->getFromU16SingleLead((char16_t)c) != val) {
			break;
		}
	}
	return c - 1;
}

Trie2$Trie2Iterator::Trie2$Trie2Iterator() {
}

$Class* Trie2$Trie2Iterator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljdk/internal/icu/impl/Trie2;", nullptr, $FINAL | $SYNTHETIC, $field(Trie2$Trie2Iterator, this$0)},
		{"mapper", "Ljdk/internal/icu/impl/Trie2$ValueMapper;", nullptr, $PRIVATE, $field(Trie2$Trie2Iterator, mapper)},
		{"returnValue", "Ljdk/internal/icu/impl/Trie2$Range;", nullptr, $PRIVATE, $field(Trie2$Trie2Iterator, returnValue)},
		{"nextStart", "I", nullptr, $PRIVATE, $field(Trie2$Trie2Iterator, nextStart)},
		{"limitCP", "I", nullptr, $PRIVATE, $field(Trie2$Trie2Iterator, limitCP)},
		{"doingCodePoints", "Z", nullptr, $PRIVATE, $field(Trie2$Trie2Iterator, doingCodePoints)},
		{"doLeadSurrogates", "Z", nullptr, $PRIVATE, $field(Trie2$Trie2Iterator, doLeadSurrogates)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/icu/impl/Trie2;Ljdk/internal/icu/impl/Trie2$ValueMapper;)V", nullptr, 0, $method(Trie2$Trie2Iterator, init$, void, $Trie2*, $Trie2$ValueMapper*)},
		{"hasNext", "()Z", nullptr, $PUBLIC, $virtualMethod(Trie2$Trie2Iterator, hasNext, bool)},
		{"next", "()Ljdk/internal/icu/impl/Trie2$Range;", nullptr, $PUBLIC, $virtualMethod(Trie2$Trie2Iterator, next, $Object*)},
		{"rangeEndLS", "(C)I", nullptr, $PRIVATE, $method(Trie2$Trie2Iterator, rangeEndLS, int32_t, char16_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.icu.impl.Trie2$Trie2Iterator", "jdk.internal.icu.impl.Trie2", "Trie2Iterator", 0},
		{"jdk.internal.icu.impl.Trie2$Range", "jdk.internal.icu.impl.Trie2", "Range", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.icu.impl.Trie2$Trie2Iterator",
		"java.lang.Object",
		"java.util.Iterator",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/Iterator<Ljdk/internal/icu/impl/Trie2$Range;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.icu.impl.Trie2"
	};
	$loadClass(Trie2$Trie2Iterator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Trie2$Trie2Iterator);
	});
	return class$;
}

$Class* Trie2$Trie2Iterator::class$ = nullptr;

			} // impl
		} // icu
	} // internal
} // jdk