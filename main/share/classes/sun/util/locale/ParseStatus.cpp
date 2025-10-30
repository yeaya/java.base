#include <sun/util/locale/ParseStatus.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace util {
		namespace locale {

$FieldInfo _ParseStatus_FieldInfo_[] = {
	{"parseLength", "I", nullptr, 0, $field(ParseStatus, parseLength)},
	{"errorIndex", "I", nullptr, 0, $field(ParseStatus, errorIndex)},
	{"errorMsg", "Ljava/lang/String;", nullptr, 0, $field(ParseStatus, errorMsg)},
	{}
};

$MethodInfo _ParseStatus_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ParseStatus::*)()>(&ParseStatus::init$))},
	{"getErrorIndex", "()I", nullptr, $PUBLIC},
	{"getErrorMessage", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getParseLength", "()I", nullptr, $PUBLIC},
	{"isError", "()Z", nullptr, $PUBLIC},
	{"reset", "()V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ParseStatus_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.locale.ParseStatus",
	"java.lang.Object",
	nullptr,
	_ParseStatus_FieldInfo_,
	_ParseStatus_MethodInfo_
};

$Object* allocate$ParseStatus($Class* clazz) {
	return $of($alloc(ParseStatus));
}

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
	$loadClass(ParseStatus, name, initialize, &_ParseStatus_ClassInfo_, allocate$ParseStatus);
	return class$;
}

$Class* ParseStatus::class$ = nullptr;

		} // locale
	} // util
} // sun