#include <java/lang/CharacterDataUndefined.h>

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
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(CharacterDataUndefined::*)()>(&CharacterDataUndefined::init$))},
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