#include <java/lang/UnsupportedOperationException.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace java {
	namespace lang {

$FieldInfo _UnsupportedOperationException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(UnsupportedOperationException, serialVersionUID)},
	{}
};

$MethodInfo _UnsupportedOperationException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(UnsupportedOperationException, init$, void)},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(UnsupportedOperationException, init$, void, $String*)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(UnsupportedOperationException, init$, void, $String*, $Throwable*)},
	{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(UnsupportedOperationException, init$, void, $Throwable*)},
	{}
};

$ClassInfo _UnsupportedOperationException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.lang.UnsupportedOperationException",
	"java.lang.RuntimeException",
	nullptr,
	_UnsupportedOperationException_FieldInfo_,
	_UnsupportedOperationException_MethodInfo_
};

$Object* allocate$UnsupportedOperationException($Class* clazz) {
	return $of($alloc(UnsupportedOperationException));
}

void UnsupportedOperationException::init$() {
	$RuntimeException::init$();
}

void UnsupportedOperationException::init$($String* message) {
	$RuntimeException::init$(message);
}

void UnsupportedOperationException::init$($String* message, $Throwable* cause) {
	$RuntimeException::init$(message, cause);
}

void UnsupportedOperationException::init$($Throwable* cause) {
	$RuntimeException::init$(cause);
}

UnsupportedOperationException::UnsupportedOperationException() {
}

UnsupportedOperationException::UnsupportedOperationException(const UnsupportedOperationException& e) : $RuntimeException(e) {
}

void UnsupportedOperationException::throw$() {
	throw *this;
}

$Class* UnsupportedOperationException::load$($String* name, bool initialize) {
	$loadClass(UnsupportedOperationException, name, initialize, &_UnsupportedOperationException_ClassInfo_, allocate$UnsupportedOperationException);
	return class$;
}

$Class* UnsupportedOperationException::class$ = nullptr;

	} // lang
} // java