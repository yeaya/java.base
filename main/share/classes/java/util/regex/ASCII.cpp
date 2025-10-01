#include <java/util/regex/ASCII.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef GRAPH
#undef WORD
#undef ALPHA
#undef UNDER
#undef ALNUM
#undef DIGIT
#undef SPACE
#undef UPPER
#undef BLANK
#undef LOWER
#undef PUNCT
#undef CNTRL
#undef HEX
#undef XDIGIT

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace regex {

$FieldInfo _ASCII_FieldInfo_[] = {
	{"UPPER", "I", nullptr, $STATIC | $FINAL, $constField(ASCII, UPPER)},
	{"LOWER", "I", nullptr, $STATIC | $FINAL, $constField(ASCII, LOWER)},
	{"DIGIT", "I", nullptr, $STATIC | $FINAL, $constField(ASCII, DIGIT)},
	{"SPACE", "I", nullptr, $STATIC | $FINAL, $constField(ASCII, SPACE)},
	{"PUNCT", "I", nullptr, $STATIC | $FINAL, $constField(ASCII, PUNCT)},
	{"CNTRL", "I", nullptr, $STATIC | $FINAL, $constField(ASCII, CNTRL)},
	{"BLANK", "I", nullptr, $STATIC | $FINAL, $constField(ASCII, BLANK)},
	{"HEX", "I", nullptr, $STATIC | $FINAL, $constField(ASCII, HEX)},
	{"UNDER", "I", nullptr, $STATIC | $FINAL, $constField(ASCII, UNDER)},
	{"ASCII", "I", nullptr, $STATIC | $FINAL, $constField(ASCII, ASCII$)},
	{"ALPHA", "I", nullptr, $STATIC | $FINAL, $constField(ASCII, ALPHA)},
	{"ALNUM", "I", nullptr, $STATIC | $FINAL, $constField(ASCII, ALNUM)},
	{"GRAPH", "I", nullptr, $STATIC | $FINAL, $constField(ASCII, GRAPH)},
	{"WORD", "I", nullptr, $STATIC | $FINAL, $constField(ASCII, WORD)},
	{"XDIGIT", "I", nullptr, $STATIC | $FINAL, $constField(ASCII, XDIGIT)},
	{"ctype", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ASCII, ctype)},
	{}
};

$MethodInfo _ASCII_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ASCII::*)()>(&ASCII::init$))},
	{"getType", "(I)I", nullptr, $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&ASCII::getType))},
	{"isAlnum", "(I)Z", nullptr, $STATIC, $method(static_cast<bool(*)(int32_t)>(&ASCII::isAlnum))},
	{"isAlpha", "(I)Z", nullptr, $STATIC, $method(static_cast<bool(*)(int32_t)>(&ASCII::isAlpha))},
	{"isAscii", "(I)Z", nullptr, $STATIC, $method(static_cast<bool(*)(int32_t)>(&ASCII::isAscii))},
	{"isCntrl", "(I)Z", nullptr, $STATIC, $method(static_cast<bool(*)(int32_t)>(&ASCII::isCntrl))},
	{"isDigit", "(I)Z", nullptr, $STATIC, $method(static_cast<bool(*)(int32_t)>(&ASCII::isDigit))},
	{"isGraph", "(I)Z", nullptr, $STATIC, $method(static_cast<bool(*)(int32_t)>(&ASCII::isGraph))},
	{"isHexDigit", "(I)Z", nullptr, $STATIC, $method(static_cast<bool(*)(int32_t)>(&ASCII::isHexDigit))},
	{"isLower", "(I)Z", nullptr, $STATIC, $method(static_cast<bool(*)(int32_t)>(&ASCII::isLower))},
	{"isOctDigit", "(I)Z", nullptr, $STATIC, $method(static_cast<bool(*)(int32_t)>(&ASCII::isOctDigit))},
	{"isPrint", "(I)Z", nullptr, $STATIC, $method(static_cast<bool(*)(int32_t)>(&ASCII::isPrint))},
	{"isPunct", "(I)Z", nullptr, $STATIC, $method(static_cast<bool(*)(int32_t)>(&ASCII::isPunct))},
	{"isSpace", "(I)Z", nullptr, $STATIC, $method(static_cast<bool(*)(int32_t)>(&ASCII::isSpace))},
	{"isType", "(II)Z", nullptr, $STATIC, $method(static_cast<bool(*)(int32_t,int32_t)>(&ASCII::isType))},
	{"isUpper", "(I)Z", nullptr, $STATIC, $method(static_cast<bool(*)(int32_t)>(&ASCII::isUpper))},
	{"isWord", "(I)Z", nullptr, $STATIC, $method(static_cast<bool(*)(int32_t)>(&ASCII::isWord))},
	{"toDigit", "(I)I", nullptr, $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&ASCII::toDigit))},
	{"toLower", "(I)I", nullptr, $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&ASCII::toLower))},
	{"toUpper", "(I)I", nullptr, $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&ASCII::toUpper))},
	{}
};

