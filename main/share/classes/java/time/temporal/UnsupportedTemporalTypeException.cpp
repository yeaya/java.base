#include <java/time/temporal/UnsupportedTemporalTypeException.h>

#include <java/time/DateTimeException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DateTimeException = ::java::time::DateTimeException;

namespace java {
	namespace time {
		namespace temporal {

$FieldInfo _UnsupportedTemporalTypeException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UnsupportedTemporalTypeException, serialVersionUID)},
	{}
};

$MethodInfo _UnsupportedTemporalTypeException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(UnsupportedTemporalTypeException, init$, void, $String*)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(UnsupportedTemporalTypeException, init$, void, $String*, $Throwable*)},
	{}
};

$ClassInfo _UnsupportedTemporalTypeException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.time.temporal.UnsupportedTemporalTypeException",
	"java.time.DateTimeException",
	nullptr,
	_UnsupportedTemporalTypeException_FieldInfo_,
	_UnsupportedTemporalTypeException_MethodInfo_
};

$Object* allocate$UnsupportedTemporalTypeException($Class* clazz) {
	return $of($alloc(UnsupportedTemporalTypeException));
}

void UnsupportedTemporalTypeException::init$($String* message) {
	$DateTimeException::init$(message);
}

void UnsupportedTemporalTypeException::init$($String* message, $Throwable* cause) {
	$DateTimeException::init$(message, cause);
}

UnsupportedTemporalTypeException::UnsupportedTemporalTypeException() {
}

UnsupportedTemporalTypeException::UnsupportedTemporalTypeException(const UnsupportedTemporalTypeException& e) : $DateTimeException(e) {
}

void UnsupportedTemporalTypeException::throw$() {
	throw *this;
}

$Class* UnsupportedTemporalTypeException::load$($String* name, bool initialize) {
	$loadClass(UnsupportedTemporalTypeException, name, initialize, &_UnsupportedTemporalTypeException_ClassInfo_, allocate$UnsupportedTemporalTypeException);
	return class$;
}

$Class* UnsupportedTemporalTypeException::class$ = nullptr;

		} // temporal
	} // time
} // java