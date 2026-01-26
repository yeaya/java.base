#include <java/lang/invoke/WrongMethodTypeException.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace java {
	namespace lang {
		namespace invoke {

$FieldInfo _WrongMethodTypeException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WrongMethodTypeException, serialVersionUID)},
	{}
};

$MethodInfo _WrongMethodTypeException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(WrongMethodTypeException, init$, void)},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(WrongMethodTypeException, init$, void, $String*)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, 0, $method(WrongMethodTypeException, init$, void, $String*, $Throwable*)},
	{"<init>", "(Ljava/lang/Throwable;)V", nullptr, 0, $method(WrongMethodTypeException, init$, void, $Throwable*)},
	{}
};

$ClassInfo _WrongMethodTypeException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.lang.invoke.WrongMethodTypeException",
	"java.lang.RuntimeException",
	nullptr,
	_WrongMethodTypeException_FieldInfo_,
	_WrongMethodTypeException_MethodInfo_
};

$Object* allocate$WrongMethodTypeException($Class* clazz) {
	return $of($alloc(WrongMethodTypeException));
}

void WrongMethodTypeException::init$() {
	$RuntimeException::init$();
}

void WrongMethodTypeException::init$($String* s) {
	$RuntimeException::init$(s);
}

void WrongMethodTypeException::init$($String* s, $Throwable* cause) {
	$RuntimeException::init$(s, cause);
}

void WrongMethodTypeException::init$($Throwable* cause) {
	$RuntimeException::init$(cause);
}

WrongMethodTypeException::WrongMethodTypeException() {
}

WrongMethodTypeException::WrongMethodTypeException(const WrongMethodTypeException& e) : $RuntimeException(e) {
}

void WrongMethodTypeException::throw$() {
	throw *this;
}

$Class* WrongMethodTypeException::load$($String* name, bool initialize) {
	$loadClass(WrongMethodTypeException, name, initialize, &_WrongMethodTypeException_ClassInfo_, allocate$WrongMethodTypeException);
	return class$;
}

$Class* WrongMethodTypeException::class$ = nullptr;

		} // invoke
	} // lang
} // java