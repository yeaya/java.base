#include <java/util/regex/CharPredicates.h>

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Character$UnicodeBlock.h>
#include <java/lang/Character$UnicodeScript.h>
#include <java/lang/Character.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Locale.h>
#include <java/util/regex/ASCII.h>
#include <java/util/regex/Pattern$BmpCharPredicate.h>
#include <java/util/regex/Pattern$CharPredicate.h>
#include <java/util/regex/Pattern.h>
#include <jcpp.h>

#undef PRINT
#undef LETTER
#undef LOWERCASE_LETTER
#undef FORMAT
#undef MODIFIER_LETTER
#undef ALPHA
#undef IDEOGRAPHIC
#undef OTHER_NUMBER
#undef ALPHABETIC
#undef MODIFIER_SYMBOL
#undef DASH_PUNCTUATION
#undef DECIMAL_DIGIT_NUMBER
#undef PUNCT
#undef CNTRL
#undef WHITE_SPACE
#undef GRAPH
#undef LINE_SEPARATOR
#undef WORD
#undef SURROGATE
#undef ASCII_SPACE
#undef NONCHARACTER_CODE_POINT
#undef TITLECASE_LETTER
#undef START_PUNCTUATION
#undef UPPERCASE_LETTER
#undef UNASSIGNED
#undef ENCLOSING_MARK
#undef ASCII_WORD
#undef TITLECASE
#undef CONNECTOR_PUNCTUATION
#undef CONTROL
#undef XDIGIT
#undef ROOT
#undef CURRENCY_SYMBOL
#undef PARAGRAPH_SEPARATOR
#undef PUNCTUATION
#undef END_PUNCTUATION
#undef SPACE
#undef FINAL_QUOTE_PUNCTUATION
#undef ASSIGNED
#undef SPACE_SEPARATOR
#undef UPPERCASE
#undef HEX_DIGIT
#undef LETTER_NUMBER
#undef ASCII_DIGIT
#undef PRIVATE_USE
#undef JOIN_CONTROL
#undef ENGLISH
#undef NON_SPACING_MARK
#undef ALNUM
#undef COMBINING_SPACING_MARK
#undef DIGIT
#undef BLANK
#undef INITIAL_QUOTE_PUNCTUATION
#undef OTHER_PUNCTUATION
#undef OTHER_SYMBOL
#undef MATH_SYMBOL
#undef LOWERCASE
#undef OTHER_LETTER

using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $Character = ::java::lang::Character;
using $Character$UnicodeBlock = ::java::lang::Character$UnicodeBlock;
using $Character$UnicodeScript = ::java::lang::Character$UnicodeScript;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Locale = ::java::util::Locale;
using $ASCII = ::java::util::regex::ASCII;
using $Pattern = ::java::util::regex::Pattern;
using $Pattern$BmpCharPredicate = ::java::util::regex::Pattern$BmpCharPredicate;
using $Pattern$CharPredicate = ::java::util::regex::Pattern$CharPredicate;

