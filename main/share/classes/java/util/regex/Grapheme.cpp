#include <java/util/regex/Grapheme.h>

#include <java/lang/Array.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Character.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Objects.h>
#include <java/util/regex/EmojiData.h>
#include <jcpp.h>

#undef SPACINGMARK
#undef FORMAT
#undef PARAGRAPH_SEPARATOR
#undef MODIFIER_LETTER
#undef LV
#undef LVT
#undef SCOUNT
#undef L
#undef NCOUNT
#undef MODIFIER_SYMBOL
#undef VCOUNT
#undef T
#undef V
#undef LAST_TYPE
#undef FIRST_TYPE
#undef EXTENDED_PICTOGRAPHIC
#undef LINE_SEPARATOR
#undef SURROGATE
#undef LCOUNT
#undef EXTEND
#undef NON_SPACING_MARK
#undef ZWJ
#undef COMBINING_SPACING_MARK
#undef CR
#undef OTHER
#undef UNASSIGNED
#undef ENCLOSING_MARK
#undef OTHER_SYMBOL
#undef RI
#undef TCOUNT
#undef LF
#undef CONTROL
#undef PREPEND
#undef SYLLABLE_BASE
#undef OTHER_LETTER

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

$FieldInfo _Grapheme_FieldInfo_[] = {
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

$MethodInfo _Grapheme_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Grapheme::*)()>(&Grapheme::init$))},
	{"getType", "(I)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&Grapheme::getType))},
	{"isExcludedSpacingMark", "(I)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)(int32_t)>(&Grapheme::isExcludedSpacingMark))},
	{"nextBoundary", "(Ljava/lang/CharSequence;II)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($CharSequence*,int32_t,int32_t)>(&Grapheme::nextBoundary))},
	{}
};

$ClassInfo _Grapheme_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.regex.Grapheme",
	"java.lang.Object",
	nullptr,
	_Grapheme_FieldInfo_,
	_Grapheme_MethodInfo_
};

$Object* allocate$Grapheme($Class* clazz) {
	return $of($alloc(Grapheme));
}

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
		} else {
			$init(Grapheme);
			if ($nc($nc(Grapheme::rules)->get(t0))->get(t1)) {
				if (ret > off) {
					break;
				} else {
					gb11 = t1 == Grapheme::EXTENDED_PICTOGRAPHIC;
					riCount = 0;
				}
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
	return cp == 4139 || cp == 4140 || cp == 4152 || cp >= 4194 && cp <= 4196 || cp >= 4194 && cp <= 4205 || cp == 4227 || cp >= 4231 && cp <= 4236 || cp == 4239 || cp >= 4250 && cp <= 4252 || cp == 6753 || cp == 6755 || cp == 6756 || cp == 0x0000AA7B || cp == 0x0000AA7D;
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
			{
				if (cp == 888) {
					return Grapheme::OTHER;
				}
			}
		case $Character::CONTROL:
			{}
		case $Character::LINE_SEPARATOR:
			{}
		case $Character::PARAGRAPH_SEPARATOR:
			{}
		case $Character::SURROGATE:
			{
				return Grapheme::CONTROL;
			}
		case $Character::FORMAT:
			{
				if (cp == 8204 || cp >= 0x000E0020 && cp <= 0x000E007F) {
					return Grapheme::EXTEND;
				}
				if (cp == 8205) {
					return Grapheme::ZWJ;
				}
				if (cp >= 1536 && cp <= 1541 || cp == 1757 || cp == 1807 || cp == 2274 || cp == 0x000110BD || cp == 0x000110CD) {
					return Grapheme::PREPEND;
				}
				return Grapheme::CONTROL;
			}
		case $Character::NON_SPACING_MARK:
			{}
		case $Character::ENCLOSING_MARK:
			{
				return Grapheme::EXTEND;
			}
		case $Character::COMBINING_SPACING_MARK:
			{
				if (isExcludedSpacingMark(cp)) {
					return Grapheme::OTHER;
				}
				return Grapheme::SPACINGMARK;
			}
		case $Character::OTHER_SYMBOL:
			{
				if (cp >= 0x0001F1E6 && cp <= 0x0001F1FF) {
					return Grapheme::RI;
				}
				return Grapheme::OTHER;
			}
		case $Character::MODIFIER_LETTER:
			{}
		case $Character::MODIFIER_SYMBOL:
			{
				if (cp == 0x0000FF9E || cp == 0x0000FF9F || cp >= 0x0001F3FB && cp <= 0x0001F3FF) {
					return Grapheme::EXTEND;
				}
				return Grapheme::OTHER;
			}
		case $Character::OTHER_LETTER:
			{
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
				if (cp >= 0x0000A960 && cp <= 0x0000A97C) {
					return Grapheme::L;
				}
				if (cp >= 0x0000D7B0 && cp <= 0x0000D7C6) {
					return Grapheme::V;
				}
				if (cp >= 0x0000D7CB && cp <= 0x0000D7FB) {
					return Grapheme::T;
				}
				switch (cp) {
				case 3406:
					{}
				case 0x000111C2:
					{}
				case 0x000111C3:
					{}
				case 0x0001193F:
					{}
				case 0x00011941:
					{}
				case 0x00011A3A:
					{}
				case 0x00011A84:
					{}
				case 0x00011A85:
					{}
				case 0x00011A86:
					{}
				case 0x00011A87:
					{}
				case 0x00011A88:
					{}
				case 0x00011A89:
					{}
				case 0x00011D46:
					{
						return Grapheme::PREPEND;
					}
				}
			}
		}
	}
	return Grapheme::OTHER;
}

