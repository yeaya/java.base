#include <java/lang/SecurityException.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace java {
	namespace lang {

$FieldInfo _SecurityException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SecurityException, serialVersionUID)},
	{}
};

$MethodInfo _SecurityException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(SecurityException, init$, void)},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(SecurityException, init$, void, $String*)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(SecurityException, init$, void, $String*, $Throwable*)},
	{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(SecurityException, init$, void, $Throwable*)},
	{}
};

$ClassInfo _SecurityException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.lang.SecurityException",
	"java.lang.RuntimeException",
	nullptr,
	_SecurityException_FieldInfo_,
	_SecurityException_MethodInfo_
};

$Object* allocate$SecurityException($Class* clazz) {
	return $of($alloc(SecurityException));
}

void SecurityException::init$() {
	$RuntimeException::init$();
}

void SecurityException::init$($String* s) {
	$RuntimeException::init$(s);
}

void SecurityException::init$($String* message, $Throwable* cause) {
	$RuntimeException::init$(message, cause);
}

void SecurityException::init$($Throwable* cause) {
	$RuntimeException::init$(cause);
}

SecurityException::SecurityException() {
}

SecurityException::SecurityException(const SecurityException& e) : $RuntimeException(e) {
}

void SecurityException::throw$() {
	throw *this;
}

$Class* SecurityException::load$($String* name, bool initialize) {
	$loadClass(SecurityException, name, initialize, &_SecurityException_ClassInfo_, allocate$SecurityException);
	return class$;
}

$Class* SecurityException::class$ = nullptr;

	} // lang
} // java