$ClassInfo _ASCII_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.util.regex.ASCII",
	"java.lang.Object",
	nullptr,
	_ASCII_FieldInfo_,
	_ASCII_MethodInfo_
};

$Object* allocate$ASCII($Class* clazz) {
	return $of($alloc(ASCII));
}

$ints* ASCII::ctype = nullptr;

void ASCII::init$() {
}

int32_t ASCII::getType(int32_t ch) {
	$init(ASCII);
	return (((int32_t)(ch & (uint32_t)-128)) == 0 ? $nc(ASCII::ctype)->get(ch) : 0);
}

bool ASCII::isType(int32_t ch, int32_t type) {
	$init(ASCII);
	return ((int32_t)(getType(ch) & (uint32_t)type)) != 0;
}

bool ASCII::isAscii(int32_t ch) {
	$init(ASCII);
	return (((int32_t)(ch & (uint32_t)-128)) == 0);
}

bool ASCII::isAlpha(int32_t ch) {
	$init(ASCII);
	return isType(ch, ASCII::ALPHA);
}

bool ASCII::isDigit(int32_t ch) {
	$init(ASCII);
	return ((ch - u'0') | (u'9' - ch)) >= 0;
}

bool ASCII::isAlnum(int32_t ch) {
	$init(ASCII);
	return isType(ch, ASCII::ALNUM);
}

bool ASCII::isGraph(int32_t ch) {
	$init(ASCII);
	return isType(ch, ASCII::GRAPH);
}

bool ASCII::isPrint(int32_t ch) {
	$init(ASCII);
	return ((ch - 32) | (126 - ch)) >= 0;
}

bool ASCII::isPunct(int32_t ch) {
	$init(ASCII);
	return isType(ch, ASCII::PUNCT);
}

bool ASCII::isSpace(int32_t ch) {
	$init(ASCII);
	return isType(ch, ASCII::SPACE);
}

bool ASCII::isHexDigit(int32_t ch) {
	$init(ASCII);
	return isType(ch, ASCII::HEX);
}

bool ASCII::isOctDigit(int32_t ch) {
	$init(ASCII);
	return ((ch - u'0') | (u'7' - ch)) >= 0;
}

bool ASCII::isCntrl(int32_t ch) {
	$init(ASCII);
	return isType(ch, ASCII::CNTRL);
}

bool ASCII::isLower(int32_t ch) {
	$init(ASCII);
	return ((ch - u'a') | (u'z' - ch)) >= 0;
}

bool ASCII::isUpper(int32_t ch) {
	$init(ASCII);
	return ((ch - u'A') | (u'Z' - ch)) >= 0;
}

bool ASCII::isWord(int32_t ch) {
	$init(ASCII);
	return isType(ch, ASCII::WORD);
}

int32_t ASCII::toDigit(int32_t ch) {
	$init(ASCII);
	return ((int32_t)($nc(ASCII::ctype)->get((int32_t)(ch & (uint32_t)127)) & (uint32_t)63));
}

int32_t ASCII::toLower(int32_t ch) {
	$init(ASCII);
	return isUpper(ch) ? (ch + 32) : ch;
}

int32_t ASCII::toUpper(int32_t ch) {
	$init(ASCII);
	return isLower(ch) ? (ch - 32) : ch;
}

