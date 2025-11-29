#include <java/lang/Character.h>

#include <java/io/Serializable.h>
#include <java/lang/AssertionError.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Character$CharacterCache.h>
#include <java/lang/Character$UnicodeBlock.h>
#include <java/lang/CharacterData.h>
#include <java/lang/CharacterName.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/constant/ClassDesc.h>
#include <java/lang/constant/ConstantDesc.h>
#include <java/lang/constant/ConstantDescs.h>
#include <java/lang/constant/DirectMethodHandleDesc.h>
#include <java/lang/constant/DynamicConstantDesc.h>
#include <java/util/Locale.h>
#include <java/util/Optional.h>
#include <jcpp.h>

#undef BSM_EXPLICIT_CAST
#undef BYTES
#undef COMBINING_SPACING_MARK
#undef CONNECTOR_PUNCTUATION
#undef CONTROL
#undef CURRENCY_SYMBOL
#undef DASH_PUNCTUATION
#undef DECIMAL_DIGIT_NUMBER
#undef DIRECTIONALITY_ARABIC_NUMBER
#undef DIRECTIONALITY_BOUNDARY_NEUTRAL
#undef DIRECTIONALITY_COMMON_NUMBER_SEPARATOR
#undef DIRECTIONALITY_EUROPEAN_NUMBER
#undef DIRECTIONALITY_EUROPEAN_NUMBER_SEPARATOR
#undef DIRECTIONALITY_EUROPEAN_NUMBER_TERMINATOR
#undef DIRECTIONALITY_FIRST_STRONG_ISOLATE
#undef DIRECTIONALITY_LEFT_TO_RIGHT
#undef DIRECTIONALITY_LEFT_TO_RIGHT_EMBEDDING
#undef DIRECTIONALITY_LEFT_TO_RIGHT_ISOLATE
#undef DIRECTIONALITY_LEFT_TO_RIGHT_OVERRIDE
#undef DIRECTIONALITY_NONSPACING_MARK
#undef DIRECTIONALITY_OTHER_NEUTRALS
#undef DIRECTIONALITY_PARAGRAPH_SEPARATOR
#undef DIRECTIONALITY_POP_DIRECTIONAL_FORMAT
#undef DIRECTIONALITY_POP_DIRECTIONAL_ISOLATE
#undef DIRECTIONALITY_RIGHT_TO_LEFT
#undef DIRECTIONALITY_RIGHT_TO_LEFT_ARABIC
#undef DIRECTIONALITY_RIGHT_TO_LEFT_EMBEDDING
#undef DIRECTIONALITY_RIGHT_TO_LEFT_ISOLATE
#undef DIRECTIONALITY_RIGHT_TO_LEFT_OVERRIDE
#undef DIRECTIONALITY_SEGMENT_SEPARATOR
#undef DIRECTIONALITY_UNDEFINED
#undef DIRECTIONALITY_WHITESPACE
#undef ENCLOSING_MARK
#undef END_PUNCTUATION
#undef ERROR
#undef FINAL_QUOTE_PUNCTUATION
#undef FORMAT
#undef INITIAL_QUOTE_PUNCTUATION
#undef LETTER_NUMBER
#undef LINE_SEPARATOR
#undef LOWERCASE_LETTER
#undef MATH_SYMBOL
#undef MAX_CODE_POINT
#undef MAX_HIGH_SURROGATE
#undef MAX_LOW_SURROGATE
#undef MAX_RADIX
#undef MAX_SURROGATE
#undef MAX_VALUE
#undef MIN_CODE_POINT
#undef MIN_HIGH_SURROGATE
#undef MIN_LOW_SURROGATE
#undef MIN_RADIX
#undef MIN_SUPPLEMENTARY_CODE_POINT
#undef MIN_SURROGATE
#undef MIN_VALUE
#undef MODIFIER_LETTER
#undef MODIFIER_SYMBOL
#undef NON_SPACING_MARK
#undef OTHER_LETTER
#undef OTHER_NUMBER
#undef OTHER_PUNCTUATION
#undef OTHER_SYMBOL
#undef PARAGRAPH_SEPARATOR
#undef PRIVATE_USE
#undef ROOT
#undef SIZE
#undef SPACE_SEPARATOR
#undef START_PUNCTUATION
#undef SURROGATE
#undef TITLECASE_LETTER
#undef TYPE
#undef UNASSIGNED
#undef UPPERCASE_LETTER

using $ConstantDescArray = $Array<::java::lang::constant::ConstantDesc>;
using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $CharSequence = ::java::lang::CharSequence;
using $Character$CharacterCache = ::java::lang::Character$CharacterCache;
using $Character$UnicodeBlock = ::java::lang::Character$UnicodeBlock;
using $CharacterData = ::java::lang::CharacterData;
using $CharacterName = ::java::lang::CharacterName;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $ConstantDesc = ::java::lang::constant::ConstantDesc;
using $ConstantDescs = ::java::lang::constant::ConstantDescs;
using $DynamicConstantDesc = ::java::lang::constant::DynamicConstantDesc;
using $Locale = ::java::util::Locale;
using $Optional = ::java::util::Optional;

