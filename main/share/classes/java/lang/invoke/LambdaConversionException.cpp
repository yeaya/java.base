#include <java/lang/invoke/LambdaConversionException.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {
		namespace invoke {

$FieldInfo _LambdaConversionException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LambdaConversionException, serialVersionUID)},
	{}
};

$MethodInfo _LambdaConversionException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LambdaConversionException::*)()>(&LambdaConversionException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(LambdaConversionException::*)($String*)>(&LambdaConversionException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(LambdaConversionException::*)($String*,$Throwable*)>(&LambdaConversionException::init$))},
	{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(LambdaConversionException::*)($Throwable*)>(&LambdaConversionException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;ZZ)V", nullptr, $PUBLIC, $method(static_cast<void(LambdaConversionException::*)($String*,$Throwable*,bool,bool)>(&LambdaConversionException::init$))},
	{}
};

$ClassInfo _LambdaConversionException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.lang.invoke.LambdaConversionException",
	"java.lang.Exception",
	nullptr,
	_LambdaConversionException_FieldInfo_,
	_LambdaConversionException_MethodInfo_
};

$Object* allocate$LambdaConversionException($Class* clazz) {
	return $of($alloc(LambdaConversionException));
}

void LambdaConversionException::init$() {
	$Exception::init$();
}

void LambdaConversionException::init$($String* message) {
	$Exception::init$(message);
}

void LambdaConversionException::init$($String* message, $Throwable* cause) {
	$Exception::init$(message, cause);
}

void LambdaConversionException::init$($Throwable* cause) {
	$Exception::init$(cause);
}

void LambdaConversionException::init$($String* message, $Throwable* cause, bool enableSuppression, bool writableStackTrace) {
	$Exception::init$(message, cause, enableSuppression, writableStackTrace);
}

LambdaConversionException::LambdaConversionException() {
}

LambdaConversionException::LambdaConversionException(const LambdaConversionException& e) {
}

LambdaConversionException LambdaConversionException::wrapper$() {
	$pendingException(this);
	return *this;
}

void LambdaConversionException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* LambdaConversionException::load$($String* name, bool initialize) {
	$loadClass(LambdaConversionException, name, initialize, &_LambdaConversionException_ClassInfo_, allocate$LambdaConversionException);
	return class$;
}

$Class* LambdaConversionException::class$ = nullptr;

		} // invoke
	} // lang
} // java