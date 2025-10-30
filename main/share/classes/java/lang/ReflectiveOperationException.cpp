#include <java/lang/ReflectiveOperationException.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {

$FieldInfo _ReflectiveOperationException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(ReflectiveOperationException, serialVersionUID)},
	{}
};

$MethodInfo _ReflectiveOperationException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ReflectiveOperationException::*)()>(&ReflectiveOperationException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(ReflectiveOperationException::*)($String*)>(&ReflectiveOperationException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(ReflectiveOperationException::*)($String*,$Throwable*)>(&ReflectiveOperationException::init$))},
	{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(ReflectiveOperationException::*)($Throwable*)>(&ReflectiveOperationException::init$))},
	{}
};

$ClassInfo _ReflectiveOperationException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.lang.ReflectiveOperationException",
	"java.lang.Exception",
	nullptr,
	_ReflectiveOperationException_FieldInfo_,
	_ReflectiveOperationException_MethodInfo_
};

$Object* allocate$ReflectiveOperationException($Class* clazz) {
	return $of($alloc(ReflectiveOperationException));
}

void ReflectiveOperationException::init$() {
	$Exception::init$();
}

void ReflectiveOperationException::init$($String* message) {
	$Exception::init$(message);
}

void ReflectiveOperationException::init$($String* message, $Throwable* cause) {
	$Exception::init$(message, cause);
}

void ReflectiveOperationException::init$($Throwable* cause) {
	$Exception::init$(cause);
}

ReflectiveOperationException::ReflectiveOperationException() {
}

ReflectiveOperationException::ReflectiveOperationException(const ReflectiveOperationException& e) : $Exception(e) {
}

void ReflectiveOperationException::throw$() {
	throw *this;
}

$Class* ReflectiveOperationException::load$($String* name, bool initialize) {
	$loadClass(ReflectiveOperationException, name, initialize, &_ReflectiveOperationException_ClassInfo_, allocate$ReflectiveOperationException);
	return class$;
}

$Class* ReflectiveOperationException::class$ = nullptr;

	} // lang
} // java