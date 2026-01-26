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

$CompoundAttribute _CharacterDataLatin1_MethodAnnotations_isDigit7[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _CharacterDataLatin1_MethodAnnotations_isLowerCase12[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _CharacterDataLatin1_MethodAnnotations_isUpperCase17[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _CharacterDataLatin1_MethodAnnotations_isWhitespace18[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$FieldInfo _CharacterDataLatin1_FieldInfo_[] = {
	{"DIGITS", "[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CharacterDataLatin1, DIGITS)},
	{"sharpsMap", "[C", nullptr, $STATIC, $staticField(CharacterDataLatin1, sharpsMap)},
	{"instance", "Ljava/lang/CharacterDataLatin1;", nullptr, $STATIC | $FINAL, $staticField(CharacterDataLatin1, instance)},
	{"A", "[I", nullptr, $STATIC | $FINAL, $staticField(CharacterDataLatin1, A)},
	{"B", "[B", nullptr, $STATIC | $FINAL, $staticField(CharacterDataLatin1, B)},
	{}
};

$MethodInfo _CharacterDataLatin1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(CharacterDataLatin1, init$, void)},
	{"digit", "(II)I", nullptr, 0, $virtualMethod(CharacterDataLatin1, digit, int32_t, int32_t, int32_t)},
	{"getDirectionality", "(I)B", nullptr, 0, $virtualMethod(CharacterDataLatin1, getDirectionality, int8_t, int32_t)},
	{"getNumericValue", "(I)I", nullptr, 0, $virtualMethod(CharacterDataLatin1, getNumericValue, int32_t, int32_t)},
	{"getProperties", "(I)I", nullptr, 0, $virtualMethod(CharacterDataLatin1, getProperties, int32_t, int32_t)},
	{"getPropertiesEx", "(I)I", nullptr, 0, $virtualMethod(CharacterDataLatin1, getPropertiesEx, int32_t, int32_t)},
	{"getType", "(I)I", nullptr, 0, $virtualMethod(CharacterDataLatin1, getType, int32_t, int32_t)},
	{"isDigit", "(I)Z", nullptr, 0, $virtualMethod(CharacterDataLatin1, isDigit, bool, int32_t), nullptr, nullptr, _CharacterDataLatin1_MethodAnnotations_isDigit7},
	{"isIdentifierIgnorable", "(I)Z", nullptr, 0, $virtualMethod(CharacterDataLatin1, isIdentifierIgnorable, bool, int32_t)},
	{"isIdeographic", "(I)Z", nullptr, 0, $virtualMethod(CharacterDataLatin1, isIdeographic, bool, int32_t)},
	{"isJavaIdentifierPart", "(I)Z", nullptr, 0, $virtualMethod(CharacterDataLatin1, isJavaIdentifierPart, bool, int32_t)},
	{"isJavaIdentifierStart", "(I)Z", nullptr, 0, $virtualMethod(CharacterDataLatin1, isJavaIdentifierStart, bool, int32_t)},
	{"isLowerCase", "(I)Z", nullptr, 0, $virtualMethod(CharacterDataLatin1, isLowerCase, bool, int32_t), nullptr, nullptr, _CharacterDataLatin1_MethodAnnotations_isLowerCase12},
	{"isMirrored", "(I)Z", nullptr, 0, $virtualMethod(CharacterDataLatin1, isMirrored, bool, int32_t)},
	{"isOtherAlphabetic", "(I)Z", nullptr, 0, $virtualMethod(CharacterDataLatin1, isOtherAlphabetic, bool, int32_t)},
	{"isUnicodeIdentifierPart", "(I)Z", nullptr, 0, $virtualMethod(CharacterDataLatin1, isUnicodeIdentifierPart, bool, int32_t)},
	{"isUnicodeIdentifierStart", "(I)Z", nullptr, 0, $virtualMethod(CharacterDataLatin1, isUnicodeIdentifierStart, bool, int32_t)},
	{"isUpperCase", "(I)Z", nullptr, 0, $virtualMethod(CharacterDataLatin1, isUpperCase, bool, int32_t), nullptr, nullptr, _CharacterDataLatin1_MethodAnnotations_isUpperCase17},
	{"isWhitespace", "(I)Z", nullptr, 0, $virtualMethod(CharacterDataLatin1, isWhitespace, bool, int32_t), nullptr, nullptr, _CharacterDataLatin1_MethodAnnotations_isWhitespace18},
	{"toLowerCase", "(I)I", nullptr, 0, $virtualMethod(CharacterDataLatin1, toLowerCase, int32_t, int32_t)},
	{"toTitleCase", "(I)I", nullptr, 0, $virtualMethod(CharacterDataLatin1, toTitleCase, int32_t, int32_t)},
	{"toUpperCase", "(I)I", nullptr, 0, $virtualMethod(CharacterDataLatin1, toUpperCase, int32_t, int32_t)},
	{"toUpperCaseCharArray", "(I)[C", nullptr, 0, $virtualMethod(CharacterDataLatin1, toUpperCaseCharArray, $chars*, int32_t)},
	{"toUpperCaseEx", "(I)I", nullptr, 0, $virtualMethod(CharacterDataLatin1, toUpperCaseEx, int32_t, int32_t)},
	{}
};

$ClassInfo _CharacterDataLatin1_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.CharacterDataLatin1",
	"java.lang.CharacterData",
	nullptr,
	_CharacterDataLatin1_FieldInfo_,
	_CharacterDataLatin1_MethodInfo_
};

$Object* allocate$CharacterDataLatin1($Class* clazz) {
	return $of($alloc(CharacterDataLatin1));
}

$bytes* CharacterDataLatin1::DIGITS = nullptr;
$chars* CharacterDataLatin1::sharpsMap = nullptr;
CharacterDataLatin1* CharacterDataLatin1::instance = nullptr;
$ints* CharacterDataLatin1::A = nullptr;
$bytes* CharacterDataLatin1::B = nullptr;

int32_t CharacterDataLatin1::getProperties(int32_t ch) {
	char16_t offset = (char16_t)ch;
	int32_t props = $nc(CharacterDataLatin1::A)->get(offset);
	return props;
}

int32_t CharacterDataLatin1::getPropertiesEx(int32_t ch) {
	char16_t offset = (char16_t)ch;
	int32_t props = $nc(CharacterDataLatin1::B)->get(offset);
	return props;
}

bool CharacterDataLatin1::isDigit(int32_t ch) {
	return u'0' <= ch && ch <= u'9';
}

bool CharacterDataLatin1::isLowerCase(int32_t ch) {
	return ((int32_t)(getPropertiesEx(ch) & (uint32_t)1)) != 0;
}

bool CharacterDataLatin1::isUpperCase(int32_t ch) {
	return ((int32_t)(getPropertiesEx(ch) & (uint32_t)2)) != 0;
}

bool CharacterDataLatin1::isOtherAlphabetic(int32_t ch) {
	int32_t props = getPropertiesEx(ch);
	return ((int32_t)(props & (uint32_t)4)) != 0;
}

bool CharacterDataLatin1::isIdeographic(int32_t ch) {
	int32_t props = getPropertiesEx(ch);
	return ((int32_t)(props & (uint32_t)8)) != 0;
}

int32_t CharacterDataLatin1::getType(int32_t ch) {
	int32_t props = getProperties(ch);
	return ((int32_t)(props & (uint32_t)31));
}

bool CharacterDataLatin1::isJavaIdentifierStart(int32_t ch) {
	int32_t props = getProperties(ch);
	return (((int32_t)(props & (uint32_t)28672)) >= 20480);
}

bool CharacterDataLatin1::isJavaIdentifierPart(int32_t ch) {
	int32_t props = getProperties(ch);
	return (((int32_t)(props & (uint32_t)12288)) != 0);
}

bool CharacterDataLatin1::isUnicodeIdentifierStart(int32_t ch) {
	return ((int32_t)(getPropertiesEx(ch) & (uint32_t)16)) != 0;
}

bool CharacterDataLatin1::isUnicodeIdentifierPart(int32_t ch) {
	bool var$0 = ((int32_t)(getPropertiesEx(ch) & (uint32_t)32)) != 0;
	return var$0 || isIdentifierIgnorable(ch);
}

bool CharacterDataLatin1::isIdentifierIgnorable(int32_t ch) {
	int32_t props = getProperties(ch);
	return (((int32_t)(props & (uint32_t)28672)) == 4096);
}

int32_t CharacterDataLatin1::toLowerCase(int32_t ch) {
	int32_t mapChar = ch;
	int32_t val = getProperties(ch);
	if ((((int32_t)(val & (uint32_t)0x00020000)) != 0) && (((int32_t)(val & (uint32_t)0x07FC0000)) != 0x07FC0000)) {
		int32_t offset = $sr(val << 5, 5 + 18);
		mapChar = ch + offset;
	}
	return mapChar;
}

int32_t CharacterDataLatin1::toUpperCase(int32_t ch) {
	int32_t mapChar = ch;
	int32_t val = getProperties(ch);
	if (((int32_t)(val & (uint32_t)0x00010000)) != 0) {
		if (((int32_t)(val & (uint32_t)0x07FC0000)) != 0x07FC0000) {
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
	int32_t value = $nc(CharacterDataLatin1::DIGITS)->get(ch);
	return (value >= 0 && value < radix && radix >= $Character::MIN_RADIX && radix <= $Character::MAX_RADIX) ? value : -1;
}

int32_t CharacterDataLatin1::getNumericValue(int32_t ch) {
	int32_t val = getProperties(ch);
	int32_t retval = -1;
	do {
		int32_t var$0 = (int32_t)(val & (uint32_t)3072);
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
		{
		}
case$0:
		// (0)
		{
			retval = -1;
			break;
		}
case$1:
		// (1024)
		{
			retval = (int32_t)((ch + (((int32_t)(val & (uint32_t)992)) >> 5)) & (uint32_t)31);
			break;
		}
case$2:
		// (2048)
		{
			retval = -2;
			break;
		}
case$3:
		// (3072)
		{
			retval = ((int32_t)((ch + (((int32_t)(val & (uint32_t)992)) >> 5)) & (uint32_t)31)) + 10;
			break;
		}
	} while (false);
	return retval;
}

bool CharacterDataLatin1::isWhitespace(int32_t ch) {
	int32_t props = getProperties(ch);
	return (((int32_t)(props & (uint32_t)28672)) == 16384);
}

int8_t CharacterDataLatin1::getDirectionality(int32_t ch) {
	int32_t val = getProperties(ch);
	int8_t directionality = (int8_t)(((int32_t)(val & (uint32_t)0x78000000)) >> 27);
	if (directionality == 15) {
		directionality = (int8_t)-1;
	}
	return directionality;
}

bool CharacterDataLatin1::isMirrored(int32_t ch) {
	int32_t props = getProperties(ch);
	return (((int32_t)(props & (uint32_t)(int32_t)0x80000000)) != 0);
}

int32_t CharacterDataLatin1::toUpperCaseEx(int32_t ch) {
	int32_t mapChar = ch;
	int32_t val = getProperties(ch);
	if (((int32_t)(val & (uint32_t)0x00010000)) != 0) {
		if (((int32_t)(val & (uint32_t)0x07FC0000)) != 0x07FC0000) {
			int32_t offset = $sr(val << 5, 5 + 18);
			mapChar = ch - offset;
		} else {
			switch (ch) {
			case 181:
				{
					mapChar = 924;
					break;
				}
			default:
				{
					mapChar = $Character::ERROR;
					break;
				}
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

void clinit$CharacterDataLatin1($Class* class$) {
	$assignStatic(CharacterDataLatin1::DIGITS, $new($bytes, {
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)0,
		(int8_t)1,
		(int8_t)2,
		(int8_t)3,
		(int8_t)4,
		(int8_t)5,
		(int8_t)6,
		(int8_t)7,
		(int8_t)8,
		(int8_t)9,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)10,
		(int8_t)11,
		(int8_t)12,
		(int8_t)13,
		(int8_t)14,
		(int8_t)15,
		(int8_t)16,
		(int8_t)17,
		(int8_t)18,
		(int8_t)19,
		(int8_t)20,
		(int8_t)21,
		(int8_t)22,
		(int8_t)23,
		(int8_t)24,
		(int8_t)25,
		(int8_t)26,
		(int8_t)27,
		(int8_t)28,
		(int8_t)29,
		(int8_t)30,
		(int8_t)31,
		(int8_t)32,
		(int8_t)33,
		(int8_t)34,
		(int8_t)35,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)10,
		(int8_t)11,
		(int8_t)12,
		(int8_t)13,
		(int8_t)14,
		(int8_t)15,
		(int8_t)16,
		(int8_t)17,
		(int8_t)18,
		(int8_t)19,
		(int8_t)20,
		(int8_t)21,
		(int8_t)22,
		(int8_t)23,
		(int8_t)24,
		(int8_t)25,
		(int8_t)26,
		(int8_t)27,
		(int8_t)28,
		(int8_t)29,
		(int8_t)30,
		(int8_t)31,
		(int8_t)32,
		(int8_t)33,
		(int8_t)34,
		(int8_t)35,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1,
		(int8_t)-1
	}));
	$assignStatic(CharacterDataLatin1::sharpsMap, $new($chars, {
		u'S',
		u'S'
	}));
	$assignStatic(CharacterDataLatin1::instance, $new(CharacterDataLatin1));
	$assignStatic(CharacterDataLatin1::A, $new($ints, {
		0x4800100F,
		0x4800100F,
		0x4800100F,
		0x4800100F,
		0x4800100F,
		0x4800100F,
		0x4800100F,
		0x4800100F,
		0x4800100F,
		0x5800400F,
		0x5000400F,
		0x5800400F,
		0x6000400F,
		0x5000400F,
		0x4800100F,
		0x4800100F,
		0x4800100F,
		0x4800100F,
		0x4800100F,
		0x4800100F,
		0x4800100F,
		0x4800100F,
		0x4800100F,
		0x4800100F,
		0x4800100F,
		0x4800100F,
		0x4800100F,
		0x4800100F,
		0x5000400F,
		0x5000400F,
		0x5000400F,
		0x5800400F,
		0x6000400C,
		0x68000018,
		0x68000018,
		0x28000018,
		0x2800601A,
		0x28000018,
		0x68000018,
		0x68000018,
		-0x17FFFFEB,
		-0x17FFFFEA,
		0x68000018,
		0x20000019,
		0x38000018,
		0x20000014,
		0x38000018,
		0x38000018,
		-(int32_t)0xE7FFC9F7,
		-(int32_t)0xE7FFC9F7,
		-(int32_t)0xE7FFC9F7,
		-(int32_t)0xE7FFC9F7,
		-(int32_t)0xE7FFC9F7,
		-(int32_t)0xE7FFC9F7,
		-(int32_t)0xE7FFC9F7,
		-(int32_t)0xE7FFC9F7,
		-(int32_t)0xE7FFC9F7,
		-(int32_t)0xE7FFC9F7,
		0x38000018,
		0x68000018,
		-0x17FFFFE7,
		0x68000019,
		-0x17FFFFE7,
		0x68000018,
		0x68000018,
		-(int32_t)0xFF7D801F,
		-(int32_t)0xFF7D801F,
		-(int32_t)0xFF7D801F,
		-(int32_t)0xFF7D801F,
		-(int32_t)0xFF7D801F,
		-(int32_t)0xFF7D801F,
		-(int32_t)0xFF7D801F,
		-(int32_t)0xFF7D801F,
		-(int32_t)0xFF7D801F,
		-(int32_t)0xFF7D801F,
		-(int32_t)0xFF7D801F,
		-(int32_t)0xFF7D801F,
		-(int32_t)0xFF7D801F,
		-(int32_t)0xFF7D801F,
		-(int32_t)0xFF7D801F,
		-(int32_t)0xFF7D801F,
		-(int32_t)0xFF7D801F,
		-(int32_t)0xFF7D801F,
		-(int32_t)0xFF7D801F,
		-(int32_t)0xFF7D801F,
		-(int32_t)0xFF7D801F,
		-(int32_t)0xFF7D801F,
		-(int32_t)0xFF7D801F,
		-(int32_t)0xFF7D801F,
		-(int32_t)0xFF7D801F,
		-(int32_t)0xFF7D801F,
		-0x17FFFFEB,
		0x68000018,
		-0x17FFFFEA,
		0x6800001B,
		-(int32_t)0x97FFAFE9,
		0x6800001B,
		-(int32_t)0xFF7E801E,
		-(int32_t)0xFF7E801E,
		-(int32_t)0xFF7E801E,
		-(int32_t)0xFF7E801E,
		-(int32_t)0xFF7E801E,
		-(int32_t)0xFF7E801E,
		-(int32_t)0xFF7E801E,
		-(int32_t)0xFF7E801E,
		-(int32_t)0xFF7E801E,
		-(int32_t)0xFF7E801E,
		-(int32_t)0xFF7E801E,
		-(int32_t)0xFF7E801E,
		-(int32_t)0xFF7E801E,
		-(int32_t)0xFF7E801E,
		-(int32_t)0xFF7E801E,
		-(int32_t)0xFF7E801E,
		-(int32_t)0xFF7E801E,
		-(int32_t)0xFF7E801E,
		-(int32_t)0xFF7E801E,
		-(int32_t)0xFF7E801E,
		-(int32_t)0xFF7E801E,
		-(int32_t)0xFF7E801E,
		-(int32_t)0xFF7E801E,
		-(int32_t)0xFF7E801E,
		-(int32_t)0xFF7E801E,
		-(int32_t)0xFF7E801E,
		-0x17FFFFEB,
		0x68000019,
		-0x17FFFFEA,
		0x68000019,
		0x4800100F,
		0x4800100F,
		0x4800100F,
		0x4800100F,
		0x4800100F,
		0x4800100F,
		0x5000100F,
		0x4800100F,
		0x4800100F,
		0x4800100F,
		0x4800100F,
		0x4800100F,
		0x4800100F,
		0x4800100F,
		0x4800100F,
		0x4800100F,
		0x4800100F,
		0x4800100F,
		0x4800100F,
		0x4800100F,
		0x4800100F,
		0x4800100F,
		0x4800100F,
		0x4800100F,
		0x4800100F,
		0x4800100F,
		0x4800100F,
		0x4800100F,
		0x4800100F,
		0x4800100F,
		0x4800100F,
		0x4800100F,
		0x4800100F,
		0x3800000C,
		0x68000018,
		0x2800601A,
		0x2800601A,
		0x2800601A,
		0x2800601A,
		0x6800001C,
		0x68000018,
		0x6800001B,
		0x6800001C,
		- -28677,
		-0x17FFFFE3,
		0x68000019,
		0x48001010,
		0x6800001C,
		0x6800001B,
		0x2800001C,
		0x28000019,
		0x1800060B,
		0x1800060B,
		0x6800001B,
		-(int32_t)0xF8028FFE,
		0x68000018,
		-(int32_t)0x97FFFFE8,
		0x6800001B,
		0x1800050B,
		- -28677,
		-0x17FFFFE2,
		0x6800080B,
		0x6800080B,
		0x6800080B,
		0x68000018,
		-(int32_t)0xFF7D8FFF,
		-(int32_t)0xFF7D8FFF,
		-(int32_t)0xFF7D8FFF,
		-(int32_t)0xFF7D8FFF,
		-(int32_t)0xFF7D8FFF,
		-(int32_t)0xFF7D8FFF,
		-(int32_t)0xFF7D8FFF,
		-(int32_t)0xFF7D8FFF,
		-(int32_t)0xFF7D8FFF,
		-(int32_t)0xFF7D8FFF,
		-(int32_t)0xFF7D8FFF,
		-(int32_t)0xFF7D8FFF,
		-(int32_t)0xFF7D8FFF,
		-(int32_t)0xFF7D8FFF,
		-(int32_t)0xFF7D8FFF,
		-(int32_t)0xFF7D8FFF,
		-(int32_t)0xFF7D8FFF,
		-(int32_t)0xFF7D8FFF,
		-(int32_t)0xFF7D8FFF,
		-(int32_t)0xFF7D8FFF,
		-(int32_t)0xFF7D8FFF,
		-(int32_t)0xFF7D8FFF,
		-(int32_t)0xFF7D8FFF,
		0x68000019,
		-(int32_t)0xFF7D8FFF,
		-(int32_t)0xFF7D8FFF,
		-(int32_t)0xFF7D8FFF,
		-(int32_t)0xFF7D8FFF,
		-(int32_t)0xFF7D8FFF,
		-(int32_t)0xFF7D8FFF,
		-(int32_t)0xFF7D8FFF,
		-(int32_t)0xF8028FFE,
		-(int32_t)0xFF7E8FFE,
		-(int32_t)0xFF7E8FFE,
		-(int32_t)0xFF7E8FFE,
		-(int32_t)0xFF7E8FFE,
		-(int32_t)0xFF7E8FFE,
		-(int32_t)0xFF7E8FFE,
		-(int32_t)0xFF7E8FFE,
		-(int32_t)0xFF7E8FFE,
		-(int32_t)0xFF7E8FFE,
		-(int32_t)0xFF7E8FFE,
		-(int32_t)0xFF7E8FFE,
		-(int32_t)0xFF7E8FFE,
		-(int32_t)0xFF7E8FFE,
		-(int32_t)0xFF7E8FFE,
		-(int32_t)0xFF7E8FFE,
		-(int32_t)0xFF7E8FFE,
		-(int32_t)0xFF7E8FFE,
		-(int32_t)0xFF7E8FFE,
		-(int32_t)0xFF7E8FFE,
		-(int32_t)0xFF7E8FFE,
		-(int32_t)0xFF7E8FFE,
		-(int32_t)0xFF7E8FFE,
		-(int32_t)0xFF7E8FFE,
		0x68000019,
		-(int32_t)0xFF7E8FFE,
		-(int32_t)0xFF7E8FFE,
		-(int32_t)0xFF7E8FFE,
		-(int32_t)0xFF7E8FFE,
		-(int32_t)0xFF7E8FFE,
		-(int32_t)0xFF7E8FFE,
		-(int32_t)0xFF7E8FFE,
		-(int32_t)0xF9E28FFE
	}));
	$assignStatic(CharacterDataLatin1::B, $new($bytes, {
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)32,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)50,
		(int8_t)50,
		(int8_t)50,
		(int8_t)50,
		(int8_t)50,
		(int8_t)50,
		(int8_t)50,
		(int8_t)50,
		(int8_t)50,
		(int8_t)50,
		(int8_t)50,
		(int8_t)50,
		(int8_t)50,
		(int8_t)50,
		(int8_t)50,
		(int8_t)50,
		(int8_t)50,
		(int8_t)50,
		(int8_t)50,
		(int8_t)50,
		(int8_t)50,
		(int8_t)50,
		(int8_t)50,
		(int8_t)50,
		(int8_t)50,
		(int8_t)50,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)32,
		(int8_t)0,
		(int8_t)49,
		(int8_t)49,
		(int8_t)49,
		(int8_t)49,
		(int8_t)49,
		(int8_t)49,
		(int8_t)49,
		(int8_t)49,
		(int8_t)49,
		(int8_t)49,
		(int8_t)49,
		(int8_t)49,
		(int8_t)49,
		(int8_t)49,
		(int8_t)49,
		(int8_t)49,
		(int8_t)49,
		(int8_t)49,
		(int8_t)49,
		(int8_t)49,
		(int8_t)49,
		(int8_t)49,
		(int8_t)49,
		(int8_t)49,
		(int8_t)49,
		(int8_t)49,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)49,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)49,
		(int8_t)0,
		(int8_t)32,
		(int8_t)0,
		(int8_t)0,
		(int8_t)49,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)0,
		(int8_t)50,
		(int8_t)50,
		(int8_t)50,
		(int8_t)50,
		(int8_t)50,
		(int8_t)50,
		(int8_t)50,
		(int8_t)50,
		(int8_t)50,
		(int8_t)50,
		(int8_t)50,
		(int8_t)50,
		(int8_t)50,
		(int8_t)50,
		(int8_t)50,
		(int8_t)50,
		(int8_t)50,
		(int8_t)50,
		(int8_t)50,
		(int8_t)50,
		(int8_t)50,
		(int8_t)50,
		(int8_t)50,
		(int8_t)0,
		(int8_t)50,
		(int8_t)50,
		(int8_t)50,
		(int8_t)50,
		(int8_t)50,
		(int8_t)50,
		(int8_t)50,
		(int8_t)49,
		(int8_t)49,
		(int8_t)49,
		(int8_t)49,
		(int8_t)49,
		(int8_t)49,
		(int8_t)49,
		(int8_t)49,
		(int8_t)49,
		(int8_t)49,
		(int8_t)49,
		(int8_t)49,
		(int8_t)49,
		(int8_t)49,
		(int8_t)49,
		(int8_t)49,
		(int8_t)49,
		(int8_t)49,
		(int8_t)49,
		(int8_t)49,
		(int8_t)49,
		(int8_t)49,
		(int8_t)49,
		(int8_t)49,
		(int8_t)0,
		(int8_t)49,
		(int8_t)49,
		(int8_t)49,
		(int8_t)49,
		(int8_t)49,
		(int8_t)49,
		(int8_t)49,
		(int8_t)49
	}));
	{
	}
}

CharacterDataLatin1::CharacterDataLatin1() {
}

$Class* CharacterDataLatin1::load$($String* name, bool initialize) {
	$loadClass(CharacterDataLatin1, name, initialize, &_CharacterDataLatin1_ClassInfo_, clinit$CharacterDataLatin1, allocate$CharacterDataLatin1);
	return class$;
}

$Class* CharacterDataLatin1::class$ = nullptr;

	} // lang
} // java