void clinit$Grapheme($Class* class$) {
	{
		$assignStatic(Grapheme::rules, $new($booleanArray2, Grapheme::LAST_TYPE + 1, Grapheme::LAST_TYPE + 1));
		for (int32_t i = Grapheme::FIRST_TYPE; i <= Grapheme::LAST_TYPE; ++i) {
			for (int32_t j = Grapheme::FIRST_TYPE; j <= Grapheme::LAST_TYPE; ++j) {
				$nc($nc(Grapheme::rules)->get(i))->set(j, true);
			}
		}
		$nc($nc(Grapheme::rules)->get(Grapheme::L))->set(Grapheme::L, false);
		$nc($nc(Grapheme::rules)->get(Grapheme::L))->set(Grapheme::V, false);
		$nc($nc(Grapheme::rules)->get(Grapheme::L))->set(Grapheme::LV, false);
		$nc($nc(Grapheme::rules)->get(Grapheme::L))->set(Grapheme::LVT, false);
		$nc($nc(Grapheme::rules)->get(Grapheme::LV))->set(Grapheme::V, false);
		$nc($nc(Grapheme::rules)->get(Grapheme::LV))->set(Grapheme::T, false);
		$nc($nc(Grapheme::rules)->get(Grapheme::V))->set(Grapheme::V, false);
		$nc($nc(Grapheme::rules)->get(Grapheme::V))->set(Grapheme::T, false);
		$nc($nc(Grapheme::rules)->get(Grapheme::LVT))->set(Grapheme::T, false);
		$nc($nc(Grapheme::rules)->get(Grapheme::T))->set(Grapheme::T, false);
		for (int32_t i = Grapheme::FIRST_TYPE; i <= Grapheme::LAST_TYPE; ++i) {
			$nc($nc(Grapheme::rules)->get(i))->set(Grapheme::EXTEND, false);
			$nc($nc(Grapheme::rules)->get(i))->set(Grapheme::ZWJ, false);
			$nc($nc(Grapheme::rules)->get(i))->set(Grapheme::SPACINGMARK, false);
			$nc($nc(Grapheme::rules)->get(Grapheme::PREPEND))->set(i, false);
		}
		for (int32_t i = Grapheme::FIRST_TYPE; i <= Grapheme::LAST_TYPE; ++i) {
			for (int32_t j = Grapheme::CR; j <= Grapheme::CONTROL; ++j) {
				$nc($nc(Grapheme::rules)->get(i))->set(j, true);
				$nc($nc(Grapheme::rules)->get(j))->set(i, true);
			}
		}
		$nc($nc(Grapheme::rules)->get(Grapheme::CR))->set(Grapheme::LF, false);
		$nc($nc(Grapheme::rules)->get(Grapheme::EXTENDED_PICTOGRAPHIC))->set(Grapheme::EXTEND, false);
		$nc($nc(Grapheme::rules)->get(Grapheme::EXTENDED_PICTOGRAPHIC))->set(Grapheme::ZWJ, false);
	}
}

Grapheme::Grapheme() {
}

$Class* Grapheme::load$($String* name, bool initialize) {
	$loadClass(Grapheme, name, initialize, &_Grapheme_ClassInfo_, clinit$Grapheme, allocate$Grapheme);
	return class$;
}

$Class* Grapheme::class$ = nullptr;

		} // regex
	} // util
} // java