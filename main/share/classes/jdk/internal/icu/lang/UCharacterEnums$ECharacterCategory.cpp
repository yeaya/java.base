#include <jdk/internal/icu/lang/UCharacterEnums$ECharacterCategory.h>

#include <jdk/internal/icu/lang/UCharacterEnums.h>
#include <jcpp.h>

#undef CHAR_CATEGORY_COUNT
#undef COMBINING_SPACING_MARK
#undef CONNECTOR_PUNCTUATION
#undef CONTROL
#undef CURRENCY_SYMBOL
#undef DASH_PUNCTUATION
#undef DECIMAL_DIGIT_NUMBER
#undef ENCLOSING_MARK
#undef END_PUNCTUATION
#undef FINAL_PUNCTUATION
#undef FINAL_QUOTE_PUNCTUATION
#undef FORMAT
#undef GENERAL_OTHER_TYPES
#undef INITIAL_PUNCTUATION
#undef INITIAL_QUOTE_PUNCTUATION
#undef LETTER_NUMBER
#undef LINE_SEPARATOR
#undef LOWERCASE_LETTER
#undef MATH_SYMBOL
#undef MODIFIER_LETTER
#undef MODIFIER_SYMBOL
#undef NON_SPACING_MARK
#undef OTHER_LETTER
#undef OTHER_NUMBER
#undef OTHER_PUNCTUATION
#undef OTHER_SYMBOL
#undef PARAGRAPH_SEPARATOR
#undef PRIVATE_USE
#undef SPACE_SEPARATOR
#undef START_PUNCTUATION
#undef SURROGATE
#undef TITLECASE_LETTER
#undef UNASSIGNED
#undef UPPERCASE_LETTER

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $UCharacterEnums = ::jdk::internal::icu::lang::UCharacterEnums;

