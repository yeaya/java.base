#include <java/util/regex/Grapheme.h>
#include <java/lang/CharSequence.h>
#include <java/util/Objects.h>
#include <java/util/regex/EmojiData.h>
#include <jcpp.h>

#undef COMBINING_SPACING_MARK
#undef CONTROL
#undef CR
#undef ENCLOSING_MARK
#undef EXTEND
#undef EXTENDED_PICTOGRAPHIC
#undef FIRST_TYPE
#undef FORMAT
#undef L
#undef LAST_TYPE
#undef LCOUNT
#undef LF
#undef LINE_SEPARATOR
#undef LV
#undef LVT
#undef MODIFIER_LETTER
#undef MODIFIER_SYMBOL
#undef NCOUNT
#undef NON_SPACING_MARK
#undef OTHER
#undef OTHER_LETTER
#undef OTHER_SYMBOL
#undef PARAGRAPH_SEPARATOR
#undef PREPEND
#undef RI
#undef SCOUNT
#undef SPACINGMARK
#undef SURROGATE
#undef SYLLABLE_BASE
#undef T
#undef TCOUNT
#undef UNASSIGNED
#undef V
#undef VCOUNT
#undef ZWJ

using $booleanArray2 = $Array<bool, 2>;
using $CharSequence = ::java::lang::CharSequence;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Objects = ::java::util::Objects;
using $EmojiData = ::java::util::regex::EmojiData;

