#include <java/util/concurrent/ExecutionException.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace concurrent {

$FieldInfo _ExecutionException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ExecutionException, serialVersionUID)},
	{}
};

$MethodInfo _ExecutionException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(ExecutionException::*)()>(&ExecutionException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PROTECTED, $method(static_cast<void(ExecutionException::*)($String*)>(&ExecutionException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(ExecutionException::*)($String*,$Throwable*)>(&ExecutionException::init$))},
	{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(ExecutionException::*)($Throwable*)>(&ExecutionException::init$))},
	{}
};

$ClassInfo _ExecutionException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.util.concurrent.ExecutionException",
	"java.lang.Exception",
	nullptr,
	_ExecutionException_FieldInfo_,
	_ExecutionException_MethodInfo_
};

$Object* allocate$ExecutionException($Class* clazz) {
	return $of($alloc(ExecutionException));
}

void ExecutionException::init$() {
	$Exception::init$();
}

void ExecutionException::init$($String* message) {
	$Exception::init$(message);
}

void ExecutionException::init$($String* message, $Throwable* cause) {
	$Exception::init$(message, cause);
}

void ExecutionException::init$($Throwable* cause) {
	$Exception::init$(cause);
}

ExecutionException::ExecutionException() {
}

ExecutionException::ExecutionException(const ExecutionException& e) : $Exception(e) {
}

void ExecutionException::throw$() {
	throw *this;
}

$Class* ExecutionException::load$($String* name, bool initialize) {
	$loadClass(ExecutionException, name, initialize, &_ExecutionException_ClassInfo_, allocate$ExecutionException);
	return class$;
}

$Class* ExecutionException::class$ = nullptr;

		} // concurrent
	} // util
} // java