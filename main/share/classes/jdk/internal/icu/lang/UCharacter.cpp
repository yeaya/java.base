#include <jdk/internal/icu/lang/UCharacter.h>

#include <jdk/internal/icu/impl/UBiDiProps.h>
#include <jdk/internal/icu/impl/UCharacterProperty.h>
#include <jdk/internal/icu/text/Normalizer2.h>
#include <jdk/internal/icu/text/UTF16.h>
#include <jdk/internal/icu/util/VersionInfo.h>
#include <jcpp.h>

#undef CHAR_CATEGORY_COUNT
#undef COMBINING_SPACING_MARK
#undef ENCLOSING_MARK
#undef INSTANCE
#undef MAX_VALUE
#undef MIN_VALUE
#undef NON_SPACING_MARK
#undef RIGHT_TO_LEFT
#undef RIGHT_TO_LEFT_ARABIC

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UBiDiProps = ::jdk::internal::icu::impl::UBiDiProps;
using $UCharacterProperty = ::jdk::internal::icu::impl::UCharacterProperty;
using $Normalizer2 = ::jdk::internal::icu::text::Normalizer2;
using $UTF16 = ::jdk::internal::icu::text::UTF16;
using $VersionInfo = ::jdk::internal::icu::util::VersionInfo;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace lang {

$FieldInfo _UCharacter_FieldInfo_[] = {
	{"MIN_VALUE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(UCharacter, MIN_VALUE)},
	{"MAX_VALUE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(UCharacter, MAX_VALUE)},
	{"NON_SPACING_MARK", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(UCharacter, NON_SPACING_MARK)},
	{"ENCLOSING_MARK", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(UCharacter, ENCLOSING_MARK)},
	{"COMBINING_SPACING_MARK", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(UCharacter, COMBINING_SPACING_MARK)},
	{"CHAR_CATEGORY_COUNT", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(UCharacter, CHAR_CATEGORY_COUNT)},
	{"RIGHT_TO_LEFT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(UCharacter, RIGHT_TO_LEFT)},
	{"RIGHT_TO_LEFT_ARABIC", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(UCharacter, RIGHT_TO_LEFT_ARABIC)},
	{}
};

$MethodInfo _UCharacter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(UCharacter, init$, void)},
	{"digit", "(II)I", nullptr, $PUBLIC | $STATIC, $staticMethod(UCharacter, digit, int32_t, int32_t, int32_t)},
	{"digit", "(I)I", nullptr, $PUBLIC | $STATIC, $staticMethod(UCharacter, digit, int32_t, int32_t)},
	{"getAge", "(I)Ljdk/internal/icu/util/VersionInfo;", nullptr, $PUBLIC | $STATIC, $staticMethod(UCharacter, getAge, $VersionInfo*, int32_t)},
	{"getBidiPairedBracket", "(I)I", nullptr, $PUBLIC | $STATIC, $staticMethod(UCharacter, getBidiPairedBracket, int32_t, int32_t)},
	{"getCodePoint", "(CC)I", nullptr, $PUBLIC | $STATIC, $staticMethod(UCharacter, getCodePoint, int32_t, char16_t, char16_t)},
	{"getCombiningClass", "(I)I", nullptr, $PUBLIC | $STATIC, $staticMethod(UCharacter, getCombiningClass, int32_t, int32_t)},
	{"getDirection", "(I)I", nullptr, $PUBLIC | $STATIC, $staticMethod(UCharacter, getDirection, int32_t, int32_t)},
	{"getIntPropertyValue", "(II)I", nullptr, $PUBLIC | $STATIC, $staticMethod(UCharacter, getIntPropertyValue, int32_t, int32_t, int32_t)},
	{"getMirror", "(I)I", nullptr, $PUBLIC | $STATIC, $staticMethod(UCharacter, getMirror, int32_t, int32_t)},
	{"getType", "(I)I", nullptr, $PUBLIC | $STATIC, $staticMethod(UCharacter, getType, int32_t, int32_t)},
	{"getUnicodeVersion", "()Ljdk/internal/icu/util/VersionInfo;", nullptr, $PUBLIC | $STATIC, $staticMethod(UCharacter, getUnicodeVersion, $VersionInfo*)},
	{}
};

$InnerClassInfo _UCharacter_InnerClassesInfo_[] = {
	{"jdk.internal.icu.lang.UCharacter$HangulSyllableType", "jdk.internal.icu.lang.UCharacter", "HangulSyllableType", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"jdk.internal.icu.lang.UCharacter$NumericType", "jdk.internal.icu.lang.UCharacter", "NumericType", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"jdk.internal.icu.lang.UCharacter$JoiningGroup", "jdk.internal.icu.lang.UCharacter", "JoiningGroup", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _UCharacter_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"jdk.internal.icu.lang.UCharacter",
	"java.lang.Object",
	nullptr,
	_UCharacter_FieldInfo_,
	_UCharacter_MethodInfo_,
	nullptr,
	nullptr,
	_UCharacter_InnerClassesInfo_,
	nullptr,
	nullptr,
	"jdk.internal.icu.lang.UCharacter$HangulSyllableType,jdk.internal.icu.lang.UCharacter$NumericType,jdk.internal.icu.lang.UCharacter$JoiningGroup"
};

$Object* allocate$UCharacter($Class* clazz) {
	return $of($alloc(UCharacter));
}

int32_t UCharacter::digit(int32_t ch, int32_t radix) {
	if (2 <= radix && radix <= 36) {
		int32_t value = digit(ch);
		if (value < 0) {
			value = $UCharacterProperty::getEuropeanDigit(ch);
		}
		return (value < radix) ? value : -1;
	} else {
		return -1;
	}
}

int32_t UCharacter::digit(int32_t ch) {
	$init($UCharacterProperty);
	return $nc($UCharacterProperty::INSTANCE)->digit(ch);
}

int32_t UCharacter::getType(int32_t ch) {
	$init($UCharacterProperty);
	return $nc($UCharacterProperty::INSTANCE)->getType(ch);
}

int32_t UCharacter::getDirection(int32_t ch) {
	$init($UBiDiProps);
	return $nc($UBiDiProps::INSTANCE)->getClass(ch);
}

int32_t UCharacter::getMirror(int32_t ch) {
	$init($UBiDiProps);
	return $nc($UBiDiProps::INSTANCE)->getMirror(ch);
}

int32_t UCharacter::getBidiPairedBracket(int32_t c) {
	$init($UBiDiProps);
	return $nc($UBiDiProps::INSTANCE)->getPairedBracket(c);
}

int32_t UCharacter::getCombiningClass(int32_t ch) {
	return $nc($($Normalizer2::getNFDInstance()))->getCombiningClass(ch);
}

$VersionInfo* UCharacter::getUnicodeVersion() {
	$init($UCharacterProperty);
	return $nc($UCharacterProperty::INSTANCE)->m_unicodeVersion_;
}

int32_t UCharacter::getCodePoint(char16_t lead, char16_t trail) {
	bool var$0 = $UTF16::isLeadSurrogate(lead);
	if (var$0 && $UTF16::isTrailSurrogate(trail)) {
		return $UCharacterProperty::getRawSupplementary(lead, trail);
	}
	$throwNew($IllegalArgumentException, "Illegal surrogate characters"_s);
}

$VersionInfo* UCharacter::getAge(int32_t ch) {
	if (ch < UCharacter::MIN_VALUE || ch > UCharacter::MAX_VALUE) {
		$throwNew($IllegalArgumentException, "Codepoint out of bounds"_s);
	}
	$init($UCharacterProperty);
	return $nc($UCharacterProperty::INSTANCE)->getAge(ch);
}

int32_t UCharacter::getIntPropertyValue(int32_t ch, int32_t type) {
	$init($UCharacterProperty);
	return $nc($UCharacterProperty::INSTANCE)->getIntPropertyValue(ch, type);
}

void UCharacter::init$() {
}

UCharacter::UCharacter() {
}

$Class* UCharacter::load$($String* name, bool initialize) {
	$loadClass(UCharacter, name, initialize, &_UCharacter_ClassInfo_, allocate$UCharacter);
	return class$;
}

$Class* UCharacter::class$ = nullptr;

			} // lang
		} // icu
	} // internal
} // jdk