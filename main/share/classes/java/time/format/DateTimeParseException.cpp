#include <java/time/format/DateTimeParseException.h>

#include <java/lang/CharSequence.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/time/DateTimeException.h>
#include <jcpp.h>

using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DateTimeException = ::java::time::DateTimeException;

namespace java {
	namespace time {
		namespace format {

$FieldInfo _DateTimeParseException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DateTimeParseException, serialVersionUID)},
	{"parsedString", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(DateTimeParseException, parsedString)},
	{"errorIndex", "I", nullptr, $PRIVATE | $FINAL, $field(DateTimeParseException, errorIndex)},
	{}
};

$MethodInfo _DateTimeParseException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/CharSequence;I)V", nullptr, $PUBLIC, $method(static_cast<void(DateTimeParseException::*)($String*,$CharSequence*,int32_t)>(&DateTimeParseException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/CharSequence;ILjava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(DateTimeParseException::*)($String*,$CharSequence*,int32_t,$Throwable*)>(&DateTimeParseException::init$))},
	{"getErrorIndex", "()I", nullptr, $PUBLIC},
	{"getParsedString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DateTimeParseException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.time.format.DateTimeParseException",
	"java.time.DateTimeException",
	nullptr,
	_DateTimeParseException_FieldInfo_,
	_DateTimeParseException_MethodInfo_
};

$Object* allocate$DateTimeParseException($Class* clazz) {
	return $of($alloc(DateTimeParseException));
}

void DateTimeParseException::init$($String* message, $CharSequence* parsedData, int32_t errorIndex) {
	$DateTimeException::init$(message);
	$set(this, parsedString, $nc(parsedData)->toString());
	this->errorIndex = errorIndex;
}

void DateTimeParseException::init$($String* message, $CharSequence* parsedData, int32_t errorIndex, $Throwable* cause) {
	$DateTimeException::init$(message, cause);
	$set(this, parsedString, $nc(parsedData)->toString());
	this->errorIndex = errorIndex;
}

$String* DateTimeParseException::getParsedString() {
	return this->parsedString;
}

int32_t DateTimeParseException::getErrorIndex() {
	return this->errorIndex;
}

DateTimeParseException::DateTimeParseException() {
}

DateTimeParseException::DateTimeParseException(const DateTimeParseException& e) {
}

DateTimeParseException DateTimeParseException::wrapper$() {
	$pendingException(this);
	return *this;
}

void DateTimeParseException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* DateTimeParseException::load$($String* name, bool initialize) {
	$loadClass(DateTimeParseException, name, initialize, &_DateTimeParseException_ClassInfo_, allocate$DateTimeParseException);
	return class$;
}

$Class* DateTimeParseException::class$ = nullptr;

		} // format
	} // time
} // java