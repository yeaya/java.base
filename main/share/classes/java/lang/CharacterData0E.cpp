#include <java/lang/CharacterData0E.h>

#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Character.h>
#include <java/lang/CharacterData.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef A
#undef B
#undef DIRECTIONALITY_UNDEFINED
#undef DECIMAL_DIGIT_NUMBER
#undef X
#undef MIN_RADIX
#undef Y
#undef A_DATA
#undef MAX_RADIX

using $AssertionError = ::java::lang::AssertionError;
using $Character = ::java::lang::Character;
using $CharacterData = ::java::lang::CharacterData;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {

$FieldInfo _CharacterData0E_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(CharacterData0E, $assertionsDisabled)},
	{"instance", "Ljava/lang/CharacterData;", nullptr, $STATIC | $FINAL, $staticField(CharacterData0E, instance)},
	{"X", "[C", nullptr, $STATIC | $FINAL, $staticField(CharacterData0E, X)},
	{"Y", "[C", nullptr, $STATIC | $FINAL, $staticField(CharacterData0E, Y)},
	{"A", "[I", nullptr, $STATIC | $FINAL, $staticField(CharacterData0E, A)},
	{"A_DATA", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(CharacterData0E, A_DATA)},
	{"B", "[C", nullptr, $STATIC | $FINAL, $staticField(CharacterData0E, B)},
	{}
};

$MethodInfo _CharacterData0E_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(CharacterData0E::*)()>(&CharacterData0E::init$))},
	{"digit", "(II)I", nullptr, 0},
	{"getDirectionality", "(I)B", nullptr, 0},
	{"getNumericValue", "(I)I", nullptr, 0},
	{"getProperties", "(I)I", nullptr, 0},
	{"getPropertiesEx", "(I)I", nullptr, 0},
	{"getType", "(I)I", nullptr, 0},
	{"isDigit", "(I)Z", nullptr, 0},
	{"isIdentifierIgnorable", "(I)Z", nullptr, 0},
	{"isIdeographic", "(I)Z", nullptr, 0},
	{"isJavaIdentifierPart", "(I)Z", nullptr, 0},
	{"isJavaIdentifierStart", "(I)Z", nullptr, 0},
	{"isLowerCase", "(I)Z", nullptr, 0},
	{"isMirrored", "(I)Z", nullptr, 0},
	{"isOtherAlphabetic", "(I)Z", nullptr, 0},
	{"isUnicodeIdentifierPart", "(I)Z", nullptr, 0},
	{"isUnicodeIdentifierStart", "(I)Z", nullptr, 0},
	{"isUpperCase", "(I)Z", nullptr, 0},
	{"isWhitespace", "(I)Z", nullptr, 0},
	{"toLowerCase", "(I)I", nullptr, 0},
	{"toTitleCase", "(I)I", nullptr, 0},
	{"toUpperCase", "(I)I", nullptr, 0},
	{}
};

$ClassInfo _CharacterData0E_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.CharacterData0E",
	"java.lang.CharacterData",
	nullptr,
	_CharacterData0E_FieldInfo_,
	_CharacterData0E_MethodInfo_
};

$Object* allocate$CharacterData0E($Class* clazz) {
	return $of($alloc(CharacterData0E));
}

bool CharacterData0E::$assertionsDisabled = false;
$CharacterData* CharacterData0E::instance = nullptr;
$chars* CharacterData0E::X = nullptr;
$chars* CharacterData0E::Y = nullptr;
$ints* CharacterData0E::A = nullptr;
$String* CharacterData0E::A_DATA = nullptr;
$chars* CharacterData0E::B = nullptr;

int32_t CharacterData0E::getProperties(int32_t ch) {
	char16_t offset = (char16_t)ch;
	int32_t props = $nc(CharacterData0E::A)->get($nc(CharacterData0E::Y)->get($nc(CharacterData0E::X)->get(offset >> 5) | ((int32_t)((offset >> 1) & (uint32_t)15))) | ((int32_t)(offset & (uint32_t)1)));
	return props;
}