namespace java {
	namespace util {
		namespace regex {

$booleanArray2* Grapheme::rules = nullptr;

void Grapheme::init$() {
}

int32_t Grapheme::nextBoundary($CharSequence* src, int32_t off, int32_t limit) {
	$init(Grapheme);
	$Objects::checkFromToIndex(off, limit, $nc(src)->length());
	int32_t ch0 = $Character::codePointAt(src, off);
	int32_t ret = off + $Character::charCount(ch0);
	int32_t t0 = getType(ch0);
	int32_t riCount = t0 == Grapheme::RI ? 1 : 0;
	bool gb11 = t0 == Grapheme::EXTENDED_PICTOGRAPHIC;
	while (ret < limit) {
		int32_t ch1 = $Character::codePointAt(src, ret);
		int32_t t1 = getType(ch1);
		if (gb11 && t0 == Grapheme::ZWJ && t1 == Grapheme::EXTENDED_PICTOGRAPHIC) {
		} else if (riCount % 2 == 1 && t0 == Grapheme::RI && t1 == Grapheme::RI) {
		} else if ($nc($nc(Grapheme::rules)->get(t0))->get(t1)) {
			if (ret > off) {
				break;
			} else {
				gb11 = t1 == Grapheme::EXTENDED_PICTOGRAPHIC;
				riCount = 0;
			}
		}
		riCount += (t1 == Grapheme::RI) ? 1 : 0;
		t0 = t1;
		ret += $Character::charCount(ch1);
	}
	return ret;
}

bool Grapheme::isExcludedSpacingMark(int32_t cp) {
	$init(Grapheme);
	return cp == 4139 || cp == 4140 || cp == 4152 || cp >= 4194 && cp <= 4196 || cp >= 4194 && cp <= 4205 || cp == 4227 || cp >= 4231 && cp <= 4236 || cp == 4239 || cp >= 4250 && cp <= 4252 || cp == 6753 || cp == 6755 || cp == 6756 || cp == 0x0000aa7b || cp == 0x0000aa7d;
}

int32_t Grapheme::getType(int32_t cp) {
	$init(Grapheme);
	if (cp < 127) {
		if (cp < 32) {
			if (cp == 13) {
				return Grapheme::CR;
			}
			if (cp == 10) {
				return Grapheme::LF;
			}
			return Grapheme::CONTROL;
		}
		return Grapheme::OTHER;
	}
	if ($EmojiData::isExtendedPictographic(cp)) {
		return Grapheme::EXTENDED_PICTOGRAPHIC;
	}
	int32_t type = $Character::getType(cp);
	{
		int32_t sindex = 0;
		switch (type) {
		case $Character::UNASSIGNED:
			if (cp == 888) {
				return Grapheme::OTHER;
			}
		case $Character::CONTROL:
		case $Character::LINE_SEPARATOR:
		case $Character::PARAGRAPH_SEPARATOR:
		case $Character::SURROGATE:
			return Grapheme::CONTROL;
		case $Character::FORMAT:
			if (cp == 8204 || cp >= 0x000e0020 && cp <= 0x000e007f) {
				return Grapheme::EXTEND;
			}
			if (cp == 8205) {
				return Grapheme::ZWJ;
			}
			if (cp >= 1536 && cp <= 1541 || cp == 1757 || cp == 1807 || cp == 2274 || cp == 0x000110bd || cp == 0x000110cd) {
				return Grapheme::PREPEND;
			}
			return Grapheme::CONTROL;
		case $Character::NON_SPACING_MARK:
		case $Character::ENCLOSING_MARK:
			return Grapheme::EXTEND;
		case $Character::COMBINING_SPACING_MARK:
			if (isExcludedSpacingMark(cp)) {
				return Grapheme::OTHER;
			}
			return Grapheme::SPACINGMARK;
		case $Character::OTHER_SYMBOL:
			if (cp >= 0x0001f1e6 && cp <= 0x0001f1ff) {
				return Grapheme::RI;
			}
			return Grapheme::OTHER;
		case $Character::MODIFIER_LETTER:
		case $Character::MODIFIER_SYMBOL:
			if (cp == 0x0000ff9e || cp == 0x0000ff9f || cp >= 0x0001f3fb && cp <= 127999) {
				return Grapheme::EXTEND;
			}
			return Grapheme::OTHER;
		case $Character::OTHER_LETTER:
			if (cp == 3635 || cp == 3763) {
				return Grapheme::SPACINGMARK;
			}
			if (cp >= 4352 && cp <= 4607) {
				if (cp <= 4447) {
					return Grapheme::L;
				}
				if (cp <= 4519) {
					return Grapheme::V;
				}
				return Grapheme::T;
			}
			sindex = cp - Grapheme::SYLLABLE_BASE;
			if (sindex >= 0 && sindex < Grapheme::SCOUNT) {
				if ($mod(sindex, Grapheme::TCOUNT) == 0) {
					return Grapheme::LV;
				}
				return Grapheme::LVT;
			}
			if (cp >= 0x0000a960 && cp <= 0x0000a97c) {
				return Grapheme::L;
			}
			if (cp >= 0x0000d7b0 && cp <= 0x0000d7c6) {
				return Grapheme::V;
			}
			if (cp >= 0x0000d7cb && cp <= 0x0000d7fb) {
				return Grapheme::T;
			}
			switch (cp) {
			case 3406:
			case 0x000111c2:
			case 0x000111c3:
			case 71999:
			case 0x00011941:
			case 0x00011a3a:
			case 0x00011a84:
			case 0x00011a85:
			case 0x00011a86:
			case 0x00011a87:
			case 0x00011a88:
			case 0x00011a89:
			case 0x00011d46:
				return Grapheme::PREPEND;
			}
		}
	}
	return Grapheme::OTHER;
}

void Grapheme::clinit$($Class* clazz) {
	{
		$assignStatic(Grapheme::rules, $new($booleanArray2, Grapheme::LAST_TYPE + 1, Grapheme::LAST_TYPE + 1));
		for (int32_t i = Grapheme::FIRST_TYPE; i <= Grapheme::LAST_TYPE; ++i) {
			for (int32_t j = Grapheme::FIRST_TYPE; j <= Grapheme::LAST_TYPE; ++j) {
				$nc(Grapheme::rules->get(i))->set(j, true);
			}
		}
		$nc(Grapheme::rules->get(Grapheme::L))->set(Grapheme::L, false);
		$nc(Grapheme::rules->get(Grapheme::L))->set(Grapheme::V, false);
		$nc(Grapheme::rules->get(Grapheme::L))->set(Grapheme::LV, false);
		$nc(Grapheme::rules->get(Grapheme::L))->set(Grapheme::LVT, false);
		$nc(Grapheme::rules->get(Grapheme::LV))->set(Grapheme::V, false);
		$nc(Grapheme::rules->get(Grapheme::LV))->set(Grapheme::T, false);
		$nc(Grapheme::rules->get(Grapheme::V))->set(Grapheme::V, false);
		$nc(Grapheme::rules->get(Grapheme::V))->set(Grapheme::T, false);
		$nc(Grapheme::rules->get(Grapheme::LVT))->set(Grapheme::T, false);
		$nc(Grapheme::rules->get(Grapheme::T))->set(Grapheme::T, false);
		for (int32_t i = Grapheme::FIRST_TYPE; i <= Grapheme::LAST_TYPE; ++i) {
			$nc(Grapheme::rules->get(i))->set(Grapheme::EXTEND, false);
			$nc(Grapheme::rules->get(i))->set(Grapheme::ZWJ, false);
			$nc(Grapheme::rules->get(i))->set(Grapheme::SPACINGMARK, false);
			$nc(Grapheme::rules->get(Grapheme::PREPEND))->set(i, false);
		}
		for (int32_t i = Grapheme::FIRST_TYPE; i <= Grapheme::LAST_TYPE; ++i) {
			for (int32_t j = Grapheme::CR; j <= Grapheme::CONTROL; ++j) {
				$nc(Grapheme::rules->get(i))->set(j, true);
				$nc(Grapheme::rules->get(j))->set(i, true);
			}
		}
		$nc(Grapheme::rules->get(Grapheme::CR))->set(Grapheme::LF, false);
		$nc(Grapheme::rules->get(Grapheme::EXTENDED_PICTOGRAPHIC))->set(Grapheme::EXTEND, false);
		$nc(Grapheme::rules->get(Grapheme::EXTENDED_PICTOGRAPHIC))->set(Grapheme::ZWJ, false);
	}
}

Grapheme::Grapheme() {
}

$Class* Grapheme::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"OTHER", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Grapheme, OTHER)},
		{"CR", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Grapheme, CR)},
		{"LF", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Grapheme, LF)},
		{"CONTROL", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Grapheme, CONTROL)},
		{"EXTEND", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Grapheme, EXTEND)},
		{"ZWJ", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Grapheme, ZWJ)},
		{"RI", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Grapheme, RI)},
		{"PREPEND", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Grapheme, PREPEND)},
		{"SPACINGMARK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Grapheme, SPACINGMARK)},
		{"L", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Grapheme, L)},
		{"V", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Grapheme, V)},
		{"T", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Grapheme, T)},
		{"LV", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Grapheme, LV)},
		{"LVT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Grapheme, LVT)},
		{"EXTENDED_PICTOGRAPHIC", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Grapheme, EXTENDED_PICTOGRAPHIC)},
		{"FIRST_TYPE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Grapheme, FIRST_TYPE)},
		{"LAST_TYPE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Grapheme, LAST_TYPE)},
		{"rules", "[[Z", nullptr, $PRIVATE | $STATIC, $staticField(Grapheme, rules)},
		{"SYLLABLE_BASE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Grapheme, SYLLABLE_BASE)},
		{"LCOUNT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Grapheme, LCOUNT)},
		{"VCOUNT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Grapheme, VCOUNT)},
		{"TCOUNT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Grapheme, TCOUNT)},
		{"NCOUNT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Grapheme, NCOUNT)},
		{"SCOUNT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Grapheme, SCOUNT)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Grapheme, init$, void)},
		{"getType", "(I)I", nullptr, $PRIVATE | $STATIC, $staticMethod(Grapheme, getType, int32_t, int32_t)},
		{"isExcludedSpacingMark", "(I)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(Grapheme, isExcludedSpacingMark, bool, int32_t)},
		{"nextBoundary", "(Ljava/lang/CharSequence;II)I", nullptr, $STATIC, $staticMethod(Grapheme, nextBoundary, int32_t, $CharSequence*, int32_t, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.regex.Grapheme",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Grapheme, name, initialize, &classInfo$$, Grapheme::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Grapheme);
	});
	return class$;
}

$Class* Grapheme::class$ = nullptr;

		} // regex
	} // util
} // java