namespace java {
	namespace util {
		namespace regex {

class CharPredicates$$Lambda$isAlphabetic : public $Pattern$CharPredicate {
	$class(CharPredicates$$Lambda$isAlphabetic, $NO_CLASS_INIT, $Pattern$CharPredicate)
public:
	void init$() {
	}
	virtual bool is(int32_t codePoint) override {
		 return $Character::isAlphabetic(codePoint);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CharPredicates$$Lambda$isAlphabetic>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo CharPredicates$$Lambda$isAlphabetic::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CharPredicates$$Lambda$isAlphabetic::*)()>(&CharPredicates$$Lambda$isAlphabetic::init$))},
	{"is", "(I)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo CharPredicates$$Lambda$isAlphabetic::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.regex.CharPredicates$$Lambda$isAlphabetic",
	"java.lang.Object",
	"java.util.regex.Pattern$CharPredicate",
	nullptr,
	methodInfos
};
$Class* CharPredicates$$Lambda$isAlphabetic::load$($String* name, bool initialize) {
	$loadClass(CharPredicates$$Lambda$isAlphabetic, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CharPredicates$$Lambda$isAlphabetic::class$ = nullptr;

class CharPredicates$$Lambda$isDigit$1 : public $Pattern$CharPredicate {
	$class(CharPredicates$$Lambda$isDigit$1, $NO_CLASS_INIT, $Pattern$CharPredicate)
public:
	void init$() {
	}
	virtual bool is(int32_t codePoint) override {
		 return $Character::isDigit(codePoint);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CharPredicates$$Lambda$isDigit$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo CharPredicates$$Lambda$isDigit$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CharPredicates$$Lambda$isDigit$1::*)()>(&CharPredicates$$Lambda$isDigit$1::init$))},
	{"is", "(I)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo CharPredicates$$Lambda$isDigit$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.regex.CharPredicates$$Lambda$isDigit$1",
	"java.lang.Object",
	"java.util.regex.Pattern$CharPredicate",
	nullptr,
	methodInfos
};
$Class* CharPredicates$$Lambda$isDigit$1::load$($String* name, bool initialize) {
	$loadClass(CharPredicates$$Lambda$isDigit$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CharPredicates$$Lambda$isDigit$1::class$ = nullptr;

class CharPredicates$$Lambda$isLetter$2 : public $Pattern$CharPredicate {
	$class(CharPredicates$$Lambda$isLetter$2, $NO_CLASS_INIT, $Pattern$CharPredicate)
public:
	void init$() {
	}
	virtual bool is(int32_t codePoint) override {
		 return $Character::isLetter(codePoint);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CharPredicates$$Lambda$isLetter$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo CharPredicates$$Lambda$isLetter$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CharPredicates$$Lambda$isLetter$2::*)()>(&CharPredicates$$Lambda$isLetter$2::init$))},
	{"is", "(I)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo CharPredicates$$Lambda$isLetter$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.regex.CharPredicates$$Lambda$isLetter$2",
	"java.lang.Object",
	"java.util.regex.Pattern$CharPredicate",
	nullptr,
	methodInfos
};
$Class* CharPredicates$$Lambda$isLetter$2::load$($String* name, bool initialize) {
	$loadClass(CharPredicates$$Lambda$isLetter$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CharPredicates$$Lambda$isLetter$2::class$ = nullptr;

class CharPredicates$$Lambda$isIdeographic$3 : public $Pattern$CharPredicate {
	$class(CharPredicates$$Lambda$isIdeographic$3, $NO_CLASS_INIT, $Pattern$CharPredicate)
public:
	void init$() {
	}
	virtual bool is(int32_t codePoint) override {
		 return $Character::isIdeographic(codePoint);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CharPredicates$$Lambda$isIdeographic$3>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo CharPredicates$$Lambda$isIdeographic$3::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CharPredicates$$Lambda$isIdeographic$3::*)()>(&CharPredicates$$Lambda$isIdeographic$3::init$))},
	{"is", "(I)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo CharPredicates$$Lambda$isIdeographic$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.regex.CharPredicates$$Lambda$isIdeographic$3",
	"java.lang.Object",
	"java.util.regex.Pattern$CharPredicate",
	nullptr,
	methodInfos
};
$Class* CharPredicates$$Lambda$isIdeographic$3::load$($String* name, bool initialize) {
	$loadClass(CharPredicates$$Lambda$isIdeographic$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CharPredicates$$Lambda$isIdeographic$3::class$ = nullptr;

class CharPredicates$$Lambda$isLowerCase$4 : public $Pattern$CharPredicate {
	$class(CharPredicates$$Lambda$isLowerCase$4, $NO_CLASS_INIT, $Pattern$CharPredicate)
public:
	void init$() {
	}
	virtual bool is(int32_t codePoint) override {
		 return $Character::isLowerCase(codePoint);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CharPredicates$$Lambda$isLowerCase$4>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo CharPredicates$$Lambda$isLowerCase$4::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CharPredicates$$Lambda$isLowerCase$4::*)()>(&CharPredicates$$Lambda$isLowerCase$4::init$))},
	{"is", "(I)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo CharPredicates$$Lambda$isLowerCase$4::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.regex.CharPredicates$$Lambda$isLowerCase$4",
	"java.lang.Object",
	"java.util.regex.Pattern$CharPredicate",
	nullptr,
	methodInfos
};
$Class* CharPredicates$$Lambda$isLowerCase$4::load$($String* name, bool initialize) {
	$loadClass(CharPredicates$$Lambda$isLowerCase$4, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CharPredicates$$Lambda$isLowerCase$4::class$ = nullptr;

class CharPredicates$$Lambda$isUpperCase$5 : public $Pattern$CharPredicate {
	$class(CharPredicates$$Lambda$isUpperCase$5, $NO_CLASS_INIT, $Pattern$CharPredicate)
public:
	void init$() {
	}
	virtual bool is(int32_t codePoint) override {
		 return $Character::isUpperCase(codePoint);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CharPredicates$$Lambda$isUpperCase$5>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo CharPredicates$$Lambda$isUpperCase$5::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CharPredicates$$Lambda$isUpperCase$5::*)()>(&CharPredicates$$Lambda$isUpperCase$5::init$))},
	{"is", "(I)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo CharPredicates$$Lambda$isUpperCase$5::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.regex.CharPredicates$$Lambda$isUpperCase$5",
	"java.lang.Object",
	"java.util.regex.Pattern$CharPredicate",
	nullptr,
	methodInfos
};
$Class* CharPredicates$$Lambda$isUpperCase$5::load$($String* name, bool initialize) {
	$loadClass(CharPredicates$$Lambda$isUpperCase$5, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CharPredicates$$Lambda$isUpperCase$5::class$ = nullptr;

class CharPredicates$$Lambda$isTitleCase$6 : public $Pattern$CharPredicate {
	$class(CharPredicates$$Lambda$isTitleCase$6, $NO_CLASS_INIT, $Pattern$CharPredicate)
public:
	void init$() {
	}
	virtual bool is(int32_t codePoint) override {
		 return $Character::isTitleCase(codePoint);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CharPredicates$$Lambda$isTitleCase$6>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo CharPredicates$$Lambda$isTitleCase$6::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CharPredicates$$Lambda$isTitleCase$6::*)()>(&CharPredicates$$Lambda$isTitleCase$6::init$))},
	{"is", "(I)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo CharPredicates$$Lambda$isTitleCase$6::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.regex.CharPredicates$$Lambda$isTitleCase$6",
	"java.lang.Object",
	"java.util.regex.Pattern$CharPredicate",
	nullptr,
	methodInfos
};
$Class* CharPredicates$$Lambda$isTitleCase$6::load$($String* name, bool initialize) {
	$loadClass(CharPredicates$$Lambda$isTitleCase$6, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CharPredicates$$Lambda$isTitleCase$6::class$ = nullptr;

class CharPredicates$$Lambda$lambda$WHITE_SPACE$0$7 : public $Pattern$CharPredicate {
	$class(CharPredicates$$Lambda$lambda$WHITE_SPACE$0$7, $NO_CLASS_INIT, $Pattern$CharPredicate)
public:
	void init$() {
	}
	virtual bool is(int32_t ch) override {
		 return CharPredicates::lambda$WHITE_SPACE$0(ch);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CharPredicates$$Lambda$lambda$WHITE_SPACE$0$7>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo CharPredicates$$Lambda$lambda$WHITE_SPACE$0$7::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CharPredicates$$Lambda$lambda$WHITE_SPACE$0$7::*)()>(&CharPredicates$$Lambda$lambda$WHITE_SPACE$0$7::init$))},
	{"is", "(I)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo CharPredicates$$Lambda$lambda$WHITE_SPACE$0$7::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.regex.CharPredicates$$Lambda$lambda$WHITE_SPACE$0$7",
	"java.lang.Object",
	"java.util.regex.Pattern$CharPredicate",
	nullptr,
	methodInfos
};
$Class* CharPredicates$$Lambda$lambda$WHITE_SPACE$0$7::load$($String* name, bool initialize) {
	$loadClass(CharPredicates$$Lambda$lambda$WHITE_SPACE$0$7, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CharPredicates$$Lambda$lambda$WHITE_SPACE$0$7::class$ = nullptr;

class CharPredicates$$Lambda$lambda$CONTROL$1$8 : public $Pattern$CharPredicate {
	$class(CharPredicates$$Lambda$lambda$CONTROL$1$8, $NO_CLASS_INIT, $Pattern$CharPredicate)
public:
	void init$() {
	}
	virtual bool is(int32_t ch) override {
		 return CharPredicates::lambda$CONTROL$1(ch);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CharPredicates$$Lambda$lambda$CONTROL$1$8>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo CharPredicates$$Lambda$lambda$CONTROL$1$8::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CharPredicates$$Lambda$lambda$CONTROL$1$8::*)()>(&CharPredicates$$Lambda$lambda$CONTROL$1$8::init$))},
	{"is", "(I)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo CharPredicates$$Lambda$lambda$CONTROL$1$8::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.regex.CharPredicates$$Lambda$lambda$CONTROL$1$8",
	"java.lang.Object",
	"java.util.regex.Pattern$CharPredicate",
	nullptr,
	methodInfos
};
$Class* CharPredicates$$Lambda$lambda$CONTROL$1$8::load$($String* name, bool initialize) {
	$loadClass(CharPredicates$$Lambda$lambda$CONTROL$1$8, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CharPredicates$$Lambda$lambda$CONTROL$1$8::class$ = nullptr;

class CharPredicates$$Lambda$lambda$PUNCTUATION$2$9 : public $Pattern$CharPredicate {
	$class(CharPredicates$$Lambda$lambda$PUNCTUATION$2$9, $NO_CLASS_INIT, $Pattern$CharPredicate)
public:
	void init$() {
	}
	virtual bool is(int32_t ch) override {
		 return CharPredicates::lambda$PUNCTUATION$2(ch);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CharPredicates$$Lambda$lambda$PUNCTUATION$2$9>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo CharPredicates$$Lambda$lambda$PUNCTUATION$2$9::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CharPredicates$$Lambda$lambda$PUNCTUATION$2$9::*)()>(&CharPredicates$$Lambda$lambda$PUNCTUATION$2$9::init$))},
	{"is", "(I)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo CharPredicates$$Lambda$lambda$PUNCTUATION$2$9::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.regex.CharPredicates$$Lambda$lambda$PUNCTUATION$2$9",
	"java.lang.Object",
	"java.util.regex.Pattern$CharPredicate",
	nullptr,
	methodInfos
};
$Class* CharPredicates$$Lambda$lambda$PUNCTUATION$2$9::load$($String* name, bool initialize) {
	$loadClass(CharPredicates$$Lambda$lambda$PUNCTUATION$2$9, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CharPredicates$$Lambda$lambda$PUNCTUATION$2$9::class$ = nullptr;

class CharPredicates$$Lambda$lambda$HEX_DIGIT$3$10 : public $Pattern$CharPredicate {
	$class(CharPredicates$$Lambda$lambda$HEX_DIGIT$3$10, $NO_CLASS_INIT, $Pattern$CharPredicate)
public:
	void init$() {
	}
	virtual bool is(int32_t ch) override {
		 return CharPredicates::lambda$HEX_DIGIT$3(ch);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CharPredicates$$Lambda$lambda$HEX_DIGIT$3$10>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo CharPredicates$$Lambda$lambda$HEX_DIGIT$3$10::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CharPredicates$$Lambda$lambda$HEX_DIGIT$3$10::*)()>(&CharPredicates$$Lambda$lambda$HEX_DIGIT$3$10::init$))},
	{"is", "(I)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo CharPredicates$$Lambda$lambda$HEX_DIGIT$3$10::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.regex.CharPredicates$$Lambda$lambda$HEX_DIGIT$3$10",
	"java.lang.Object",
	"java.util.regex.Pattern$CharPredicate",
	nullptr,
	methodInfos
};
$Class* CharPredicates$$Lambda$lambda$HEX_DIGIT$3$10::load$($String* name, bool initialize) {
	$loadClass(CharPredicates$$Lambda$lambda$HEX_DIGIT$3$10, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CharPredicates$$Lambda$lambda$HEX_DIGIT$3$10::class$ = nullptr;

class CharPredicates$$Lambda$lambda$ASSIGNED$4$11 : public $Pattern$CharPredicate {
	$class(CharPredicates$$Lambda$lambda$ASSIGNED$4$11, $NO_CLASS_INIT, $Pattern$CharPredicate)
public:
	void init$() {
	}
	virtual bool is(int32_t ch) override {
		 return CharPredicates::lambda$ASSIGNED$4(ch);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CharPredicates$$Lambda$lambda$ASSIGNED$4$11>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo CharPredicates$$Lambda$lambda$ASSIGNED$4$11::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CharPredicates$$Lambda$lambda$ASSIGNED$4$11::*)()>(&CharPredicates$$Lambda$lambda$ASSIGNED$4$11::init$))},
	{"is", "(I)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo CharPredicates$$Lambda$lambda$ASSIGNED$4$11::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.regex.CharPredicates$$Lambda$lambda$ASSIGNED$4$11",
	"java.lang.Object",
	"java.util.regex.Pattern$CharPredicate",
	nullptr,
	methodInfos
};
$Class* CharPredicates$$Lambda$lambda$ASSIGNED$4$11::load$($String* name, bool initialize) {
	$loadClass(CharPredicates$$Lambda$lambda$ASSIGNED$4$11, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CharPredicates$$Lambda$lambda$ASSIGNED$4$11::class$ = nullptr;

class CharPredicates$$Lambda$lambda$NONCHARACTER_CODE_POINT$5$12 : public $Pattern$CharPredicate {
	$class(CharPredicates$$Lambda$lambda$NONCHARACTER_CODE_POINT$5$12, $NO_CLASS_INIT, $Pattern$CharPredicate)
public:
	void init$() {
	}
	virtual bool is(int32_t ch) override {
		 return CharPredicates::lambda$NONCHARACTER_CODE_POINT$5(ch);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CharPredicates$$Lambda$lambda$NONCHARACTER_CODE_POINT$5$12>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo CharPredicates$$Lambda$lambda$NONCHARACTER_CODE_POINT$5$12::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CharPredicates$$Lambda$lambda$NONCHARACTER_CODE_POINT$5$12::*)()>(&CharPredicates$$Lambda$lambda$NONCHARACTER_CODE_POINT$5$12::init$))},
	{"is", "(I)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo CharPredicates$$Lambda$lambda$NONCHARACTER_CODE_POINT$5$12::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.regex.CharPredicates$$Lambda$lambda$NONCHARACTER_CODE_POINT$5$12",
	"java.lang.Object",
	"java.util.regex.Pattern$CharPredicate",
	nullptr,
	methodInfos
};
$Class* CharPredicates$$Lambda$lambda$NONCHARACTER_CODE_POINT$5$12::load$($String* name, bool initialize) {
	$loadClass(CharPredicates$$Lambda$lambda$NONCHARACTER_CODE_POINT$5$12, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CharPredicates$$Lambda$lambda$NONCHARACTER_CODE_POINT$5$12::class$ = nullptr;

class CharPredicates$$Lambda$lambda$BLANK$6$13 : public $Pattern$CharPredicate {
	$class(CharPredicates$$Lambda$lambda$BLANK$6$13, $NO_CLASS_INIT, $Pattern$CharPredicate)
public:
	void init$() {
	}
	virtual bool is(int32_t ch) override {
		 return CharPredicates::lambda$BLANK$6(ch);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CharPredicates$$Lambda$lambda$BLANK$6$13>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo CharPredicates$$Lambda$lambda$BLANK$6$13::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CharPredicates$$Lambda$lambda$BLANK$6$13::*)()>(&CharPredicates$$Lambda$lambda$BLANK$6$13::init$))},
	{"is", "(I)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo CharPredicates$$Lambda$lambda$BLANK$6$13::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.regex.CharPredicates$$Lambda$lambda$BLANK$6$13",
	"java.lang.Object",
	"java.util.regex.Pattern$CharPredicate",
	nullptr,
	methodInfos
};
$Class* CharPredicates$$Lambda$lambda$BLANK$6$13::load$($String* name, bool initialize) {
	$loadClass(CharPredicates$$Lambda$lambda$BLANK$6$13, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CharPredicates$$Lambda$lambda$BLANK$6$13::class$ = nullptr;

class CharPredicates$$Lambda$lambda$GRAPH$7$14 : public $Pattern$CharPredicate {
	$class(CharPredicates$$Lambda$lambda$GRAPH$7$14, $NO_CLASS_INIT, $Pattern$CharPredicate)
public:
	void init$() {
	}
	virtual bool is(int32_t ch) override {
		 return CharPredicates::lambda$GRAPH$7(ch);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CharPredicates$$Lambda$lambda$GRAPH$7$14>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo CharPredicates$$Lambda$lambda$GRAPH$7$14::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CharPredicates$$Lambda$lambda$GRAPH$7$14::*)()>(&CharPredicates$$Lambda$lambda$GRAPH$7$14::init$))},
	{"is", "(I)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo CharPredicates$$Lambda$lambda$GRAPH$7$14::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.regex.CharPredicates$$Lambda$lambda$GRAPH$7$14",
	"java.lang.Object",
	"java.util.regex.Pattern$CharPredicate",
	nullptr,
	methodInfos
};
$Class* CharPredicates$$Lambda$lambda$GRAPH$7$14::load$($String* name, bool initialize) {
	$loadClass(CharPredicates$$Lambda$lambda$GRAPH$7$14, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CharPredicates$$Lambda$lambda$GRAPH$7$14::class$ = nullptr;

class CharPredicates$$Lambda$lambda$JOIN_CONTROL$8$15 : public $Pattern$CharPredicate {
	$class(CharPredicates$$Lambda$lambda$JOIN_CONTROL$8$15, $NO_CLASS_INIT, $Pattern$CharPredicate)
public:
	void init$() {
	}
	virtual bool is(int32_t ch) override {
		 return CharPredicates::lambda$JOIN_CONTROL$8(ch);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CharPredicates$$Lambda$lambda$JOIN_CONTROL$8$15>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo CharPredicates$$Lambda$lambda$JOIN_CONTROL$8$15::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CharPredicates$$Lambda$lambda$JOIN_CONTROL$8$15::*)()>(&CharPredicates$$Lambda$lambda$JOIN_CONTROL$8$15::init$))},
	{"is", "(I)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo CharPredicates$$Lambda$lambda$JOIN_CONTROL$8$15::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.regex.CharPredicates$$Lambda$lambda$JOIN_CONTROL$8$15",
	"java.lang.Object",
	"java.util.regex.Pattern$CharPredicate",
	nullptr,
	methodInfos
};
$Class* CharPredicates$$Lambda$lambda$JOIN_CONTROL$8$15::load$($String* name, bool initialize) {
	$loadClass(CharPredicates$$Lambda$lambda$JOIN_CONTROL$8$15, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CharPredicates$$Lambda$lambda$JOIN_CONTROL$8$15::class$ = nullptr;

class CharPredicates$$Lambda$lambda$WORD$9$16 : public $Pattern$CharPredicate {
	$class(CharPredicates$$Lambda$lambda$WORD$9$16, $NO_CLASS_INIT, $Pattern$CharPredicate)
public:
	void init$() {
	}
	virtual bool is(int32_t ch) override {
		 return CharPredicates::lambda$WORD$9(ch);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CharPredicates$$Lambda$lambda$WORD$9$16>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo CharPredicates$$Lambda$lambda$WORD$9$16::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CharPredicates$$Lambda$lambda$WORD$9$16::*)()>(&CharPredicates$$Lambda$lambda$WORD$9$16::init$))},
	{"is", "(I)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo CharPredicates$$Lambda$lambda$WORD$9$16::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.regex.CharPredicates$$Lambda$lambda$WORD$9$16",
	"java.lang.Object",
	"java.util.regex.Pattern$CharPredicate",
	nullptr,
	methodInfos
};
$Class* CharPredicates$$Lambda$lambda$WORD$9$16::load$($String* name, bool initialize) {
	$loadClass(CharPredicates$$Lambda$lambda$WORD$9$16, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CharPredicates$$Lambda$lambda$WORD$9$16::class$ = nullptr;

class CharPredicates$$Lambda$lambda$forUnicodeScript$10$17 : public $Pattern$CharPredicate {
	$class(CharPredicates$$Lambda$lambda$forUnicodeScript$10$17, $NO_CLASS_INIT, $Pattern$CharPredicate)
public:
	void init$($Character$UnicodeScript* script) {
		$set(this, script, script);
	}
	virtual bool is(int32_t ch) override {
		 return CharPredicates::lambda$forUnicodeScript$10(script, ch);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CharPredicates$$Lambda$lambda$forUnicodeScript$10$17>());
	}
	$Character$UnicodeScript* script = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo CharPredicates$$Lambda$lambda$forUnicodeScript$10$17::fieldInfos[2] = {
	{"script", "Ljava/lang/Character$UnicodeScript;", nullptr, $PUBLIC, $field(CharPredicates$$Lambda$lambda$forUnicodeScript$10$17, script)},
	{}
};
$MethodInfo CharPredicates$$Lambda$lambda$forUnicodeScript$10$17::methodInfos[3] = {
	{"<init>", "(Ljava/lang/Character$UnicodeScript;)V", nullptr, $PUBLIC, $method(static_cast<void(CharPredicates$$Lambda$lambda$forUnicodeScript$10$17::*)($Character$UnicodeScript*)>(&CharPredicates$$Lambda$lambda$forUnicodeScript$10$17::init$))},
	{"is", "(I)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo CharPredicates$$Lambda$lambda$forUnicodeScript$10$17::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.regex.CharPredicates$$Lambda$lambda$forUnicodeScript$10$17",
	"java.lang.Object",
	"java.util.regex.Pattern$CharPredicate",
	fieldInfos,
	methodInfos
};
$Class* CharPredicates$$Lambda$lambda$forUnicodeScript$10$17::load$($String* name, bool initialize) {
	$loadClass(CharPredicates$$Lambda$lambda$forUnicodeScript$10$17, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CharPredicates$$Lambda$lambda$forUnicodeScript$10$17::class$ = nullptr;

class CharPredicates$$Lambda$lambda$forUnicodeBlock$11$18 : public $Pattern$CharPredicate {
	$class(CharPredicates$$Lambda$lambda$forUnicodeBlock$11$18, $NO_CLASS_INIT, $Pattern$CharPredicate)
public:
	void init$($Character$UnicodeBlock* block) {
		$set(this, block, block);
	}
	virtual bool is(int32_t ch) override {
		 return CharPredicates::lambda$forUnicodeBlock$11(block, ch);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CharPredicates$$Lambda$lambda$forUnicodeBlock$11$18>());
	}
	$Character$UnicodeBlock* block = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo CharPredicates$$Lambda$lambda$forUnicodeBlock$11$18::fieldInfos[2] = {
	{"block", "Ljava/lang/Character$UnicodeBlock;", nullptr, $PUBLIC, $field(CharPredicates$$Lambda$lambda$forUnicodeBlock$11$18, block)},
	{}
};
$MethodInfo CharPredicates$$Lambda$lambda$forUnicodeBlock$11$18::methodInfos[3] = {
	{"<init>", "(Ljava/lang/Character$UnicodeBlock;)V", nullptr, $PUBLIC, $method(static_cast<void(CharPredicates$$Lambda$lambda$forUnicodeBlock$11$18::*)($Character$UnicodeBlock*)>(&CharPredicates$$Lambda$lambda$forUnicodeBlock$11$18::init$))},
	{"is", "(I)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo CharPredicates$$Lambda$lambda$forUnicodeBlock$11$18::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.regex.CharPredicates$$Lambda$lambda$forUnicodeBlock$11$18",
	"java.lang.Object",
	"java.util.regex.Pattern$CharPredicate",
	fieldInfos,
	methodInfos
};
$Class* CharPredicates$$Lambda$lambda$forUnicodeBlock$11$18::load$($String* name, bool initialize) {
	$loadClass(CharPredicates$$Lambda$lambda$forUnicodeBlock$11$18, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CharPredicates$$Lambda$lambda$forUnicodeBlock$11$18::class$ = nullptr;

class CharPredicates$$Lambda$lambda$forProperty$12$19 : public $Pattern$CharPredicate {
	$class(CharPredicates$$Lambda$lambda$forProperty$12$19, $NO_CLASS_INIT, $Pattern$CharPredicate)
public:
	void init$() {
	}
	virtual bool is(int32_t c) override {
		 return CharPredicates::lambda$forProperty$12(c);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CharPredicates$$Lambda$lambda$forProperty$12$19>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo CharPredicates$$Lambda$lambda$forProperty$12$19::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CharPredicates$$Lambda$lambda$forProperty$12$19::*)()>(&CharPredicates$$Lambda$lambda$forProperty$12$19::init$))},
	{"is", "(I)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo CharPredicates$$Lambda$lambda$forProperty$12$19::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.regex.CharPredicates$$Lambda$lambda$forProperty$12$19",
	"java.lang.Object",
	"java.util.regex.Pattern$CharPredicate",
	nullptr,
	methodInfos
};
$Class* CharPredicates$$Lambda$lambda$forProperty$12$19::load$($String* name, bool initialize) {
	$loadClass(CharPredicates$$Lambda$lambda$forProperty$12$19, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CharPredicates$$Lambda$lambda$forProperty$12$19::class$ = nullptr;

class CharPredicates$$Lambda$lambda$forProperty$13$20 : public $Pattern$CharPredicate {
	$class(CharPredicates$$Lambda$lambda$forProperty$13$20, $NO_CLASS_INIT, $Pattern$CharPredicate)
public:
	void init$() {
	}
	virtual bool is(int32_t c) override {
		 return CharPredicates::lambda$forProperty$13(c);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CharPredicates$$Lambda$lambda$forProperty$13$20>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo CharPredicates$$Lambda$lambda$forProperty$13$20::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CharPredicates$$Lambda$lambda$forProperty$13$20::*)()>(&CharPredicates$$Lambda$lambda$forProperty$13$20::init$))},
	{"is", "(I)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo CharPredicates$$Lambda$lambda$forProperty$13$20::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.regex.CharPredicates$$Lambda$lambda$forProperty$13$20",
	"java.lang.Object",
	"java.util.regex.Pattern$CharPredicate",
	nullptr,
	methodInfos
};
$Class* CharPredicates$$Lambda$lambda$forProperty$13$20::load$($String* name, bool initialize) {
	$loadClass(CharPredicates$$Lambda$lambda$forProperty$13$20, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CharPredicates$$Lambda$lambda$forProperty$13$20::class$ = nullptr;

class CharPredicates$$Lambda$lambda$forProperty$14$21 : public $Pattern$CharPredicate {
	$class(CharPredicates$$Lambda$lambda$forProperty$14$21, $NO_CLASS_INIT, $Pattern$CharPredicate)
public:
	void init$() {
	}
	virtual bool is(int32_t c) override {
		 return CharPredicates::lambda$forProperty$14(c);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CharPredicates$$Lambda$lambda$forProperty$14$21>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo CharPredicates$$Lambda$lambda$forProperty$14$21::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CharPredicates$$Lambda$lambda$forProperty$14$21::*)()>(&CharPredicates$$Lambda$lambda$forProperty$14$21::init$))},
	{"is", "(I)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo CharPredicates$$Lambda$lambda$forProperty$14$21::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.regex.CharPredicates$$Lambda$lambda$forProperty$14$21",
	"java.lang.Object",
	"java.util.regex.Pattern$CharPredicate",
	nullptr,
	methodInfos
};
$Class* CharPredicates$$Lambda$lambda$forProperty$14$21::load$($String* name, bool initialize) {
	$loadClass(CharPredicates$$Lambda$lambda$forProperty$14$21, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CharPredicates$$Lambda$lambda$forProperty$14$21::class$ = nullptr;

class CharPredicates$$Lambda$isDefined$22 : public $Pattern$CharPredicate {
	$class(CharPredicates$$Lambda$isDefined$22, $NO_CLASS_INIT, $Pattern$CharPredicate)
public:
	void init$() {
	}
	virtual bool is(int32_t codePoint) override {
		 return $Character::isDefined(codePoint);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CharPredicates$$Lambda$isDefined$22>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo CharPredicates$$Lambda$isDefined$22::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CharPredicates$$Lambda$isDefined$22::*)()>(&CharPredicates$$Lambda$isDefined$22::init$))},
	{"is", "(I)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo CharPredicates$$Lambda$isDefined$22::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.regex.CharPredicates$$Lambda$isDefined$22",
	"java.lang.Object",
	"java.util.regex.Pattern$CharPredicate",
	nullptr,
	methodInfos
};
$Class* CharPredicates$$Lambda$isDefined$22::load$($String* name, bool initialize) {
	$loadClass(CharPredicates$$Lambda$isDefined$22, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CharPredicates$$Lambda$isDefined$22::class$ = nullptr;

class CharPredicates$$Lambda$isLetterOrDigit$23 : public $Pattern$CharPredicate {
	$class(CharPredicates$$Lambda$isLetterOrDigit$23, $NO_CLASS_INIT, $Pattern$CharPredicate)
public:
	void init$() {
	}
	virtual bool is(int32_t codePoint) override {
		 return $Character::isLetterOrDigit(codePoint);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CharPredicates$$Lambda$isLetterOrDigit$23>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo CharPredicates$$Lambda$isLetterOrDigit$23::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CharPredicates$$Lambda$isLetterOrDigit$23::*)()>(&CharPredicates$$Lambda$isLetterOrDigit$23::init$))},
	{"is", "(I)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo CharPredicates$$Lambda$isLetterOrDigit$23::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.regex.CharPredicates$$Lambda$isLetterOrDigit$23",
	"java.lang.Object",
	"java.util.regex.Pattern$CharPredicate",
	nullptr,
	methodInfos
};
$Class* CharPredicates$$Lambda$isLetterOrDigit$23::load$($String* name, bool initialize) {
	$loadClass(CharPredicates$$Lambda$isLetterOrDigit$23, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CharPredicates$$Lambda$isLetterOrDigit$23::class$ = nullptr;

class CharPredicates$$Lambda$isJavaIdentifierStart$24 : public $Pattern$CharPredicate {
	$class(CharPredicates$$Lambda$isJavaIdentifierStart$24, $NO_CLASS_INIT, $Pattern$CharPredicate)
public:
	void init$() {
	}
	virtual bool is(int32_t codePoint) override {
		 return $Character::isJavaIdentifierStart(codePoint);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CharPredicates$$Lambda$isJavaIdentifierStart$24>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo CharPredicates$$Lambda$isJavaIdentifierStart$24::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CharPredicates$$Lambda$isJavaIdentifierStart$24::*)()>(&CharPredicates$$Lambda$isJavaIdentifierStart$24::init$))},
	{"is", "(I)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo CharPredicates$$Lambda$isJavaIdentifierStart$24::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.regex.CharPredicates$$Lambda$isJavaIdentifierStart$24",
	"java.lang.Object",
	"java.util.regex.Pattern$CharPredicate",
	nullptr,
	methodInfos
};
$Class* CharPredicates$$Lambda$isJavaIdentifierStart$24::load$($String* name, bool initialize) {
	$loadClass(CharPredicates$$Lambda$isJavaIdentifierStart$24, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CharPredicates$$Lambda$isJavaIdentifierStart$24::class$ = nullptr;

class CharPredicates$$Lambda$isJavaIdentifierPart$25 : public $Pattern$CharPredicate {
	$class(CharPredicates$$Lambda$isJavaIdentifierPart$25, $NO_CLASS_INIT, $Pattern$CharPredicate)
public:
	void init$() {
	}
	virtual bool is(int32_t codePoint) override {
		 return $Character::isJavaIdentifierPart(codePoint);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CharPredicates$$Lambda$isJavaIdentifierPart$25>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo CharPredicates$$Lambda$isJavaIdentifierPart$25::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CharPredicates$$Lambda$isJavaIdentifierPart$25::*)()>(&CharPredicates$$Lambda$isJavaIdentifierPart$25::init$))},
	{"is", "(I)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo CharPredicates$$Lambda$isJavaIdentifierPart$25::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.regex.CharPredicates$$Lambda$isJavaIdentifierPart$25",
	"java.lang.Object",
	"java.util.regex.Pattern$CharPredicate",
	nullptr,
	methodInfos
};
$Class* CharPredicates$$Lambda$isJavaIdentifierPart$25::load$($String* name, bool initialize) {
	$loadClass(CharPredicates$$Lambda$isJavaIdentifierPart$25, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CharPredicates$$Lambda$isJavaIdentifierPart$25::class$ = nullptr;

class CharPredicates$$Lambda$isUnicodeIdentifierStart$26 : public $Pattern$CharPredicate {
	$class(CharPredicates$$Lambda$isUnicodeIdentifierStart$26, $NO_CLASS_INIT, $Pattern$CharPredicate)
public:
	void init$() {
	}
	virtual bool is(int32_t codePoint) override {
		 return $Character::isUnicodeIdentifierStart(codePoint);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CharPredicates$$Lambda$isUnicodeIdentifierStart$26>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo CharPredicates$$Lambda$isUnicodeIdentifierStart$26::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CharPredicates$$Lambda$isUnicodeIdentifierStart$26::*)()>(&CharPredicates$$Lambda$isUnicodeIdentifierStart$26::init$))},
	{"is", "(I)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo CharPredicates$$Lambda$isUnicodeIdentifierStart$26::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.regex.CharPredicates$$Lambda$isUnicodeIdentifierStart$26",
	"java.lang.Object",
	"java.util.regex.Pattern$CharPredicate",
	nullptr,
	methodInfos
};
$Class* CharPredicates$$Lambda$isUnicodeIdentifierStart$26::load$($String* name, bool initialize) {
	$loadClass(CharPredicates$$Lambda$isUnicodeIdentifierStart$26, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CharPredicates$$Lambda$isUnicodeIdentifierStart$26::class$ = nullptr;

class CharPredicates$$Lambda$isUnicodeIdentifierPart$27 : public $Pattern$CharPredicate {
	$class(CharPredicates$$Lambda$isUnicodeIdentifierPart$27, $NO_CLASS_INIT, $Pattern$CharPredicate)
public:
	void init$() {
	}
	virtual bool is(int32_t codePoint) override {
		 return $Character::isUnicodeIdentifierPart(codePoint);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CharPredicates$$Lambda$isUnicodeIdentifierPart$27>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo CharPredicates$$Lambda$isUnicodeIdentifierPart$27::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CharPredicates$$Lambda$isUnicodeIdentifierPart$27::*)()>(&CharPredicates$$Lambda$isUnicodeIdentifierPart$27::init$))},
	{"is", "(I)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo CharPredicates$$Lambda$isUnicodeIdentifierPart$27::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.regex.CharPredicates$$Lambda$isUnicodeIdentifierPart$27",
	"java.lang.Object",
	"java.util.regex.Pattern$CharPredicate",
	nullptr,
	methodInfos
};
$Class* CharPredicates$$Lambda$isUnicodeIdentifierPart$27::load$($String* name, bool initialize) {
	$loadClass(CharPredicates$$Lambda$isUnicodeIdentifierPart$27, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CharPredicates$$Lambda$isUnicodeIdentifierPart$27::class$ = nullptr;

class CharPredicates$$Lambda$isIdentifierIgnorable$28 : public $Pattern$CharPredicate {
	$class(CharPredicates$$Lambda$isIdentifierIgnorable$28, $NO_CLASS_INIT, $Pattern$CharPredicate)
public:
	void init$() {
	}
	virtual bool is(int32_t codePoint) override {
		 return $Character::isIdentifierIgnorable(codePoint);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CharPredicates$$Lambda$isIdentifierIgnorable$28>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo CharPredicates$$Lambda$isIdentifierIgnorable$28::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CharPredicates$$Lambda$isIdentifierIgnorable$28::*)()>(&CharPredicates$$Lambda$isIdentifierIgnorable$28::init$))},
	{"is", "(I)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo CharPredicates$$Lambda$isIdentifierIgnorable$28::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.regex.CharPredicates$$Lambda$isIdentifierIgnorable$28",
	"java.lang.Object",
	"java.util.regex.Pattern$CharPredicate",
	nullptr,
	methodInfos
};
$Class* CharPredicates$$Lambda$isIdentifierIgnorable$28::load$($String* name, bool initialize) {
	$loadClass(CharPredicates$$Lambda$isIdentifierIgnorable$28, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CharPredicates$$Lambda$isIdentifierIgnorable$28::class$ = nullptr;

class CharPredicates$$Lambda$isSpaceChar$29 : public $Pattern$CharPredicate {
	$class(CharPredicates$$Lambda$isSpaceChar$29, $NO_CLASS_INIT, $Pattern$CharPredicate)
public:
	void init$() {
	}
	virtual bool is(int32_t codePoint) override {
		 return $Character::isSpaceChar(codePoint);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CharPredicates$$Lambda$isSpaceChar$29>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo CharPredicates$$Lambda$isSpaceChar$29::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CharPredicates$$Lambda$isSpaceChar$29::*)()>(&CharPredicates$$Lambda$isSpaceChar$29::init$))},
	{"is", "(I)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo CharPredicates$$Lambda$isSpaceChar$29::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.regex.CharPredicates$$Lambda$isSpaceChar$29",
	"java.lang.Object",
	"java.util.regex.Pattern$CharPredicate",
	nullptr,
	methodInfos
};
$Class* CharPredicates$$Lambda$isSpaceChar$29::load$($String* name, bool initialize) {
	$loadClass(CharPredicates$$Lambda$isSpaceChar$29, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CharPredicates$$Lambda$isSpaceChar$29::class$ = nullptr;

class CharPredicates$$Lambda$isWhitespace$30 : public $Pattern$CharPredicate {
	$class(CharPredicates$$Lambda$isWhitespace$30, $NO_CLASS_INIT, $Pattern$CharPredicate)
public:
	void init$() {
	}
	virtual bool is(int32_t codePoint) override {
		 return $Character::isWhitespace(codePoint);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CharPredicates$$Lambda$isWhitespace$30>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo CharPredicates$$Lambda$isWhitespace$30::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CharPredicates$$Lambda$isWhitespace$30::*)()>(&CharPredicates$$Lambda$isWhitespace$30::init$))},
	{"is", "(I)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo CharPredicates$$Lambda$isWhitespace$30::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.regex.CharPredicates$$Lambda$isWhitespace$30",
	"java.lang.Object",
	"java.util.regex.Pattern$CharPredicate",
	nullptr,
	methodInfos
};
$Class* CharPredicates$$Lambda$isWhitespace$30::load$($String* name, bool initialize) {
	$loadClass(CharPredicates$$Lambda$isWhitespace$30, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CharPredicates$$Lambda$isWhitespace$30::class$ = nullptr;

class CharPredicates$$Lambda$isISOControl$31 : public $Pattern$CharPredicate {
	$class(CharPredicates$$Lambda$isISOControl$31, $NO_CLASS_INIT, $Pattern$CharPredicate)
public:
	void init$() {
	}
	virtual bool is(int32_t codePoint) override {
		 return $Character::isISOControl(codePoint);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CharPredicates$$Lambda$isISOControl$31>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo CharPredicates$$Lambda$isISOControl$31::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CharPredicates$$Lambda$isISOControl$31::*)()>(&CharPredicates$$Lambda$isISOControl$31::init$))},
	{"is", "(I)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo CharPredicates$$Lambda$isISOControl$31::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.regex.CharPredicates$$Lambda$isISOControl$31",
	"java.lang.Object",
	"java.util.regex.Pattern$CharPredicate",
	nullptr,
	methodInfos
};
$Class* CharPredicates$$Lambda$isISOControl$31::load$($String* name, bool initialize) {
	$loadClass(CharPredicates$$Lambda$isISOControl$31, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CharPredicates$$Lambda$isISOControl$31::class$ = nullptr;

class CharPredicates$$Lambda$isMirrored$32 : public $Pattern$CharPredicate {
	$class(CharPredicates$$Lambda$isMirrored$32, $NO_CLASS_INIT, $Pattern$CharPredicate)
public:
	void init$() {
	}
	virtual bool is(int32_t codePoint) override {
		 return $Character::isMirrored(codePoint);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CharPredicates$$Lambda$isMirrored$32>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo CharPredicates$$Lambda$isMirrored$32::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CharPredicates$$Lambda$isMirrored$32::*)()>(&CharPredicates$$Lambda$isMirrored$32::init$))},
	{"is", "(I)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo CharPredicates$$Lambda$isMirrored$32::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.regex.CharPredicates$$Lambda$isMirrored$32",
	"java.lang.Object",
	"java.util.regex.Pattern$CharPredicate",
	nullptr,
	methodInfos
};
$Class* CharPredicates$$Lambda$isMirrored$32::load$($String* name, bool initialize) {
	$loadClass(CharPredicates$$Lambda$isMirrored$32, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CharPredicates$$Lambda$isMirrored$32::class$ = nullptr;

class CharPredicates$$Lambda$lambda$category$15$33 : public $Pattern$CharPredicate {
	$class(CharPredicates$$Lambda$lambda$category$15$33, $NO_CLASS_INIT, $Pattern$CharPredicate)
public:
	void init$(int32_t typeMask) {
		this->typeMask = typeMask;
	}
	virtual bool is(int32_t ch) override {
		 return CharPredicates::lambda$category$15(typeMask, ch);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CharPredicates$$Lambda$lambda$category$15$33>());
	}
	int32_t typeMask = 0;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo CharPredicates$$Lambda$lambda$category$15$33::fieldInfos[2] = {
	{"typeMask", "I", nullptr, $PUBLIC, $field(CharPredicates$$Lambda$lambda$category$15$33, typeMask)},
	{}
};
$MethodInfo CharPredicates$$Lambda$lambda$category$15$33::methodInfos[3] = {
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(CharPredicates$$Lambda$lambda$category$15$33::*)(int32_t)>(&CharPredicates$$Lambda$lambda$category$15$33::init$))},
	{"is", "(I)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo CharPredicates$$Lambda$lambda$category$15$33::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.regex.CharPredicates$$Lambda$lambda$category$15$33",
	"java.lang.Object",
	"java.util.regex.Pattern$CharPredicate",
	fieldInfos,
	methodInfos
};
$Class* CharPredicates$$Lambda$lambda$category$15$33::load$($String* name, bool initialize) {
	$loadClass(CharPredicates$$Lambda$lambda$category$15$33, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CharPredicates$$Lambda$lambda$category$15$33::class$ = nullptr;

class CharPredicates$$Lambda$lambda$range$16$34 : public $Pattern$BmpCharPredicate {
	$class(CharPredicates$$Lambda$lambda$range$16$34, $NO_CLASS_INIT, $Pattern$BmpCharPredicate)
public:
	void init$(int32_t lower, int32_t upper) {
		this->lower = lower;
		this->upper = upper;
	}
	virtual bool is(int32_t ch) override {
		 return CharPredicates::lambda$range$16(lower, upper, ch);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CharPredicates$$Lambda$lambda$range$16$34>());
	}
	int32_t lower = 0;
	int32_t upper = 0;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo CharPredicates$$Lambda$lambda$range$16$34::fieldInfos[3] = {
	{"lower", "I", nullptr, $PUBLIC, $field(CharPredicates$$Lambda$lambda$range$16$34, lower)},
	{"upper", "I", nullptr, $PUBLIC, $field(CharPredicates$$Lambda$lambda$range$16$34, upper)},
	{}
};
$MethodInfo CharPredicates$$Lambda$lambda$range$16$34::methodInfos[3] = {
	{"<init>", "(II)V", nullptr, $PUBLIC, $method(static_cast<void(CharPredicates$$Lambda$lambda$range$16$34::*)(int32_t,int32_t)>(&CharPredicates$$Lambda$lambda$range$16$34::init$))},
	{"is", "(I)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo CharPredicates$$Lambda$lambda$range$16$34::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.regex.CharPredicates$$Lambda$lambda$range$16$34",
	"java.lang.Object",
	"java.util.regex.Pattern$BmpCharPredicate",
	fieldInfos,
	methodInfos
};
$Class* CharPredicates$$Lambda$lambda$range$16$34::load$($String* name, bool initialize) {
	$loadClass(CharPredicates$$Lambda$lambda$range$16$34, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CharPredicates$$Lambda$lambda$range$16$34::class$ = nullptr;

class CharPredicates$$Lambda$lambda$ctype$17$35 : public $Pattern$BmpCharPredicate {
	$class(CharPredicates$$Lambda$lambda$ctype$17$35, $NO_CLASS_INIT, $Pattern$BmpCharPredicate)
public:
	void init$(int32_t ctype) {
		this->ctype = ctype;
	}
	virtual bool is(int32_t ch) override {
		 return CharPredicates::lambda$ctype$17(ctype, ch);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CharPredicates$$Lambda$lambda$ctype$17$35>());
	}
	int32_t ctype = 0;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo CharPredicates$$Lambda$lambda$ctype$17$35::fieldInfos[2] = {
	{"ctype", "I", nullptr, $PUBLIC, $field(CharPredicates$$Lambda$lambda$ctype$17$35, ctype)},
	{}
};
$MethodInfo CharPredicates$$Lambda$lambda$ctype$17$35::methodInfos[3] = {
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(CharPredicates$$Lambda$lambda$ctype$17$35::*)(int32_t)>(&CharPredicates$$Lambda$lambda$ctype$17$35::init$))},
	{"is", "(I)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo CharPredicates$$Lambda$lambda$ctype$17$35::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.regex.CharPredicates$$Lambda$lambda$ctype$17$35",
	"java.lang.Object",
	"java.util.regex.Pattern$BmpCharPredicate",
	fieldInfos,
	methodInfos
};
$Class* CharPredicates$$Lambda$lambda$ctype$17$35::load$($String* name, bool initialize) {
	$loadClass(CharPredicates$$Lambda$lambda$ctype$17$35, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CharPredicates$$Lambda$lambda$ctype$17$35::class$ = nullptr;

class CharPredicates$$Lambda$lambda$ASCII_DIGIT$18$36 : public $Pattern$BmpCharPredicate {
	$class(CharPredicates$$Lambda$lambda$ASCII_DIGIT$18$36, $NO_CLASS_INIT, $Pattern$BmpCharPredicate)
public:
	void init$() {
	}
	virtual bool is(int32_t ch) override {
		 return CharPredicates::lambda$ASCII_DIGIT$18(ch);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CharPredicates$$Lambda$lambda$ASCII_DIGIT$18$36>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo CharPredicates$$Lambda$lambda$ASCII_DIGIT$18$36::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CharPredicates$$Lambda$lambda$ASCII_DIGIT$18$36::*)()>(&CharPredicates$$Lambda$lambda$ASCII_DIGIT$18$36::init$))},
	{"is", "(I)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo CharPredicates$$Lambda$lambda$ASCII_DIGIT$18$36::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.regex.CharPredicates$$Lambda$lambda$ASCII_DIGIT$18$36",
	"java.lang.Object",
	"java.util.regex.Pattern$BmpCharPredicate",
	nullptr,
	methodInfos
};
$Class* CharPredicates$$Lambda$lambda$ASCII_DIGIT$18$36::load$($String* name, bool initialize) {
	$loadClass(CharPredicates$$Lambda$lambda$ASCII_DIGIT$18$36, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CharPredicates$$Lambda$lambda$ASCII_DIGIT$18$36::class$ = nullptr;

class CharPredicates$$Lambda$lambda$ASCII_WORD$19$37 : public $Pattern$BmpCharPredicate {
	$class(CharPredicates$$Lambda$lambda$ASCII_WORD$19$37, $NO_CLASS_INIT, $Pattern$BmpCharPredicate)
public:
	void init$() {
	}
	virtual bool is(int32_t ch) override {
		 return CharPredicates::lambda$ASCII_WORD$19(ch);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CharPredicates$$Lambda$lambda$ASCII_WORD$19$37>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo CharPredicates$$Lambda$lambda$ASCII_WORD$19$37::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CharPredicates$$Lambda$lambda$ASCII_WORD$19$37::*)()>(&CharPredicates$$Lambda$lambda$ASCII_WORD$19$37::init$))},
	{"is", "(I)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo CharPredicates$$Lambda$lambda$ASCII_WORD$19$37::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.regex.CharPredicates$$Lambda$lambda$ASCII_WORD$19$37",
	"java.lang.Object",
	"java.util.regex.Pattern$BmpCharPredicate",
	nullptr,
	methodInfos
};
$Class* CharPredicates$$Lambda$lambda$ASCII_WORD$19$37::load$($String* name, bool initialize) {
	$loadClass(CharPredicates$$Lambda$lambda$ASCII_WORD$19$37, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CharPredicates$$Lambda$lambda$ASCII_WORD$19$37::class$ = nullptr;

class CharPredicates$$Lambda$lambda$ASCII_SPACE$20$38 : public $Pattern$BmpCharPredicate {
	$class(CharPredicates$$Lambda$lambda$ASCII_SPACE$20$38, $NO_CLASS_INIT, $Pattern$BmpCharPredicate)
public:
	void init$() {
	}
	virtual bool is(int32_t ch) override {
		 return CharPredicates::lambda$ASCII_SPACE$20(ch);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CharPredicates$$Lambda$lambda$ASCII_SPACE$20$38>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo CharPredicates$$Lambda$lambda$ASCII_SPACE$20$38::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CharPredicates$$Lambda$lambda$ASCII_SPACE$20$38::*)()>(&CharPredicates$$Lambda$lambda$ASCII_SPACE$20$38::init$))},
	{"is", "(I)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo CharPredicates$$Lambda$lambda$ASCII_SPACE$20$38::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.util.regex.CharPredicates$$Lambda$lambda$ASCII_SPACE$20$38",
	"java.lang.Object",
	"java.util.regex.Pattern$BmpCharPredicate",
	nullptr,
	methodInfos
};
$Class* CharPredicates$$Lambda$lambda$ASCII_SPACE$20$38::load$($String* name, bool initialize) {
	$loadClass(CharPredicates$$Lambda$lambda$ASCII_SPACE$20$38, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CharPredicates$$Lambda$lambda$ASCII_SPACE$20$38::class$ = nullptr;

$MethodInfo _CharPredicates_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(CharPredicates::*)()>(&CharPredicates::init$))},
	{"ALNUM", "()Ljava/util/regex/Pattern$CharPredicate;", nullptr, $STATIC | $FINAL, $method(static_cast<$Pattern$CharPredicate*(*)()>(&CharPredicates::ALNUM))},
	{"ALPHABETIC", "()Ljava/util/regex/Pattern$CharPredicate;", nullptr, $STATIC | $FINAL, $method(static_cast<$Pattern$CharPredicate*(*)()>(&CharPredicates::ALPHABETIC))},
	{"ASCII_DIGIT", "()Ljava/util/regex/Pattern$BmpCharPredicate;", nullptr, $STATIC | $FINAL, $method(static_cast<$Pattern$BmpCharPredicate*(*)()>(&CharPredicates::ASCII_DIGIT))},
	{"ASCII_SPACE", "()Ljava/util/regex/Pattern$BmpCharPredicate;", nullptr, $STATIC | $FINAL, $method(static_cast<$Pattern$BmpCharPredicate*(*)()>(&CharPredicates::ASCII_SPACE))},
	{"ASCII_WORD", "()Ljava/util/regex/Pattern$BmpCharPredicate;", nullptr, $STATIC | $FINAL, $method(static_cast<$Pattern$BmpCharPredicate*(*)()>(&CharPredicates::ASCII_WORD))},
	{"ASSIGNED", "()Ljava/util/regex/Pattern$CharPredicate;", nullptr, $STATIC | $FINAL, $method(static_cast<$Pattern$CharPredicate*(*)()>(&CharPredicates::ASSIGNED))},
	{"BLANK", "()Ljava/util/regex/Pattern$CharPredicate;", nullptr, $STATIC | $FINAL, $method(static_cast<$Pattern$CharPredicate*(*)()>(&CharPredicates::BLANK))},
	{"CONTROL", "()Ljava/util/regex/Pattern$CharPredicate;", nullptr, $STATIC | $FINAL, $method(static_cast<$Pattern$CharPredicate*(*)()>(&CharPredicates::CONTROL))},
	{"DIGIT", "()Ljava/util/regex/Pattern$CharPredicate;", nullptr, $STATIC | $FINAL, $method(static_cast<$Pattern$CharPredicate*(*)()>(&CharPredicates::DIGIT))},
	{"GRAPH", "()Ljava/util/regex/Pattern$CharPredicate;", nullptr, $STATIC | $FINAL, $method(static_cast<$Pattern$CharPredicate*(*)()>(&CharPredicates::GRAPH))},
	{"HEX_DIGIT", "()Ljava/util/regex/Pattern$CharPredicate;", nullptr, $STATIC | $FINAL, $method(static_cast<$Pattern$CharPredicate*(*)()>(&CharPredicates::HEX_DIGIT))},
	{"IDEOGRAPHIC", "()Ljava/util/regex/Pattern$CharPredicate;", nullptr, $STATIC | $FINAL, $method(static_cast<$Pattern$CharPredicate*(*)()>(&CharPredicates::IDEOGRAPHIC))},
	{"JOIN_CONTROL", "()Ljava/util/regex/Pattern$CharPredicate;", nullptr, $STATIC | $FINAL, $method(static_cast<$Pattern$CharPredicate*(*)()>(&CharPredicates::JOIN_CONTROL))},
	{"LETTER", "()Ljava/util/regex/Pattern$CharPredicate;", nullptr, $STATIC | $FINAL, $method(static_cast<$Pattern$CharPredicate*(*)()>(&CharPredicates::LETTER))},
	{"LOWERCASE", "()Ljava/util/regex/Pattern$CharPredicate;", nullptr, $STATIC | $FINAL, $method(static_cast<$Pattern$CharPredicate*(*)()>(&CharPredicates::LOWERCASE))},
	{"NONCHARACTER_CODE_POINT", "()Ljava/util/regex/Pattern$CharPredicate;", nullptr, $STATIC | $FINAL, $method(static_cast<$Pattern$CharPredicate*(*)()>(&CharPredicates::NONCHARACTER_CODE_POINT))},
	{"PRINT", "()Ljava/util/regex/Pattern$CharPredicate;", nullptr, $STATIC | $FINAL, $method(static_cast<$Pattern$CharPredicate*(*)()>(&CharPredicates::PRINT))},
	{"PUNCTUATION", "()Ljava/util/regex/Pattern$CharPredicate;", nullptr, $STATIC | $FINAL, $method(static_cast<$Pattern$CharPredicate*(*)()>(&CharPredicates::PUNCTUATION))},
	{"TITLECASE", "()Ljava/util/regex/Pattern$CharPredicate;", nullptr, $STATIC | $FINAL, $method(static_cast<$Pattern$CharPredicate*(*)()>(&CharPredicates::TITLECASE))},
	{"UPPERCASE", "()Ljava/util/regex/Pattern$CharPredicate;", nullptr, $STATIC | $FINAL, $method(static_cast<$Pattern$CharPredicate*(*)()>(&CharPredicates::UPPERCASE))},
	{"WHITE_SPACE", "()Ljava/util/regex/Pattern$CharPredicate;", nullptr, $STATIC | $FINAL, $method(static_cast<$Pattern$CharPredicate*(*)()>(&CharPredicates::WHITE_SPACE))},
	{"WORD", "()Ljava/util/regex/Pattern$CharPredicate;", nullptr, $STATIC | $FINAL, $method(static_cast<$Pattern$CharPredicate*(*)()>(&CharPredicates::WORD))},
	{"category", "(I)Ljava/util/regex/Pattern$CharPredicate;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Pattern$CharPredicate*(*)(int32_t)>(&CharPredicates::category))},
	{"ctype", "(I)Ljava/util/regex/Pattern$CharPredicate;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Pattern$CharPredicate*(*)(int32_t)>(&CharPredicates::ctype))},
	{"forPOSIXName", "(Ljava/lang/String;Z)Ljava/util/regex/Pattern$CharPredicate;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Pattern$CharPredicate*(*)($String*,bool)>(&CharPredicates::forPOSIXName))},
	{"forProperty", "(Ljava/lang/String;Z)Ljava/util/regex/Pattern$CharPredicate;", nullptr, $STATIC, $method(static_cast<$Pattern$CharPredicate*(*)($String*,bool)>(&CharPredicates::forProperty))},
	{"forUnicodeBlock", "(Ljava/lang/String;)Ljava/util/regex/Pattern$CharPredicate;", nullptr, $STATIC, $method(static_cast<$Pattern$CharPredicate*(*)($String*)>(&CharPredicates::forUnicodeBlock))},
	{"forUnicodeProperty", "(Ljava/lang/String;Z)Ljava/util/regex/Pattern$CharPredicate;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Pattern$CharPredicate*(*)($String*,bool)>(&CharPredicates::forUnicodeProperty))},
	{"forUnicodeScript", "(Ljava/lang/String;)Ljava/util/regex/Pattern$CharPredicate;", nullptr, $STATIC, $method(static_cast<$Pattern$CharPredicate*(*)($String*)>(&CharPredicates::forUnicodeScript))},
	{"getPosixPredicate", "(Ljava/lang/String;Z)Ljava/util/regex/Pattern$CharPredicate;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Pattern$CharPredicate*(*)($String*,bool)>(&CharPredicates::getPosixPredicate))},
	{"getUnicodePredicate", "(Ljava/lang/String;Z)Ljava/util/regex/Pattern$CharPredicate;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Pattern$CharPredicate*(*)($String*,bool)>(&CharPredicates::getUnicodePredicate))},
	{"lambda$ASCII_DIGIT$18", "(I)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)(int32_t)>(&CharPredicates::lambda$ASCII_DIGIT$18))},
	{"lambda$ASCII_SPACE$20", "(I)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)(int32_t)>(&CharPredicates::lambda$ASCII_SPACE$20))},
	{"lambda$ASCII_WORD$19", "(I)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)(int32_t)>(&CharPredicates::lambda$ASCII_WORD$19))},
	{"lambda$ASSIGNED$4", "(I)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)(int32_t)>(&CharPredicates::lambda$ASSIGNED$4))},
	{"lambda$BLANK$6", "(I)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)(int32_t)>(&CharPredicates::lambda$BLANK$6))},
	{"lambda$CONTROL$1", "(I)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)(int32_t)>(&CharPredicates::lambda$CONTROL$1))},
	{"lambda$GRAPH$7", "(I)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)(int32_t)>(&CharPredicates::lambda$GRAPH$7))},
	{"lambda$HEX_DIGIT$3", "(I)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)(int32_t)>(&CharPredicates::lambda$HEX_DIGIT$3))},
	{"lambda$JOIN_CONTROL$8", "(I)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)(int32_t)>(&CharPredicates::lambda$JOIN_CONTROL$8))},
	{"lambda$NONCHARACTER_CODE_POINT$5", "(I)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)(int32_t)>(&CharPredicates::lambda$NONCHARACTER_CODE_POINT$5))},
	{"lambda$PUNCTUATION$2", "(I)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)(int32_t)>(&CharPredicates::lambda$PUNCTUATION$2))},
	{"lambda$WHITE_SPACE$0", "(I)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)(int32_t)>(&CharPredicates::lambda$WHITE_SPACE$0))},
	{"lambda$WORD$9", "(I)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)(int32_t)>(&CharPredicates::lambda$WORD$9))},
	{"lambda$category$15", "(II)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)(int32_t,int32_t)>(&CharPredicates::lambda$category$15))},
	{"lambda$ctype$17", "(II)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)(int32_t,int32_t)>(&CharPredicates::lambda$ctype$17))},
	{"lambda$forProperty$12", "(I)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)(int32_t)>(&CharPredicates::lambda$forProperty$12))},
	{"lambda$forProperty$13", "(I)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)(int32_t)>(&CharPredicates::lambda$forProperty$13))},
	{"lambda$forProperty$14", "(I)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)(int32_t)>(&CharPredicates::lambda$forProperty$14))},
	{"lambda$forUnicodeBlock$11", "(Ljava/lang/Character$UnicodeBlock;I)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($Character$UnicodeBlock*,int32_t)>(&CharPredicates::lambda$forUnicodeBlock$11))},
	{"lambda$forUnicodeScript$10", "(Ljava/lang/Character$UnicodeScript;I)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($Character$UnicodeScript*,int32_t)>(&CharPredicates::lambda$forUnicodeScript$10))},
	{"lambda$range$16", "(III)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)(int32_t,int32_t,int32_t)>(&CharPredicates::lambda$range$16))},
	{"range", "(II)Ljava/util/regex/Pattern$CharPredicate;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Pattern$CharPredicate*(*)(int32_t,int32_t)>(&CharPredicates::range))},
	{}
};

$ClassInfo _CharPredicates_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.regex.CharPredicates",
	"java.lang.Object",
	nullptr,
	nullptr,
	_CharPredicates_MethodInfo_
};

$Object* allocate$CharPredicates($Class* clazz) {
	return $of($alloc(CharPredicates));
}

void CharPredicates::init$() {
}

$Pattern$CharPredicate* CharPredicates::ALPHABETIC() {
	return static_cast<$Pattern$CharPredicate*>($new(CharPredicates$$Lambda$isAlphabetic));
}

$Pattern$CharPredicate* CharPredicates::DIGIT() {
	return static_cast<$Pattern$CharPredicate*>($new(CharPredicates$$Lambda$isDigit$1));
}

$Pattern$CharPredicate* CharPredicates::LETTER() {
	return static_cast<$Pattern$CharPredicate*>($new(CharPredicates$$Lambda$isLetter$2));
}

$Pattern$CharPredicate* CharPredicates::IDEOGRAPHIC() {
	return static_cast<$Pattern$CharPredicate*>($new(CharPredicates$$Lambda$isIdeographic$3));
}

$Pattern$CharPredicate* CharPredicates::LOWERCASE() {
	return static_cast<$Pattern$CharPredicate*>($new(CharPredicates$$Lambda$isLowerCase$4));
}

$Pattern$CharPredicate* CharPredicates::UPPERCASE() {
	return static_cast<$Pattern$CharPredicate*>($new(CharPredicates$$Lambda$isUpperCase$5));
}

$Pattern$CharPredicate* CharPredicates::TITLECASE() {
	return static_cast<$Pattern$CharPredicate*>($new(CharPredicates$$Lambda$isTitleCase$6));
}

$Pattern$CharPredicate* CharPredicates::WHITE_SPACE() {
	return static_cast<$Pattern$CharPredicate*>($new(CharPredicates$$Lambda$lambda$WHITE_SPACE$0$7));
}

$Pattern$CharPredicate* CharPredicates::CONTROL() {
	return static_cast<$Pattern$CharPredicate*>($new(CharPredicates$$Lambda$lambda$CONTROL$1$8));
}

$Pattern$CharPredicate* CharPredicates::PUNCTUATION() {
	return static_cast<$Pattern$CharPredicate*>($new(CharPredicates$$Lambda$lambda$PUNCTUATION$2$9));
}

$Pattern$CharPredicate* CharPredicates::HEX_DIGIT() {
	return $nc($(DIGIT()))->union$(static_cast<$Pattern$CharPredicate*>($$new(CharPredicates$$Lambda$lambda$HEX_DIGIT$3$10)));
}

$Pattern$CharPredicate* CharPredicates::ASSIGNED() {
	return static_cast<$Pattern$CharPredicate*>($new(CharPredicates$$Lambda$lambda$ASSIGNED$4$11));
}

$Pattern$CharPredicate* CharPredicates::NONCHARACTER_CODE_POINT() {
	return static_cast<$Pattern$CharPredicate*>($new(CharPredicates$$Lambda$lambda$NONCHARACTER_CODE_POINT$5$12));
}

$Pattern$CharPredicate* CharPredicates::ALNUM() {
	return $nc($(ALPHABETIC()))->union$($(DIGIT()));
}

$Pattern$CharPredicate* CharPredicates::BLANK() {
	return static_cast<$Pattern$CharPredicate*>($new(CharPredicates$$Lambda$lambda$BLANK$6$13));
}

$Pattern$CharPredicate* CharPredicates::GRAPH() {
	return static_cast<$Pattern$CharPredicate*>($new(CharPredicates$$Lambda$lambda$GRAPH$7$14));
}

$Pattern$CharPredicate* CharPredicates::PRINT() {
	return $nc($($nc($(GRAPH()))->union$($(BLANK()))))->and$($($nc($(CONTROL()))->negate()));
}

$Pattern$CharPredicate* CharPredicates::JOIN_CONTROL() {
	return static_cast<$Pattern$CharPredicate*>($new(CharPredicates$$Lambda$lambda$JOIN_CONTROL$8$15));
}

$Pattern$CharPredicate* CharPredicates::WORD() {
	$var($Pattern$CharPredicate, var$0, static_cast<$Pattern$CharPredicate*>($new(CharPredicates$$Lambda$lambda$WORD$9$16)));
	return $nc($(ALPHABETIC()))->union$(var$0, $(JOIN_CONTROL()));
}

$Pattern$CharPredicate* CharPredicates::getPosixPredicate($String* name, bool caseIns) {
	$var($String, s5959$, name);
	int32_t tmp5959$ = -1;
	switch ($nc(s5959$)->hashCode()) {
	case 0x03B7B93E:
		{
			if (s5959$->equals("ALPHA"_s)) {
				tmp5959$ = 0;
			}
			break;
		}
	case 0x045432E1:
		{
			if (s5959$->equals("LOWER"_s)) {
				tmp5959$ = 1;
			}
			break;
		}
	case 0x04D36082:
		{
			if (s5959$->equals("UPPER"_s)) {
				tmp5959$ = 2;
			}
			break;
		}
	case 0x04B6F8E6:
		{
			if (s5959$->equals("SPACE"_s)) {
				tmp5959$ = 3;
			}
			break;
		}
	case 0x048F291A:
		{
			if (s5959$->equals("PUNCT"_s)) {
				tmp5959$ = 4;
			}
			break;
		}
	case (int32_t)0x9A0AF7B5:
		{
			if (s5959$->equals("XDIGIT"_s)) {
				tmp5959$ = 5;
			}
			break;
		}
	case 0x03B7B35B:
		{
			if (s5959$->equals("ALNUM"_s)) {
				tmp5959$ = 6;
			}
			break;
		}
	case 0x03D4E143:
		{
			if (s5959$->equals("CNTRL"_s)) {
				tmp5959$ = 7;
			}
			break;
		}
	case 0x03E0810D:
		{
			if (s5959$->equals("DIGIT"_s)) {
				tmp5959$ = 8;
			}
			break;
		}
	case 0x03C59934:
		{
			if (s5959$->equals("BLANK"_s)) {
				tmp5959$ = 9;
			}
			break;
		}
	case 0x040EC92E:
		{
			if (s5959$->equals("GRAPH"_s)) {
				tmp5959$ = 10;
			}
			break;
		}
	case 0x048DBA8D:
		{
			if (s5959$->equals("PRINT"_s)) {
				tmp5959$ = 11;
			}
			break;
		}
	}

	$var($Pattern$CharPredicate, var$0, nullptr)
	switch (tmp5959$) {
	case 0:
		{
			$assign(var$0, ALPHABETIC());
			break;
		}
	case 1:
		{
			$var($Pattern$CharPredicate, var$1, nullptr);
			if (caseIns) {
				$var($Pattern$CharPredicate, var$2, UPPERCASE());
				$assign(var$1, $nc($(LOWERCASE()))->union$(var$2, $(TITLECASE())));
			} else {
				$assign(var$1, LOWERCASE());
			}
			$assign(var$0, var$1);
			break;
		}
	case 2:
		{
			$var($Pattern$CharPredicate, var$3, nullptr);
			if (caseIns) {
				$var($Pattern$CharPredicate, var$4, LOWERCASE());
				$assign(var$3, $nc($(UPPERCASE()))->union$(var$4, $(TITLECASE())));
			} else {
				$assign(var$3, UPPERCASE());
			}
			$assign(var$0, var$3);
			break;
		}
	case 3:
		{
			$assign(var$0, WHITE_SPACE());
			break;
		}
	case 4:
		{
			$assign(var$0, PUNCTUATION());
			break;
		}
	case 5:
		{
			$assign(var$0, HEX_DIGIT());
			break;
		}
	case 6:
		{
			$assign(var$0, ALNUM());
			break;
		}
	case 7:
		{
			$assign(var$0, CONTROL());
			break;
		}
	case 8:
		{
			$assign(var$0, DIGIT());
			break;
		}
	case 9:
		{
			$assign(var$0, BLANK());
			break;
		}
	case 10:
		{
			$assign(var$0, GRAPH());
			break;
		}
	case 11:
		{
			$assign(var$0, PRINT());
			break;
		}
	default:
		{
			$assign(var$0, nullptr);
			break;
		}
	}
	return var$0;
}

$Pattern$CharPredicate* CharPredicates::getUnicodePredicate($String* name, bool caseIns) {
	$var($String, s6838$, name);
	int32_t tmp6838$ = -1;
	switch ($nc(s6838$)->hashCode()) {
	case (int32_t)0xD4C30ECD:
		{
			if (s6838$->equals("ALPHABETIC"_s)) {
				tmp6838$ = 0;
			}
			break;
		}
	case 0x1899FDCE:
		{
			if (s6838$->equals("ASSIGNED"_s)) {
				tmp6838$ = 1;
			}
			break;
		}
	case 0x6382F13D:
		{
			if (s6838$->equals("CONTROL"_s)) {
				tmp6838$ = 2;
			}
			break;
		}
	case 0x136D8EF2:
		{
			if (s6838$->equals("HEXDIGIT"_s)) {
				tmp6838$ = 3;
			}
			break;
		}
	case (int32_t)0x881192C9:
		{
			if (s6838$->equals("HEX_DIGIT"_s)) {
				tmp6838$ = 4;
			}
			break;
		}
	case (int32_t)0x99290823:
		{
			if (s6838$->equals("IDEOGRAPHIC"_s)) {
				tmp6838$ = 5;
			}
			break;
		}
	case (int32_t)0xBE67D8D3:
		{
			if (s6838$->equals("JOINCONTROL"_s)) {
				tmp6838$ = 6;
			}
			break;
		}
	case (int32_t)0xF1CAA328:
		{
			if (s6838$->equals("JOIN_CONTROL"_s)) {
				tmp6838$ = 7;
			}
			break;
		}
	case (int32_t)0x85A41826:
		{
			if (s6838$->equals("LETTER"_s)) {
				tmp6838$ = 8;
			}
			break;
		}
	case (int32_t)0x876D4D91:
		{
			if (s6838$->equals("LOWERCASE"_s)) {
				tmp6838$ = 9;
			}
			break;
		}
	case 0x3CA3B027:
		{
			if (s6838$->equals("NONCHARACTERCODEPOINT"_s)) {
				tmp6838$ = 10;
			}
			break;
		}
	case 0x44E611C1:
		{
			if (s6838$->equals("NONCHARACTER_CODE_POINT"_s)) {
				tmp6838$ = 11;
			}
			break;
		}
	case 0x26D1C168:
		{
			if (s6838$->equals("TITLECASE"_s)) {
				tmp6838$ = 12;
			}
			break;
		}
	case (int32_t)0xF0F59D3A:
		{
			if (s6838$->equals("PUNCTUATION"_s)) {
				tmp6838$ = 13;
			}
			break;
		}
	case (int32_t)0xB36AC2B2:
		{
			if (s6838$->equals("UPPERCASE"_s)) {
				tmp6838$ = 14;
			}
			break;
		}
	case 0x2D6B427D:
		{
			if (s6838$->equals("WHITESPACE"_s)) {
				tmp6838$ = 15;
			}
			break;
		}
	case (int32_t)0x94A84530:
		{
			if (s6838$->equals("WHITE_SPACE"_s)) {
				tmp6838$ = 16;
			}
			break;
		}
	case 0x0028BF0A:
		{
			if (s6838$->equals("WORD"_s)) {
				tmp6838$ = 17;
			}
			break;
		}
	}

	$var($Pattern$CharPredicate, var$0, nullptr)
	switch (tmp6838$) {
	case 0:
		{
			$assign(var$0, ALPHABETIC());
			break;
		}
	case 1:
		{
			$assign(var$0, ASSIGNED());
			break;
		}
	case 2:
		{
			$assign(var$0, CONTROL());
			break;
		}
	case 3:
		{}
	case 4:
		{
			$assign(var$0, HEX_DIGIT());
			break;
		}
	case 5:
		{
			$assign(var$0, IDEOGRAPHIC());
			break;
		}
	case 6:
		{}
	case 7:
		{
			$assign(var$0, JOIN_CONTROL());
			break;
		}
	case 8:
		{
			$assign(var$0, LETTER());
			break;
		}
	case 9:
		{
			$var($Pattern$CharPredicate, var$1, nullptr);
			if (caseIns) {
				$var($Pattern$CharPredicate, var$2, UPPERCASE());
				$assign(var$1, $nc($(LOWERCASE()))->union$(var$2, $(TITLECASE())));
			} else {
				$assign(var$1, LOWERCASE());
			}
			$assign(var$0, var$1);
			break;
		}
	case 10:
		{}
	case 11:
		{
			$assign(var$0, NONCHARACTER_CODE_POINT());
			break;
		}
	case 12:
		{
			$var($Pattern$CharPredicate, var$3, nullptr);
			if (caseIns) {
				$var($Pattern$CharPredicate, var$4, LOWERCASE());
				$assign(var$3, $nc($(TITLECASE()))->union$(var$4, $(UPPERCASE())));
			} else {
				$assign(var$3, TITLECASE());
			}
			$assign(var$0, var$3);
			break;
		}
	case 13:
		{
			$assign(var$0, PUNCTUATION());
			break;
		}
	case 14:
		{
			$var($Pattern$CharPredicate, var$5, nullptr);
			if (caseIns) {
				$var($Pattern$CharPredicate, var$6, LOWERCASE());
				$assign(var$5, $nc($(UPPERCASE()))->union$(var$6, $(TITLECASE())));
			} else {
				$assign(var$5, UPPERCASE());
			}
			$assign(var$0, var$5);
			break;
		}
	case 15:
		{}
	case 16:
		{
			$assign(var$0, WHITE_SPACE());
			break;
		}
	case 17:
		{
			$assign(var$0, WORD());
			break;
		}
	default:
		{
			$assign(var$0, nullptr);
			break;
		}
	}
	return var$0;
}

$Pattern$CharPredicate* CharPredicates::forUnicodeProperty($String* propName$renamed, bool caseIns) {
	$var($String, propName, propName$renamed);
	$init($Locale);
	$assign(propName, $nc(propName)->toUpperCase($Locale::ROOT));
	$var($Pattern$CharPredicate, p, getUnicodePredicate(propName, caseIns));
	if (p != nullptr) {
		return p;
	}
	return getPosixPredicate(propName, caseIns);
}

$Pattern$CharPredicate* CharPredicates::forPOSIXName($String* propName, bool caseIns) {
	$init($Locale);
	return getPosixPredicate($($nc(propName)->toUpperCase($Locale::ENGLISH)), caseIns);
}

$Pattern$CharPredicate* CharPredicates::forUnicodeScript($String* name) {
	$Character$UnicodeScript* script = nullptr;
	try {
		script = $Character$UnicodeScript::forName(name);
		return static_cast<$Pattern$CharPredicate*>($new(CharPredicates$$Lambda$lambda$forUnicodeScript$10$17, script));
	} catch ($IllegalArgumentException&) {
		$catch();
	}
	return nullptr;
}

$Pattern$CharPredicate* CharPredicates::forUnicodeBlock($String* name) {
	$var($Character$UnicodeBlock, block, nullptr);
	try {
		$assign(block, $Character$UnicodeBlock::forName(name));
		return static_cast<$Pattern$CharPredicate*>($new(CharPredicates$$Lambda$lambda$forUnicodeBlock$11$18, block));
	} catch ($IllegalArgumentException&) {
		$catch();
	}
	return nullptr;
}

$Pattern$CharPredicate* CharPredicates::forProperty($String* name, bool caseIns) {
	$var($String, s9767$, name);
	int32_t tmp9767$ = -1;
	switch ($nc(s9767$)->hashCode()) {
	case 2187:
		{
			if (s9767$->equals("Cn"_s)) {
				tmp9767$ = 0;
			}
			break;
		}
	case 2473:
		{
			if (s9767$->equals("Lu"_s)) {
				tmp9767$ = 1;
			}
			break;
		}
	case 2464:
		{
			if (s9767$->equals("Ll"_s)) {
				tmp9767$ = 2;
			}
			break;
		}
	case 2472:
		{
			if (s9767$->equals("Lt"_s)) {
				tmp9767$ = 3;
			}
			break;
		}
	case 2465:
		{
			if (s9767$->equals("Lm"_s)) {
				tmp9767$ = 4;
			}
			break;
		}
	case 2467:
		{
			if (s9767$->equals("Lo"_s)) {
				tmp9767$ = 5;
			}
			break;
		}
	case 2497:
		{
			if (s9767$->equals("Mn"_s)) {
				tmp9767$ = 6;
			}
			break;
		}
	case 2488:
		{
			if (s9767$->equals("Me"_s)) {
				tmp9767$ = 7;
			}
			break;
		}
	case 2486:
		{
			if (s9767$->equals("Mc"_s)) {
				tmp9767$ = 8;
			}
			break;
		}
	case 2518:
		{
			if (s9767$->equals("Nd"_s)) {
				tmp9767$ = 9;
			}
			break;
		}
	case 2526:
		{
			if (s9767$->equals("Nl"_s)) {
				tmp9767$ = 10;
			}
			break;
		}
	case 2529:
		{
			if (s9767$->equals("No"_s)) {
				tmp9767$ = 11;
			}
			break;
		}
	case 2905:
		{
			if (s9767$->equals("Zs"_s)) {
				tmp9767$ = 12;
			}
			break;
		}
	case 2898:
		{
			if (s9767$->equals("Zl"_s)) {
				tmp9767$ = 13;
			}
			break;
		}
	case 2902:
		{
			if (s9767$->equals("Zp"_s)) {
				tmp9767$ = 14;
			}
			break;
		}
	case 2176:
		{
			if (s9767$->equals("Cc"_s)) {
				tmp9767$ = 15;
			}
			break;
		}
	case 2179:
		{
			if (s9767$->equals("Cf"_s)) {
				tmp9767$ = 16;
			}
			break;
		}
	case 2188:
		{
			if (s9767$->equals("Co"_s)) {
				tmp9767$ = 17;
			}
			break;
		}
	case 2192:
		{
			if (s9767$->equals("Cs"_s)) {
				tmp9767$ = 18;
			}
			break;
		}
	case 2580:
		{
			if (s9767$->equals("Pd"_s)) {
				tmp9767$ = 19;
			}
			break;
		}
	case 2595:
		{
			if (s9767$->equals("Ps"_s)) {
				tmp9767$ = 20;
			}
			break;
		}
	case 2581:
		{
			if (s9767$->equals("Pe"_s)) {
				tmp9767$ = 21;
			}
			break;
		}
	case 2579:
		{
			if (s9767$->equals("Pc"_s)) {
				tmp9767$ = 22;
			}
			break;
		}
	case 2591:
		{
			if (s9767$->equals("Po"_s)) {
				tmp9767$ = 23;
			}
			break;
		}
	case 2682:
		{
			if (s9767$->equals("Sm"_s)) {
				tmp9767$ = 24;
			}
			break;
		}
	case 2672:
		{
			if (s9767$->equals("Sc"_s)) {
				tmp9767$ = 25;
			}
			break;
		}
	case 2680:
		{
			if (s9767$->equals("Sk"_s)) {
				tmp9767$ = 26;
			}
			break;
		}
	case 2684:
		{
			if (s9767$->equals("So"_s)) {
				tmp9767$ = 27;
			}
			break;
		}
	case 2585:
		{
			if (s9767$->equals("Pi"_s)) {
				tmp9767$ = 28;
			}
			break;
		}
	case 2582:
		{
			if (s9767$->equals("Pf"_s)) {
				tmp9767$ = 29;
			}
			break;
		}
	case 76:
		{
			if (s9767$->equals("L"_s)) {
				tmp9767$ = 30;
			}
			break;
		}
	case 77:
		{
			if (s9767$->equals("M"_s)) {
				tmp9767$ = 31;
			}
			break;
		}
	case 78:
		{
			if (s9767$->equals("N"_s)) {
				tmp9767$ = 32;
			}
			break;
		}
	case 90:
		{
			if (s9767$->equals("Z"_s)) {
				tmp9767$ = 33;
			}
			break;
		}
	case 67:
		{
			if (s9767$->equals("C"_s)) {
				tmp9767$ = 34;
			}
			break;
		}
	case 80:
		{
			if (s9767$->equals("P"_s)) {
				tmp9767$ = 35;
			}
			break;
		}
	case 83:
		{
			if (s9767$->equals("S"_s)) {
				tmp9767$ = 36;
			}
			break;
		}
	case 2423:
		{
			if (s9767$->equals("LC"_s)) {
				tmp9767$ = 37;
			}
			break;
		}
	case 2424:
		{
			if (s9767$->equals("LD"_s)) {
				tmp9767$ = 38;
			}
			break;
		}
	case 2405:
		{
			if (s9767$->equals("L1"_s)) {
				tmp9767$ = 39;
			}
			break;
		}
	case 0x000179A1:
		{
			if (s9767$->equals("all"_s)) {
				tmp9767$ = 40;
			}
			break;
		}
	case 0x03BAB731:
		{
			if (s9767$->equals("ASCII"_s)) {
				tmp9767$ = 41;
			}
			break;
		}
	case 0x03C6BB5B:
		{
			if (s9767$->equals("Alnum"_s)) {
				tmp9767$ = 42;
			}
			break;
		}
	case 0x03C6C13E:
		{
			if (s9767$->equals("Alpha"_s)) {
				tmp9767$ = 43;
			}
			break;
		}
	case 0x03D4A134:
		{
			if (s9767$->equals("Blank"_s)) {
				tmp9767$ = 44;
			}
			break;
		}
	case 0x03E3E943:
		{
			if (s9767$->equals("Cntrl"_s)) {
				tmp9767$ = 45;
			}
			break;
		}
	case 0x03EF890D:
		{
			if (s9767$->equals("Digit"_s)) {
				tmp9767$ = 46;
			}
			break;
		}
	case 0x041DD12E:
		{
			if (s9767$->equals("Graph"_s)) {
				tmp9767$ = 47;
			}
			break;
		}
	case 0x04633AE1:
		{
			if (s9767$->equals("Lower"_s)) {
				tmp9767$ = 48;
			}
			break;
		}
	case 0x049CC28D:
		{
			if (s9767$->equals("Print"_s)) {
				tmp9767$ = 49;
			}
			break;
		}
	case 0x049E311A:
		{
			if (s9767$->equals("Punct"_s)) {
				tmp9767$ = 50;
			}
			break;
		}
	case 0x04C600E6:
		{
			if (s9767$->equals("Space"_s)) {
				tmp9767$ = 51;
			}
			break;
		}
	case 0x04E26882:
		{
			if (s9767$->equals("Upper"_s)) {
				tmp9767$ = 52;
			}
			break;
		}
	case (int32_t)0x9A19FFB5:
		{
			if (s9767$->equals("XDigit"_s)) {
				tmp9767$ = 53;
			}
			break;
		}
	case 0x36876DCF:
		{
			if (s9767$->equals("javaLowerCase"_s)) {
				tmp9767$ = 54;
			}
			break;
		}
	case 0x6284E2F0:
		{
			if (s9767$->equals("javaUpperCase"_s)) {
				tmp9767$ = 55;
			}
			break;
		}
	case 0x0AAFE68F:
		{
			if (s9767$->equals("javaAlphabetic"_s)) {
				tmp9767$ = 56;
			}
			break;
		}
	case 0x20D728C1:
		{
			if (s9767$->equals("javaIdeographic"_s)) {
				tmp9767$ = 57;
			}
			break;
		}
	case (int32_t)0xD5EBE1A6:
		{
			if (s9767$->equals("javaTitleCase"_s)) {
				tmp9767$ = 58;
			}
			break;
		}
	case (int32_t)0xCC3CE42B:
		{
			if (s9767$->equals("javaDigit"_s)) {
				tmp9767$ = 59;
			}
			break;
		}
	case (int32_t)0xA9B30187:
		{
			if (s9767$->equals("javaDefined"_s)) {
				tmp9767$ = 60;
			}
			break;
		}
	case (int32_t)0xC8D418E8:
		{
			if (s9767$->equals("javaLetter"_s)) {
				tmp9767$ = 61;
			}
			break;
		}
	case (int32_t)0xBA75DB02:
		{
			if (s9767$->equals("javaLetterOrDigit"_s)) {
				tmp9767$ = 62;
			}
			break;
		}
	case 0x19E14535:
		{
			if (s9767$->equals("javaJavaIdentifierStart"_s)) {
				tmp9767$ = 63;
			}
			break;
		}
	case 0x7470FCC0:
		{
			if (s9767$->equals("javaJavaIdentifierPart"_s)) {
				tmp9767$ = 64;
			}
			break;
		}
	case (int32_t)0xBB1A615E:
		{
			if (s9767$->equals("javaUnicodeIdentifierStart"_s)) {
				tmp9767$ = 65;
			}
			break;
		}
	case (int32_t)0xE4FF3777:
		{
			if (s9767$->equals("javaUnicodeIdentifierPart"_s)) {
				tmp9767$ = 66;
			}
			break;
		}
	case 0x1698FCA2:
		{
			if (s9767$->equals("javaIdentifierIgnorable"_s)) {
				tmp9767$ = 67;
			}
			break;
		}
	case 0x1C5DC17A:
		{
			if (s9767$->equals("javaSpaceChar"_s)) {
				tmp9767$ = 68;
			}
			break;
		}
	case 0x63581A3F:
		{
			if (s9767$->equals("javaWhitespace"_s)) {
				tmp9767$ = 69;
			}
			break;
		}
	case 0x4192FCDA:
		{
			if (s9767$->equals("javaISOControl"_s)) {
				tmp9767$ = 70;
			}
			break;
		}
	case 0x1C2A50E0:
		{
			if (s9767$->equals("javaMirrored"_s)) {
				tmp9767$ = 71;
			}
			break;
		}
	}

	$var($Pattern$CharPredicate, var$0, nullptr)
	switch (tmp9767$) {
	case 0:
		{
			$assign(var$0, category($sl(1, $Character::UNASSIGNED)));
			break;
		}
	case 1:
		{
			$assign(var$0, category(caseIns ? (($sl(1, $Character::LOWERCASE_LETTER)) | ($sl(1, $Character::UPPERCASE_LETTER))) | ($sl(1, $Character::TITLECASE_LETTER)) : ($sl(1, $Character::UPPERCASE_LETTER))));
			break;
		}
	case 2:
		{
			$assign(var$0, category(caseIns ? (($sl(1, $Character::LOWERCASE_LETTER)) | ($sl(1, $Character::UPPERCASE_LETTER))) | ($sl(1, $Character::TITLECASE_LETTER)) : ($sl(1, $Character::LOWERCASE_LETTER))));
			break;
		}
	case 3:
		{
			$assign(var$0, category(caseIns ? (($sl(1, $Character::LOWERCASE_LETTER)) | ($sl(1, $Character::UPPERCASE_LETTER))) | ($sl(1, $Character::TITLECASE_LETTER)) : ($sl(1, $Character::TITLECASE_LETTER))));
			break;
		}
	case 4:
		{
			$assign(var$0, category($sl(1, $Character::MODIFIER_LETTER)));
			break;
		}
	case 5:
		{
			$assign(var$0, category($sl(1, $Character::OTHER_LETTER)));
			break;
		}
	case 6:
		{
			$assign(var$0, category($sl(1, $Character::NON_SPACING_MARK)));
			break;
		}
	case 7:
		{
			$assign(var$0, category($sl(1, $Character::ENCLOSING_MARK)));
			break;
		}
	case 8:
		{
			$assign(var$0, category($sl(1, $Character::COMBINING_SPACING_MARK)));
			break;
		}
	case 9:
		{
			$assign(var$0, category($sl(1, $Character::DECIMAL_DIGIT_NUMBER)));
			break;
		}
	case 10:
		{
			$assign(var$0, category($sl(1, $Character::LETTER_NUMBER)));
			break;
		}
	case 11:
		{
			$assign(var$0, category($sl(1, $Character::OTHER_NUMBER)));
			break;
		}
	case 12:
		{
			$assign(var$0, category($sl(1, $Character::SPACE_SEPARATOR)));
			break;
		}
	case 13:
		{
			$assign(var$0, category($sl(1, $Character::LINE_SEPARATOR)));
			break;
		}
	case 14:
		{
			$assign(var$0, category($sl(1, $Character::PARAGRAPH_SEPARATOR)));
			break;
		}
	case 15:
		{
			$assign(var$0, category($sl(1, $Character::CONTROL)));
			break;
		}
	case 16:
		{
			$assign(var$0, category($sl(1, $Character::FORMAT)));
			break;
		}
	case 17:
		{
			$assign(var$0, category($sl(1, $Character::PRIVATE_USE)));
			break;
		}
	case 18:
		{
			$assign(var$0, category($sl(1, $Character::SURROGATE)));
			break;
		}
	case 19:
		{
			$assign(var$0, category($sl(1, $Character::DASH_PUNCTUATION)));
			break;
		}
	case 20:
		{
			$assign(var$0, category($sl(1, $Character::START_PUNCTUATION)));
			break;
		}
	case 21:
		{
			$assign(var$0, category($sl(1, $Character::END_PUNCTUATION)));
			break;
		}
	case 22:
		{
			$assign(var$0, category($sl(1, $Character::CONNECTOR_PUNCTUATION)));
			break;
		}
	case 23:
		{
			$assign(var$0, category($sl(1, $Character::OTHER_PUNCTUATION)));
			break;
		}
	case 24:
		{
			$assign(var$0, category($sl(1, $Character::MATH_SYMBOL)));
			break;
		}
	case 25:
		{
			$assign(var$0, category($sl(1, $Character::CURRENCY_SYMBOL)));
			break;
		}
	case 26:
		{
			$assign(var$0, category($sl(1, $Character::MODIFIER_SYMBOL)));
			break;
		}
	case 27:
		{
			$assign(var$0, category($sl(1, $Character::OTHER_SYMBOL)));
			break;
		}
	case 28:
		{
			$assign(var$0, category($sl(1, $Character::INITIAL_QUOTE_PUNCTUATION)));
			break;
		}
	case 29:
		{
			$assign(var$0, category($sl(1, $Character::FINAL_QUOTE_PUNCTUATION)));
			break;
		}
	case 30:
		{
			$assign(var$0, category(((((($sl(1, $Character::UPPERCASE_LETTER)) | ($sl(1, $Character::LOWERCASE_LETTER))) | ($sl(1, $Character::TITLECASE_LETTER))) | ($sl(1, $Character::MODIFIER_LETTER))) | ($sl(1, $Character::OTHER_LETTER)))));
			break;
		}
	case 31:
		{
			$assign(var$0, category(((($sl(1, $Character::NON_SPACING_MARK)) | ($sl(1, $Character::ENCLOSING_MARK))) | ($sl(1, $Character::COMBINING_SPACING_MARK)))));
			break;
		}
	case 32:
		{
			$assign(var$0, category(((($sl(1, $Character::DECIMAL_DIGIT_NUMBER)) | ($sl(1, $Character::LETTER_NUMBER))) | ($sl(1, $Character::OTHER_NUMBER)))));
			break;
		}
	case 33:
		{
			$assign(var$0, category(((($sl(1, $Character::SPACE_SEPARATOR)) | ($sl(1, $Character::LINE_SEPARATOR))) | ($sl(1, $Character::PARAGRAPH_SEPARATOR)))));
			break;
		}
	case 34:
		{
			$assign(var$0, category(((((($sl(1, $Character::CONTROL)) | ($sl(1, $Character::FORMAT))) | ($sl(1, $Character::PRIVATE_USE))) | ($sl(1, $Character::SURROGATE))) | ($sl(1, $Character::UNASSIGNED)))));
			break;
		}
	case 35:
		{
			$assign(var$0, category(((((((($sl(1, $Character::DASH_PUNCTUATION)) | ($sl(1, $Character::START_PUNCTUATION))) | ($sl(1, $Character::END_PUNCTUATION))) | ($sl(1, $Character::CONNECTOR_PUNCTUATION))) | ($sl(1, $Character::OTHER_PUNCTUATION))) | ($sl(1, $Character::INITIAL_QUOTE_PUNCTUATION))) | ($sl(1, $Character::FINAL_QUOTE_PUNCTUATION)))));
			break;
		}
	case 36:
		{
			$assign(var$0, category((((($sl(1, $Character::MATH_SYMBOL)) | ($sl(1, $Character::CURRENCY_SYMBOL))) | ($sl(1, $Character::MODIFIER_SYMBOL))) | ($sl(1, $Character::OTHER_SYMBOL)))));
			break;
		}
	case 37:
		{
			$assign(var$0, category(((($sl(1, $Character::UPPERCASE_LETTER)) | ($sl(1, $Character::LOWERCASE_LETTER))) | ($sl(1, $Character::TITLECASE_LETTER)))));
			break;
		}
	case 38:
		{
			$assign(var$0, category((((((($sl(1, $Character::UPPERCASE_LETTER)) | ($sl(1, $Character::LOWERCASE_LETTER))) | ($sl(1, $Character::TITLECASE_LETTER))) | ($sl(1, $Character::MODIFIER_LETTER))) | ($sl(1, $Character::OTHER_LETTER))) | ($sl(1, $Character::DECIMAL_DIGIT_NUMBER)))));
			break;
		}
	case 39:
		{
			$assign(var$0, range(0, 255));
			break;
		}
	case 40:
		{
			$assign(var$0, $Pattern::ALL());
			break;
		}
	case 41:
		{
			$assign(var$0, range(0, 127));
			break;
		}
	case 42:
		{
			$assign(var$0, ctype($ASCII::ALNUM));
			break;
		}
	case 43:
		{
			$assign(var$0, ctype($ASCII::ALPHA));
			break;
		}
	case 44:
		{
			$assign(var$0, ctype($ASCII::BLANK));
			break;
		}
	case 45:
		{
			$assign(var$0, ctype($ASCII::CNTRL));
			break;
		}
	case 46:
		{
			$assign(var$0, range(u'0', u'9'));
			break;
		}
	case 47:
		{
			$assign(var$0, ctype($ASCII::GRAPH));
			break;
		}
	case 48:
		{
			$assign(var$0, caseIns ? ctype($ASCII::ALPHA) : range(u'a', u'z'));
			break;
		}
	case 49:
		{
			$assign(var$0, range(32, 126));
			break;
		}
	case 50:
		{
			$assign(var$0, ctype($ASCII::PUNCT));
			break;
		}
	case 51:
		{
			$assign(var$0, ctype($ASCII::SPACE));
			break;
		}
	case 52:
		{
			$assign(var$0, caseIns ? ctype($ASCII::ALPHA) : range(u'A', u'Z'));
			break;
		}
	case 53:
		{
			$assign(var$0, ctype($ASCII::XDIGIT));
			break;
		}
	case 54:
		{
			$assign(var$0, caseIns ? static_cast<$Pattern$CharPredicate*>($new(CharPredicates$$Lambda$lambda$forProperty$12$19)) : static_cast<$Pattern$CharPredicate*>($new(CharPredicates$$Lambda$isLowerCase$4)));
			break;
		}
	case 55:
		{
			$assign(var$0, caseIns ? static_cast<$Pattern$CharPredicate*>($new(CharPredicates$$Lambda$lambda$forProperty$13$20)) : static_cast<$Pattern$CharPredicate*>($new(CharPredicates$$Lambda$isUpperCase$5)));
			break;
		}
	case 56:
		{
			$assign(var$0, static_cast<$Pattern$CharPredicate*>($new(CharPredicates$$Lambda$isAlphabetic)));
			break;
		}
	case 57:
		{
			$assign(var$0, static_cast<$Pattern$CharPredicate*>($new(CharPredicates$$Lambda$isIdeographic$3)));
			break;
		}
	case 58:
		{
			$assign(var$0, caseIns ? static_cast<$Pattern$CharPredicate*>($new(CharPredicates$$Lambda$lambda$forProperty$14$21)) : static_cast<$Pattern$CharPredicate*>($new(CharPredicates$$Lambda$isTitleCase$6)));
			break;
		}
	case 59:
		{
			$assign(var$0, static_cast<$Pattern$CharPredicate*>($new(CharPredicates$$Lambda$isDigit$1)));
			break;
		}
	case 60:
		{
			$assign(var$0, static_cast<$Pattern$CharPredicate*>($new(CharPredicates$$Lambda$isDefined$22)));
			break;
		}
	case 61:
		{
			$assign(var$0, static_cast<$Pattern$CharPredicate*>($new(CharPredicates$$Lambda$isLetter$2)));
			break;
		}
	case 62:
		{
			$assign(var$0, static_cast<$Pattern$CharPredicate*>($new(CharPredicates$$Lambda$isLetterOrDigit$23)));
			break;
		}
	case 63:
		{
			$assign(var$0, static_cast<$Pattern$CharPredicate*>($new(CharPredicates$$Lambda$isJavaIdentifierStart$24)));
			break;
		}
	case 64:
		{
			$assign(var$0, static_cast<$Pattern$CharPredicate*>($new(CharPredicates$$Lambda$isJavaIdentifierPart$25)));
			break;
		}
	case 65:
		{
			$assign(var$0, static_cast<$Pattern$CharPredicate*>($new(CharPredicates$$Lambda$isUnicodeIdentifierStart$26)));
			break;
		}
	case 66:
		{
			$assign(var$0, static_cast<$Pattern$CharPredicate*>($new(CharPredicates$$Lambda$isUnicodeIdentifierPart$27)));
			break;
		}
	case 67:
		{
			$assign(var$0, static_cast<$Pattern$CharPredicate*>($new(CharPredicates$$Lambda$isIdentifierIgnorable$28)));
			break;
		}
	case 68:
		{
			$assign(var$0, static_cast<$Pattern$CharPredicate*>($new(CharPredicates$$Lambda$isSpaceChar$29)));
			break;
		}
	case 69:
		{
			$assign(var$0, static_cast<$Pattern$CharPredicate*>($new(CharPredicates$$Lambda$isWhitespace$30)));
			break;
		}
	case 70:
		{
			$assign(var$0, static_cast<$Pattern$CharPredicate*>($new(CharPredicates$$Lambda$isISOControl$31)));
			break;
		}
	case 71:
		{
			$assign(var$0, static_cast<$Pattern$CharPredicate*>($new(CharPredicates$$Lambda$isMirrored$32)));
			break;
		}
	default:
		{
			$assign(var$0, nullptr);
			break;
		}
	}
	return var$0;
}

$Pattern$CharPredicate* CharPredicates::category(int32_t typeMask) {
	return static_cast<$Pattern$CharPredicate*>($new(CharPredicates$$Lambda$lambda$category$15$33, typeMask));
}

$Pattern$CharPredicate* CharPredicates::range(int32_t lower, int32_t upper) {
	return static_cast<$Pattern$BmpCharPredicate*>($new(CharPredicates$$Lambda$lambda$range$16$34, lower, upper));
}

$Pattern$CharPredicate* CharPredicates::ctype(int32_t ctype) {
	return static_cast<$Pattern$BmpCharPredicate*>($new(CharPredicates$$Lambda$lambda$ctype$17$35, ctype));
}

$Pattern$BmpCharPredicate* CharPredicates::ASCII_DIGIT() {
	return static_cast<$Pattern$BmpCharPredicate*>($new(CharPredicates$$Lambda$lambda$ASCII_DIGIT$18$36));
}

$Pattern$BmpCharPredicate* CharPredicates::ASCII_WORD() {
	return static_cast<$Pattern$BmpCharPredicate*>($new(CharPredicates$$Lambda$lambda$ASCII_WORD$19$37));
}

$Pattern$BmpCharPredicate* CharPredicates::ASCII_SPACE() {
	return static_cast<$Pattern$BmpCharPredicate*>($new(CharPredicates$$Lambda$lambda$ASCII_SPACE$20$38));
}

bool CharPredicates::lambda$ASCII_SPACE$20(int32_t ch) {
	return ch < 128 && $ASCII::isSpace(ch);
}

bool CharPredicates::lambda$ASCII_WORD$19(int32_t ch) {
	return ch < 128 && $ASCII::isWord(ch);
}

bool CharPredicates::lambda$ASCII_DIGIT$18(int32_t ch) {
	return ch < 128 && $ASCII::isDigit(ch);
}

bool CharPredicates::lambda$ctype$17(int32_t ctype, int32_t ch) {
	return ch < 128 && $ASCII::isType(ch, ctype);
}

bool CharPredicates::lambda$range$16(int32_t lower, int32_t upper, int32_t ch) {
	return lower <= ch && ch <= upper;
}

bool CharPredicates::lambda$category$15(int32_t typeMask, int32_t ch) {
	return ((int32_t)(typeMask & (uint32_t)($sl(1, $Character::getType(ch))))) != 0;
}

bool CharPredicates::lambda$forProperty$14(int32_t c) {
	bool var$1 = $Character::isTitleCase(c);
	bool var$0 = var$1 || $Character::isLowerCase(c);
	return var$0 || $Character::isUpperCase(c);
}

bool CharPredicates::lambda$forProperty$13(int32_t c) {
	bool var$1 = $Character::isUpperCase(c);
	bool var$0 = var$1 || $Character::isLowerCase(c);
	return var$0 || $Character::isTitleCase(c);
}

bool CharPredicates::lambda$forProperty$12(int32_t c) {
	bool var$1 = $Character::isLowerCase(c);
	bool var$0 = var$1 || $Character::isUpperCase(c);
	return var$0 || $Character::isTitleCase(c);
}

bool CharPredicates::lambda$forUnicodeBlock$11($Character$UnicodeBlock* block, int32_t ch) {
	return block == $Character$UnicodeBlock::of(ch);
}

bool CharPredicates::lambda$forUnicodeScript$10($Character$UnicodeScript* script, int32_t ch) {
	return script == $Character$UnicodeScript::of(ch);
}

bool CharPredicates::lambda$WORD$9(int32_t ch) {
	return ((int32_t)(($sr((((($sl(1, $Character::NON_SPACING_MARK)) | ($sl(1, $Character::ENCLOSING_MARK))) | ($sl(1, $Character::COMBINING_SPACING_MARK))) | ($sl(1, $Character::DECIMAL_DIGIT_NUMBER))) | ($sl(1, $Character::CONNECTOR_PUNCTUATION)), $Character::getType(ch))) & (uint32_t)1)) != 0;
}

bool CharPredicates::lambda$JOIN_CONTROL$8(int32_t ch) {
	return ch == 8204 || ch == 8205;
}

bool CharPredicates::lambda$GRAPH$7(int32_t ch) {
	return ((int32_t)(($sr(((((($sl(1, $Character::SPACE_SEPARATOR)) | ($sl(1, $Character::LINE_SEPARATOR))) | ($sl(1, $Character::PARAGRAPH_SEPARATOR))) | ($sl(1, $Character::CONTROL))) | ($sl(1, $Character::SURROGATE))) | ($sl(1, $Character::UNASSIGNED)), $Character::getType(ch))) & (uint32_t)1)) == 0;
}

bool CharPredicates::lambda$BLANK$6(int32_t ch) {
	return $Character::getType(ch) == $Character::SPACE_SEPARATOR || ch == 9;
}

bool CharPredicates::lambda$NONCHARACTER_CODE_POINT$5(int32_t ch) {
	return ((int32_t)(ch & (uint32_t)0x0000FFFE)) == 0x0000FFFE || (ch >= 0x0000FDD0 && ch <= 0x0000FDEF);
}

bool CharPredicates::lambda$ASSIGNED$4(int32_t ch) {
	return $Character::getType(ch) != $Character::UNASSIGNED;
}

bool CharPredicates::lambda$HEX_DIGIT$3(int32_t ch) {
	return (ch >= 48 && ch <= 57) || (ch >= 65 && ch <= 70) || (ch >= 97 && ch <= 102) || (ch >= 0x0000FF10 && ch <= 0x0000FF19) || (ch >= 0x0000FF21 && ch <= 0x0000FF26) || (ch >= 0x0000FF41 && ch <= 0x0000FF46);
}

bool CharPredicates::lambda$PUNCTUATION$2(int32_t ch) {
	return ((int32_t)(($sr((((((($sl(1, $Character::CONNECTOR_PUNCTUATION)) | ($sl(1, $Character::DASH_PUNCTUATION))) | ($sl(1, $Character::START_PUNCTUATION))) | ($sl(1, $Character::END_PUNCTUATION))) | ($sl(1, $Character::OTHER_PUNCTUATION))) | ($sl(1, $Character::INITIAL_QUOTE_PUNCTUATION))) | ($sl(1, $Character::FINAL_QUOTE_PUNCTUATION)), $Character::getType(ch))) & (uint32_t)1)) != 0;
}

bool CharPredicates::lambda$CONTROL$1(int32_t ch) {
	return $Character::getType(ch) == $Character::CONTROL;
}

bool CharPredicates::lambda$WHITE_SPACE$0(int32_t ch) {
	return ((int32_t)(($sr((($sl(1, $Character::SPACE_SEPARATOR)) | ($sl(1, $Character::LINE_SEPARATOR))) | ($sl(1, $Character::PARAGRAPH_SEPARATOR)), $Character::getType(ch))) & (uint32_t)1)) != 0 || (ch >= 9 && ch <= 13) || (ch == 133);
}

CharPredicates::CharPredicates() {
}

$Class* CharPredicates::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(CharPredicates$$Lambda$isAlphabetic::classInfo$.name)) {
			return CharPredicates$$Lambda$isAlphabetic::load$(name, initialize);
		}
		if (name->equals(CharPredicates$$Lambda$isDigit$1::classInfo$.name)) {
			return CharPredicates$$Lambda$isDigit$1::load$(name, initialize);
		}
		if (name->equals(CharPredicates$$Lambda$isLetter$2::classInfo$.name)) {
			return CharPredicates$$Lambda$isLetter$2::load$(name, initialize);
		}
		if (name->equals(CharPredicates$$Lambda$isIdeographic$3::classInfo$.name)) {
			return CharPredicates$$Lambda$isIdeographic$3::load$(name, initialize);
		}
		if (name->equals(CharPredicates$$Lambda$isLowerCase$4::classInfo$.name)) {
			return CharPredicates$$Lambda$isLowerCase$4::load$(name, initialize);
		}
		if (name->equals(CharPredicates$$Lambda$isUpperCase$5::classInfo$.name)) {
			return CharPredicates$$Lambda$isUpperCase$5::load$(name, initialize);
		}
		if (name->equals(CharPredicates$$Lambda$isTitleCase$6::classInfo$.name)) {
			return CharPredicates$$Lambda$isTitleCase$6::load$(name, initialize);
		}
		if (name->equals(CharPredicates$$Lambda$lambda$WHITE_SPACE$0$7::classInfo$.name)) {
			return CharPredicates$$Lambda$lambda$WHITE_SPACE$0$7::load$(name, initialize);
		}
		if (name->equals(CharPredicates$$Lambda$lambda$CONTROL$1$8::classInfo$.name)) {
			return CharPredicates$$Lambda$lambda$CONTROL$1$8::load$(name, initialize);
		}
		if (name->equals(CharPredicates$$Lambda$lambda$PUNCTUATION$2$9::classInfo$.name)) {
			return CharPredicates$$Lambda$lambda$PUNCTUATION$2$9::load$(name, initialize);
		}
		if (name->equals(CharPredicates$$Lambda$lambda$HEX_DIGIT$3$10::classInfo$.name)) {
			return CharPredicates$$Lambda$lambda$HEX_DIGIT$3$10::load$(name, initialize);
		}
		if (name->equals(CharPredicates$$Lambda$lambda$ASSIGNED$4$11::classInfo$.name)) {
			return CharPredicates$$Lambda$lambda$ASSIGNED$4$11::load$(name, initialize);
		}
		if (name->equals(CharPredicates$$Lambda$lambda$NONCHARACTER_CODE_POINT$5$12::classInfo$.name)) {
			return CharPredicates$$Lambda$lambda$NONCHARACTER_CODE_POINT$5$12::load$(name, initialize);
		}
		if (name->equals(CharPredicates$$Lambda$lambda$BLANK$6$13::classInfo$.name)) {
			return CharPredicates$$Lambda$lambda$BLANK$6$13::load$(name, initialize);
		}
		if (name->equals(CharPredicates$$Lambda$lambda$GRAPH$7$14::classInfo$.name)) {
			return CharPredicates$$Lambda$lambda$GRAPH$7$14::load$(name, initialize);
		}
		if (name->equals(CharPredicates$$Lambda$lambda$JOIN_CONTROL$8$15::classInfo$.name)) {
			return CharPredicates$$Lambda$lambda$JOIN_CONTROL$8$15::load$(name, initialize);
		}
		if (name->equals(CharPredicates$$Lambda$lambda$WORD$9$16::classInfo$.name)) {
			return CharPredicates$$Lambda$lambda$WORD$9$16::load$(name, initialize);
		}
		if (name->equals(CharPredicates$$Lambda$lambda$forUnicodeScript$10$17::classInfo$.name)) {
			return CharPredicates$$Lambda$lambda$forUnicodeScript$10$17::load$(name, initialize);
		}
		if (name->equals(CharPredicates$$Lambda$lambda$forUnicodeBlock$11$18::classInfo$.name)) {
			return CharPredicates$$Lambda$lambda$forUnicodeBlock$11$18::load$(name, initialize);
		}
		if (name->equals(CharPredicates$$Lambda$lambda$forProperty$12$19::classInfo$.name)) {
			return CharPredicates$$Lambda$lambda$forProperty$12$19::load$(name, initialize);
		}
		if (name->equals(CharPredicates$$Lambda$lambda$forProperty$13$20::classInfo$.name)) {
			return CharPredicates$$Lambda$lambda$forProperty$13$20::load$(name, initialize);
		}
		if (name->equals(CharPredicates$$Lambda$lambda$forProperty$14$21::classInfo$.name)) {
			return CharPredicates$$Lambda$lambda$forProperty$14$21::load$(name, initialize);
		}
		if (name->equals(CharPredicates$$Lambda$isDefined$22::classInfo$.name)) {
			return CharPredicates$$Lambda$isDefined$22::load$(name, initialize);
		}
		if (name->equals(CharPredicates$$Lambda$isLetterOrDigit$23::classInfo$.name)) {
			return CharPredicates$$Lambda$isLetterOrDigit$23::load$(name, initialize);
		}
		if (name->equals(CharPredicates$$Lambda$isJavaIdentifierStart$24::classInfo$.name)) {
			return CharPredicates$$Lambda$isJavaIdentifierStart$24::load$(name, initialize);
		}
		if (name->equals(CharPredicates$$Lambda$isJavaIdentifierPart$25::classInfo$.name)) {
			return CharPredicates$$Lambda$isJavaIdentifierPart$25::load$(name, initialize);
		}
		if (name->equals(CharPredicates$$Lambda$isUnicodeIdentifierStart$26::classInfo$.name)) {
			return CharPredicates$$Lambda$isUnicodeIdentifierStart$26::load$(name, initialize);
		}
		if (name->equals(CharPredicates$$Lambda$isUnicodeIdentifierPart$27::classInfo$.name)) {
			return CharPredicates$$Lambda$isUnicodeIdentifierPart$27::load$(name, initialize);
		}
		if (name->equals(CharPredicates$$Lambda$isIdentifierIgnorable$28::classInfo$.name)) {
			return CharPredicates$$Lambda$isIdentifierIgnorable$28::load$(name, initialize);
		}
		if (name->equals(CharPredicates$$Lambda$isSpaceChar$29::classInfo$.name)) {
			return CharPredicates$$Lambda$isSpaceChar$29::load$(name, initialize);
		}
		if (name->equals(CharPredicates$$Lambda$isWhitespace$30::classInfo$.name)) {
			return CharPredicates$$Lambda$isWhitespace$30::load$(name, initialize);
		}
		if (name->equals(CharPredicates$$Lambda$isISOControl$31::classInfo$.name)) {
			return CharPredicates$$Lambda$isISOControl$31::load$(name, initialize);
		}
		if (name->equals(CharPredicates$$Lambda$isMirrored$32::classInfo$.name)) {
			return CharPredicates$$Lambda$isMirrored$32::load$(name, initialize);
		}
		if (name->equals(CharPredicates$$Lambda$lambda$category$15$33::classInfo$.name)) {
			return CharPredicates$$Lambda$lambda$category$15$33::load$(name, initialize);
		}
		if (name->equals(CharPredicates$$Lambda$lambda$range$16$34::classInfo$.name)) {
			return CharPredicates$$Lambda$lambda$range$16$34::load$(name, initialize);
		}
		if (name->equals(CharPredicates$$Lambda$lambda$ctype$17$35::classInfo$.name)) {
			return CharPredicates$$Lambda$lambda$ctype$17$35::load$(name, initialize);
		}
		if (name->equals(CharPredicates$$Lambda$lambda$ASCII_DIGIT$18$36::classInfo$.name)) {
			return CharPredicates$$Lambda$lambda$ASCII_DIGIT$18$36::load$(name, initialize);
		}
		if (name->equals(CharPredicates$$Lambda$lambda$ASCII_WORD$19$37::classInfo$.name)) {
			return CharPredicates$$Lambda$lambda$ASCII_WORD$19$37::load$(name, initialize);
		}
		if (name->equals(CharPredicates$$Lambda$lambda$ASCII_SPACE$20$38::classInfo$.name)) {
			return CharPredicates$$Lambda$lambda$ASCII_SPACE$20$38::load$(name, initialize);
		}
	}
	$loadClass(CharPredicates, name, initialize, &_CharPredicates_ClassInfo_, allocate$CharPredicates);
	return class$;
}

$Class* CharPredicates::class$ = nullptr;

		} // regex
	} // util
} // java