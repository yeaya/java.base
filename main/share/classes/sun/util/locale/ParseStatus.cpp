#include <sun/util/locale/ParseStatus.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace util {
		namespace locale {

void ParseStatus::init$() {
	reset();
}

void ParseStatus::reset() {
	this->parseLength = 0;
	this->errorIndex = -1;
	$set(this, errorMsg, nullptr);
}

bool ParseStatus::isError() {
	return (this->errorIndex >= 0);
}

int32_t ParseStatus::getErrorIndex() {
	return this->errorIndex;
}

int32_t ParseStatus::getParseLength() {
	return this->parseLength;
}

$String* ParseStatus::getErrorMessage() {
	return this->errorMsg;
}

ParseStatus::ParseStatus() {
}

$Class* ParseStatus::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"parseLength", "I", nullptr, 0, $field(ParseStatus, parseLength)},
		{"errorIndex", "I", nullptr, 0, $field(ParseStatus, errorIndex)},
		{"errorMsg", "Ljava/lang/String;", nullptr, 0, $field(ParseStatus, errorMsg)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ParseStatus, init$, void)},
		{"getErrorIndex", "()I", nullptr, $PUBLIC, $virtualMethod(ParseStatus, getErrorIndex, int32_t)},
		{"getErrorMessage", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ParseStatus, getErrorMessage, $String*)},
		{"getParseLength", "()I", nullptr, $PUBLIC, $virtualMethod(ParseStatus, getParseLength, int32_t)},
		{"isError", "()Z", nullptr, $PUBLIC, $virtualMethod(ParseStatus, isError, bool)},
		{"reset", "()V", nullptr, $PUBLIC, $virtualMethod(ParseStatus, reset, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.util.locale.ParseStatus",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ParseStatus, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ParseStatus);
	});
	return class$;
}

$Class* ParseStatus::class$ = nullptr;

		} // locale
	} // util
} // sun