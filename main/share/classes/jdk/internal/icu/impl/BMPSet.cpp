#include <jdk/internal/icu/impl/BMPSet.h>

#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jdk/internal/icu/impl/UCharacterProperty.h>
#include <jdk/internal/icu/text/UnicodeSet$SpanCondition.h>
#include <jdk/internal/icu/util/OutputInt.h>
#include <jcpp.h>

#undef NOT_CONTAINED

using $AssertionError = ::java::lang::AssertionError;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UCharacterProperty = ::jdk::internal::icu::impl::UCharacterProperty;
using $UnicodeSet$SpanCondition = ::jdk::internal::icu::text::UnicodeSet$SpanCondition;
using $OutputInt = ::jdk::internal::icu::util::OutputInt;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace impl {

$FieldInfo _BMPSet_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(BMPSet, $assertionsDisabled)},
	{"latin1Contains", "[Z", nullptr, $PRIVATE, $field(BMPSet, latin1Contains)},
	{"table7FF", "[I", nullptr, $PRIVATE, $field(BMPSet, table7FF)},
	{"bmpBlockBits", "[I", nullptr, $PRIVATE, $field(BMPSet, bmpBlockBits)},
	{"list4kStarts", "[I", nullptr, $PRIVATE, $field(BMPSet, list4kStarts)},
	{"list", "[I", nullptr, $PRIVATE | $FINAL, $field(BMPSet, list)},
	{"listLength", "I", nullptr, $PRIVATE | $FINAL, $field(BMPSet, listLength)},
	{}
};

