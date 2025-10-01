#include <java/lang/UnsupportedOperationException.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(UnsupportedOperationException::*)()>(&UnsupportedOperationException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(UnsupportedOperationException::*)($String*)>(&UnsupportedOperationException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(UnsupportedOperationException::*)($String*,$Throwable*)>(&UnsupportedOperationException::init$))},
	{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(UnsupportedOperationException::*)($Throwable*)>(&UnsupportedOperationException::init$))},
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

UnsupportedOperationException::UnsupportedOperationException(const UnsupportedOperationException& e) {
}

UnsupportedOperationException UnsupportedOperationException::wrapper$() {
	$pendingException(this);
	return *this;
}

void UnsupportedOperationException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* UnsupportedOperationException::load$($String* name, bool initialize) {
	$loadClass(UnsupportedOperationException, name, initialize, &_UnsupportedOperationException_ClassInfo_, allocate$UnsupportedOperationException);
	return class$;
}

$Class* UnsupportedOperationException::class$ = nullptr;

	} // lang
} // java