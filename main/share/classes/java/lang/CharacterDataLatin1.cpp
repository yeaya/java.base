#include <java/lang/CharacterDataLatin1.h>
#include <java/lang/CharacterData.h>
#include <jcpp.h>

#undef A
#undef B
#undef DIGITS
#undef ERROR
#undef MAX_RADIX
#undef MIN_RADIX

using $Character = ::java::lang::Character;
using $CharacterData = ::java::lang::CharacterData;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {

$bytes* CharacterDataLatin1::DIGITS = nullptr;
$chars* CharacterDataLatin1::sharpsMap = nullptr;
CharacterDataLatin1* CharacterDataLatin1::instance = nullptr;
$ints* CharacterDataLatin1::A = nullptr;
$bytes* CharacterDataLatin1::B = nullptr;

int32_t CharacterDataLatin1::getProperties(int32_t ch) {
	char16_t offset = (char16_t)ch;
	int32_t props = CharacterDataLatin1::A->get(offset);
	return props;
}

int32_t CharacterDataLatin1::getPropertiesEx(int32_t ch) {
	char16_t offset = (char16_t)ch;
	int32_t props = CharacterDataLatin1::B->get(offset);
	return props;
}

bool CharacterDataLatin1::isDigit(int32_t ch) {
	return u'0' <= ch && ch <= u'9';
}

bool CharacterDataLatin1::isLowerCase(int32_t ch) {
	return (getPropertiesEx(ch) & 1) != 0;
}

bool CharacterDataLatin1::isUpperCase(int32_t ch) {
	return (getPropertiesEx(ch) & 2) != 0;
}

bool CharacterDataLatin1::isOtherAlphabetic(int32_t ch) {
	int32_t props = getPropertiesEx(ch);
	return (props & 4) != 0;
}

bool CharacterDataLatin1::isIdeographic(int32_t ch) {
	int32_t props = getPropertiesEx(ch);
	return (props & 8) != 0;
}

int32_t CharacterDataLatin1::getType(int32_t ch) {
	int32_t props = getProperties(ch);
	return (props & 0x1f);
}

bool CharacterDataLatin1::isJavaIdentifierStart(int32_t ch) {
	int32_t props = getProperties(ch);
	return ((props & 0x7000) >= 0x5000);
}

bool CharacterDataLatin1::isJavaIdentifierPart(int32_t ch) {
	int32_t props = getProperties(ch);
	return ((props & 0x3000) != 0);
}

bool CharacterDataLatin1::isUnicodeIdentifierStart(int32_t ch) {
	return (getPropertiesEx(ch) & 0x10) != 0;
}

bool CharacterDataLatin1::isUnicodeIdentifierPart(int32_t ch) {
	bool var$0 = (getPropertiesEx(ch) & 0x20) != 0;
	return var$0 || isIdentifierIgnorable(ch);
}

bool CharacterDataLatin1::isIdentifierIgnorable(int32_t ch) {
	int32_t props = getProperties(ch);
	return ((props & 0x7000) == 0x1000);
}

int32_t CharacterDataLatin1::toLowerCase(int32_t ch) {
	int32_t mapChar = ch;
	int32_t val = getProperties(ch);
	if (((val & 0x00020000) != 0) && ((val & 0x07fc0000) != 0x07fc0000)) {
		int32_t offset = $sr(val << 5, 5 + 18);
		mapChar = ch + offset;
	}
	return mapChar;
}

int32_t CharacterDataLatin1::toUpperCase(int32_t ch) {
	int32_t mapChar = ch;
	int32_t val = getProperties(ch);
	if ((val & 0x00010000) != 0) {
		if ((val & 0x07fc0000) != 0x07fc0000) {
			int32_t offset = $sr(val << 5, 5 + 18);
			mapChar = ch - offset;
		} else if (ch == 181) {
			mapChar = 924;
		}
	}
	return mapChar;
}

int32_t CharacterDataLatin1::toTitleCase(int32_t ch) {
	return toUpperCase(ch);
}

int32_t CharacterDataLatin1::digit(int32_t ch, int32_t radix) {
	int32_t value = CharacterDataLatin1::DIGITS->get(ch);
	return (value >= 0 && value < radix && radix >= $Character::MIN_RADIX && radix <= $Character::MAX_RADIX) ? value : -1;
}

int32_t CharacterDataLatin1::getNumericValue(int32_t ch) {
	int32_t val = getProperties(ch);
	int32_t retval = -1;
	do {
		int32_t var$0 = val & 0x0c00;
		if (var$0 == (0)) {
			goto case$0;
		}
		if (var$0 == (1024)) {
			goto case$1;
		}
		if (var$0 == (2048)) {
			goto case$2;
		}
		if (var$0 == (3072)) {
			goto case$3;
		}
		goto case$4;
case$4:
		// default
case$0:
		// (0)
		retval = -1;
		break;
case$1:
		// (1024)
		retval = (ch + ((val & 0x03e0) >> 5)) & 0x1f;
		break;
case$2:
		// (2048)
		retval = -2;
		break;
case$3:
		// (3072)
		retval = ((ch + ((val & 0x03e0) >> 5)) & 0x1f) + 0x0a;
		break;
	} while (false);
	return retval;
}

bool CharacterDataLatin1::isWhitespace(int32_t ch) {
	int32_t props = getProperties(ch);
	return ((props & 0x7000) == 0x4000);
}

int8_t CharacterDataLatin1::getDirectionality(int32_t ch) {
	int32_t val = getProperties(ch);
	int8_t directionality = (int8_t)((val & 0x78000000) >> 0x1b);
	if (directionality == 15) {
		directionality = -1;
	}
	return directionality;
}

bool CharacterDataLatin1::isMirrored(int32_t ch) {
	int32_t props = getProperties(ch);
	return ((props & (int32_t)0x80000000) != 0);
}

int32_t CharacterDataLatin1::toUpperCaseEx(int32_t ch) {
	int32_t mapChar = ch;
	int32_t val = getProperties(ch);
	if ((val & 0x00010000) != 0) {
		if ((val & 0x07fc0000) != 0x07fc0000) {
			int32_t offset = $sr(val << 5, 5 + 18);
			mapChar = ch - offset;
		} else {
			switch (ch) {
			case 181:
				mapChar = 924;
				break;
			default:
				mapChar = $Character::ERROR;
				break;
			}
		}
	}
	return mapChar;
}

$chars* CharacterDataLatin1::toUpperCaseCharArray(int32_t ch) {
	$var($chars, upperMap, $new($chars, {(char16_t)ch}));
	if (ch == 223) {
		$assign(upperMap, CharacterDataLatin1::sharpsMap);
	}
	return upperMap;
}

void CharacterDataLatin1::init$() {
	$CharacterData::init$();
}

void CharacterDataLatin1::clinit$($Class* clazz) {
	$assignStatic(CharacterDataLatin1::DIGITS, $new($bytes, {
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		0,
		1,
		2,
		3,
		4,
		5,
		6,
		7,
		8,
		9,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		10,
		11,
		12,
		13,
		14,
		15,
		16,
		17,
		18,
		19,
		20,
		21,
		22,
		23,
		24,
		25,
		26,
		27,
		28,
		29,
		30,
		31,
		32,
		33,
		34,
		35,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		10,
		11,
		12,
		13,
		14,
		15,
		16,
		17,
		18,
		19,
		20,
		21,
		22,
		23,
		24,
		25,
		26,
		27,
		28,
		29,
		30,
		31,
		32,
		33,
		34,
		35,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1,
		-1
	}));
	$assignStatic(CharacterDataLatin1::sharpsMap, $new($chars, {
		u'S',
		u'S'
	}));
	$assignStatic(CharacterDataLatin1::instance, $new(CharacterDataLatin1));
	$assignStatic(CharacterDataLatin1::A, $new($ints, {
		0x4800100f,
		0x4800100f,
		0x4800100f,
		0x4800100f,
		0x4800100f,
		0x4800100f,
		0x4800100f,
		0x4800100f,
		0x4800100f,
		0x5800400f,
		0x5000400f,
		0x5800400f,
		0x6000400f,
		0x5000400f,
		0x4800100f,
		0x4800100f,
		0x4800100f,
		0x4800100f,
		0x4800100f,
		0x4800100f,
		0x4800100f,
		0x4800100f,
		0x4800100f,
		0x4800100f,
		0x4800100f,
		0x4800100f,
		0x4800100f,
		0x4800100f,
		0x5000400f,
		0x5000400f,
		0x5000400f,
		0x5800400f,
		0x6000400c,
		0x68000018,
		0x68000018,
		0x28000018,
		0x2800601a,
		0x28000018,
		0x68000018,
		0x68000018,
		-0x17ffffeb,
		-0x17ffffea,
		0x68000018,
		0x20000019,
		0x38000018,
		0x20000014,
		0x38000018,
		0x38000018,
		-(int32_t)0xe7ffc9f7,
		-(int32_t)0xe7ffc9f7,
		-(int32_t)0xe7ffc9f7,
		-(int32_t)0xe7ffc9f7,
		-(int32_t)0xe7ffc9f7,
		-(int32_t)0xe7ffc9f7,
		-(int32_t)0xe7ffc9f7,
		-(int32_t)0xe7ffc9f7,
		-(int32_t)0xe7ffc9f7,
		-(int32_t)0xe7ffc9f7,
		0x38000018,
		0x68000018,
		-0x17ffffe7,
		0x68000019,
		-0x17ffffe7,
		0x68000018,
		0x68000018,
		-(int32_t)0xff7d801f,
		-(int32_t)0xff7d801f,
		-(int32_t)0xff7d801f,
		-(int32_t)0xff7d801f,
		-(int32_t)0xff7d801f,
		-(int32_t)0xff7d801f,
		-(int32_t)0xff7d801f,
		-(int32_t)0xff7d801f,
		-(int32_t)0xff7d801f,
		-(int32_t)0xff7d801f,
		-(int32_t)0xff7d801f,
		-(int32_t)0xff7d801f,
		-(int32_t)0xff7d801f,
		-(int32_t)0xff7d801f,
		-(int32_t)0xff7d801f,
		-(int32_t)0xff7d801f,
		-(int32_t)0xff7d801f,
		-(int32_t)0xff7d801f,
		-(int32_t)0xff7d801f,
		-(int32_t)0xff7d801f,
		-(int32_t)0xff7d801f,
		-(int32_t)0xff7d801f,
		-(int32_t)0xff7d801f,
		-(int32_t)0xff7d801f,
		-(int32_t)0xff7d801f,
		-(int32_t)0xff7d801f,
		-0x17ffffeb,
		0x68000018,
		-0x17ffffea,
		0x6800001b,
		-(int32_t)0x97ffafe9,
		0x6800001b,
		-(int32_t)0xff7e801e,
		-(int32_t)0xff7e801e,
		-(int32_t)0xff7e801e,
		-(int32_t)0xff7e801e,
		-(int32_t)0xff7e801e,
		-(int32_t)0xff7e801e,
		-(int32_t)0xff7e801e,
		-(int32_t)0xff7e801e,
		-(int32_t)0xff7e801e,
		-(int32_t)0xff7e801e,
		-(int32_t)0xff7e801e,
		-(int32_t)0xff7e801e,
		-(int32_t)0xff7e801e,
		-(int32_t)0xff7e801e,
		-(int32_t)0xff7e801e,
		-(int32_t)0xff7e801e,
		-(int32_t)0xff7e801e,
		-(int32_t)0xff7e801e,
		-(int32_t)0xff7e801e,
		-(int32_t)0xff7e801e,
		-(int32_t)0xff7e801e,
		-(int32_t)0xff7e801e,
		-(int32_t)0xff7e801e,
		-(int32_t)0xff7e801e,
		-(int32_t)0xff7e801e,
		-(int32_t)0xff7e801e,
		-0x17ffffeb,
		0x68000019,
		-0x17ffffea,
		0x68000019,
		0x4800100f,
		0x4800100f,
		0x4800100f,
		0x4800100f,
		0x4800100f,
		0x4800100f,
		0x5000100f,
		0x4800100f,
		0x4800100f,
		0x4800100f,
		0x4800100f,
		0x4800100f,
		0x4800100f,
		0x4800100f,
		0x4800100f,
		0x4800100f,
		0x4800100f,
		0x4800100f,
		0x4800100f,
		0x4800100f,
		0x4800100f,
		0x4800100f,
		0x4800100f,
		0x4800100f,
		0x4800100f,
		0x4800100f,
		0x4800100f,
		0x4800100f,
		0x4800100f,
		0x4800100f,
		0x4800100f,
		0x4800100f,
		0x4800100f,
		0x3800000c,
		0x68000018,
		0x2800601a,
		0x2800601a,
		0x2800601a,
		0x2800601a,
		0x6800001c,
		0x68000018,
		0x6800001b,
		0x6800001c,
		-(int32_t)0xffff8ffb,
		-0x17ffffe3,
		0x68000019,
		0x48001010,
		0x6800001c,
		0x6800001b,
		0x2800001c,
		0x28000019,
		0x1800060b,
		0x1800060b,
		0x6800001b,
		-(int32_t)0xf8028ffe,
		0x68000018,
		-(int32_t)0x97ffffe8,
		0x6800001b,
		0x1800050b,
		-(int32_t)0xffff8ffb,
		-0x17ffffe2,
		0x6800080b,
		0x6800080b,
		0x6800080b,
		0x68000018,
		-(int32_t)0xff7d8fff,
		-(int32_t)0xff7d8fff,
		-(int32_t)0xff7d8fff,
		-(int32_t)0xff7d8fff,
		-(int32_t)0xff7d8fff,
		-(int32_t)0xff7d8fff,
		-(int32_t)0xff7d8fff,
		-(int32_t)0xff7d8fff,
		-(int32_t)0xff7d8fff,
		-(int32_t)0xff7d8fff,
		-(int32_t)0xff7d8fff,
		-(int32_t)0xff7d8fff,
		-(int32_t)0xff7d8fff,
		-(int32_t)0xff7d8fff,
		-(int32_t)0xff7d8fff,
		-(int32_t)0xff7d8fff,
		-(int32_t)0xff7d8fff,
		-(int32_t)0xff7d8fff,
		-(int32_t)0xff7d8fff,
		-(int32_t)0xff7d8fff,
		-(int32_t)0xff7d8fff,
		-(int32_t)0xff7d8fff,
		-(int32_t)0xff7d8fff,
		0x68000019,
		-(int32_t)0xff7d8fff,
		-(int32_t)0xff7d8fff,
		-(int32_t)0xff7d8fff,
		-(int32_t)0xff7d8fff,
		-(int32_t)0xff7d8fff,
		-(int32_t)0xff7d8fff,
		-(int32_t)0xff7d8fff,
		-(int32_t)0xf8028ffe,
		-(int32_t)0xff7e8ffe,
		-(int32_t)0xff7e8ffe,
		-(int32_t)0xff7e8ffe,
		-(int32_t)0xff7e8ffe,
		-(int32_t)0xff7e8ffe,
		-(int32_t)0xff7e8ffe,
		-(int32_t)0xff7e8ffe,
		-(int32_t)0xff7e8ffe,
		-(int32_t)0xff7e8ffe,
		-(int32_t)0xff7e8ffe,
		-(int32_t)0xff7e8ffe,
		-(int32_t)0xff7e8ffe,
		-(int32_t)0xff7e8ffe,
		-(int32_t)0xff7e8ffe,
		-(int32_t)0xff7e8ffe,
		-(int32_t)0xff7e8ffe,
		-(int32_t)0xff7e8ffe,
		-(int32_t)0xff7e8ffe,
		-(int32_t)0xff7e8ffe,
		-(int32_t)0xff7e8ffe,
		-(int32_t)0xff7e8ffe,
		-(int32_t)0xff7e8ffe,
		-(int32_t)0xff7e8ffe,
		0x68000019,
		-(int32_t)0xff7e8ffe,
		-(int32_t)0xff7e8ffe,
		-(int32_t)0xff7e8ffe,
		-(int32_t)0xff7e8ffe,
		-(int32_t)0xff7e8ffe,
		-(int32_t)0xff7e8ffe,
		-(int32_t)0xff7e8ffe,
		-(int32_t)0xf9e28ffe
	}));
	$assignStatic(CharacterDataLatin1::B, $new($bytes, {
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		32,
		32,
		32,
		32,
		32,
		32,
		32,
		32,
		32,
		32,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		50,
		50,
		50,
		50,
		50,
		50,
		50,
		50,
		50,
		50,
		50,
		50,
		50,
		50,
		50,
		50,
		50,
		50,
		50,
		50,
		50,
		50,
		50,
		50,
		50,
		50,
		0,
		0,
		0,
		0,
		32,
		0,
		49,
		49,
		49,
		49,
		49,
		49,
		49,
		49,
		49,
		49,
		49,
		49,
		49,
		49,
		49,
		49,
		49,
		49,
		49,
		49,
		49,
		49,
		49,
		49,
		49,
		49,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		49,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		0,
		49,
		0,
		32,
		0,
		0,
		49,
		0,
		0,
		0,
		0,
		0,
		50,
		50,
		50,
		50,
		50,
		50,
		50,
		50,
		50,
		50,
		50,
		50,
		50,
		50,
		50,
		50,
		50,
		50,
		50,
		50,
		50,
		50,
		50,
		0,
		50,
		50,
		50,
		50,
		50,
		50,
		50,
		49,
		49,
		49,
		49,
		49,
		49,
		49,
		49,
		49,
		49,
		49,
		49,
		49,
		49,
		49,
		49,
		49,
		49,
		49,
		49,
		49,
		49,
		49,
		49,
		0,
		49,
		49,
		49,
		49,
		49,
		49,
		49,
		49
	}));
	{
	}
}

CharacterDataLatin1::CharacterDataLatin1() {
}

$Class* CharacterDataLatin1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"DIGITS", "[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CharacterDataLatin1, DIGITS)},
		{"sharpsMap", "[C", nullptr, $STATIC, $staticField(CharacterDataLatin1, sharpsMap)},
		{"instance", "Ljava/lang/CharacterDataLatin1;", nullptr, $STATIC | $FINAL, $staticField(CharacterDataLatin1, instance)},
		{"A", "[I", nullptr, $STATIC | $FINAL, $staticField(CharacterDataLatin1, A)},
		{"B", "[B", nullptr, $STATIC | $FINAL, $staticField(CharacterDataLatin1, B)},
		{}
	};
	$CompoundAttribute isDigitmethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute isLowerCasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute isUpperCasemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$CompoundAttribute isWhitespacemethodAnnotations$$[] = {
		{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(CharacterDataLatin1, init$, void)},
		{"digit", "(II)I", nullptr, 0, $virtualMethod(CharacterDataLatin1, digit, int32_t, int32_t, int32_t)},
		{"getDirectionality", "(I)B", nullptr, 0, $virtualMethod(CharacterDataLatin1, getDirectionality, int8_t, int32_t)},
		{"getNumericValue", "(I)I", nullptr, 0, $virtualMethod(CharacterDataLatin1, getNumericValue, int32_t, int32_t)},
		{"getProperties", "(I)I", nullptr, 0, $virtualMethod(CharacterDataLatin1, getProperties, int32_t, int32_t)},
		{"getPropertiesEx", "(I)I", nullptr, 0, $virtualMethod(CharacterDataLatin1, getPropertiesEx, int32_t, int32_t)},
		{"getType", "(I)I", nullptr, 0, $virtualMethod(CharacterDataLatin1, getType, int32_t, int32_t)},
		{"isDigit", "(I)Z", nullptr, 0, $virtualMethod(CharacterDataLatin1, isDigit, bool, int32_t), nullptr, nullptr, isDigitmethodAnnotations$$},
		{"isIdentifierIgnorable", "(I)Z", nullptr, 0, $virtualMethod(CharacterDataLatin1, isIdentifierIgnorable, bool, int32_t)},
		{"isIdeographic", "(I)Z", nullptr, 0, $virtualMethod(CharacterDataLatin1, isIdeographic, bool, int32_t)},
		{"isJavaIdentifierPart", "(I)Z", nullptr, 0, $virtualMethod(CharacterDataLatin1, isJavaIdentifierPart, bool, int32_t)},
		{"isJavaIdentifierStart", "(I)Z", nullptr, 0, $virtualMethod(CharacterDataLatin1, isJavaIdentifierStart, bool, int32_t)},
		{"isLowerCase", "(I)Z", nullptr, 0, $virtualMethod(CharacterDataLatin1, isLowerCase, bool, int32_t), nullptr, nullptr, isLowerCasemethodAnnotations$$},
		{"isMirrored", "(I)Z", nullptr, 0, $virtualMethod(CharacterDataLatin1, isMirrored, bool, int32_t)},
		{"isOtherAlphabetic", "(I)Z", nullptr, 0, $virtualMethod(CharacterDataLatin1, isOtherAlphabetic, bool, int32_t)},
		{"isUnicodeIdentifierPart", "(I)Z", nullptr, 0, $virtualMethod(CharacterDataLatin1, isUnicodeIdentifierPart, bool, int32_t)},
		{"isUnicodeIdentifierStart", "(I)Z", nullptr, 0, $virtualMethod(CharacterDataLatin1, isUnicodeIdentifierStart, bool, int32_t)},
		{"isUpperCase", "(I)Z", nullptr, 0, $virtualMethod(CharacterDataLatin1, isUpperCase, bool, int32_t), nullptr, nullptr, isUpperCasemethodAnnotations$$},
		{"isWhitespace", "(I)Z", nullptr, 0, $virtualMethod(CharacterDataLatin1, isWhitespace, bool, int32_t), nullptr, nullptr, isWhitespacemethodAnnotations$$},
		{"toLowerCase", "(I)I", nullptr, 0, $virtualMethod(CharacterDataLatin1, toLowerCase, int32_t, int32_t)},
		{"toTitleCase", "(I)I", nullptr, 0, $virtualMethod(CharacterDataLatin1, toTitleCase, int32_t, int32_t)},
		{"toUpperCase", "(I)I", nullptr, 0, $virtualMethod(CharacterDataLatin1, toUpperCase, int32_t, int32_t)},
		{"toUpperCaseCharArray", "(I)[C", nullptr, 0, $virtualMethod(CharacterDataLatin1, toUpperCaseCharArray, $chars*, int32_t)},
		{"toUpperCaseEx", "(I)I", nullptr, 0, $virtualMethod(CharacterDataLatin1, toUpperCaseEx, int32_t, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.CharacterDataLatin1",
		"java.lang.CharacterData",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(CharacterDataLatin1, name, initialize, &classInfo$$, CharacterDataLatin1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(CharacterDataLatin1);
	});
	return class$;
}

$Class* CharacterDataLatin1::class$ = nullptr;

	} // lang
} // java