#include <jdk/internal/icu/impl/Trie2$Trie2Iterator.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/NoSuchElementException.h>
#include <jdk/internal/icu/impl/Trie2$Range.h>
#include <jdk/internal/icu/impl/Trie2$ValueMapper.h>
#include <jdk/internal/icu/impl/Trie2.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $Trie2 = ::jdk::internal::icu::impl::Trie2;
using $Trie2$Range = ::jdk::internal::icu::impl::Trie2$Range;
using $Trie2$ValueMapper = ::jdk::internal::icu::impl::Trie2$ValueMapper;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace impl {

$FieldInfo _Trie2$Trie2Iterator_FieldInfo_[] = {
	{"this$0", "Ljdk/internal/icu/impl/Trie2;", nullptr, $FINAL | $SYNTHETIC, $field(Trie2$Trie2Iterator, this$0)},
	{"mapper", "Ljdk/internal/icu/impl/Trie2$ValueMapper;", nullptr, $PRIVATE, $field(Trie2$Trie2Iterator, mapper)},
	{"returnValue", "Ljdk/internal/icu/impl/Trie2$Range;", nullptr, $PRIVATE, $field(Trie2$Trie2Iterator, returnValue)},
	{"nextStart", "I", nullptr, $PRIVATE, $field(Trie2$Trie2Iterator, nextStart)},
	{"limitCP", "I", nullptr, $PRIVATE, $field(Trie2$Trie2Iterator, limitCP)},
	{"doingCodePoints", "Z", nullptr, $PRIVATE, $field(Trie2$Trie2Iterator, doingCodePoints)},
	{"doLeadSurrogates", "Z", nullptr, $PRIVATE, $field(Trie2$Trie2Iterator, doLeadSurrogates)},
	{}
};

$MethodInfo _Trie2$Trie2Iterator_MethodInfo_[] = {
	{"<init>", "(Ljdk/internal/icu/impl/Trie2;Ljdk/internal/icu/impl/Trie2$ValueMapper;)V", nullptr, 0, $method(static_cast<void(Trie2$Trie2Iterator::*)($Trie2*,$Trie2$ValueMapper*)>(&Trie2$Trie2Iterator::init$))},
	{"hasNext", "()Z", nullptr, $PUBLIC},
	{"next", "()Ljdk/internal/icu/impl/Trie2$Range;", nullptr, $PUBLIC},
	{"rangeEndLS", "(C)I", nullptr, $PRIVATE, $method(static_cast<int32_t(Trie2$Trie2Iterator::*)(char16_t)>(&Trie2$Trie2Iterator::rangeEndLS))},
	{}
};

$InnerClassInfo _Trie2$Trie2Iterator_InnerClassesInfo_[] = {
	{"jdk.internal.icu.impl.Trie2$Trie2Iterator", "jdk.internal.icu.impl.Trie2", "Trie2Iterator", 0},
	{"jdk.internal.icu.impl.Trie2$Range", "jdk.internal.icu.impl.Trie2", "Range", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Trie2$Trie2Iterator_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.icu.impl.Trie2$Trie2Iterator",
	"java.lang.Object",
	"java.util.Iterator",
	_Trie2$Trie2Iterator_FieldInfo_,
	_Trie2$Trie2Iterator_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Iterator<Ljdk/internal/icu/impl/Trie2$Range;>;",
	nullptr,
	_Trie2$Trie2Iterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.icu.impl.Trie2"
};

$Object* allocate$Trie2$Trie2Iterator($Class* clazz) {
	return $of($alloc(Trie2$Trie2Iterator));
}

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
		this->nextStart = 0x0000D800;
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
			if ($nc(this->mapper)->map(val) != mappedVal) {
				break;
			}
			endOfRange = this->this$0->rangeEnd(endOfRange + 1, this->limitCP, val);
		}
	} else {
		val = this->this$0->getFromU16SingleLead((char16_t)this->nextStart);
		mappedVal = $nc(this->mapper)->map(val);
		endOfRange = rangeEndLS((char16_t)this->nextStart);
		for (;;) {
			if (endOfRange >= 0x0000DBFF) {
				break;
			}
			val = this->this$0->getFromU16SingleLead((char16_t)(endOfRange + 1));
			if ($nc(this->mapper)->map(val) != mappedVal) {
				break;
			}
			endOfRange = rangeEndLS((char16_t)(endOfRange + 1));
		}
	}
	$nc(this->returnValue)->startCodePoint = this->nextStart;
	$nc(this->returnValue)->endCodePoint = endOfRange;
	$nc(this->returnValue)->value = mappedVal;
	$nc(this->returnValue)->leadSurrogate = !this->doingCodePoints;
	this->nextStart = endOfRange + 1;
	return $of(this->returnValue);
}

bool Trie2$Trie2Iterator::hasNext() {
	return this->doingCodePoints && (this->doLeadSurrogates || this->nextStart < this->limitCP) || this->nextStart < 0x0000DC00;
}

int32_t Trie2$Trie2Iterator::rangeEndLS(char16_t startingLS) {
	if (startingLS >= 0x0000DBFF) {
		return 0x0000DBFF;
	}
	int32_t c = 0;
	int32_t val = this->this$0->getFromU16SingleLead(startingLS);
	for (c = startingLS + 1; c <= 0x0000DBFF; ++c) {
		if (this->this$0->getFromU16SingleLead((char16_t)c) != val) {
			break;
		}
	}
	return c - 1;
}

Trie2$Trie2Iterator::Trie2$Trie2Iterator() {
}

$Class* Trie2$Trie2Iterator::load$($String* name, bool initialize) {
	$loadClass(Trie2$Trie2Iterator, name, initialize, &_Trie2$Trie2Iterator_ClassInfo_, allocate$Trie2$Trie2Iterator);
	return class$;
}

$Class* Trie2$Trie2Iterator::class$ = nullptr;

			} // impl
		} // icu
	} // internal
} // jdk