#include <java/lang/AssertionError.h>

#include <java/lang/Error.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {

$FieldInfo _AssertionError_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AssertionError, serialVersionUID)},
	{}
};

$MethodInfo _AssertionError_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AssertionError::*)()>(&AssertionError::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(AssertionError::*)($String*)>(&AssertionError::init$))},
	{"<init>", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(AssertionError::*)(Object$*)>(&AssertionError::init$))},
	{"<init>", "(Z)V", nullptr, $PUBLIC, $method(static_cast<void(AssertionError::*)(bool)>(&AssertionError::init$))},
	{"<init>", "(C)V", nullptr, $PUBLIC, $method(static_cast<void(AssertionError::*)(char16_t)>(&AssertionError::init$))},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(AssertionError::*)(int32_t)>(&AssertionError::init$))},
	{"<init>", "(J)V", nullptr, $PUBLIC, $method(static_cast<void(AssertionError::*)(int64_t)>(&AssertionError::init$))},
	{"<init>", "(F)V", nullptr, $PUBLIC, $method(static_cast<void(AssertionError::*)(float)>(&AssertionError::init$))},
	{"<init>", "(D)V", nullptr, $PUBLIC, $method(static_cast<void(AssertionError::*)(double)>(&AssertionError::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(AssertionError::*)($String*,$Throwable*)>(&AssertionError::init$))},
	{}
};

$ClassInfo _AssertionError_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.lang.AssertionError",
	"java.lang.Error",
	nullptr,
	_AssertionError_FieldInfo_,
	_AssertionError_MethodInfo_
};

$Object* allocate$AssertionError($Class* clazz) {
	return $of($alloc(AssertionError));
}

void AssertionError::init$() {
	$Error::init$();
}

void AssertionError::init$($String* detailMessage) {
	$Error::init$(detailMessage);
}

void AssertionError::init$(Object$* detailMessage) {
	AssertionError::init$($($String::valueOf(detailMessage)));
	if ($instanceOf($Throwable, detailMessage)) {
		initCause($cast($Throwable, detailMessage));
	}
}

void AssertionError::init$(bool detailMessage) {
	AssertionError::init$($($String::valueOf(detailMessage)));
}

void AssertionError::init$(char16_t detailMessage) {
	AssertionError::init$($($String::valueOf(detailMessage)));
}

void AssertionError::init$(int32_t detailMessage) {
	AssertionError::init$($($String::valueOf(detailMessage)));
}

void AssertionError::init$(int64_t detailMessage) {
	AssertionError::init$($($String::valueOf(detailMessage)));
}

void AssertionError::init$(float detailMessage) {
	AssertionError::init$($($String::valueOf(detailMessage)));
}

void AssertionError::init$(double detailMessage) {
	AssertionError::init$($($String::valueOf(detailMessage)));
}

void AssertionError::init$($String* message, $Throwable* cause) {
	$Error::init$(message, cause);
}

AssertionError::AssertionError() {
}

AssertionError::AssertionError(const AssertionError& e) : $Error(e) {
}

void AssertionError::throw$() {
	throw *this;
}

$Class* AssertionError::load$($String* name, bool initialize) {
	$loadClass(AssertionError, name, initialize, &_AssertionError_ClassInfo_, allocate$AssertionError);
	return class$;
}

$Class* AssertionError::class$ = nullptr;

	} // lang
} // java