#include <java/lang/CharacterDataUndefined.h>

#include <java/lang/CharacterData.h>
#include <jcpp.h>

#undef DIRECTIONALITY_UNDEFINED
#undef UNASSIGNED

using $Character = ::java::lang::Character;
using $CharacterData = ::java::lang::CharacterData;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {

$FieldInfo _CharacterDataUndefined_FieldInfo_[] = {
	{"instance", "Ljava/lang/CharacterData;", nullptr, $STATIC | $FINAL, $staticField(CharacterDataUndefined, instance)},
	{}
};

$MethodInfo _CharacterDataUndefined_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(CharacterDataUndefined, init$, void)},
	{"digit", "(II)I", nullptr, 0, $virtualMethod(CharacterDataUndefined, digit, int32_t, int32_t, int32_t)},
	{"getDirectionality", "(I)B", nullptr, 0, $virtualMethod(CharacterDataUndefined, getDirectionality, int8_t, int32_t)},
	{"getNumericValue", "(I)I", nullptr, 0, $virtualMethod(CharacterDataUndefined, getNumericValue, int32_t, int32_t)},
	{"getProperties", "(I)I", nullptr, 0, $virtualMethod(CharacterDataUndefined, getProperties, int32_t, int32_t)},
	{"getType", "(I)I", nullptr, 0, $virtualMethod(CharacterDataUndefined, getType, int32_t, int32_t)},
	{"isDigit", "(I)Z", nullptr, 0, $virtualMethod(CharacterDataUndefined, isDigit, bool, int32_t)},
	{"isIdentifierIgnorable", "(I)Z", nullptr, 0, $virtualMethod(CharacterDataUndefined, isIdentifierIgnorable, bool, int32_t)},
	{"isJavaIdentifierPart", "(I)Z", nullptr, 0, $virtualMethod(CharacterDataUndefined, isJavaIdentifierPart, bool, int32_t)},
	{"isJavaIdentifierStart", "(I)Z", nullptr, 0, $virtualMethod(CharacterDataUndefined, isJavaIdentifierStart, bool, int32_t)},
	{"isLowerCase", "(I)Z", nullptr, 0, $virtualMethod(CharacterDataUndefined, isLowerCase, bool, int32_t)},
	{"isMirrored", "(I)Z", nullptr, 0, $virtualMethod(CharacterDataUndefined, isMirrored, bool, int32_t)},
	{"isUnicodeIdentifierPart", "(I)Z", nullptr, 0, $virtualMethod(CharacterDataUndefined, isUnicodeIdentifierPart, bool, int32_t)},
	{"isUnicodeIdentifierStart", "(I)Z", nullptr, 0, $virtualMethod(CharacterDataUndefined, isUnicodeIdentifierStart, bool, int32_t)},
	{"isUpperCase", "(I)Z", nullptr, 0, $virtualMethod(CharacterDataUndefined, isUpperCase, bool, int32_t)},
	{"isWhitespace", "(I)Z", nullptr, 0, $virtualMethod(CharacterDataUndefined, isWhitespace, bool, int32_t)},
	{"toLowerCase", "(I)I", nullptr, 0, $virtualMethod(CharacterDataUndefined, toLowerCase, int32_t, int32_t)},
	{"toTitleCase", "(I)I", nullptr, 0, $virtualMethod(CharacterDataUndefined, toTitleCase, int32_t, int32_t)},
	{"toUpperCase", "(I)I", nullptr, 0, $virtualMethod(CharacterDataUndefined, toUpperCase, int32_t, int32_t)},
	{}
};

$ClassInfo _CharacterDataUndefined_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.CharacterDataUndefined",
	"java.lang.CharacterData",
	nullptr,
	_CharacterDataUndefined_FieldInfo_,
	_CharacterDataUndefined_MethodInfo_
};

$Object* allocate$CharacterDataUndefined($Class* clazz) {
	return $of($alloc(CharacterDataUndefined));
}

$CharacterData* CharacterDataUndefined::instance = nullptr;

int32_t CharacterDataUndefined::getProperties(int32_t ch) {
	return 0;
}

int32_t CharacterDataUndefined::getType(int32_t ch) {
	return $Character::UNASSIGNED;
}

bool CharacterDataUndefined::isJavaIdentifierStart(int32_t ch) {
	return false;
}

bool CharacterDataUndefined::isJavaIdentifierPart(int32_t ch) {
	return false;
}

bool CharacterDataUndefined::isUnicodeIdentifierStart(int32_t ch) {
	return false;
}

bool CharacterDataUndefined::isUnicodeIdentifierPart(int32_t ch) {
	return false;
}

bool CharacterDataUndefined::isIdentifierIgnorable(int32_t ch) {
	return false;
}

int32_t CharacterDataUndefined::toLowerCase(int32_t ch) {
	return ch;
}

int32_t CharacterDataUndefined::toUpperCase(int32_t ch) {
	return ch;
}

int32_t CharacterDataUndefined::toTitleCase(int32_t ch) {
	return ch;
}

int32_t CharacterDataUndefined::digit(int32_t ch, int32_t radix) {
	return -1;
}

int32_t CharacterDataUndefined::getNumericValue(int32_t ch) {
	return -1;
}

bool CharacterDataUndefined::isDigit(int32_t ch) {
	return false;
}

bool CharacterDataUndefined::isLowerCase(int32_t ch) {
	return false;
}

bool CharacterDataUndefined::isUpperCase(int32_t ch) {
	return false;
}

bool CharacterDataUndefined::isWhitespace(int32_t ch) {
	return false;
}

int8_t CharacterDataUndefined::getDirectionality(int32_t ch) {
	return $Character::DIRECTIONALITY_UNDEFINED;
}

bool CharacterDataUndefined::isMirrored(int32_t ch) {
	return false;
}

void CharacterDataUndefined::init$() {
	$CharacterData::init$();
}

void clinit$CharacterDataUndefined($Class* class$) {
	$assignStatic(CharacterDataUndefined::instance, $new(CharacterDataUndefined));
}

CharacterDataUndefined::CharacterDataUndefined() {
}

$Class* CharacterDataUndefined::load$($String* name, bool initialize) {
	$loadClass(CharacterDataUndefined, name, initialize, &_CharacterDataUndefined_ClassInfo_, clinit$CharacterDataUndefined, allocate$CharacterDataUndefined);
	return class$;
}

$Class* CharacterDataUndefined::class$ = nullptr;

	} // lang
} // java