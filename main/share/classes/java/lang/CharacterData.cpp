#include <java/lang/CharacterData.h>

#include <java/lang/CharacterData00.h>
#include <java/lang/CharacterData01.h>
#include <java/lang/CharacterData02.h>
#include <java/lang/CharacterData03.h>
#include <java/lang/CharacterData0E.h>
#include <java/lang/CharacterDataLatin1.h>
#include <java/lang/CharacterDataPrivateUse.h>
#include <java/lang/CharacterDataUndefined.h>
#include <jcpp.h>

using $CharacterData00 = ::java::lang::CharacterData00;
using $CharacterData01 = ::java::lang::CharacterData01;
using $CharacterData02 = ::java::lang::CharacterData02;
using $CharacterData03 = ::java::lang::CharacterData03;
using $CharacterData0E = ::java::lang::CharacterData0E;
using $CharacterDataLatin1 = ::java::lang::CharacterDataLatin1;
using $CharacterDataPrivateUse = ::java::lang::CharacterDataPrivateUse;
using $CharacterDataUndefined = ::java::lang::CharacterDataUndefined;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {

$MethodInfo _CharacterData_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(CharacterData, init$, void)},
	{"digit", "(II)I", nullptr, $ABSTRACT, $virtualMethod(CharacterData, digit, int32_t, int32_t, int32_t)},
	{"getDirectionality", "(I)B", nullptr, $ABSTRACT, $virtualMethod(CharacterData, getDirectionality, int8_t, int32_t)},
	{"getNumericValue", "(I)I", nullptr, $ABSTRACT, $virtualMethod(CharacterData, getNumericValue, int32_t, int32_t)},
	{"getProperties", "(I)I", nullptr, $ABSTRACT, $virtualMethod(CharacterData, getProperties, int32_t, int32_t)},
	{"getType", "(I)I", nullptr, $ABSTRACT, $virtualMethod(CharacterData, getType, int32_t, int32_t)},
	{"isDigit", "(I)Z", nullptr, $ABSTRACT, $virtualMethod(CharacterData, isDigit, bool, int32_t)},
	{"isIdentifierIgnorable", "(I)Z", nullptr, $ABSTRACT, $virtualMethod(CharacterData, isIdentifierIgnorable, bool, int32_t)},
	{"isIdeographic", "(I)Z", nullptr, 0, $virtualMethod(CharacterData, isIdeographic, bool, int32_t)},
	{"isJavaIdentifierPart", "(I)Z", nullptr, $ABSTRACT, $virtualMethod(CharacterData, isJavaIdentifierPart, bool, int32_t)},
	{"isJavaIdentifierStart", "(I)Z", nullptr, $ABSTRACT, $virtualMethod(CharacterData, isJavaIdentifierStart, bool, int32_t)},
	{"isLowerCase", "(I)Z", nullptr, $ABSTRACT, $virtualMethod(CharacterData, isLowerCase, bool, int32_t)},
	{"isMirrored", "(I)Z", nullptr, $ABSTRACT, $virtualMethod(CharacterData, isMirrored, bool, int32_t)},
	{"isOtherAlphabetic", "(I)Z", nullptr, 0, $virtualMethod(CharacterData, isOtherAlphabetic, bool, int32_t)},
	{"isUnicodeIdentifierPart", "(I)Z", nullptr, $ABSTRACT, $virtualMethod(CharacterData, isUnicodeIdentifierPart, bool, int32_t)},
	{"isUnicodeIdentifierStart", "(I)Z", nullptr, $ABSTRACT, $virtualMethod(CharacterData, isUnicodeIdentifierStart, bool, int32_t)},
	{"isUpperCase", "(I)Z", nullptr, $ABSTRACT, $virtualMethod(CharacterData, isUpperCase, bool, int32_t)},
	{"isWhitespace", "(I)Z", nullptr, $ABSTRACT, $virtualMethod(CharacterData, isWhitespace, bool, int32_t)},
	{"of", "(I)Ljava/lang/CharacterData;", nullptr, $STATIC | $FINAL, $staticMethod(CharacterData, of, CharacterData*, int32_t)},
	{"toLowerCase", "(I)I", nullptr, $ABSTRACT, $virtualMethod(CharacterData, toLowerCase, int32_t, int32_t)},
	{"toTitleCase", "(I)I", nullptr, $ABSTRACT, $virtualMethod(CharacterData, toTitleCase, int32_t, int32_t)},
	{"toUpperCase", "(I)I", nullptr, $ABSTRACT, $virtualMethod(CharacterData, toUpperCase, int32_t, int32_t)},
	{"toUpperCaseCharArray", "(I)[C", nullptr, 0, $virtualMethod(CharacterData, toUpperCaseCharArray, $chars*, int32_t)},
	{"toUpperCaseEx", "(I)I", nullptr, 0, $virtualMethod(CharacterData, toUpperCaseEx, int32_t, int32_t)},
	{}
};

$ClassInfo _CharacterData_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"java.lang.CharacterData",
	"java.lang.Object",
	nullptr,
	nullptr,
	_CharacterData_MethodInfo_
};

$Object* allocate$CharacterData($Class* clazz) {
	return $of($alloc(CharacterData));
}

void CharacterData::init$() {
}

int32_t CharacterData::toUpperCaseEx(int32_t ch) {
	return toUpperCase(ch);
}

$chars* CharacterData::toUpperCaseCharArray(int32_t ch) {
	return nullptr;
}

bool CharacterData::isOtherAlphabetic(int32_t ch) {
	return false;
}

bool CharacterData::isIdeographic(int32_t ch) {
	return false;
}

CharacterData* CharacterData::of(int32_t ch) {
	if ((int32_t)((uint32_t)ch >> 8) == 0) {
		$init($CharacterDataLatin1);
		return $CharacterDataLatin1::instance;
	} else {

		$var(CharacterData, var$0, nullptr)
		switch ((int32_t)((uint32_t)ch >> 16)) {
		case 0:
			{
				$init($CharacterData00);
				$assign(var$0, $CharacterData00::instance);
				break;
			}
		case 1:
			{
				$init($CharacterData01);
				$assign(var$0, $CharacterData01::instance);
				break;
			}
		case 2:
			{
				$init($CharacterData02);
				$assign(var$0, $CharacterData02::instance);
				break;
			}
		case 3:
			{
				$init($CharacterData03);
				$assign(var$0, $CharacterData03::instance);
				break;
			}
		case 14:
			{
				$init($CharacterData0E);
				$assign(var$0, $CharacterData0E::instance);
				break;
			}
		case 15:
			{}
		case 16:
			{
				$init($CharacterDataPrivateUse);
				$assign(var$0, $CharacterDataPrivateUse::instance);
				break;
			}
		default:
			{
				$init($CharacterDataUndefined);
				$assign(var$0, $CharacterDataUndefined::instance);
				break;
			}
		}
		return var$0;
	}
}

CharacterData::CharacterData() {
}

$Class* CharacterData::load$($String* name, bool initialize) {
	$loadClass(CharacterData, name, initialize, &_CharacterData_ClassInfo_, allocate$CharacterData);
	return class$;
}

$Class* CharacterData::class$ = nullptr;

	} // lang
} // java