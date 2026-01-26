#include <java/time/DateTimeException.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace java {
	namespace time {

$FieldInfo _DateTimeException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DateTimeException, serialVersionUID)},
	{}
};

$MethodInfo _DateTimeException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(DateTimeException, init$, void, $String*)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(DateTimeException, init$, void, $String*, $Throwable*)},
	{}
};

$ClassInfo _DateTimeException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.time.DateTimeException",
	"java.lang.RuntimeException",
	nullptr,
	_DateTimeException_FieldInfo_,
	_DateTimeException_MethodInfo_
};

$Object* allocate$DateTimeException($Class* clazz) {
	return $of($alloc(DateTimeException));
}

void DateTimeException::init$($String* message) {
	$RuntimeException::init$(message);
}

void DateTimeException::init$($String* message, $Throwable* cause) {
	$RuntimeException::init$(message, cause);
}

DateTimeException::DateTimeException() {
}

DateTimeException::DateTimeException(const DateTimeException& e) : $RuntimeException(e) {
}

void DateTimeException::throw$() {
	throw *this;
}

$Class* DateTimeException::load$($String* name, bool initialize) {
	$loadClass(DateTimeException, name, initialize, &_DateTimeException_ClassInfo_, allocate$DateTimeException);
	return class$;
}

$Class* DateTimeException::class$ = nullptr;

	} // time
} // java