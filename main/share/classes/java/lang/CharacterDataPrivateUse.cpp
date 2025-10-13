#include <java/lang/CharacterDataPrivateUse.h>

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
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(CharacterDataPrivateUse::*)()>(&CharacterDataPrivateUse::init$))},
	{"digit", "(II)I", nullptr, 0},
	{"getDirectionality", "(I)B", nullptr, 0},
	{"getNumericValue", "(I)I", nullptr, 0},
	{"getProperties", "(I)I", nullptr, 0},
	{"getType", "(I)I", nullptr, 0},
	{"isDigit", "(I)Z", nullptr, 0},
	{"isIdentifierIgnorable", "(I)Z", nullptr, 0},
	{"isJavaIdentifierPart", "(I)Z", nullptr, 0},
	{"isJavaIdentifierStart", "(I)Z", nullptr, 0},
	{"isLowerCase", "(I)Z", nullptr, 0},
	{"isMirrored", "(I)Z", nullptr, 0},
	{"isUnicodeIdentifierPart", "(I)Z", nullptr, 0},
	{"isUnicodeIdentifierStart", "(I)Z", nullptr, 0},
	{"isUpperCase", "(I)Z", nullptr, 0},
	{"isWhitespace", "(I)Z", nullptr, 0},
	{"toLowerCase", "(I)I", nullptr, 0},
	{"toTitleCase", "(I)I", nullptr, 0},
	{"toUpperCase", "(I)I", nullptr, 0},
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