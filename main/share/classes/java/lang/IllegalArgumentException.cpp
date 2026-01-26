#include <java/lang/IllegalArgumentException.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace java {
	namespace lang {

$FieldInfo _IllegalArgumentException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IllegalArgumentException, serialVersionUID)},
	{}
};

$MethodInfo _IllegalArgumentException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(IllegalArgumentException, init$, void)},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(IllegalArgumentException, init$, void, $String*)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(IllegalArgumentException, init$, void, $String*, $Throwable*)},
	{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(IllegalArgumentException, init$, void, $Throwable*)},
	{}
};

$ClassInfo _IllegalArgumentException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.lang.IllegalArgumentException",
	"java.lang.RuntimeException",
	nullptr,
	_IllegalArgumentException_FieldInfo_,
	_IllegalArgumentException_MethodInfo_
};

$Object* allocate$IllegalArgumentException($Class* clazz) {
	return $of($alloc(IllegalArgumentException));
}

void IllegalArgumentException::init$() {
	$RuntimeException::init$();
}

void IllegalArgumentException::init$($String* s) {
	$RuntimeException::init$(s);
}

void IllegalArgumentException::init$($String* message, $Throwable* cause) {
	$RuntimeException::init$(message, cause);
}

void IllegalArgumentException::init$($Throwable* cause) {
	$RuntimeException::init$(cause);
}

IllegalArgumentException::IllegalArgumentException() {
}

IllegalArgumentException::IllegalArgumentException(const IllegalArgumentException& e) : $RuntimeException(e) {
}

void IllegalArgumentException::throw$() {
	throw *this;
}

$Class* IllegalArgumentException::load$($String* name, bool initialize) {
	$loadClass(IllegalArgumentException, name, initialize, &_IllegalArgumentException_ClassInfo_, allocate$IllegalArgumentException);
	return class$;
}

$Class* IllegalArgumentException::class$ = nullptr;

	} // lang
} // java