namespace java {
	namespace lang {

$CompoundAttribute _Character_Annotations_[] = {
	{"Ljdk/internal/ValueBased;", nullptr},
	{}
};

$NamedAttribute Character_Attribute_var$0[] = {
	{"since", 's', "9"},
	{"forRemoval", 'Z', "true"},
	{}
};

$CompoundAttribute _Character_MethodAnnotations_init$0[] = {
	{"Ljava/lang/Deprecated;", Character_Attribute_var$0},
	{}
};

$CompoundAttribute _Character_MethodAnnotations_charValue2[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$NamedAttribute Character_Attribute_var$1[] = {
	{"since", 's', "1.1"},
	{}
};

$CompoundAttribute _Character_MethodAnnotations_isJavaLetter49[] = {
	{"Ljava/lang/Deprecated;", Character_Attribute_var$1},
	{}
};

$NamedAttribute Character_Attribute_var$2[] = {
	{"since", 's', "1.1"},
	{}
};

$CompoundAttribute _Character_MethodAnnotations_isJavaLetterOrDigit50[] = {
	{"Ljava/lang/Deprecated;", Character_Attribute_var$2},
	{}
};

$NamedAttribute Character_Attribute_var$3[] = {
	{"since", 's', "1.1"},
	{}
};

$CompoundAttribute _Character_MethodAnnotations_isSpace60[] = {
	{"Ljava/lang/Deprecated;", Character_Attribute_var$3},
	{}
};

$CompoundAttribute _Character_MethodAnnotations_reverseBytes81[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$CompoundAttribute _Character_MethodAnnotations_valueOf97[] = {
	{"Ljdk/internal/vm/annotation/IntrinsicCandidate;", nullptr},
	{}
};

$FieldInfo _Character_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Character, $assertionsDisabled)},
	{"MIN_RADIX", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Character, MIN_RADIX)},
	{"MAX_RADIX", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Character, MAX_RADIX)},
	{"MIN_VALUE", "C", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Character, MIN_VALUE)},
	{"MAX_VALUE", "C", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Character, MAX_VALUE)},
	{"TYPE", "Ljava/lang/Class;", "Ljava/lang/Class<Ljava/lang/Character;>;", $PUBLIC | $STATIC | $FINAL, $staticField(Character, TYPE)},
	{"UNASSIGNED", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Character, UNASSIGNED)},
	{"UPPERCASE_LETTER", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Character, UPPERCASE_LETTER)},
	{"LOWERCASE_LETTER", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Character, LOWERCASE_LETTER)},
	{"TITLECASE_LETTER", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Character, TITLECASE_LETTER)},
	{"MODIFIER_LETTER", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Character, MODIFIER_LETTER)},
	{"OTHER_LETTER", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Character, OTHER_LETTER)},
	{"NON_SPACING_MARK", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Character, NON_SPACING_MARK)},
	{"ENCLOSING_MARK", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Character, ENCLOSING_MARK)},
	{"COMBINING_SPACING_MARK", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Character, COMBINING_SPACING_MARK)},
	{"DECIMAL_DIGIT_NUMBER", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Character, DECIMAL_DIGIT_NUMBER)},
	{"LETTER_NUMBER", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Character, LETTER_NUMBER)},
	{"OTHER_NUMBER", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Character, OTHER_NUMBER)},
	{"SPACE_SEPARATOR", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Character, SPACE_SEPARATOR)},
	{"LINE_SEPARATOR", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Character, LINE_SEPARATOR)},
	{"PARAGRAPH_SEPARATOR", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Character, PARAGRAPH_SEPARATOR)},
	{"CONTROL", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Character, CONTROL)},
	{"FORMAT", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Character, FORMAT)},
	{"PRIVATE_USE", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Character, PRIVATE_USE)},
	{"SURROGATE", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Character, SURROGATE)},
	{"DASH_PUNCTUATION", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Character, DASH_PUNCTUATION)},
	{"START_PUNCTUATION", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Character, START_PUNCTUATION)},
	{"END_PUNCTUATION", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Character, END_PUNCTUATION)},
	{"CONNECTOR_PUNCTUATION", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Character, CONNECTOR_PUNCTUATION)},
	{"OTHER_PUNCTUATION", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Character, OTHER_PUNCTUATION)},
	{"MATH_SYMBOL", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Character, MATH_SYMBOL)},
	{"CURRENCY_SYMBOL", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Character, CURRENCY_SYMBOL)},
	{"MODIFIER_SYMBOL", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Character, MODIFIER_SYMBOL)},
	{"OTHER_SYMBOL", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Character, OTHER_SYMBOL)},
	{"INITIAL_QUOTE_PUNCTUATION", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Character, INITIAL_QUOTE_PUNCTUATION)},
	{"FINAL_QUOTE_PUNCTUATION", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Character, FINAL_QUOTE_PUNCTUATION)},
	{"ERROR", "I", nullptr, $STATIC | $FINAL, $constField(Character, ERROR)},
	{"DIRECTIONALITY_UNDEFINED", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Character, DIRECTIONALITY_UNDEFINED)},
	{"DIRECTIONALITY_LEFT_TO_RIGHT", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Character, DIRECTIONALITY_LEFT_TO_RIGHT)},
	{"DIRECTIONALITY_RIGHT_TO_LEFT", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Character, DIRECTIONALITY_RIGHT_TO_LEFT)},
	{"DIRECTIONALITY_RIGHT_TO_LEFT_ARABIC", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Character, DIRECTIONALITY_RIGHT_TO_LEFT_ARABIC)},
	{"DIRECTIONALITY_EUROPEAN_NUMBER", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Character, DIRECTIONALITY_EUROPEAN_NUMBER)},
	{"DIRECTIONALITY_EUROPEAN_NUMBER_SEPARATOR", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Character, DIRECTIONALITY_EUROPEAN_NUMBER_SEPARATOR)},
	{"DIRECTIONALITY_EUROPEAN_NUMBER_TERMINATOR", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Character, DIRECTIONALITY_EUROPEAN_NUMBER_TERMINATOR)},
	{"DIRECTIONALITY_ARABIC_NUMBER", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Character, DIRECTIONALITY_ARABIC_NUMBER)},
	{"DIRECTIONALITY_COMMON_NUMBER_SEPARATOR", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Character, DIRECTIONALITY_COMMON_NUMBER_SEPARATOR)},
	{"DIRECTIONALITY_NONSPACING_MARK", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Character, DIRECTIONALITY_NONSPACING_MARK)},
	{"DIRECTIONALITY_BOUNDARY_NEUTRAL", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Character, DIRECTIONALITY_BOUNDARY_NEUTRAL)},
	{"DIRECTIONALITY_PARAGRAPH_SEPARATOR", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Character, DIRECTIONALITY_PARAGRAPH_SEPARATOR)},
	{"DIRECTIONALITY_SEGMENT_SEPARATOR", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Character, DIRECTIONALITY_SEGMENT_SEPARATOR)},
	{"DIRECTIONALITY_WHITESPACE", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Character, DIRECTIONALITY_WHITESPACE)},
	{"DIRECTIONALITY_OTHER_NEUTRALS", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Character, DIRECTIONALITY_OTHER_NEUTRALS)},
	{"DIRECTIONALITY_LEFT_TO_RIGHT_EMBEDDING", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Character, DIRECTIONALITY_LEFT_TO_RIGHT_EMBEDDING)},
	{"DIRECTIONALITY_LEFT_TO_RIGHT_OVERRIDE", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Character, DIRECTIONALITY_LEFT_TO_RIGHT_OVERRIDE)},
	{"DIRECTIONALITY_RIGHT_TO_LEFT_EMBEDDING", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Character, DIRECTIONALITY_RIGHT_TO_LEFT_EMBEDDING)},
	{"DIRECTIONALITY_RIGHT_TO_LEFT_OVERRIDE", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Character, DIRECTIONALITY_RIGHT_TO_LEFT_OVERRIDE)},
	{"DIRECTIONALITY_POP_DIRECTIONAL_FORMAT", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Character, DIRECTIONALITY_POP_DIRECTIONAL_FORMAT)},
	{"DIRECTIONALITY_LEFT_TO_RIGHT_ISOLATE", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Character, DIRECTIONALITY_LEFT_TO_RIGHT_ISOLATE)},
	{"DIRECTIONALITY_RIGHT_TO_LEFT_ISOLATE", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Character, DIRECTIONALITY_RIGHT_TO_LEFT_ISOLATE)},
	{"DIRECTIONALITY_FIRST_STRONG_ISOLATE", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Character, DIRECTIONALITY_FIRST_STRONG_ISOLATE)},
	{"DIRECTIONALITY_POP_DIRECTIONAL_ISOLATE", "B", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Character, DIRECTIONALITY_POP_DIRECTIONAL_ISOLATE)},
	{"MIN_HIGH_SURROGATE", "C", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Character, MIN_HIGH_SURROGATE)},
	{"MAX_HIGH_SURROGATE", "C", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Character, MAX_HIGH_SURROGATE)},
	{"MIN_LOW_SURROGATE", "C", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Character, MIN_LOW_SURROGATE)},
	{"MAX_LOW_SURROGATE", "C", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Character, MAX_LOW_SURROGATE)},
	{"MIN_SURROGATE", "C", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Character, MIN_SURROGATE)},
	{"MAX_SURROGATE", "C", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Character, MAX_SURROGATE)},
	{"MIN_SUPPLEMENTARY_CODE_POINT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Character, MIN_SUPPLEMENTARY_CODE_POINT)},
	{"MIN_CODE_POINT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Character, MIN_CODE_POINT)},
	{"MAX_CODE_POINT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Character, MAX_CODE_POINT)},
	{"value", "C", nullptr, $PRIVATE | $FINAL, $field(Character, value)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Character, serialVersionUID)},
	{"SIZE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Character, SIZE)},
	{"BYTES", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Character, BYTES)},
	{}
};

$MethodInfo _Character_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "(C)V", nullptr, $PUBLIC | $DEPRECATED, $method(static_cast<void(Character::*)(char16_t)>(&Character::init$)), nullptr, nullptr, _Character_MethodAnnotations_init$0},
	{"charCount", "(I)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&Character::charCount))},
	{"charValue", "()C", nullptr, $PUBLIC, $method(static_cast<char16_t(Character::*)()>(&Character::charValue)), nullptr, nullptr, _Character_MethodAnnotations_charValue2},
	{"codePointAt", "(Ljava/lang/CharSequence;I)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($CharSequence*,int32_t)>(&Character::codePointAt))},
	{"codePointAt", "([CI)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($chars*,int32_t)>(&Character::codePointAt))},
	{"codePointAt", "([CII)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($chars*,int32_t,int32_t)>(&Character::codePointAt))},
	{"codePointAtImpl", "([CII)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($chars*,int32_t,int32_t)>(&Character::codePointAtImpl))},
	{"codePointBefore", "(Ljava/lang/CharSequence;I)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($CharSequence*,int32_t)>(&Character::codePointBefore))},
	{"codePointBefore", "([CI)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($chars*,int32_t)>(&Character::codePointBefore))},
	{"codePointBefore", "([CII)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($chars*,int32_t,int32_t)>(&Character::codePointBefore))},
	{"codePointBeforeImpl", "([CII)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($chars*,int32_t,int32_t)>(&Character::codePointBeforeImpl))},
	{"codePointCount", "(Ljava/lang/CharSequence;II)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($CharSequence*,int32_t,int32_t)>(&Character::codePointCount))},
	{"codePointCount", "([CII)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($chars*,int32_t,int32_t)>(&Character::codePointCount))},
	{"codePointCountImpl", "([CII)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($chars*,int32_t,int32_t)>(&Character::codePointCountImpl))},
	{"codePointOf", "(Ljava/lang/String;)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($String*)>(&Character::codePointOf))},
	{"compare", "(CC)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(char16_t,char16_t)>(&Character::compare))},
	{"compareTo", "(Ljava/lang/Character;)I", nullptr, $PUBLIC, $method(static_cast<int32_t(Character::*)(Character*)>(&Character::compareTo))},
	{"compareTo", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"describeConstable", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/lang/constant/DynamicConstantDesc<Ljava/lang/Character;>;>;", $PUBLIC},
	{"digit", "(CI)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(char16_t,int32_t)>(&Character::digit))},
	{"digit", "(II)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(int32_t,int32_t)>(&Character::digit))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"forDigit", "(II)C", nullptr, $PUBLIC | $STATIC, $method(static_cast<char16_t(*)(int32_t,int32_t)>(&Character::forDigit))},
	{"getDirectionality", "(C)B", nullptr, $PUBLIC | $STATIC, $method(static_cast<int8_t(*)(char16_t)>(&Character::getDirectionality))},
	{"getDirectionality", "(I)B", nullptr, $PUBLIC | $STATIC, $method(static_cast<int8_t(*)(int32_t)>(&Character::getDirectionality))},
	{"getName", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)(int32_t)>(&Character::getName))},
	{"getNumericValue", "(C)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(char16_t)>(&Character::getNumericValue))},
	{"getNumericValue", "(I)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&Character::getNumericValue))},
	{"getType", "(C)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(char16_t)>(&Character::getType))},
	{"getType", "(I)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&Character::getType))},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"hashCode", "(C)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(char16_t)>(&Character::hashCode))},
	{"highSurrogate", "(I)C", nullptr, $PUBLIC | $STATIC, $method(static_cast<char16_t(*)(int32_t)>(&Character::highSurrogate))},
	{"isAlphabetic", "(I)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)(int32_t)>(&Character::isAlphabetic))},
	{"isBmpCodePoint", "(I)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)(int32_t)>(&Character::isBmpCodePoint))},
	{"isDefined", "(C)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)(char16_t)>(&Character::isDefined))},
	{"isDefined", "(I)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)(int32_t)>(&Character::isDefined))},
	{"isDigit", "(C)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)(char16_t)>(&Character::isDigit))},
	{"isDigit", "(I)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)(int32_t)>(&Character::isDigit))},
	{"isHighSurrogate", "(C)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)(char16_t)>(&Character::isHighSurrogate))},
	{"isISOControl", "(C)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)(char16_t)>(&Character::isISOControl))},
	{"isISOControl", "(I)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)(int32_t)>(&Character::isISOControl))},
	{"isIdentifierIgnorable", "(C)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)(char16_t)>(&Character::isIdentifierIgnorable))},
	{"isIdentifierIgnorable", "(I)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)(int32_t)>(&Character::isIdentifierIgnorable))},
	{"isIdeographic", "(I)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)(int32_t)>(&Character::isIdeographic))},
	{"isJavaIdentifierPart", "(C)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)(char16_t)>(&Character::isJavaIdentifierPart))},
	{"isJavaIdentifierPart", "(I)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)(int32_t)>(&Character::isJavaIdentifierPart))},
	{"isJavaIdentifierStart", "(C)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)(char16_t)>(&Character::isJavaIdentifierStart))},
	{"isJavaIdentifierStart", "(I)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)(int32_t)>(&Character::isJavaIdentifierStart))},
	{"isJavaLetter", "(C)Z", nullptr, $PUBLIC | $STATIC | $DEPRECATED, $method(static_cast<bool(*)(char16_t)>(&Character::isJavaLetter)), nullptr, nullptr, _Character_MethodAnnotations_isJavaLetter49},
	{"isJavaLetterOrDigit", "(C)Z", nullptr, $PUBLIC | $STATIC | $DEPRECATED, $method(static_cast<bool(*)(char16_t)>(&Character::isJavaLetterOrDigit)), nullptr, nullptr, _Character_MethodAnnotations_isJavaLetterOrDigit50},
	{"isLetter", "(C)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)(char16_t)>(&Character::isLetter))},
	{"isLetter", "(I)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)(int32_t)>(&Character::isLetter))},
	{"isLetterOrDigit", "(C)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)(char16_t)>(&Character::isLetterOrDigit))},
	{"isLetterOrDigit", "(I)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)(int32_t)>(&Character::isLetterOrDigit))},
	{"isLowSurrogate", "(C)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)(char16_t)>(&Character::isLowSurrogate))},
	{"isLowerCase", "(C)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)(char16_t)>(&Character::isLowerCase))},
	{"isLowerCase", "(I)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)(int32_t)>(&Character::isLowerCase))},
	{"isMirrored", "(C)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)(char16_t)>(&Character::isMirrored))},
	{"isMirrored", "(I)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)(int32_t)>(&Character::isMirrored))},
	{"isSpace", "(C)Z", nullptr, $PUBLIC | $STATIC | $DEPRECATED, $method(static_cast<bool(*)(char16_t)>(&Character::isSpace)), nullptr, nullptr, _Character_MethodAnnotations_isSpace60},
	{"isSpaceChar", "(C)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)(char16_t)>(&Character::isSpaceChar))},
	{"isSpaceChar", "(I)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)(int32_t)>(&Character::isSpaceChar))},
	{"isSupplementaryCodePoint", "(I)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)(int32_t)>(&Character::isSupplementaryCodePoint))},
	{"isSurrogate", "(C)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)(char16_t)>(&Character::isSurrogate))},
	{"isSurrogatePair", "(CC)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)(char16_t,char16_t)>(&Character::isSurrogatePair))},
	{"isTitleCase", "(C)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)(char16_t)>(&Character::isTitleCase))},
	{"isTitleCase", "(I)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)(int32_t)>(&Character::isTitleCase))},
	{"isUnicodeIdentifierPart", "(C)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)(char16_t)>(&Character::isUnicodeIdentifierPart))},
	{"isUnicodeIdentifierPart", "(I)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)(int32_t)>(&Character::isUnicodeIdentifierPart))},
	{"isUnicodeIdentifierStart", "(C)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)(char16_t)>(&Character::isUnicodeIdentifierStart))},
	{"isUnicodeIdentifierStart", "(I)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)(int32_t)>(&Character::isUnicodeIdentifierStart))},
	{"isUpperCase", "(C)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)(char16_t)>(&Character::isUpperCase))},
	{"isUpperCase", "(I)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)(int32_t)>(&Character::isUpperCase))},
	{"isValidCodePoint", "(I)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)(int32_t)>(&Character::isValidCodePoint))},
	{"isWhitespace", "(C)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)(char16_t)>(&Character::isWhitespace))},
	{"isWhitespace", "(I)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)(int32_t)>(&Character::isWhitespace))},
	{"lowSurrogate", "(I)C", nullptr, $PUBLIC | $STATIC, $method(static_cast<char16_t(*)(int32_t)>(&Character::lowSurrogate))},
	{"offsetByCodePoints", "(Ljava/lang/CharSequence;II)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($CharSequence*,int32_t,int32_t)>(&Character::offsetByCodePoints))},
	{"offsetByCodePoints", "([CIIII)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($chars*,int32_t,int32_t,int32_t,int32_t)>(&Character::offsetByCodePoints))},
	{"offsetByCodePointsImpl", "([CIIII)I", nullptr, $STATIC, $method(static_cast<int32_t(*)($chars*,int32_t,int32_t,int32_t,int32_t)>(&Character::offsetByCodePointsImpl))},
	{"reverseBytes", "(C)C", nullptr, $PUBLIC | $STATIC, $method(static_cast<char16_t(*)(char16_t)>(&Character::reverseBytes)), nullptr, nullptr, _Character_MethodAnnotations_reverseBytes81},
	{"toChars", "(I[CI)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(int32_t,$chars*,int32_t)>(&Character::toChars))},
	{"toChars", "(I)[C", nullptr, $PUBLIC | $STATIC, $method(static_cast<$chars*(*)(int32_t)>(&Character::toChars))},
	{"toCodePoint", "(CC)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(char16_t,char16_t)>(&Character::toCodePoint))},
	{"toLowerCase", "(C)C", nullptr, $PUBLIC | $STATIC, $method(static_cast<char16_t(*)(char16_t)>(&Character::toLowerCase))},
	{"toLowerCase", "(I)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&Character::toLowerCase))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"toString", "(C)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)(char16_t)>(&Character::toString))},
	{"toString", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)(int32_t)>(&Character::toString))},
	{"toSurrogates", "(I[CI)V", nullptr, $STATIC, $method(static_cast<void(*)(int32_t,$chars*,int32_t)>(&Character::toSurrogates))},
	{"toTitleCase", "(C)C", nullptr, $PUBLIC | $STATIC, $method(static_cast<char16_t(*)(char16_t)>(&Character::toTitleCase))},
	{"toTitleCase", "(I)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&Character::toTitleCase))},
	{"toUpperCase", "(C)C", nullptr, $PUBLIC | $STATIC, $method(static_cast<char16_t(*)(char16_t)>(&Character::toUpperCase))},
	{"toUpperCase", "(I)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&Character::toUpperCase))},
	{"toUpperCaseCharArray", "(I)[C", nullptr, $STATIC, $method(static_cast<$chars*(*)(int32_t)>(&Character::toUpperCaseCharArray))},
	{"toUpperCaseEx", "(I)I", nullptr, $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&Character::toUpperCaseEx))},
	{"valueOf", "(C)Ljava/lang/Character;", nullptr, $PUBLIC | $STATIC, $method(static_cast<Character*(*)(char16_t)>(&Character::valueOf)), nullptr, nullptr, _Character_MethodAnnotations_valueOf97},
	{}
};

$InnerClassInfo _Character_InnerClassesInfo_[] = {
	{"java.lang.Character$CharacterCache", "java.lang.Character", "CharacterCache", $PRIVATE | $STATIC},
	{"java.lang.Character$UnicodeScript", "java.lang.Character", "UnicodeScript", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{"java.lang.Character$UnicodeBlock", "java.lang.Character", "UnicodeBlock", $PUBLIC | $STATIC | $FINAL},
	{"java.lang.Character$Subset", "java.lang.Character", "Subset", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _Character_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"java.lang.Character",
	"java.lang.Object",
	"java.io.Serializable,java.lang.Comparable,java.lang.constant.Constable",
	_Character_FieldInfo_,
	_Character_MethodInfo_,
	"Ljava/lang/Object;Ljava/io/Serializable;Ljava/lang/Comparable<Ljava/lang/Character;>;Ljava/lang/constant/Constable;",
	nullptr,
	_Character_InnerClassesInfo_,
	_Character_Annotations_,
	nullptr,
	"java.lang.Character$CharacterCache,java.lang.Character$UnicodeScript,java.lang.Character$UnicodeBlock,java.lang.Character$Subset"
};

$Object* allocate$Character($Class* clazz) {
	return $of($alloc(Character));
}

$Object* Character::clone() {
	 return this->$Serializable::clone();
}

void Character::finalize() {
	this->$Serializable::finalize();
}

bool Character::$assertionsDisabled = false;
$Class* Character::TYPE = nullptr;

$Optional* Character::describeConstable() {
	$useLocalCurrentObjectStackCache();
	$init($ConstantDescs);
	return $Optional::of($($DynamicConstantDesc::ofNamed($ConstantDescs::BSM_EXPLICIT_CAST, "_"_s, $ConstantDescs::CD_char, $$new($ConstantDescArray, {$(static_cast<$ConstantDesc*>($Integer::valueOf((int32_t)this->value)))}))));
}

void Character::init$(char16_t value) {
	this->value = value;
}

Character* Character::valueOf(char16_t c) {
	$init(Character);
	if (c <= 127) {
		$init($Character$CharacterCache);
		return $nc($Character$CharacterCache::cache)->get((int32_t)c);
	}
	return $new(Character, c);
}

char16_t Character::charValue() {
	return this->value;
}

int32_t Character::hashCode() {
	return Character::hashCode(this->value);
}

int32_t Character::hashCode(char16_t value) {
	$init(Character);
	return (int32_t)value;
}

bool Character::equals(Object$* obj) {
	if ($instanceOf(Character, obj)) {
		return this->value == $nc(($cast(Character, obj)))->charValue();
	}
	return false;
}

$String* Character::toString() {
	return $String::valueOf(this->value);
}

$String* Character::toString(char16_t c) {
	$init(Character);
	return $String::valueOf(c);
}

$String* Character::toString(int32_t codePoint) {
	$init(Character);
	return $String::valueOfCodePoint(codePoint);
}

bool Character::isValidCodePoint(int32_t codePoint) {
	$init(Character);
	int32_t plane = (int32_t)((uint32_t)codePoint >> 16);
	return plane < ((int32_t)((uint32_t)(Character::MAX_CODE_POINT + 1) >> 16));
}

bool Character::isBmpCodePoint(int32_t codePoint) {
	$init(Character);
	return (int32_t)((uint32_t)codePoint >> 16) == 0;
}

bool Character::isSupplementaryCodePoint(int32_t codePoint) {
	$init(Character);
	return codePoint >= Character::MIN_SUPPLEMENTARY_CODE_POINT && codePoint < Character::MAX_CODE_POINT + 1;
}

bool Character::isHighSurrogate(char16_t ch) {
	$init(Character);
	return ch >= Character::MIN_HIGH_SURROGATE && ch < (Character::MAX_HIGH_SURROGATE + 1);
}

bool Character::isLowSurrogate(char16_t ch) {
	$init(Character);
	return ch >= Character::MIN_LOW_SURROGATE && ch < (Character::MAX_LOW_SURROGATE + 1);
}

bool Character::isSurrogate(char16_t ch) {
	$init(Character);
	return ch >= Character::MIN_SURROGATE && ch < (Character::MAX_SURROGATE + 1);
}

bool Character::isSurrogatePair(char16_t high, char16_t low) {
	$init(Character);
	bool var$0 = isHighSurrogate(high);
	return var$0 && isLowSurrogate(low);
}

int32_t Character::charCount(int32_t codePoint) {
	$init(Character);
	return codePoint >= Character::MIN_SUPPLEMENTARY_CODE_POINT ? 2 : 1;
}

int32_t Character::toCodePoint(char16_t high, char16_t low) {
	$init(Character);
	return ((high << 10) + low) + (Character::MIN_SUPPLEMENTARY_CODE_POINT - (Character::MIN_HIGH_SURROGATE << 10) - Character::MIN_LOW_SURROGATE);
}

int32_t Character::codePointAt($CharSequence* seq, int32_t index) {
	$init(Character);
	char16_t c1 = $nc(seq)->charAt(index);
	bool var$0 = isHighSurrogate(c1);
	if (var$0 && ++index < seq->length()) {
		char16_t c2 = seq->charAt(index);
		if (isLowSurrogate(c2)) {
			return toCodePoint(c1, c2);
		}
	}
	return c1;
}

int32_t Character::codePointAt($chars* a, int32_t index) {
	$init(Character);
	return codePointAtImpl(a, index, $nc(a)->length);
}

int32_t Character::codePointAt($chars* a, int32_t index, int32_t limit) {
	$init(Character);
	if (index >= limit || limit < 0 || limit > $nc(a)->length) {
		$throwNew($IndexOutOfBoundsException);
	}
	return codePointAtImpl(a, index, limit);
}

int32_t Character::codePointAtImpl($chars* a, int32_t index, int32_t limit) {
	$init(Character);
	char16_t c1 = $nc(a)->get(index);
	if (isHighSurrogate(c1) && ++index < limit) {
		char16_t c2 = a->get(index);
		if (isLowSurrogate(c2)) {
			return toCodePoint(c1, c2);
		}
	}
	return c1;
}

int32_t Character::codePointBefore($CharSequence* seq, int32_t index) {
	$init(Character);
	char16_t c2 = $nc(seq)->charAt(--index);
	if (isLowSurrogate(c2) && index > 0) {
		char16_t c1 = seq->charAt(--index);
		if (isHighSurrogate(c1)) {
			return toCodePoint(c1, c2);
		}
	}
	return c2;
}

int32_t Character::codePointBefore($chars* a, int32_t index) {
	$init(Character);
	return codePointBeforeImpl(a, index, 0);
}

int32_t Character::codePointBefore($chars* a, int32_t index, int32_t start) {
	$init(Character);
	if (index <= start || start < 0 || start >= $nc(a)->length) {
		$throwNew($IndexOutOfBoundsException);
	}
	return codePointBeforeImpl(a, index, start);
}

int32_t Character::codePointBeforeImpl($chars* a, int32_t index, int32_t start) {
	$init(Character);
	char16_t c2 = $nc(a)->get(--index);
	if (isLowSurrogate(c2) && index > start) {
		char16_t c1 = a->get(--index);
		if (isHighSurrogate(c1)) {
			return toCodePoint(c1, c2);
		}
	}
	return c2;
}

char16_t Character::highSurrogate(int32_t codePoint) {
	$init(Character);
	return (char16_t)(((int32_t)((uint32_t)codePoint >> 10)) + (Character::MIN_HIGH_SURROGATE - ((int32_t)((uint32_t)Character::MIN_SUPPLEMENTARY_CODE_POINT >> 10))));
}

char16_t Character::lowSurrogate(int32_t codePoint) {
	$init(Character);
	return (char16_t)(((int32_t)(codePoint & (uint32_t)1023)) + Character::MIN_LOW_SURROGATE);
}

int32_t Character::toChars(int32_t codePoint, $chars* dst, int32_t dstIndex) {
	$init(Character);
	$useLocalCurrentObjectStackCache();
	if (isBmpCodePoint(codePoint)) {
		$nc(dst)->set(dstIndex, (char16_t)codePoint);
		return 1;
	} else if (isValidCodePoint(codePoint)) {
		toSurrogates(codePoint, dst, dstIndex);
		return 2;
	} else {
		$throwNew($IllegalArgumentException, $($String::format("Not a valid Unicode code point: 0x%X"_s, $$new($ObjectArray, {$($of($Integer::valueOf(codePoint)))}))));
	}
}

$chars* Character::toChars(int32_t codePoint) {
	$init(Character);
	$useLocalCurrentObjectStackCache();
	if (isBmpCodePoint(codePoint)) {
		return $new($chars, {(char16_t)codePoint});
	} else if (isValidCodePoint(codePoint)) {
		$var($chars, result, $new($chars, 2));
		toSurrogates(codePoint, result, 0);
		return result;
	} else {
		$throwNew($IllegalArgumentException, $($String::format("Not a valid Unicode code point: 0x%X"_s, $$new($ObjectArray, {$($of($Integer::valueOf(codePoint)))}))));
	}
}

void Character::toSurrogates(int32_t codePoint, $chars* dst, int32_t index) {
	$init(Character);
	$nc(dst)->set(index + 1, lowSurrogate(codePoint));
	dst->set(index, highSurrogate(codePoint));
}

int32_t Character::codePointCount($CharSequence* seq, int32_t beginIndex, int32_t endIndex) {
	$init(Character);
	int32_t length = $nc(seq)->length();
	if (beginIndex < 0 || endIndex > length || beginIndex > endIndex) {
		$throwNew($IndexOutOfBoundsException);
	}
	int32_t n = endIndex - beginIndex;
	for (int32_t i = beginIndex; i < endIndex;) {
		bool var$0 = isHighSurrogate(seq->charAt(i++)) && i < endIndex;
		if (var$0 && isLowSurrogate(seq->charAt(i))) {
			--n;
			++i;
		}
	}
	return n;
}

int32_t Character::codePointCount($chars* a, int32_t offset, int32_t count) {
	$init(Character);
	if (count > $nc(a)->length - offset || offset < 0 || count < 0) {
		$throwNew($IndexOutOfBoundsException);
	}
	return codePointCountImpl(a, offset, count);
}

int32_t Character::codePointCountImpl($chars* a, int32_t offset, int32_t count) {
	$init(Character);
	int32_t endIndex = offset + count;
	int32_t n = count;
	for (int32_t i = offset; i < endIndex;) {
		bool var$0 = isHighSurrogate($nc(a)->get(i++)) && i < endIndex;
		if (var$0 && isLowSurrogate($nc(a)->get(i))) {
			--n;
			++i;
		}
	}
	return n;
}

int32_t Character::offsetByCodePoints($CharSequence* seq, int32_t index, int32_t codePointOffset) {
	$init(Character);
	int32_t length = $nc(seq)->length();
	if (index < 0 || index > length) {
		$throwNew($IndexOutOfBoundsException);
	}
	int32_t x = index;
	if (codePointOffset >= 0) {
		int32_t i = 0;
		for (i = 0; x < length && i < codePointOffset; ++i) {
			bool var$0 = isHighSurrogate(seq->charAt(x++)) && x < length;
			if (var$0 && isLowSurrogate(seq->charAt(x))) {
				++x;
			}
		}
		if (i < codePointOffset) {
			$throwNew($IndexOutOfBoundsException);
		}
	} else {
		int32_t i = 0;
		for (i = codePointOffset; x > 0 && i < 0; ++i) {
			bool var$1 = isLowSurrogate(seq->charAt(--x)) && x > 0;
			if (var$1 && isHighSurrogate(seq->charAt(x - 1))) {
				--x;
			}
		}
		if (i < 0) {
			$throwNew($IndexOutOfBoundsException);
		}
	}
	return x;
}

int32_t Character::offsetByCodePoints($chars* a, int32_t start, int32_t count, int32_t index, int32_t codePointOffset) {
	$init(Character);
	if (count > $nc(a)->length - start || start < 0 || count < 0 || index < start || index > start + count) {
		$throwNew($IndexOutOfBoundsException);
	}
	return offsetByCodePointsImpl(a, start, count, index, codePointOffset);
}

int32_t Character::offsetByCodePointsImpl($chars* a, int32_t start, int32_t count, int32_t index, int32_t codePointOffset) {
	$init(Character);
	int32_t x = index;
	if (codePointOffset >= 0) {
		int32_t limit = start + count;
		int32_t i = 0;
		for (i = 0; x < limit && i < codePointOffset; ++i) {
			bool var$0 = isHighSurrogate($nc(a)->get(x++)) && x < limit;
			if (var$0 && isLowSurrogate($nc(a)->get(x))) {
				++x;
			}
		}
		if (i < codePointOffset) {
			$throwNew($IndexOutOfBoundsException);
		}
	} else {
		int32_t i = 0;
		for (i = codePointOffset; x > start && i < 0; ++i) {
			bool var$1 = isLowSurrogate($nc(a)->get(--x)) && x > start;
			if (var$1 && isHighSurrogate($nc(a)->get(x - 1))) {
				--x;
			}
		}
		if (i < 0) {
			$throwNew($IndexOutOfBoundsException);
		}
	}
	return x;
}

bool Character::isLowerCase(char16_t ch) {
	$init(Character);
	return isLowerCase((int32_t)ch);
}

bool Character::isLowerCase(int32_t codePoint) {
	$init(Character);
	return $nc($($CharacterData::of(codePoint)))->isLowerCase(codePoint);
}

bool Character::isUpperCase(char16_t ch) {
	$init(Character);
	return isUpperCase((int32_t)ch);
}

bool Character::isUpperCase(int32_t codePoint) {
	$init(Character);
	return $nc($($CharacterData::of(codePoint)))->isUpperCase(codePoint);
}

bool Character::isTitleCase(char16_t ch) {
	$init(Character);
	return isTitleCase((int32_t)ch);
}

bool Character::isTitleCase(int32_t codePoint) {
	$init(Character);
	return getType(codePoint) == Character::TITLECASE_LETTER;
}

bool Character::isDigit(char16_t ch) {
	$init(Character);
	return isDigit((int32_t)ch);
}

bool Character::isDigit(int32_t codePoint) {
	$init(Character);
	return $nc($($CharacterData::of(codePoint)))->isDigit(codePoint);
}

bool Character::isDefined(char16_t ch) {
	$init(Character);
	return isDefined((int32_t)ch);
}

bool Character::isDefined(int32_t codePoint) {
	$init(Character);
	return getType(codePoint) != Character::UNASSIGNED;
}

bool Character::isLetter(char16_t ch) {
	$init(Character);
	return isLetter((int32_t)ch);
}

bool Character::isLetter(int32_t codePoint) {
	$init(Character);
	return ((int32_t)(($sr((((($sl(1, Character::UPPERCASE_LETTER)) | ($sl(1, Character::LOWERCASE_LETTER))) | ($sl(1, Character::TITLECASE_LETTER))) | ($sl(1, Character::MODIFIER_LETTER))) | ($sl(1, Character::OTHER_LETTER)), getType(codePoint))) & (uint32_t)1)) != 0;
}

bool Character::isLetterOrDigit(char16_t ch) {
	$init(Character);
	return isLetterOrDigit((int32_t)ch);
}

bool Character::isLetterOrDigit(int32_t codePoint) {
	$init(Character);
	return ((int32_t)(($sr(((((($sl(1, Character::UPPERCASE_LETTER)) | ($sl(1, Character::LOWERCASE_LETTER))) | ($sl(1, Character::TITLECASE_LETTER))) | ($sl(1, Character::MODIFIER_LETTER))) | ($sl(1, Character::OTHER_LETTER))) | ($sl(1, Character::DECIMAL_DIGIT_NUMBER)), getType(codePoint))) & (uint32_t)1)) != 0;
}

bool Character::isJavaLetter(char16_t ch) {
	$init(Character);
	return isJavaIdentifierStart(ch);
}

bool Character::isJavaLetterOrDigit(char16_t ch) {
	$init(Character);
	return isJavaIdentifierPart(ch);
}

bool Character::isAlphabetic(int32_t codePoint) {
	$init(Character);
	bool var$0 = (((int32_t)(($sr(((((($sl(1, Character::UPPERCASE_LETTER)) | ($sl(1, Character::LOWERCASE_LETTER))) | ($sl(1, Character::TITLECASE_LETTER))) | ($sl(1, Character::MODIFIER_LETTER))) | ($sl(1, Character::OTHER_LETTER))) | ($sl(1, Character::LETTER_NUMBER)), getType(codePoint))) & (uint32_t)1)) != 0);
	return var$0 || $nc($($CharacterData::of(codePoint)))->isOtherAlphabetic(codePoint);
}

bool Character::isIdeographic(int32_t codePoint) {
	$init(Character);
	return $nc($($CharacterData::of(codePoint)))->isIdeographic(codePoint);
}

bool Character::isJavaIdentifierStart(char16_t ch) {
	$init(Character);
	return isJavaIdentifierStart((int32_t)ch);
}

bool Character::isJavaIdentifierStart(int32_t codePoint) {
	$init(Character);
	return $nc($($CharacterData::of(codePoint)))->isJavaIdentifierStart(codePoint);
}

bool Character::isJavaIdentifierPart(char16_t ch) {
	$init(Character);
	return isJavaIdentifierPart((int32_t)ch);
}

bool Character::isJavaIdentifierPart(int32_t codePoint) {
	$init(Character);
	return $nc($($CharacterData::of(codePoint)))->isJavaIdentifierPart(codePoint);
}

bool Character::isUnicodeIdentifierStart(char16_t ch) {
	$init(Character);
	return isUnicodeIdentifierStart((int32_t)ch);
}

bool Character::isUnicodeIdentifierStart(int32_t codePoint) {
	$init(Character);
	return $nc($($CharacterData::of(codePoint)))->isUnicodeIdentifierStart(codePoint);
}

bool Character::isUnicodeIdentifierPart(char16_t ch) {
	$init(Character);
	return isUnicodeIdentifierPart((int32_t)ch);
}

bool Character::isUnicodeIdentifierPart(int32_t codePoint) {
	$init(Character);
	return $nc($($CharacterData::of(codePoint)))->isUnicodeIdentifierPart(codePoint);
}

bool Character::isIdentifierIgnorable(char16_t ch) {
	$init(Character);
	return isIdentifierIgnorable((int32_t)ch);
}

bool Character::isIdentifierIgnorable(int32_t codePoint) {
	$init(Character);
	return $nc($($CharacterData::of(codePoint)))->isIdentifierIgnorable(codePoint);
}

char16_t Character::toLowerCase(char16_t ch) {
	$init(Character);
	return (char16_t)toLowerCase((int32_t)ch);
}

int32_t Character::toLowerCase(int32_t codePoint) {
	$init(Character);
	return $nc($($CharacterData::of(codePoint)))->toLowerCase(codePoint);
}

char16_t Character::toUpperCase(char16_t ch) {
	$init(Character);
	return (char16_t)toUpperCase((int32_t)ch);
}

int32_t Character::toUpperCase(int32_t codePoint) {
	$init(Character);
	return $nc($($CharacterData::of(codePoint)))->toUpperCase(codePoint);
}

char16_t Character::toTitleCase(char16_t ch) {
	$init(Character);
	return (char16_t)toTitleCase((int32_t)ch);
}

int32_t Character::toTitleCase(int32_t codePoint) {
	$init(Character);
	return $nc($($CharacterData::of(codePoint)))->toTitleCase(codePoint);
}

int32_t Character::digit(char16_t ch, int32_t radix) {
	$init(Character);
	return digit((int32_t)ch, radix);
}

int32_t Character::digit(int32_t codePoint, int32_t radix) {
	$init(Character);
	return $nc($($CharacterData::of(codePoint)))->digit(codePoint, radix);
}

int32_t Character::getNumericValue(char16_t ch) {
	$init(Character);
	return getNumericValue((int32_t)ch);
}

int32_t Character::getNumericValue(int32_t codePoint) {
	$init(Character);
	return $nc($($CharacterData::of(codePoint)))->getNumericValue(codePoint);
}

bool Character::isSpace(char16_t ch) {
	$init(Character);
	return (ch <= 32) && (((int64_t)(($sr((((((int64_t)1 << 9) | ((int64_t)1 << 10)) | ((int64_t)1 << 12)) | ((int64_t)1 << 13)) | ((int64_t)1 << 32), ch)) & (uint64_t)(int64_t)1)) != 0);
}

bool Character::isSpaceChar(char16_t ch) {
	$init(Character);
	return isSpaceChar((int32_t)ch);
}

bool Character::isSpaceChar(int32_t codePoint) {
	$init(Character);
	return ((int32_t)(($sr((($sl(1, Character::SPACE_SEPARATOR)) | ($sl(1, Character::LINE_SEPARATOR))) | ($sl(1, Character::PARAGRAPH_SEPARATOR)), getType(codePoint))) & (uint32_t)1)) != 0;
}

bool Character::isWhitespace(char16_t ch) {
	$init(Character);
	return isWhitespace((int32_t)ch);
}

bool Character::isWhitespace(int32_t codePoint) {
	$init(Character);
	return $nc($($CharacterData::of(codePoint)))->isWhitespace(codePoint);
}

bool Character::isISOControl(char16_t ch) {
	$init(Character);
	return isISOControl((int32_t)ch);
}

bool Character::isISOControl(int32_t codePoint) {
	$init(Character);
	return codePoint <= 159 && (codePoint >= 127 || ((int32_t)((uint32_t)codePoint >> 5) == 0));
}

int32_t Character::getType(char16_t ch) {
	$init(Character);
	return getType((int32_t)ch);
}

int32_t Character::getType(int32_t codePoint) {
	$init(Character);
	return $nc($($CharacterData::of(codePoint)))->getType(codePoint);
}

char16_t Character::forDigit(int32_t digit, int32_t radix) {
	$init(Character);
	if ((digit >= radix) || (digit < 0)) {
		return u'\0';
	}
	if ((radix < Character::MIN_RADIX) || (radix > Character::MAX_RADIX)) {
		return u'\0';
	}
	if (digit < 10) {
		return (char16_t)(u'0' + digit);
	}
	return (char16_t)(u'a' - 10 + digit);
}

int8_t Character::getDirectionality(char16_t ch) {
	$init(Character);
	return getDirectionality((int32_t)ch);
}

int8_t Character::getDirectionality(int32_t codePoint) {
	$init(Character);
	return $nc($($CharacterData::of(codePoint)))->getDirectionality(codePoint);
}

bool Character::isMirrored(char16_t ch) {
	$init(Character);
	return isMirrored((int32_t)ch);
}

bool Character::isMirrored(int32_t codePoint) {
	$init(Character);
	return $nc($($CharacterData::of(codePoint)))->isMirrored(codePoint);
}

int32_t Character::compareTo(Character* anotherCharacter) {
	return compare(this->value, $nc(anotherCharacter)->value);
}

int32_t Character::compare(char16_t x, char16_t y) {
	$init(Character);
	return x - y;
}

int32_t Character::toUpperCaseEx(int32_t codePoint) {
	$init(Character);
	if (!Character::$assertionsDisabled && !isValidCodePoint(codePoint)) {
		$throwNew($AssertionError);
	}
	return $nc($($CharacterData::of(codePoint)))->toUpperCaseEx(codePoint);
}

$chars* Character::toUpperCaseCharArray(int32_t codePoint) {
	$init(Character);
	if (!Character::$assertionsDisabled && !isBmpCodePoint(codePoint)) {
		$throwNew($AssertionError);
	}
	return $nc($($CharacterData::of(codePoint)))->toUpperCaseCharArray(codePoint);
}

char16_t Character::reverseBytes(char16_t ch) {
	$init(Character);
	return (char16_t)((((int32_t)(ch & (uint32_t)0x0000FF00)) >> 8) | (ch << 8));
}

$String* Character::getName(int32_t codePoint) {
	$init(Character);
	$useLocalCurrentObjectStackCache();
	if (!isValidCodePoint(codePoint)) {
		$throwNew($IllegalArgumentException, $($String::format("Not a valid Unicode code point: 0x%X"_s, $$new($ObjectArray, {$($of($Integer::valueOf(codePoint)))}))));
	}
	$var($String, name, $nc($($CharacterName::getInstance()))->getName(codePoint));
	if (name != nullptr) {
		return name;
	}
	if (getType(codePoint) == Character::UNASSIGNED) {
		return nullptr;
	}
	$var($Character$UnicodeBlock, block, $Character$UnicodeBlock::of(codePoint));
	if (block != nullptr) {
		$var($String, var$0, $$str({$($nc($(block->toString()))->replace(u'_', u' ')), " "_s}));
		$init($Locale);
		return $concat(var$0, $($nc($($Integer::toHexString(codePoint)))->toUpperCase($Locale::ROOT)));
	}
	$init($Locale);
	return $nc($($Integer::toHexString(codePoint)))->toUpperCase($Locale::ROOT);
}

int32_t Character::codePointOf($String* name$renamed) {
	$init(Character);
	$useLocalCurrentObjectStackCache();
	$var($String, name, name$renamed);
	$init($Locale);
	$assign(name, $($nc(name)->trim())->toUpperCase($Locale::ROOT));
	int32_t cp = $nc($($CharacterName::getInstance()))->getCodePoint(name);
	if (cp != -1) {
		return cp;
	}
	try {
		int32_t off = name->lastIndexOf((int32_t)u' ');
		if (off != -1) {
			cp = $Integer::parseInt(name, off + 1, name->length(), 16);
			bool var$0 = isValidCodePoint(cp);
			if (var$0 && name->equals($(getName(cp)))) {
				return cp;
			}
		}
	} catch ($Exception& x) {
	}
	$throwNew($IllegalArgumentException, $$str({"Unrecognized character name :"_s, name}));
	$shouldNotReachHere();
}

int32_t Character::compareTo(Object$* anotherCharacter) {
	return this->compareTo($cast(Character, anotherCharacter));
}

void clinit$Character($Class* class$) {
	Character::$assertionsDisabled = !Character::class$->desiredAssertionStatus();
	$assignStatic(Character::TYPE, $Class::getPrimitiveClass("char"_s));
}

Character::Character() {
}

$Class* Character::load$($String* name, bool initialize) {
	$loadClass(Character, name, initialize, &_Character_ClassInfo_, clinit$Character, allocate$Character);
	return class$;
}

$Class* Character::class$ = nullptr;

	} // lang
} // java