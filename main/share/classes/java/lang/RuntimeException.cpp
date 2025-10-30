#include <java/lang/RuntimeException.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {

$FieldInfo _RuntimeException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(RuntimeException, serialVersionUID)},
	{}
};

$MethodInfo _RuntimeException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(RuntimeException::*)()>(&RuntimeException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(RuntimeException::*)($String*)>(&RuntimeException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(RuntimeException::*)($String*,$Throwable*)>(&RuntimeException::init$))},
	{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(RuntimeException::*)($Throwable*)>(&RuntimeException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;ZZ)V", nullptr, $PROTECTED, $method(static_cast<void(RuntimeException::*)($String*,$Throwable*,bool,bool)>(&RuntimeException::init$))},
	{}
};

$ClassInfo _RuntimeException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.lang.RuntimeException",
	"java.lang.Exception",
	nullptr,
	_RuntimeException_FieldInfo_,
	_RuntimeException_MethodInfo_
};

$Object* allocate$RuntimeException($Class* clazz) {
	return $of($alloc(RuntimeException));
}

void RuntimeException::init$() {
	$Exception::init$();
}

void RuntimeException::init$($String* message) {
	$Exception::init$(message);
}

void RuntimeException::init$($String* message, $Throwable* cause) {
	$Exception::init$(message, cause);
}

void RuntimeException::init$($Throwable* cause) {
	$Exception::init$(cause);
}

void RuntimeException::init$($String* message, $Throwable* cause, bool enableSuppression, bool writableStackTrace) {
	$Exception::init$(message, cause, enableSuppression, writableStackTrace);
}

RuntimeException::RuntimeException() {
}

RuntimeException::RuntimeException(const RuntimeException& e) : $Exception(e) {
}

void RuntimeException::throw$() {
	throw *this;
}

$Class* RuntimeException::load$($String* name, bool initialize) {
	$loadClass(RuntimeException, name, initialize, &_RuntimeException_ClassInfo_, allocate$RuntimeException);
	return class$;
}

$Class* RuntimeException::class$ = nullptr;

	} // lang
} // java