int32_t CharacterData0E::getPropertiesEx(int32_t ch) {
	char16_t offset = (char16_t)ch;
	int32_t props = $nc(CharacterData0E::B)->get($nc(CharacterData0E::Y)->get($nc(CharacterData0E::X)->get(offset >> 5) | ((int32_t)((offset >> 1) & (uint32_t)15))) | ((int32_t)(offset & (uint32_t)1)));
	return props;
}

bool CharacterData0E::isOtherAlphabetic(int32_t ch) {
	int32_t props = getPropertiesEx(ch);
	return ((int32_t)(props & (uint32_t)4)) != 0;
}

bool CharacterData0E::isIdeographic(int32_t ch) {
	int32_t props = getPropertiesEx(ch);
	return ((int32_t)(props & (uint32_t)8)) != 0;
}

int32_t CharacterData0E::getType(int32_t ch) {
	int32_t props = getProperties(ch);
	return ((int32_t)(props & (uint32_t)31));
}

bool CharacterData0E::isJavaIdentifierStart(int32_t ch) {
	int32_t props = getProperties(ch);
	return (((int32_t)(props & (uint32_t)28672)) >= 20480);
}

bool CharacterData0E::isJavaIdentifierPart(int32_t ch) {
	int32_t props = getProperties(ch);
	return (((int32_t)(props & (uint32_t)12288)) != 0);
}

bool CharacterData0E::isUnicodeIdentifierStart(int32_t ch) {
	return ((int32_t)(getPropertiesEx(ch) & (uint32_t)16)) != 0;
}

bool CharacterData0E::isUnicodeIdentifierPart(int32_t ch) {
	bool var$0 = ((int32_t)(getPropertiesEx(ch) & (uint32_t)32)) != 0;
	return var$0 || isIdentifierIgnorable(ch);
}

bool CharacterData0E::isIdentifierIgnorable(int32_t ch) {
	int32_t props = getProperties(ch);
	return (((int32_t)(props & (uint32_t)28672)) == 4096);
}

int32_t CharacterData0E::toLowerCase(int32_t ch) {
	int32_t mapChar = ch;
	int32_t val = getProperties(ch);
	if (((int32_t)(val & (uint32_t)0x00020000)) != 0) {
		int32_t offset = $sr(val << 5, 5 + 18);
		mapChar = ch + offset;
	}
	return mapChar;
}

int32_t CharacterData0E::toUpperCase(int32_t ch) {
	int32_t mapChar = ch;
	int32_t val = getProperties(ch);
	if (((int32_t)(val & (uint32_t)0x00010000)) != 0) {
		int32_t offset = $sr(val << 5, 5 + 18);
		mapChar = ch - offset;
	}
	return mapChar;
}

int32_t CharacterData0E::toTitleCase(int32_t ch) {
	int32_t mapChar = ch;
	int32_t val = getProperties(ch);
	if (((int32_t)(val & (uint32_t)32768)) != 0) {
		if (((int32_t)(val & (uint32_t)0x00010000)) == 0) {
			mapChar = ch + 1;
		} else if (((int32_t)(val & (uint32_t)0x00020000)) == 0) {
			mapChar = ch - 1;
		}
	} else if (((int32_t)(val & (uint32_t)0x00010000)) != 0) {
		mapChar = toUpperCase(ch);
	}
	return mapChar;
}

int32_t CharacterData0E::digit(int32_t ch, int32_t radix) {
	int32_t value = -1;
	if (radix >= $Character::MIN_RADIX && radix <= $Character::MAX_RADIX) {
		int32_t val = getProperties(ch);
		int32_t kind = (int32_t)(val & (uint32_t)31);
		if (kind == $Character::DECIMAL_DIGIT_NUMBER) {
			value = (int32_t)((ch + (((int32_t)(val & (uint32_t)992)) >> 5)) & (uint32_t)31);
		} else if (((int32_t)(val & (uint32_t)3072)) == 3072) {
			value = ((int32_t)((ch + (((int32_t)(val & (uint32_t)992)) >> 5)) & (uint32_t)31)) + 10;
		}
	}
	return (value < radix) ? value : -1;
}

