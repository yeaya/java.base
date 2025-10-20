#include <jdk/internal/icu/impl/UnicodeSetStringSpan.h>

#include <java/lang/Array.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Character.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/ArrayList.h>
#include <jdk/internal/icu/impl/UCharacterProperty.h>
#include <jdk/internal/icu/impl/UnicodeSetStringSpan$OffsetList.h>
#include <jdk/internal/icu/text/UTF16.h>
#include <jdk/internal/icu/text/UnicodeSet$SpanCondition.h>
#include <jdk/internal/icu/text/UnicodeSet.h>
#include <jdk/internal/icu/util/OutputInt.h>
#include <jcpp.h>

#undef ALL
#undef ALL_CP_CONTAINED
#undef BACK
#undef BACK_UTF16_CONTAINED
#undef BACK_UTF16_NOT_CONTAINED
#undef CONTAINED
#undef FWD
#undef FWD_UTF16_CONTAINED
#undef FWD_UTF16_NOT_CONTAINED
#undef LONG_SPAN
#undef NOT_CONTAINED
#undef WITH_COUNT

using $CharSequence = ::java::lang::CharSequence;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayList = ::java::util::ArrayList;
using $UCharacterProperty = ::jdk::internal::icu::impl::UCharacterProperty;
using $UnicodeSetStringSpan$OffsetList = ::jdk::internal::icu::impl::UnicodeSetStringSpan$OffsetList;
using $UTF16 = ::jdk::internal::icu::text::UTF16;
using $UnicodeSet = ::jdk::internal::icu::text::UnicodeSet;
using $UnicodeSet$SpanCondition = ::jdk::internal::icu::text::UnicodeSet$SpanCondition;
using $OutputInt = ::jdk::internal::icu::util::OutputInt;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace impl {

$FieldInfo _UnicodeSetStringSpan_FieldInfo_[] = {
	{"WITH_COUNT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(UnicodeSetStringSpan, WITH_COUNT)},
	{"FWD", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(UnicodeSetStringSpan, FWD)},
	{"BACK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(UnicodeSetStringSpan, BACK)},
	{"CONTAINED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(UnicodeSetStringSpan, CONTAINED)},
	{"NOT_CONTAINED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(UnicodeSetStringSpan, NOT_CONTAINED)},
	{"ALL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(UnicodeSetStringSpan, ALL)},
	{"FWD_UTF16_CONTAINED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(UnicodeSetStringSpan, FWD_UTF16_CONTAINED)},
	{"FWD_UTF16_NOT_CONTAINED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(UnicodeSetStringSpan, FWD_UTF16_NOT_CONTAINED)},
	{"BACK_UTF16_CONTAINED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(UnicodeSetStringSpan, BACK_UTF16_CONTAINED)},
	{"BACK_UTF16_NOT_CONTAINED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(UnicodeSetStringSpan, BACK_UTF16_NOT_CONTAINED)},
	{"ALL_CP_CONTAINED", "S", nullptr, $STATIC | $FINAL, $constField(UnicodeSetStringSpan, ALL_CP_CONTAINED)},
	{"LONG_SPAN", "S", nullptr, $STATIC | $FINAL, $constField(UnicodeSetStringSpan, LONG_SPAN)},
	{"spanSet", "Ljdk/internal/icu/text/UnicodeSet;", nullptr, $PRIVATE, $field(UnicodeSetStringSpan, spanSet)},
	{"spanNotSet", "Ljdk/internal/icu/text/UnicodeSet;", nullptr, $PRIVATE, $field(UnicodeSetStringSpan, spanNotSet)},
	{"strings", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<Ljava/lang/String;>;", $PRIVATE, $field(UnicodeSetStringSpan, strings)},
	{"spanLengths", "[S", nullptr, $PRIVATE, $field(UnicodeSetStringSpan, spanLengths)},
	{"maxLength16", "I", nullptr, $PRIVATE, $field(UnicodeSetStringSpan, maxLength16)},
	{"someRelevant", "Z", nullptr, $PRIVATE, $field(UnicodeSetStringSpan, someRelevant)},
	{"all", "Z", nullptr, $PRIVATE, $field(UnicodeSetStringSpan, all)},
	{"offsets", "Ljdk/internal/icu/impl/UnicodeSetStringSpan$OffsetList;", nullptr, $PRIVATE, $field(UnicodeSetStringSpan, offsets)},
	{}
};

$MethodInfo _UnicodeSetStringSpan_MethodInfo_[] = {
	{"<init>", "(Ljdk/internal/icu/text/UnicodeSet;Ljava/util/ArrayList;I)V", "(Ljdk/internal/icu/text/UnicodeSet;Ljava/util/ArrayList<Ljava/lang/String;>;I)V", $PUBLIC, $method(static_cast<void(UnicodeSetStringSpan::*)($UnicodeSet*,$ArrayList*,int32_t)>(&UnicodeSetStringSpan::init$))},
	{"addToSpanNotSet", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(UnicodeSetStringSpan::*)(int32_t)>(&UnicodeSetStringSpan::addToSpanNotSet))},
	{"contains", "(I)Z", nullptr, $PUBLIC},
	{"makeSpanLengthByte", "(I)S", nullptr, $STATIC, $method(static_cast<int16_t(*)(int32_t)>(&UnicodeSetStringSpan::makeSpanLengthByte))},
	{"matches16", "(Ljava/lang/CharSequence;ILjava/lang/String;I)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($CharSequence*,int32_t,$String*,int32_t)>(&UnicodeSetStringSpan::matches16))},
	{"matches16CPB", "(Ljava/lang/CharSequence;IILjava/lang/String;I)Z", nullptr, $STATIC, $method(static_cast<bool(*)($CharSequence*,int32_t,int32_t,$String*,int32_t)>(&UnicodeSetStringSpan::matches16CPB))},
	{"needsStringSpanUTF16", "()Z", nullptr, $PUBLIC},
	{"span", "(Ljava/lang/CharSequence;ILjdk/internal/icu/text/UnicodeSet$SpanCondition;)I", nullptr, $PUBLIC},
	{"spanAndCount", "(Ljava/lang/CharSequence;ILjdk/internal/icu/text/UnicodeSet$SpanCondition;Ljdk/internal/icu/util/OutputInt;)I", nullptr, $PUBLIC},
	{"spanBack", "(Ljava/lang/CharSequence;ILjdk/internal/icu/text/UnicodeSet$SpanCondition;)I", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"spanContainedAndCount", "(Ljava/lang/CharSequence;ILjdk/internal/icu/util/OutputInt;)I", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<int32_t(UnicodeSetStringSpan::*)($CharSequence*,int32_t,$OutputInt*)>(&UnicodeSetStringSpan::spanContainedAndCount))},
	{"spanNot", "(Ljava/lang/CharSequence;ILjdk/internal/icu/util/OutputInt;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(UnicodeSetStringSpan::*)($CharSequence*,int32_t,$OutputInt*)>(&UnicodeSetStringSpan::spanNot))},
	{"spanNotBack", "(Ljava/lang/CharSequence;I)I", nullptr, $PRIVATE, $method(static_cast<int32_t(UnicodeSetStringSpan::*)($CharSequence*,int32_t)>(&UnicodeSetStringSpan::spanNotBack))},
	{"spanOne", "(Ljdk/internal/icu/text/UnicodeSet;Ljava/lang/CharSequence;II)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($UnicodeSet*,$CharSequence*,int32_t,int32_t)>(&UnicodeSetStringSpan::spanOne))},
	{"spanOneBack", "(Ljdk/internal/icu/text/UnicodeSet;Ljava/lang/CharSequence;I)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($UnicodeSet*,$CharSequence*,int32_t)>(&UnicodeSetStringSpan::spanOneBack))},
	{"spanWithStrings", "(Ljava/lang/CharSequence;IILjdk/internal/icu/text/UnicodeSet$SpanCondition;)I", nullptr, $PRIVATE | $SYNCHRONIZED, $method(static_cast<int32_t(UnicodeSetStringSpan::*)($CharSequence*,int32_t,int32_t,$UnicodeSet$SpanCondition*)>(&UnicodeSetStringSpan::spanWithStrings))},
	{}
};

$InnerClassInfo _UnicodeSetStringSpan_InnerClassesInfo_[] = {
	{"jdk.internal.icu.impl.UnicodeSetStringSpan$OffsetList", "jdk.internal.icu.impl.UnicodeSetStringSpan", "OffsetList", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _UnicodeSetStringSpan_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.icu.impl.UnicodeSetStringSpan",
	"java.lang.Object",
	nullptr,
	_UnicodeSetStringSpan_FieldInfo_,
	_UnicodeSetStringSpan_MethodInfo_,
	nullptr,
	nullptr,
	_UnicodeSetStringSpan_InnerClassesInfo_,
	nullptr,
	nullptr,
	"jdk.internal.icu.impl.UnicodeSetStringSpan$OffsetList"
};

$Object* allocate$UnicodeSetStringSpan($Class* clazz) {
	return $of($alloc(UnicodeSetStringSpan));
}

void UnicodeSetStringSpan::init$($UnicodeSet* set, $ArrayList* setStrings, int32_t which) {
	$useLocalCurrentObjectStackCache();
	$set(this, spanSet, $new($UnicodeSet, 0, 0x0010FFFF));
	$set(this, strings, setStrings);
	this->all = (which == UnicodeSetStringSpan::ALL);
	$nc(this->spanSet)->retainAll(set);
	if (0 != ((int32_t)(which & (uint32_t)UnicodeSetStringSpan::NOT_CONTAINED))) {
		$set(this, spanNotSet, this->spanSet);
	}
	$set(this, offsets, $new($UnicodeSetStringSpan$OffsetList));
	int32_t stringsLength = $nc(this->strings)->size();
	int32_t i = 0;
	int32_t spanLength = 0;
	this->someRelevant = false;
	for (i = 0; i < stringsLength; ++i) {
		$var($String, string, $cast($String, $nc(this->strings)->get(i)));
		int32_t length16 = $nc(string)->length();
		$init($UnicodeSet$SpanCondition);
		spanLength = $nc(this->spanSet)->span(string, $UnicodeSet$SpanCondition::CONTAINED);
		if (spanLength < length16) {
			this->someRelevant = true;
		}
		if (length16 > this->maxLength16) {
			this->maxLength16 = length16;
		}
	}
	if (!this->someRelevant && ((int32_t)(which & (uint32_t)UnicodeSetStringSpan::WITH_COUNT)) == 0) {
		return;
	}
	if (this->all) {
		$nc(this->spanSet)->freeze();
	}
	int32_t spanBackLengthsOffset = 0;
	int32_t allocSize = 0;
	if (this->all) {
		allocSize = stringsLength * (2);
	} else {
		allocSize = stringsLength;
	}
	$set(this, spanLengths, $new($shorts, allocSize));
	if (this->all) {
		spanBackLengthsOffset = stringsLength;
	} else {
		spanBackLengthsOffset = 0;
	}
	for (i = 0; i < stringsLength; ++i) {
		$var($String, string, $cast($String, $nc(this->strings)->get(i)));
		int32_t length16 = $nc(string)->length();
		$init($UnicodeSet$SpanCondition);
		spanLength = $nc(this->spanSet)->span(string, $UnicodeSet$SpanCondition::CONTAINED);
		if (spanLength < length16) {
			{
				if (0 != ((int32_t)(which & (uint32_t)UnicodeSetStringSpan::CONTAINED))) {
					if (0 != ((int32_t)(which & (uint32_t)UnicodeSetStringSpan::FWD))) {
						$nc(this->spanLengths)->set(i, makeSpanLengthByte(spanLength));
					}
					if (0 != ((int32_t)(which & (uint32_t)UnicodeSetStringSpan::BACK))) {
						spanLength = length16 - $nc(this->spanSet)->spanBack(string, length16, $UnicodeSet$SpanCondition::CONTAINED);
						$nc(this->spanLengths)->set(spanBackLengthsOffset + i, makeSpanLengthByte(spanLength));
					}
				} else {
					int32_t var$0 = i;
					$nc(this->spanLengths)->set(var$0, $nc(this->spanLengths)->set(spanBackLengthsOffset + i, (int16_t)0));
				}
			}
			if (0 != ((int32_t)(which & (uint32_t)UnicodeSetStringSpan::NOT_CONTAINED))) {
				int32_t c = 0;
				if (0 != ((int32_t)(which & (uint32_t)UnicodeSetStringSpan::FWD))) {
					c = string->codePointAt(0);
					addToSpanNotSet(c);
				}
				if (0 != ((int32_t)(which & (uint32_t)UnicodeSetStringSpan::BACK))) {
					c = string->codePointBefore(length16);
					addToSpanNotSet(c);
				}
			}
		} else if (this->all) {
			int32_t var$1 = i;
			$nc(this->spanLengths)->set(var$1, $nc(this->spanLengths)->set(spanBackLengthsOffset + i, UnicodeSetStringSpan::ALL_CP_CONTAINED));
		} else {
			$nc(this->spanLengths)->set(i, UnicodeSetStringSpan::ALL_CP_CONTAINED);
		}
	}
	if (this->all) {
		$nc(this->spanNotSet)->freeze();
	}
}

bool UnicodeSetStringSpan::needsStringSpanUTF16() {
	return this->someRelevant;
}

bool UnicodeSetStringSpan::contains(int32_t c) {
	return $nc(this->spanSet)->contains(c);
}

void UnicodeSetStringSpan::addToSpanNotSet(int32_t c) {
	if (this->spanNotSet == nullptr || this->spanNotSet == this->spanSet) {
		if ($nc(this->spanSet)->contains(c)) {
			return;
		}
		$set(this, spanNotSet, $nc(this->spanSet)->cloneAsThawed());
	}
	$nc(this->spanNotSet)->add(c);
}

int32_t UnicodeSetStringSpan::span($CharSequence* s, int32_t start, $UnicodeSet$SpanCondition* spanCondition) {
	$init($UnicodeSet$SpanCondition);
	if (spanCondition == $UnicodeSet$SpanCondition::NOT_CONTAINED) {
		return spanNot(s, start, nullptr);
	}
	int32_t spanLimit = $nc(this->spanSet)->span(s, start, $UnicodeSet$SpanCondition::CONTAINED);
	if (spanLimit == $nc(s)->length()) {
		return spanLimit;
	}
	return spanWithStrings(s, start, spanLimit, spanCondition);
}

int32_t UnicodeSetStringSpan::spanWithStrings($CharSequence* s, int32_t start, int32_t spanLimit, $UnicodeSet$SpanCondition* spanCondition) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		int32_t initSize = 0;
		$init($UnicodeSet$SpanCondition);
		if (spanCondition == $UnicodeSet$SpanCondition::CONTAINED) {
			initSize = this->maxLength16;
		}
		$nc(this->offsets)->setMaxLength(initSize);
		int32_t length = $nc(s)->length();
		int32_t pos = spanLimit;
		int32_t rest = length - spanLimit;
		int32_t spanLength = spanLimit - start;
		int32_t i = 0;
		int32_t stringsLength = $nc(this->strings)->size();
		for (;;) {
			if (spanCondition == $UnicodeSet$SpanCondition::CONTAINED) {
				for (i = 0; i < stringsLength; ++i) {
					int32_t overlap = $nc(this->spanLengths)->get(i);
					if (overlap == UnicodeSetStringSpan::ALL_CP_CONTAINED) {
						continue;
					}
					$var($String, string, $cast($String, $nc(this->strings)->get(i)));
					int32_t length16 = $nc(string)->length();
					if (overlap >= UnicodeSetStringSpan::LONG_SPAN) {
						overlap = length16;
						overlap = string->offsetByCodePoints(overlap, -1);
					}
					if (overlap > spanLength) {
						overlap = spanLength;
					}
					int32_t inc = length16 - overlap;
					for (;;) {
						if (inc > rest) {
							break;
						}
						bool var$0 = !$nc(this->offsets)->containsOffset(inc);
						if (var$0 && matches16CPB(s, pos - overlap, length, string, length16)) {
							if (inc == rest) {
								return length;
							}
							$nc(this->offsets)->addOffset(inc);
						}
						if (overlap == 0) {
							break;
						}
						--overlap;
						++inc;
					}
				}
			} else {
				int32_t maxInc = 0;
				int32_t maxOverlap = 0;
				for (i = 0; i < stringsLength; ++i) {
					int32_t overlap = $nc(this->spanLengths)->get(i);
					$var($String, string, $cast($String, $nc(this->strings)->get(i)));
					int32_t length16 = $nc(string)->length();
					if (overlap >= UnicodeSetStringSpan::LONG_SPAN) {
						overlap = length16;
					}
					if (overlap > spanLength) {
						overlap = spanLength;
					}
					int32_t inc = length16 - overlap;
					for (;;) {
						if (inc > rest || overlap < maxOverlap) {
							break;
						}
						if ((overlap > maxOverlap || inc > maxInc) && matches16CPB(s, pos - overlap, length, string, length16)) {
							maxInc = inc;
							maxOverlap = overlap;
							break;
						}
						--overlap;
						++inc;
					}
				}
				if (maxInc != 0 || maxOverlap != 0) {
					pos += maxInc;
					rest -= maxInc;
					if (rest == 0) {
						return length;
					}
					spanLength = 0;
					continue;
				}
			}
			if (spanLength != 0 || pos == 0) {
				if ($nc(this->offsets)->isEmpty()) {
					return pos;
				}
			} else if ($nc(this->offsets)->isEmpty()) {
				spanLimit = $nc(this->spanSet)->span(s, pos, $UnicodeSet$SpanCondition::CONTAINED);
				spanLength = spanLimit - pos;
				if (spanLength == rest || spanLength == 0) {
					return spanLimit;
				}
				pos += spanLength;
				rest -= spanLength;
				continue;
			} else {
				spanLength = spanOne(this->spanSet, s, pos, rest);
				if (spanLength > 0) {
					if (spanLength == rest) {
						return length;
					}
					pos += spanLength;
					rest -= spanLength;
					$nc(this->offsets)->shift(spanLength);
					spanLength = 0;
					continue;
				}
			}
			int32_t minOffset = $nc(this->offsets)->popMinimum(nullptr);
			pos += minOffset;
			rest -= minOffset;
			spanLength = 0;
		}
	}
}

int32_t UnicodeSetStringSpan::spanAndCount($CharSequence* s, int32_t start, $UnicodeSet$SpanCondition* spanCondition, $OutputInt* outCount) {
	$useLocalCurrentObjectStackCache();
	$init($UnicodeSet$SpanCondition);
	if (spanCondition == $UnicodeSet$SpanCondition::NOT_CONTAINED) {
		return spanNot(s, start, outCount);
	}
	if (spanCondition == $UnicodeSet$SpanCondition::CONTAINED) {
		return spanContainedAndCount(s, start, outCount);
	}
	int32_t stringsLength = $nc(this->strings)->size();
	int32_t length = $nc(s)->length();
	int32_t pos = start;
	int32_t rest = length - start;
	int32_t count = 0;
	while (rest != 0) {
		int32_t cpLength = spanOne(this->spanSet, s, pos, rest);
		int32_t maxInc = (cpLength > 0) ? cpLength : 0;
		for (int32_t i = 0; i < stringsLength; ++i) {
			$var($String, string, $cast($String, $nc(this->strings)->get(i)));
			int32_t length16 = $nc(string)->length();
			if (maxInc < length16 && length16 <= rest && matches16CPB(s, pos, length, string, length16)) {
				maxInc = length16;
			}
		}
		if (maxInc == 0) {
			$nc(outCount)->value = count;
			return pos;
		}
		++count;
		pos += maxInc;
		rest -= maxInc;
	}
	$nc(outCount)->value = count;
	return pos;
}

int32_t UnicodeSetStringSpan::spanContainedAndCount($CharSequence* s, int32_t start, $OutputInt* outCount) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$nc(this->offsets)->setMaxLength(this->maxLength16);
		int32_t stringsLength = $nc(this->strings)->size();
		int32_t length = $nc(s)->length();
		int32_t pos = start;
		int32_t rest = length - start;
		int32_t count = 0;
		while (rest != 0) {
			int32_t cpLength = spanOne(this->spanSet, s, pos, rest);
			if (cpLength > 0) {
				$nc(this->offsets)->addOffsetAndCount(cpLength, count + 1);
			}
			for (int32_t i = 0; i < stringsLength; ++i) {
				$var($String, string, $cast($String, $nc(this->strings)->get(i)));
				int32_t length16 = $nc(string)->length();
				bool var$0 = length16 <= rest && !$nc(this->offsets)->hasCountAtOffset(length16, count + 1);
				if (var$0 && matches16CPB(s, pos, length, string, length16)) {
					$nc(this->offsets)->addOffsetAndCount(length16, count + 1);
				}
			}
			if ($nc(this->offsets)->isEmpty()) {
				$nc(outCount)->value = count;
				return pos;
			}
			int32_t minOffset = $nc(this->offsets)->popMinimum(outCount);
			count = $nc(outCount)->value;
			pos += minOffset;
			rest -= minOffset;
		}
		$nc(outCount)->value = count;
		return pos;
	}
}

int32_t UnicodeSetStringSpan::spanBack($CharSequence* s, int32_t length, $UnicodeSet$SpanCondition* spanCondition) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$init($UnicodeSet$SpanCondition);
		if (spanCondition == $UnicodeSet$SpanCondition::NOT_CONTAINED) {
			return spanNotBack(s, length);
		}
		int32_t pos = $nc(this->spanSet)->spanBack(s, length, $UnicodeSet$SpanCondition::CONTAINED);
		if (pos == 0) {
			return 0;
		}
		int32_t spanLength = length - pos;
		int32_t initSize = 0;
		if (spanCondition == $UnicodeSet$SpanCondition::CONTAINED) {
			initSize = this->maxLength16;
		}
		$nc(this->offsets)->setMaxLength(initSize);
		int32_t i = 0;
		int32_t stringsLength = $nc(this->strings)->size();
		int32_t spanBackLengthsOffset = 0;
		if (this->all) {
			spanBackLengthsOffset = stringsLength;
		}
		for (;;) {
			if (spanCondition == $UnicodeSet$SpanCondition::CONTAINED) {
				for (i = 0; i < stringsLength; ++i) {
					int32_t overlap = $nc(this->spanLengths)->get(spanBackLengthsOffset + i);
					if (overlap == UnicodeSetStringSpan::ALL_CP_CONTAINED) {
						continue;
					}
					$var($String, string, $cast($String, $nc(this->strings)->get(i)));
					int32_t length16 = $nc(string)->length();
					if (overlap >= UnicodeSetStringSpan::LONG_SPAN) {
						overlap = length16;
						int32_t len1 = 0;
						len1 = string->offsetByCodePoints(0, 1);
						overlap -= len1;
					}
					if (overlap > spanLength) {
						overlap = spanLength;
					}
					int32_t dec = length16 - overlap;
					for (;;) {
						if (dec > pos) {
							break;
						}
						bool var$0 = !$nc(this->offsets)->containsOffset(dec);
						if (var$0 && matches16CPB(s, pos - dec, length, string, length16)) {
							if (dec == pos) {
								return 0;
							}
							$nc(this->offsets)->addOffset(dec);
						}
						if (overlap == 0) {
							break;
						}
						--overlap;
						++dec;
					}
				}
			} else {
				int32_t maxDec = 0;
				int32_t maxOverlap = 0;
				for (i = 0; i < stringsLength; ++i) {
					int32_t overlap = $nc(this->spanLengths)->get(spanBackLengthsOffset + i);
					$var($String, string, $cast($String, $nc(this->strings)->get(i)));
					int32_t length16 = $nc(string)->length();
					if (overlap >= UnicodeSetStringSpan::LONG_SPAN) {
						overlap = length16;
					}
					if (overlap > spanLength) {
						overlap = spanLength;
					}
					int32_t dec = length16 - overlap;
					for (;;) {
						if (dec > pos || overlap < maxOverlap) {
							break;
						}
						if ((overlap > maxOverlap || dec > maxDec) && matches16CPB(s, pos - dec, length, string, length16)) {
							maxDec = dec;
							maxOverlap = overlap;
							break;
						}
						--overlap;
						++dec;
					}
				}
				if (maxDec != 0 || maxOverlap != 0) {
					pos -= maxDec;
					if (pos == 0) {
						return 0;
					}
					spanLength = 0;
					continue;
				}
			}
			if (spanLength != 0 || pos == length) {
				if ($nc(this->offsets)->isEmpty()) {
					return pos;
				}
			} else if ($nc(this->offsets)->isEmpty()) {
				int32_t oldPos = pos;
				pos = $nc(this->spanSet)->spanBack(s, oldPos, $UnicodeSet$SpanCondition::CONTAINED);
				spanLength = oldPos - pos;
				if (pos == 0 || spanLength == 0) {
					return pos;
				}
				continue;
			} else {
				spanLength = spanOneBack(this->spanSet, s, pos);
				if (spanLength > 0) {
					if (spanLength == pos) {
						return 0;
					}
					pos -= spanLength;
					$nc(this->offsets)->shift(spanLength);
					spanLength = 0;
					continue;
				}
			}
			pos -= $nc(this->offsets)->popMinimum(nullptr);
			spanLength = 0;
		}
	}
}

int32_t UnicodeSetStringSpan::spanNot($CharSequence* s, int32_t start, $OutputInt* outCount) {
	$useLocalCurrentObjectStackCache();
	int32_t length = $nc(s)->length();
	int32_t pos = start;
	int32_t rest = length - start;
	int32_t stringsLength = $nc(this->strings)->size();
	int32_t count = 0;
	do {
		int32_t spanLimit = 0;
		if (outCount == nullptr) {
			$init($UnicodeSet$SpanCondition);
			spanLimit = $nc(this->spanNotSet)->span(s, pos, $UnicodeSet$SpanCondition::NOT_CONTAINED);
		} else {
			$init($UnicodeSet$SpanCondition);
			spanLimit = $nc(this->spanNotSet)->spanAndCount(s, pos, $UnicodeSet$SpanCondition::NOT_CONTAINED, outCount);
			$nc(outCount)->value = (count = count + outCount->value);
		}
		if (spanLimit == length) {
			return length;
		}
		pos = spanLimit;
		rest = length - spanLimit;
		int32_t cpLength = spanOne(this->spanSet, s, pos, rest);
		if (cpLength > 0) {
			return pos;
		}
		for (int32_t i = 0; i < stringsLength; ++i) {
			if ($nc(this->spanLengths)->get(i) == UnicodeSetStringSpan::ALL_CP_CONTAINED) {
				continue;
			}
			$var($String, string, $cast($String, $nc(this->strings)->get(i)));
			int32_t length16 = $nc(string)->length();
			if (length16 <= rest && matches16CPB(s, pos, length, string, length16)) {
				return pos;
			}
		}
		pos -= cpLength;
		rest += cpLength;
		++count;
	} while (rest != 0);
	if (outCount != nullptr) {
		outCount->value = count;
	}
	return length;
}

int32_t UnicodeSetStringSpan::spanNotBack($CharSequence* s, int32_t length) {
	$useLocalCurrentObjectStackCache();
	int32_t pos = length;
	int32_t i = 0;
	int32_t stringsLength = $nc(this->strings)->size();
	do {
		$init($UnicodeSet$SpanCondition);
		pos = $nc(this->spanNotSet)->spanBack(s, pos, $UnicodeSet$SpanCondition::NOT_CONTAINED);
		if (pos == 0) {
			return 0;
		}
		int32_t cpLength = spanOneBack(this->spanSet, s, pos);
		if (cpLength > 0) {
			return pos;
		}
		for (i = 0; i < stringsLength; ++i) {
			if ($nc(this->spanLengths)->get(i) == UnicodeSetStringSpan::ALL_CP_CONTAINED) {
				continue;
			}
			$var($String, string, $cast($String, $nc(this->strings)->get(i)));
			int32_t length16 = $nc(string)->length();
			if (length16 <= pos && matches16CPB(s, pos - length16, length, string, length16)) {
				return pos;
			}
		}
		pos += cpLength;
	} while (pos != 0);
	return 0;
}

int16_t UnicodeSetStringSpan::makeSpanLengthByte(int32_t spanLength) {
	return spanLength < UnicodeSetStringSpan::LONG_SPAN ? (int16_t)spanLength : UnicodeSetStringSpan::LONG_SPAN;
}

bool UnicodeSetStringSpan::matches16($CharSequence* s, int32_t start, $String* t, int32_t length) {
	int32_t end = start + length;
	while (length-- > 0) {
		char16_t var$0 = $nc(s)->charAt(--end);
		if (var$0 != $nc(t)->charAt(length)) {
			return false;
		}
	}
	return true;
}

bool UnicodeSetStringSpan::matches16CPB($CharSequence* s, int32_t start, int32_t limit, $String* t, int32_t tlength) {
	bool var$1 = matches16(s, start, t, tlength);
	if (var$1) {
		bool var$2 = 0 < start && $Character::isHighSurrogate($nc(s)->charAt(start - 1));
		var$1 = !(var$2 && $Character::isLowSurrogate($nc(s)->charAt(start)));
	}
	bool var$0 = var$1;
	if (var$0) {
		bool var$3 = (start + tlength) < limit && $Character::isHighSurrogate($nc(s)->charAt(start + tlength - 1));
		var$0 = !(var$3 && $Character::isLowSurrogate($nc(s)->charAt(start + tlength)));
	}
	return var$0;
}

int32_t UnicodeSetStringSpan::spanOne($UnicodeSet* set, $CharSequence* s, int32_t start, int32_t length) {
	char16_t c = $nc(s)->charAt(start);
	if (c >= 0x0000D800 && c <= 0x0000DBFF && length >= 2) {
		char16_t c2 = s->charAt(start + 1);
		if ($UTF16::isTrailSurrogate(c2)) {
			int32_t supplementary = $UCharacterProperty::getRawSupplementary(c, c2);
			return $nc(set)->contains(supplementary) ? 2 : -2;
		}
	}
	return $nc(set)->contains(c) ? 1 : -1;
}

int32_t UnicodeSetStringSpan::spanOneBack($UnicodeSet* set, $CharSequence* s, int32_t length) {
	char16_t c = $nc(s)->charAt(length - 1);
	if (c >= 0x0000DC00 && c <= 0x0000DFFF && length >= 2) {
		char16_t c2 = s->charAt(length - 2);
		if ($UTF16::isLeadSurrogate(c2)) {
			int32_t supplementary = $UCharacterProperty::getRawSupplementary(c2, c);
			return $nc(set)->contains(supplementary) ? 2 : -2;
		}
	}
	return $nc(set)->contains(c) ? 1 : -1;
}

UnicodeSetStringSpan::UnicodeSetStringSpan() {
}

$Class* UnicodeSetStringSpan::load$($String* name, bool initialize) {
	$loadClass(UnicodeSetStringSpan, name, initialize, &_UnicodeSetStringSpan_ClassInfo_, allocate$UnicodeSetStringSpan);
	return class$;
}

$Class* UnicodeSetStringSpan::class$ = nullptr;

			} // impl
		} // icu
	} // internal
} // jdk