$MethodInfo _BMPSet_MethodInfo_[] = {
	{"<init>", "([II)V", nullptr, $PUBLIC, $method(static_cast<void(BMPSet::*)($ints*,int32_t)>(&BMPSet::init$))},
	{"contains", "(I)Z", nullptr, $PUBLIC, $method(static_cast<bool(BMPSet::*)(int32_t)>(&BMPSet::contains))},
	{"containsSlow", "(III)Z", nullptr, $PRIVATE | $FINAL, $method(static_cast<bool(BMPSet::*)(int32_t,int32_t,int32_t)>(&BMPSet::containsSlow))},
	{"findCodePoint", "(III)I", nullptr, $PRIVATE, $method(static_cast<int32_t(BMPSet::*)(int32_t,int32_t,int32_t)>(&BMPSet::findCodePoint))},
	{"initBits", "()V", nullptr, $PRIVATE, $method(static_cast<void(BMPSet::*)()>(&BMPSet::initBits))},
	{"set32x64Bits", "([III)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($ints*,int32_t,int32_t)>(&BMPSet::set32x64Bits))},
	{"span", "(Ljava/lang/CharSequence;ILjdk/internal/icu/text/UnicodeSet$SpanCondition;Ljdk/internal/icu/util/OutputInt;)I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(BMPSet::*)($CharSequence*,int32_t,$UnicodeSet$SpanCondition*,$OutputInt*)>(&BMPSet::span))},
	{"spanBack", "(Ljava/lang/CharSequence;ILjdk/internal/icu/text/UnicodeSet$SpanCondition;)I", nullptr, $PUBLIC | $FINAL, $method(static_cast<int32_t(BMPSet::*)($CharSequence*,int32_t,$UnicodeSet$SpanCondition*)>(&BMPSet::spanBack))},
	{}
};

$ClassInfo _BMPSet_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"jdk.internal.icu.impl.BMPSet",
	"java.lang.Object",
	nullptr,
	_BMPSet_FieldInfo_,
	_BMPSet_MethodInfo_
};

$Object* allocate$BMPSet($Class* clazz) {
	return $of($alloc(BMPSet));
}

bool BMPSet::$assertionsDisabled = false;

void BMPSet::init$($ints* parentList, int32_t parentListLength) {
	$set(this, list, parentList);
	this->listLength = parentListLength;
	$set(this, latin1Contains, $new($booleans, 256));
	$set(this, table7FF, $new($ints, 64));
	$set(this, bmpBlockBits, $new($ints, 64));
	$set(this, list4kStarts, $new($ints, 18));
	$nc(this->list4kStarts)->set(0, findCodePoint(2048, 0, this->listLength - 1));
	int32_t i = 0;
	for (i = 1; i <= 16; ++i) {
		$nc(this->list4kStarts)->set(i, findCodePoint(i << 12, $nc(this->list4kStarts)->get(i - 1), this->listLength - 1));
	}
	$nc(this->list4kStarts)->set(17, this->listLength - 1);
	initBits();
}

bool BMPSet::contains(int32_t c) {
	if (c <= 255) {
		return ($nc(this->latin1Contains)->get(c));
	} else if (c <= 2047) {
		return (((int32_t)($nc(this->table7FF)->get((int32_t)(c & (uint32_t)63)) & (uint32_t)($sl(1, c >> 6)))) != 0);
	} else if (c < 0x0000D800 || (c >= 0x0000E000 && c <= 0x0000FFFF)) {
		int32_t lead = c >> 12;
		int32_t twoBits = (int32_t)(($sr($nc(this->bmpBlockBits)->get((int32_t)((c >> 6) & (uint32_t)63)), lead)) & (uint32_t)0x00010001);
		if (twoBits <= 1) {
			return (0 != twoBits);
		} else {
			return containsSlow(c, $nc(this->list4kStarts)->get(lead), $nc(this->list4kStarts)->get(lead + 1));
		}
	} else if (c <= 0x0010FFFF) {
		return containsSlow(c, $nc(this->list4kStarts)->get(13), $nc(this->list4kStarts)->get(17));
	} else {
		return false;
	}
}

int32_t BMPSet::span($CharSequence* s, int32_t start, $UnicodeSet$SpanCondition* spanCondition, $OutputInt* outCount) {
	char16_t c = 0;
	char16_t c2 = 0;
	int32_t i = start;
	int32_t limit = $nc(s)->length();
	int32_t numSupplementary = 0;
	$init($UnicodeSet$SpanCondition);
	if ($UnicodeSet$SpanCondition::NOT_CONTAINED != spanCondition) {
		while (i < limit) {
			c = s->charAt(i);
			if (c <= 255) {
				if (!$nc(this->latin1Contains)->get(c)) {
					break;
				}
			} else if (c <= 2047) {
				if (((int32_t)($nc(this->table7FF)->get((int32_t)(c & (uint32_t)63)) & (uint32_t)($sl(1, c >> 6)))) == 0) {
					break;
				}
			} else if (c < 0x0000D800 || c >= 0x0000DC00 || (i + 1) == limit || (c2 = s->charAt(i + 1)) < 0x0000DC00 || c2 >= 0x0000E000) {
				int32_t lead = c >> 12;
				int32_t twoBits = (int32_t)(($sr($nc(this->bmpBlockBits)->get((int32_t)((c >> 6) & (uint32_t)63)), lead)) & (uint32_t)0x00010001);
				if (twoBits <= 1) {
					if (twoBits == 0) {
						break;
					}
				} else if (!containsSlow(c, $nc(this->list4kStarts)->get(lead), $nc(this->list4kStarts)->get(lead + 1))) {
					break;
				}
			} else {
				int32_t supplementary = $UCharacterProperty::getRawSupplementary(c, c2);
				if (!containsSlow(supplementary, $nc(this->list4kStarts)->get(16), $nc(this->list4kStarts)->get(17))) {
					break;
				}
				++numSupplementary;
				++i;
			}
			++i;
		}
	} else {
		while (i < limit) {
			c = s->charAt(i);
			if (c <= 255) {
				if ($nc(this->latin1Contains)->get(c)) {
					break;
				}
			} else if (c <= 2047) {
				if (((int32_t)($nc(this->table7FF)->get((int32_t)(c & (uint32_t)63)) & (uint32_t)($sl(1, c >> 6)))) != 0) {
					break;
				}
			} else if (c < 0x0000D800 || c >= 0x0000DC00 || (i + 1) == limit || (c2 = s->charAt(i + 1)) < 0x0000DC00 || c2 >= 0x0000E000) {
				int32_t lead = c >> 12;
				int32_t twoBits = (int32_t)(($sr($nc(this->bmpBlockBits)->get((int32_t)((c >> 6) & (uint32_t)63)), lead)) & (uint32_t)0x00010001);
				if (twoBits <= 1) {
					if (twoBits != 0) {
						break;
					}
				} else if (containsSlow(c, $nc(this->list4kStarts)->get(lead), $nc(this->list4kStarts)->get(lead + 1))) {
					break;
				}
			} else {
				int32_t supplementary = $UCharacterProperty::getRawSupplementary(c, c2);
				if (containsSlow(supplementary, $nc(this->list4kStarts)->get(16), $nc(this->list4kStarts)->get(17))) {
					break;
				}
				++numSupplementary;
				++i;
			}
			++i;
		}
	}
	if (outCount != nullptr) {
		int32_t spanLength = i - start;
		outCount->value = spanLength - numSupplementary;
	}
	return i;
}

int32_t BMPSet::spanBack($CharSequence* s, int32_t limit, $UnicodeSet$SpanCondition* spanCondition) {
	char16_t c = 0;
	char16_t c2 = 0;
	$init($UnicodeSet$SpanCondition);
	if ($UnicodeSet$SpanCondition::NOT_CONTAINED != spanCondition) {
		for (;;) {
			c = $nc(s)->charAt(--limit);
			if (c <= 255) {
				if (!$nc(this->latin1Contains)->get(c)) {
					break;
				}
			} else if (c <= 2047) {
				if (((int32_t)($nc(this->table7FF)->get((int32_t)(c & (uint32_t)63)) & (uint32_t)($sl(1, c >> 6)))) == 0) {
					break;
				}
			} else if (c < 0x0000D800 || c < 0x0000DC00 || 0 == limit || (c2 = s->charAt(limit - 1)) < 0x0000D800 || c2 >= 0x0000DC00) {
				int32_t lead = c >> 12;
				int32_t twoBits = (int32_t)(($sr($nc(this->bmpBlockBits)->get((int32_t)((c >> 6) & (uint32_t)63)), lead)) & (uint32_t)0x00010001);
				if (twoBits <= 1) {
					if (twoBits == 0) {
						break;
					}
				} else if (!containsSlow(c, $nc(this->list4kStarts)->get(lead), $nc(this->list4kStarts)->get(lead + 1))) {
					break;
				}
			} else {
				int32_t supplementary = $UCharacterProperty::getRawSupplementary(c2, c);
				if (!containsSlow(supplementary, $nc(this->list4kStarts)->get(16), $nc(this->list4kStarts)->get(17))) {
					break;
				}
				--limit;
			}
			if (0 == limit) {
				return 0;
			}
		}
	} else {
		for (;;) {
			c = $nc(s)->charAt(--limit);
			if (c <= 255) {
				if ($nc(this->latin1Contains)->get(c)) {
					break;
				}
			} else if (c <= 2047) {
				if (((int32_t)($nc(this->table7FF)->get((int32_t)(c & (uint32_t)63)) & (uint32_t)($sl(1, c >> 6)))) != 0) {
					break;
				}
			} else if (c < 0x0000D800 || c < 0x0000DC00 || 0 == limit || (c2 = s->charAt(limit - 1)) < 0x0000D800 || c2 >= 0x0000DC00) {
				int32_t lead = c >> 12;
				int32_t twoBits = (int32_t)(($sr($nc(this->bmpBlockBits)->get((int32_t)((c >> 6) & (uint32_t)63)), lead)) & (uint32_t)0x00010001);
				if (twoBits <= 1) {
					if (twoBits != 0) {
						break;
					}
				} else if (containsSlow(c, $nc(this->list4kStarts)->get(lead), $nc(this->list4kStarts)->get(lead + 1))) {
					break;
				}
			} else {
				int32_t supplementary = $UCharacterProperty::getRawSupplementary(c2, c);
				if (containsSlow(supplementary, $nc(this->list4kStarts)->get(16), $nc(this->list4kStarts)->get(17))) {
					break;
				}
				--limit;
			}
			if (0 == limit) {
				return 0;
			}
		}
	}
	return limit + 1;
}

void BMPSet::set32x64Bits($ints* table, int32_t start, int32_t limit) {
	$init(BMPSet);
	if (!BMPSet::$assertionsDisabled && !(64 == $nc(table)->length)) {
		$throwNew($AssertionError);
	}
	int32_t lead = start >> 6;
	int32_t trail = (int32_t)(start & (uint32_t)63);
	int32_t bits = $sl(1, lead);
	if ((start + 1) == limit) {
		(*$nc(table))[trail] |= bits;
		return;
	}
	int32_t limitLead = limit >> 6;
	int32_t limitTrail = (int32_t)(limit & (uint32_t)63);
	if (lead == limitLead) {
		while (trail < limitTrail) {
			(*$nc(table))[trail++] |= bits;
		}
	} else {
		if (trail > 0) {
			do {
				(*$nc(table))[trail++] |= bits;
			} while (trail < 64);
			++lead;
		}
		if (lead < limitLead) {
			bits = ~(($sl(1, lead)) - 1);
			if (limitLead < 32) {
				bits &= (uint32_t)(($sl(1, limitLead)) - 1);
			}
			for (trail = 0; trail < 64; ++trail) {
				(*$nc(table))[trail] |= bits;
			}
		}
		bits = $sl(1, limitLead);
		for (trail = 0; trail < limitTrail; ++trail) {
			(*$nc(table))[trail] |= bits;
		}
	}
}

void BMPSet::initBits() {
	int32_t start = 0;
	int32_t limit = 0;
	int32_t listIndex = 0;
	do {
		start = $nc(this->list)->get(listIndex++);
		if (listIndex < this->listLength) {
			limit = $nc(this->list)->get(listIndex++);
		} else {
			limit = 0x00110000;
		}
		if (start >= 256) {
			break;
		}
		do {
			$nc(this->latin1Contains)->set(start++, true);
		} while (start < limit && start < 256);
	} while (limit <= 256);
	while (start < 2048) {
		set32x64Bits(this->table7FF, start, limit <= 2048 ? limit : 2048);
		if (limit > 2048) {
			start = 2048;
			break;
		}
		start = $nc(this->list)->get(listIndex++);
		if (listIndex < this->listLength) {
			limit = $nc(this->list)->get(listIndex++);
		} else {
			limit = 0x00110000;
		}
	}
	int32_t minStart = 2048;
	while (start < 0x00010000) {
		if (limit > 0x00010000) {
			limit = 0x00010000;
		}
		if (start < minStart) {
			start = minStart;
		}
		if (start < limit) {
			if (0 != ((int32_t)(start & (uint32_t)63))) {
				start >>= 6;
				(*$nc(this->bmpBlockBits))[(int32_t)(start & (uint32_t)63)] |= $sl(0x00010001, start >> 6);
				start = (start + 1) << 6;
				minStart = start;
			}
			if (start < limit) {
				if (start < ((int32_t)(limit & (uint32_t)~63))) {
					set32x64Bits(this->bmpBlockBits, start >> 6, limit >> 6);
				}
				if (0 != ((int32_t)(limit & (uint32_t)63))) {
					limit >>= 6;
					(*$nc(this->bmpBlockBits))[(int32_t)(limit & (uint32_t)63)] |= $sl(0x00010001, limit >> 6);
					limit = (limit + 1) << 6;
					minStart = limit;
				}
			}
		}
		if (limit == 0x00010000) {
			break;
		}
		start = $nc(this->list)->get(listIndex++);
		if (listIndex < this->listLength) {
			limit = $nc(this->list)->get(listIndex++);
		} else {
			limit = 0x00110000;
		}
	}
}

int32_t BMPSet::findCodePoint(int32_t c, int32_t lo, int32_t hi) {
	if (c < $nc(this->list)->get(lo)) {
		return lo;
	}
	if (lo >= hi || c >= $nc(this->list)->get(hi - 1)) {
		return hi;
	}
	for (;;) {
		int32_t i = (int32_t)((uint32_t)(lo + hi) >> 1);
		if (i == lo) {
			break;
		} else if (c < $nc(this->list)->get(i)) {
			hi = i;
		} else {
			lo = i;
		}
	}
	return hi;
}

bool BMPSet::containsSlow(int32_t c, int32_t lo, int32_t hi) {
	return (0 != ((int32_t)(findCodePoint(c, lo, hi) & (uint32_t)1)));
}

void clinit$BMPSet($Class* class$) {
	BMPSet::$assertionsDisabled = !BMPSet::class$->desiredAssertionStatus();
}

BMPSet::BMPSet() {
}

$Class* BMPSet::load$($String* name, bool initialize) {
	$loadClass(BMPSet, name, initialize, &_BMPSet_ClassInfo_, clinit$BMPSet, allocate$BMPSet);
	return class$;
}

$Class* BMPSet::class$ = nullptr;

			} // impl
		} // icu
	} // internal
} // jdk