void clinit$ASCII($Class* class$) {
	$assignStatic(ASCII::ctype, $new($ints, {
		ASCII::CNTRL,
		ASCII::CNTRL,
		ASCII::CNTRL,
		ASCII::CNTRL,
		ASCII::CNTRL,
		ASCII::CNTRL,
		ASCII::CNTRL,
		ASCII::CNTRL,
		ASCII::CNTRL,
		ASCII::SPACE + ASCII::CNTRL + ASCII::BLANK,
		ASCII::SPACE + ASCII::CNTRL,
		ASCII::SPACE + ASCII::CNTRL,
		ASCII::SPACE + ASCII::CNTRL,
		ASCII::SPACE + ASCII::CNTRL,
		ASCII::CNTRL,
		ASCII::CNTRL,
		ASCII::CNTRL,
		ASCII::CNTRL,
		ASCII::CNTRL,
		ASCII::CNTRL,
		ASCII::CNTRL,
		ASCII::CNTRL,
		ASCII::CNTRL,
		ASCII::CNTRL,
		ASCII::CNTRL,
		ASCII::CNTRL,
		ASCII::CNTRL,
		ASCII::CNTRL,
		ASCII::CNTRL,
		ASCII::CNTRL,
		ASCII::CNTRL,
		ASCII::CNTRL,
		ASCII::SPACE + ASCII::BLANK,
		ASCII::PUNCT,
		ASCII::PUNCT,
		ASCII::PUNCT,
		ASCII::PUNCT,
		ASCII::PUNCT,
		ASCII::PUNCT,
		ASCII::PUNCT,
		ASCII::PUNCT,
		ASCII::PUNCT,
		ASCII::PUNCT,
		ASCII::PUNCT,
		ASCII::PUNCT,
		ASCII::PUNCT,
		ASCII::PUNCT,
		ASCII::PUNCT,
		ASCII::DIGIT + ASCII::HEX + 0,
		ASCII::DIGIT + ASCII::HEX + 1,
		ASCII::DIGIT + ASCII::HEX + 2,
		ASCII::DIGIT + ASCII::HEX + 3,
		ASCII::DIGIT + ASCII::HEX + 4,
		ASCII::DIGIT + ASCII::HEX + 5,
		ASCII::DIGIT + ASCII::HEX + 6,
		ASCII::DIGIT + ASCII::HEX + 7,
		ASCII::DIGIT + ASCII::HEX + 8,
		ASCII::DIGIT + ASCII::HEX + 9,
		ASCII::PUNCT,
		ASCII::PUNCT,
		ASCII::PUNCT,
		ASCII::PUNCT,
		ASCII::PUNCT,
		ASCII::PUNCT,
		ASCII::PUNCT,
		ASCII::UPPER + ASCII::HEX + 10,
		ASCII::UPPER + ASCII::HEX + 11,
		ASCII::UPPER + ASCII::HEX + 12,
		ASCII::UPPER + ASCII::HEX + 13,
		ASCII::UPPER + ASCII::HEX + 14,
		ASCII::UPPER + ASCII::HEX + 15,
		ASCII::UPPER + 16,
		ASCII::UPPER + 17,
		ASCII::UPPER + 18,
		ASCII::UPPER + 19,
		ASCII::UPPER + 20,
		ASCII::UPPER + 21,
		ASCII::UPPER + 22,
		ASCII::UPPER + 23,
		ASCII::UPPER + 24,
		ASCII::UPPER + 25,
		ASCII::UPPER + 26,
		ASCII::UPPER + 27,
		ASCII::UPPER + 28,
		ASCII::UPPER + 29,
		ASCII::UPPER + 30,
		ASCII::UPPER + 31,
		ASCII::UPPER + 32,
		ASCII::UPPER + 33,
		ASCII::UPPER + 34,
		ASCII::UPPER + 35,
		ASCII::PUNCT,
		ASCII::PUNCT,
		ASCII::PUNCT,
		ASCII::PUNCT,
		ASCII::PUNCT | ASCII::UNDER,
		ASCII::PUNCT,
		ASCII::LOWER + ASCII::HEX + 10,
		ASCII::LOWER + ASCII::HEX + 11,
		ASCII::LOWER + ASCII::HEX + 12,
		ASCII::LOWER + ASCII::HEX + 13,
		ASCII::LOWER + ASCII::HEX + 14,
		ASCII::LOWER + ASCII::HEX + 15,
		ASCII::LOWER + 16,
		ASCII::LOWER + 17,
		ASCII::LOWER + 18,
		ASCII::LOWER + 19,
		ASCII::LOWER + 20,
		ASCII::LOWER + 21,
		ASCII::LOWER + 22,
		ASCII::LOWER + 23,
		ASCII::LOWER + 24,
		ASCII::LOWER + 25,
		ASCII::LOWER + 26,
		ASCII::LOWER + 27,
		ASCII::LOWER + 28,
		ASCII::LOWER + 29,
		ASCII::LOWER + 30,
		ASCII::LOWER + 31,
		ASCII::LOWER + 32,
		ASCII::LOWER + 33,
		ASCII::LOWER + 34,
		ASCII::LOWER + 35,
		ASCII::PUNCT,
		ASCII::PUNCT,
		ASCII::PUNCT,
		ASCII::PUNCT,
		ASCII::CNTRL
	}));
}

ASCII::ASCII() {
}

$Class* ASCII::load$($String* name, bool initialize) {
	$loadClass(ASCII, name, initialize, &_ASCII_ClassInfo_, clinit$ASCII, allocate$ASCII);
	return class$;
}

$Class* ASCII::class$ = nullptr;

		} // regex
	} // util
} // java