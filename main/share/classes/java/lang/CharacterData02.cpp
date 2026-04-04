#include <java/lang/CharacterData02.h>
#include <java/lang/AssertionError.h>
#include <java/lang/CharacterData.h>
#include <jcpp.h>

#undef A
#undef A_DATA
#undef B
#undef DECIMAL_DIGIT_NUMBER
#undef DIRECTIONALITY_UNDEFINED
#undef MAX_RADIX
#undef MIN_RADIX
#undef X
#undef Y

using $AssertionError = ::java::lang::AssertionError;
using $Character = ::java::lang::Character;
using $CharacterData = ::java::lang::CharacterData;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {

bool CharacterData02::$assertionsDisabled = false;
$CharacterData* CharacterData02::instance = nullptr;
$chars* CharacterData02::X = nullptr;
$chars* CharacterData02::Y = nullptr;
$ints* CharacterData02::A = nullptr;
$String* CharacterData02::A_DATA = nullptr;
$chars* CharacterData02::B = nullptr;

int32_t CharacterData02::getProperties(int32_t ch) {
	char16_t offset = (char16_t)ch;
	int32_t props = CharacterData02::A->get(CharacterData02::Y->get(CharacterData02::X->get(offset >> 5) | ((offset >> 1) & 0x0f)) | (offset & 1));
	return props;
}

int32_t CharacterData02::getPropertiesEx(int32_t ch) {
	char16_t offset = (char16_t)ch;
	int32_t props = CharacterData02::B->get(CharacterData02::Y->get(CharacterData02::X->get(offset >> 5) | ((offset >> 1) & 0x0f)) | (offset & 1));
	return props;
}

bool CharacterData02::isOtherAlphabetic(int32_t ch) {
	int32_t props = getPropertiesEx(ch);
	return (props & 4) != 0;
}

bool CharacterData02::isIdeographic(int32_t ch) {
	int32_t props = getPropertiesEx(ch);
	return (props & 8) != 0;
}

int32_t CharacterData02::getType(int32_t ch) {
	int32_t props = getProperties(ch);
	return (props & 0x1f);
}

bool CharacterData02::isJavaIdentifierStart(int32_t ch) {
	int32_t props = getProperties(ch);
	return ((props & 0x7000) >= 0x5000);
}

bool CharacterData02::isJavaIdentifierPart(int32_t ch) {
	int32_t props = getProperties(ch);
	return ((props & 0x3000) != 0);
}

bool CharacterData02::isUnicodeIdentifierStart(int32_t ch) {
	return (getPropertiesEx(ch) & 0x10) != 0;
}

bool CharacterData02::isUnicodeIdentifierPart(int32_t ch) {
	bool var$0 = (getPropertiesEx(ch) & 0x20) != 0;
	return var$0 || isIdentifierIgnorable(ch);
}

bool CharacterData02::isIdentifierIgnorable(int32_t ch) {
	int32_t props = getProperties(ch);
	return ((props & 0x7000) == 0x1000);
}

int32_t CharacterData02::toLowerCase(int32_t ch) {
	int32_t mapChar = ch;
	int32_t val = getProperties(ch);
	if ((val & 0x00020000) != 0) {
		int32_t offset = $sr(val << 5, 5 + 18);
		mapChar = ch + offset;
	}
	return mapChar;
}

int32_t CharacterData02::toUpperCase(int32_t ch) {
	int32_t mapChar = ch;
	int32_t val = getProperties(ch);
	if ((val & 0x00010000) != 0) {
		int32_t offset = $sr(val << 5, 5 + 18);
		mapChar = ch - offset;
	}
	return mapChar;
}

int32_t CharacterData02::toTitleCase(int32_t ch) {
	int32_t mapChar = ch;
	int32_t val = getProperties(ch);
	if ((val & 0x8000) != 0) {
		if ((val & 0x00010000) == 0) {
			mapChar = ch + 1;
		} else if ((val & 0x00020000) == 0) {
			mapChar = ch - 1;
		}
	} else if ((val & 0x00010000) != 0) {
		mapChar = toUpperCase(ch);
	}
	return mapChar;
}

int32_t CharacterData02::digit(int32_t ch, int32_t radix) {
	int32_t value = -1;
	if (radix >= $Character::MIN_RADIX && radix <= $Character::MAX_RADIX) {
		int32_t val = getProperties(ch);
		int32_t kind = val & 0x1f;
		if (kind == $Character::DECIMAL_DIGIT_NUMBER) {
			value = (ch + ((val & 0x03e0) >> 5)) & 0x1f;
		} else if ((val & 0x0c00) == 0x0c00) {
			value = ((ch + ((val & 0x03e0) >> 5)) & 0x1f) + 0x0a;
		}
	}
	return (value < radix) ? value : -1;
}

int32_t CharacterData02::getNumericValue(int32_t ch) {
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

bool CharacterData02::isDigit(int32_t ch) {
	int32_t props = getProperties(ch);
	return (props & 0x1f) == $Character::DECIMAL_DIGIT_NUMBER;
}

bool CharacterData02::isLowerCase(int32_t ch) {
	return (getPropertiesEx(ch) & 1) != 0;
}

bool CharacterData02::isUpperCase(int32_t ch) {
	return (getPropertiesEx(ch) & 2) != 0;
}

bool CharacterData02::isWhitespace(int32_t ch) {
	return (getProperties(ch) & 0x7000) == 0x4000;
}

int8_t CharacterData02::getDirectionality(int32_t ch) {
	int32_t val = getProperties(ch);
	int8_t directionality = (int8_t)((val & 0x78000000) >> 0x1b);
	if (directionality == 15) {
		directionality = $Character::DIRECTIONALITY_UNDEFINED;
	}
	return directionality;
}

bool CharacterData02::isMirrored(int32_t ch) {
	return (getProperties(ch) & (int32_t)0x80000000) != 0;
}

void CharacterData02::init$() {
	$CharacterData::init$();
}

void CharacterData02::clinit$($Class* clazz) {
	$assignStatic(CharacterData02::A_DATA, $cstr({'\0', 0x7005, '\0', 0x7005, 0x7800, '\0', 0x7800, '\0', '\0', 0x7005, 0x7800, '\0', '\0', 0x7725, '\0', 0x7005}));
	CharacterData02::$assertionsDisabled = !CharacterData02::class$->desiredAssertionStatus();
	$assignStatic(CharacterData02::instance, $new(CharacterData02));
	$assignStatic(CharacterData02::X, ($cstr({'\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', 0x10, ' ', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '0', '\0', '\0', '\0', '\0', '\0', '\0', 0x10, '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '@', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', 'P', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '\0', '\0', '\0', '\0', '`', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', 0x10, ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}))->toCharArray());
	$assignStatic(CharacterData02::Y, ($cstr({'\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', 0x04, 0x02, 0x02, 0x02, 0x02, 0x02, '\0', 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', 0x04, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, '\0', '\0', '\0', '\0', '\0', '\0', '\0', '\0', 0x06, '\0', '\0', '\0', '\0', '\0', '\0', '\0'}))->toCharArray());
	$assignStatic(CharacterData02::A, $new($ints, 8));
	$assignStatic(CharacterData02::B, ($cstr({'8', '8', '\0', '\0', '8', '\0', '8', '8'}))->toCharArray());
	{
		$var($chars, data, CharacterData02::A_DATA->toCharArray());
		if (!CharacterData02::$assertionsDisabled && !(data->length == (8 * 2))) {
			$throwNew($AssertionError);
		}
		int32_t i = 0;
		int32_t j = 0;
		while (i < (8 * 2)) {
			int32_t entry = data->get(i++) << 16;
			CharacterData02::A->set(j++, entry | data->get(i++));
		}
	}
}

CharacterData02::CharacterData02() {
}

$Class* CharacterData02::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(CharacterData02, $assertionsDisabled)},
		{"instance", "Ljava/lang/CharacterData;", nullptr, $STATIC | $FINAL, $staticField(CharacterData02, instance)},
		{"X", "[C", nullptr, $STATIC | $FINAL, $staticField(CharacterData02, X)},
		{"Y", "[C", nullptr, $STATIC | $FINAL, $staticField(CharacterData02, Y)},
		{"A", "[I", nullptr, $STATIC | $FINAL, $staticField(CharacterData02, A)},
		{"A_DATA", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(CharacterData02, A_DATA)},
		{"B", "[C", nullptr, $STATIC | $FINAL, $staticField(CharacterData02, B)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(CharacterData02, init$, void)},
		{"digit", "(II)I", nullptr, 0, $virtualMethod(CharacterData02, digit, int32_t, int32_t, int32_t)},
		{"getDirectionality", "(I)B", nullptr, 0, $virtualMethod(CharacterData02, getDirectionality, int8_t, int32_t)},
		{"getNumericValue", "(I)I", nullptr, 0, $virtualMethod(CharacterData02, getNumericValue, int32_t, int32_t)},
		{"getProperties", "(I)I", nullptr, 0, $virtualMethod(CharacterData02, getProperties, int32_t, int32_t)},
		{"getPropertiesEx", "(I)I", nullptr, 0, $virtualMethod(CharacterData02, getPropertiesEx, int32_t, int32_t)},
		{"getType", "(I)I", nullptr, 0, $virtualMethod(CharacterData02, getType, int32_t, int32_t)},
		{"isDigit", "(I)Z", nullptr, 0, $virtualMethod(CharacterData02, isDigit, bool, int32_t)},
		{"isIdentifierIgnorable", "(I)Z", nullptr, 0, $virtualMethod(CharacterData02, isIdentifierIgnorable, bool, int32_t)},
		{"isIdeographic", "(I)Z", nullptr, 0, $virtualMethod(CharacterData02, isIdeographic, bool, int32_t)},
		{"isJavaIdentifierPart", "(I)Z", nullptr, 0, $virtualMethod(CharacterData02, isJavaIdentifierPart, bool, int32_t)},
		{"isJavaIdentifierStart", "(I)Z", nullptr, 0, $virtualMethod(CharacterData02, isJavaIdentifierStart, bool, int32_t)},
		{"isLowerCase", "(I)Z", nullptr, 0, $virtualMethod(CharacterData02, isLowerCase, bool, int32_t)},
		{"isMirrored", "(I)Z", nullptr, 0, $virtualMethod(CharacterData02, isMirrored, bool, int32_t)},
		{"isOtherAlphabetic", "(I)Z", nullptr, 0, $virtualMethod(CharacterData02, isOtherAlphabetic, bool, int32_t)},
		{"isUnicodeIdentifierPart", "(I)Z", nullptr, 0, $virtualMethod(CharacterData02, isUnicodeIdentifierPart, bool, int32_t)},
		{"isUnicodeIdentifierStart", "(I)Z", nullptr, 0, $virtualMethod(CharacterData02, isUnicodeIdentifierStart, bool, int32_t)},
		{"isUpperCase", "(I)Z", nullptr, 0, $virtualMethod(CharacterData02, isUpperCase, bool, int32_t)},
		{"isWhitespace", "(I)Z", nullptr, 0, $virtualMethod(CharacterData02, isWhitespace, bool, int32_t)},
		{"toLowerCase", "(I)I", nullptr, 0, $virtualMethod(CharacterData02, toLowerCase, int32_t, int32_t)},
		{"toTitleCase", "(I)I", nullptr, 0, $virtualMethod(CharacterData02, toTitleCase, int32_t, int32_t)},
		{"toUpperCase", "(I)I", nullptr, 0, $virtualMethod(CharacterData02, toUpperCase, int32_t, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.CharacterData02",
		"java.lang.CharacterData",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(CharacterData02, name, initialize, &classInfo$$, CharacterData02::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(CharacterData02);
	});
	return class$;
}

$Class* CharacterData02::class$ = nullptr;

	} // lang
} // java