namespace jdk {
	namespace internal {
		namespace icu {
			namespace lang {

$CompoundAttribute _UCharacterEnums$ECharacterCategory_Annotations_[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _UCharacterEnums$ECharacterCategory_FieldAnnotations_INITIAL_QUOTE_PUNCTUATION[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _UCharacterEnums$ECharacterCategory_FieldAnnotations_FINAL_QUOTE_PUNCTUATION[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _UCharacterEnums$ECharacterCategory_FieldInfo_[] = {
	{"UNASSIGNED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(UCharacterEnums$ECharacterCategory, UNASSIGNED)},
	{"GENERAL_OTHER_TYPES", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(UCharacterEnums$ECharacterCategory, GENERAL_OTHER_TYPES)},
	{"UPPERCASE_LETTER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(UCharacterEnums$ECharacterCategory, UPPERCASE_LETTER)},
	{"LOWERCASE_LETTER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(UCharacterEnums$ECharacterCategory, LOWERCASE_LETTER)},
	{"TITLECASE_LETTER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(UCharacterEnums$ECharacterCategory, TITLECASE_LETTER)},
	{"MODIFIER_LETTER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(UCharacterEnums$ECharacterCategory, MODIFIER_LETTER)},
	{"OTHER_LETTER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(UCharacterEnums$ECharacterCategory, OTHER_LETTER)},
	{"NON_SPACING_MARK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(UCharacterEnums$ECharacterCategory, NON_SPACING_MARK)},
	{"ENCLOSING_MARK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(UCharacterEnums$ECharacterCategory, ENCLOSING_MARK)},
	{"COMBINING_SPACING_MARK", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(UCharacterEnums$ECharacterCategory, COMBINING_SPACING_MARK)},
	{"DECIMAL_DIGIT_NUMBER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(UCharacterEnums$ECharacterCategory, DECIMAL_DIGIT_NUMBER)},
	{"LETTER_NUMBER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(UCharacterEnums$ECharacterCategory, LETTER_NUMBER)},
	{"OTHER_NUMBER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(UCharacterEnums$ECharacterCategory, OTHER_NUMBER)},
	{"SPACE_SEPARATOR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(UCharacterEnums$ECharacterCategory, SPACE_SEPARATOR)},
	{"LINE_SEPARATOR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(UCharacterEnums$ECharacterCategory, LINE_SEPARATOR)},
	{"PARAGRAPH_SEPARATOR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(UCharacterEnums$ECharacterCategory, PARAGRAPH_SEPARATOR)},
	{"CONTROL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(UCharacterEnums$ECharacterCategory, CONTROL)},
	{"FORMAT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(UCharacterEnums$ECharacterCategory, FORMAT)},
	{"PRIVATE_USE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(UCharacterEnums$ECharacterCategory, PRIVATE_USE)},
	{"SURROGATE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(UCharacterEnums$ECharacterCategory, SURROGATE)},
	{"DASH_PUNCTUATION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(UCharacterEnums$ECharacterCategory, DASH_PUNCTUATION)},
	{"START_PUNCTUATION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(UCharacterEnums$ECharacterCategory, START_PUNCTUATION)},
	{"END_PUNCTUATION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(UCharacterEnums$ECharacterCategory, END_PUNCTUATION)},
	{"CONNECTOR_PUNCTUATION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(UCharacterEnums$ECharacterCategory, CONNECTOR_PUNCTUATION)},
	{"OTHER_PUNCTUATION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(UCharacterEnums$ECharacterCategory, OTHER_PUNCTUATION)},
	{"MATH_SYMBOL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(UCharacterEnums$ECharacterCategory, MATH_SYMBOL)},
	{"CURRENCY_SYMBOL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(UCharacterEnums$ECharacterCategory, CURRENCY_SYMBOL)},
	{"MODIFIER_SYMBOL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(UCharacterEnums$ECharacterCategory, MODIFIER_SYMBOL)},
	{"OTHER_SYMBOL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(UCharacterEnums$ECharacterCategory, OTHER_SYMBOL)},
	{"INITIAL_PUNCTUATION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(UCharacterEnums$ECharacterCategory, INITIAL_PUNCTUATION)},
	{"INITIAL_QUOTE_PUNCTUATION", "I", nullptr, $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $constField(UCharacterEnums$ECharacterCategory, INITIAL_QUOTE_PUNCTUATION), _UCharacterEnums$ECharacterCategory_FieldAnnotations_INITIAL_QUOTE_PUNCTUATION},
	{"FINAL_PUNCTUATION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(UCharacterEnums$ECharacterCategory, FINAL_PUNCTUATION)},
	{"FINAL_QUOTE_PUNCTUATION", "I", nullptr, $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $constField(UCharacterEnums$ECharacterCategory, FINAL_QUOTE_PUNCTUATION), _UCharacterEnums$ECharacterCategory_FieldAnnotations_FINAL_QUOTE_PUNCTUATION},
	{"CHAR_CATEGORY_COUNT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(UCharacterEnums$ECharacterCategory, CHAR_CATEGORY_COUNT)},
	{}
};

$InnerClassInfo _UCharacterEnums$ECharacterCategory_InnerClassesInfo_[] = {
	{"jdk.internal.icu.lang.UCharacterEnums$ECharacterCategory", "jdk.internal.icu.lang.UCharacterEnums", "ECharacterCategory", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _UCharacterEnums$ECharacterCategory_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"jdk.internal.icu.lang.UCharacterEnums$ECharacterCategory",
	nullptr,
	nullptr,
	_UCharacterEnums$ECharacterCategory_FieldInfo_,
	nullptr,
	nullptr,
	nullptr,
	_UCharacterEnums$ECharacterCategory_InnerClassesInfo_,
	_UCharacterEnums$ECharacterCategory_Annotations_,
	nullptr,
	nullptr,
	"jdk.internal.icu.lang.UCharacterEnums"
};

$Object* allocate$UCharacterEnums$ECharacterCategory($Class* clazz) {
	return $of($alloc(UCharacterEnums$ECharacterCategory));
}

$Class* UCharacterEnums$ECharacterCategory::load$($String* name, bool initialize) {
	$loadClass(UCharacterEnums$ECharacterCategory, name, initialize, &_UCharacterEnums$ECharacterCategory_ClassInfo_, allocate$UCharacterEnums$ECharacterCategory);
	return class$;
}

$Class* UCharacterEnums$ECharacterCategory::class$ = nullptr;

			} // lang
		} // icu
	} // internal
} // jdk