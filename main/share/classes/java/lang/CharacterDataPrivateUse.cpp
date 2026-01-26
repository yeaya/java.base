#include <java/lang/CharacterDataPrivateUse.h>

#include <java/lang/CharacterData.h>
#include <jcpp.h>

#undef DIRECTIONALITY_LEFT_TO_RIGHT
#undef DIRECTIONALITY_UNDEFINED
#undef PRIVATE_USE
#undef UNASSIGNED

using $Character = ::java::lang::Character;
using $CharacterData = ::java::lang::CharacterData;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {

$FieldInfo _CharacterDataPrivateUse_FieldInfo_[] = {
	{"instance", "Ljava/lang/CharacterData;", nullptr, $STATIC | $FINAL, $staticField(CharacterDataPrivateUse, instance)},
	{}
};

$MethodInfo _CharacterDataPrivateUse_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(CharacterDataPrivateUse, init$, void)},
	{"digit", "(II)I", nullptr, 0, $virtualMethod(CharacterDataPrivateUse, digit, int32_t, int32_t, int32_t)},
	{"getDirectionality", "(I)B", nullptr, 0, $virtualMethod(CharacterDataPrivateUse, getDirectionality, int8_t, int32_t)},
	{"getNumericValue", "(I)I", nullptr, 0, $virtualMethod(CharacterDataPrivateUse, getNumericValue, int32_t, int32_t)},
	{"getProperties", "(I)I", nullptr, 0, $virtualMethod(CharacterDataPrivateUse, getProperties, int32_t, int32_t)},
	{"getType", "(I)I", nullptr, 0, $virtualMethod(CharacterDataPrivateUse, getType, int32_t, int32_t)},
	{"isDigit", "(I)Z", nullptr, 0, $virtualMethod(CharacterDataPrivateUse, isDigit, bool, int32_t)},
	{"isIdentifierIgnorable", "(I)Z", nullptr, 0, $virtualMethod(CharacterDataPrivateUse, isIdentifierIgnorable, bool, int32_t)},
	{"isJavaIdentifierPart", "(I)Z", nullptr, 0, $virtualMethod(CharacterDataPrivateUse, isJavaIdentifierPart, bool, int32_t)},
	{"isJavaIdentifierStart", "(I)Z", nullptr, 0, $virtualMethod(CharacterDataPrivateUse, isJavaIdentifierStart, bool, int32_t)},
	{"isLowerCase", "(I)Z", nullptr, 0, $virtualMethod(CharacterDataPrivateUse, isLowerCase, bool, int32_t)},
	{"isMirrored", "(I)Z", nullptr, 0, $virtualMethod(CharacterDataPrivateUse, isMirrored, bool, int32_t)},
	{"isUnicodeIdentifierPart", "(I)Z", nullptr, 0, $virtualMethod(CharacterDataPrivateUse, isUnicodeIdentifierPart, bool, int32_t)},
	{"isUnicodeIdentifierStart", "(I)Z", nullptr, 0, $virtualMethod(CharacterDataPrivateUse, isUnicodeIdentifierStart, bool, int32_t)},
	{"isUpperCase", "(I)Z", nullptr, 0, $virtualMethod(CharacterDataPrivateUse, isUpperCase, bool, int32_t)},
	{"isWhitespace", "(I)Z", nullptr, 0, $virtualMethod(CharacterDataPrivateUse, isWhitespace, bool, int32_t)},
	{"toLowerCase", "(I)I", nullptr, 0, $virtualMethod(CharacterDataPrivateUse, toLowerCase, int32_t, int32_t)},
	{"toTitleCase", "(I)I", nullptr, 0, $virtualMethod(CharacterDataPrivateUse, toTitleCase, int32_t, int32_t)},
	{"toUpperCase", "(I)I", nullptr, 0, $virtualMethod(CharacterDataPrivateUse, toUpperCase, int32_t, int32_t)},
	{}
};

$ClassInfo _CharacterDataPrivateUse_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.CharacterDataPrivateUse",
	"java.lang.CharacterData",
	nullptr,
	_CharacterDataPrivateUse_FieldInfo_,
	_CharacterDataPrivateUse_MethodInfo_
};

$Object* allocate$CharacterDataPrivateUse($Class* clazz) {
	return $of($alloc(CharacterDataPrivateUse));
}

$CharacterData* CharacterDataPrivateUse::instance = nullptr;

int32_t CharacterDataPrivateUse::getProperties(int32_t ch) {
	return 0;
}

int32_t CharacterDataPrivateUse::getType(int32_t ch) {
	return ((int32_t)(ch & (uint32_t)0x0000FFFE)) == 0x0000FFFE ? $Character::UNASSIGNED : $Character::PRIVATE_USE;
}

bool CharacterDataPrivateUse::isJavaIdentifierStart(int32_t ch) {
	return false;
}

bool CharacterDataPrivateUse::isJavaIdentifierPart(int32_t ch) {
	return false;
}

bool CharacterDataPrivateUse::isUnicodeIdentifierStart(int32_t ch) {
	return false;
}

bool CharacterDataPrivateUse::isUnicodeIdentifierPart(int32_t ch) {
	return false;
}

bool CharacterDataPrivateUse::isIdentifierIgnorable(int32_t ch) {
	return false;
}

int32_t CharacterDataPrivateUse::toLowerCase(int32_t ch) {
	return ch;
}

int32_t CharacterDataPrivateUse::toUpperCase(int32_t ch) {
	return ch;
}

int32_t CharacterDataPrivateUse::toTitleCase(int32_t ch) {
	return ch;
}

int32_t CharacterDataPrivateUse::digit(int32_t ch, int32_t radix) {
	return -1;
}

int32_t CharacterDataPrivateUse::getNumericValue(int32_t ch) {
	return -1;
}

bool CharacterDataPrivateUse::isDigit(int32_t ch) {
	return false;
}

bool CharacterDataPrivateUse::isLowerCase(int32_t ch) {
	return false;
}

bool CharacterDataPrivateUse::isUpperCase(int32_t ch) {
	return false;
}

bool CharacterDataPrivateUse::isWhitespace(int32_t ch) {
	return false;
}

int8_t CharacterDataPrivateUse::getDirectionality(int32_t ch) {
	return ((int32_t)(ch & (uint32_t)0x0000FFFE)) == 0x0000FFFE ? $Character::DIRECTIONALITY_UNDEFINED : $Character::DIRECTIONALITY_LEFT_TO_RIGHT;
}

bool CharacterDataPrivateUse::isMirrored(int32_t ch) {
	return false;
}

void CharacterDataPrivateUse::init$() {
	$CharacterData::init$();
}

void clinit$CharacterDataPrivateUse($Class* class$) {
	$assignStatic(CharacterDataPrivateUse::instance, $new(CharacterDataPrivateUse));
}

CharacterDataPrivateUse::CharacterDataPrivateUse() {
}

$Class* CharacterDataPrivateUse::load$($String* name, bool initialize) {
	$loadClass(CharacterDataPrivateUse, name, initialize, &_CharacterDataPrivateUse_ClassInfo_, clinit$CharacterDataPrivateUse, allocate$CharacterDataPrivateUse);
	return class$;
}

$Class* CharacterDataPrivateUse::class$ = nullptr;

	} // lang
} // java