int32_t CharacterData0E::getNumericValue(int32_t ch) {
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

bool CharacterData0E::isDigit(int32_t ch) {
	int32_t props = getProperties(ch);
	return ((int32_t)(props & (uint32_t)31)) == $Character::DECIMAL_DIGIT_NUMBER;
}

bool CharacterData0E::isLowerCase(int32_t ch) {
	return ((int32_t)(getPropertiesEx(ch) & (uint32_t)1)) != 0;
}

bool CharacterData0E::isUpperCase(int32_t ch) {
	return ((int32_t)(getPropertiesEx(ch) & (uint32_t)2)) != 0;
}

bool CharacterData0E::isWhitespace(int32_t ch) {
	int32_t props = getProperties(ch);
	return (((int32_t)(props & (uint32_t)28672)) == 16384);
}

int8_t CharacterData0E::getDirectionality(int32_t ch) {
	int32_t val = getProperties(ch);
	int8_t directionality = (int8_t)(((int32_t)(val & (uint32_t)0x78000000)) >> 27);
	if (directionality == 15) {
		directionality = $Character::DIRECTIONALITY_UNDEFINED;
	}
	return directionality;
}

bool CharacterData0E::isMirrored(int32_t ch) {
	int32_t props = getProperties(ch);
	return (((int32_t)(props & (uint32_t)(int32_t)0x80000000)) != 0);
}

void CharacterData0E::init$() {
	$CharacterData::init$();
}

void clinit$CharacterData0E($Class* class$) {
	$assignStatic(CharacterData0E::A_DATA, $cstr({0x7800, '\0', 0x4800, 0x1010, 0x7800, '\0', 0x7800, '\0', 0x4800, 0x1010, 0x4800, 0x1010, 0x4000, 0x3006, 0x4000, 0x3006}));
	CharacterData0E::$assertionsDisabled = !CharacterData0E::class$->desiredAssertionStatus();
	$assignStatic(CharacterData0E::instance, $new(CharacterData0E));
	$assignStatic(CharacterData0E::X, ($cstr({'\0', 0x10, 0x10, 0x10, ' ', ' ', ' ', ' ', '0', '0', '0', '0', '0', '0', '0', '@', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}))->toCharArray());
	$assignStatic(CharacterData0E::Y, ($cstr({'\0', 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x4, 0x4, 0x4, 0x4, 0x4, 0x4, 0x4, 0x4, 0x4, 0x4, 0x4, 0x4, 0x4, 0x4, 0x4, 0x4, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x6, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2}))->toCharArray());
	$assignStatic(CharacterData0E::A, $new($ints, 8));
	$assignStatic(CharacterData0E::B, ($cstr({'\0', '\0', '\0', '\0', '\0', '\0', ' ', ' '}))->toCharArray());
	{
		{
			$var($chars, data, $nc(CharacterData0E::A_DATA)->toCharArray());
			if (!CharacterData0E::$assertionsDisabled && !(data->length == (8 * 2))) {
				$throwNew($AssertionError);
			}
			int32_t i = 0;
			int32_t j = 0;
			while (i < (8 * 2)) {
				int32_t entry = data->get(i++) << 16;
				$nc(CharacterData0E::A)->set(j++, entry | data->get(i++));
			}
		}
	}
}

CharacterData0E::CharacterData0E() {
}

$Class* CharacterData0E::load$($String* name, bool initialize) {
	$loadClass(CharacterData0E, name, initialize, &_CharacterData0E_ClassInfo_, clinit$CharacterData0E, allocate$CharacterData0E);
	return class$;
}

$Class* CharacterData0E::class$ = nullptr;

	} // lang
} // java