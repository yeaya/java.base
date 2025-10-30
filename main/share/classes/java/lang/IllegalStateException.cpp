#include <java/lang/IllegalStateException.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace java {
	namespace lang {

$FieldInfo _IllegalStateException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(IllegalStateException, serialVersionUID)},
	{}
};

$MethodInfo _IllegalStateException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IllegalStateException::*)()>(&IllegalStateException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(IllegalStateException::*)($String*)>(&IllegalStateException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(IllegalStateException::*)($String*,$Throwable*)>(&IllegalStateException::init$))},
	{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(IllegalStateException::*)($Throwable*)>(&IllegalStateException::init$))},
	{}
};

$ClassInfo _IllegalStateException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.lang.IllegalStateException",
	"java.lang.RuntimeException",
	nullptr,
	_IllegalStateException_FieldInfo_,
	_IllegalStateException_MethodInfo_
};

$Object* allocate$IllegalStateException($Class* clazz) {
	return $of($alloc(IllegalStateException));
}

void IllegalStateException::init$() {
	$RuntimeException::init$();
}

void IllegalStateException::init$($String* s) {
	$RuntimeException::init$(s);
}

void IllegalStateException::init$($String* message, $Throwable* cause) {
	$RuntimeException::init$(message, cause);
}

void IllegalStateException::init$($Throwable* cause) {
	$RuntimeException::init$(cause);
}

IllegalStateException::IllegalStateException() {
}

IllegalStateException::IllegalStateException(const IllegalStateException& e) : $RuntimeException(e) {
}

void IllegalStateException::throw$() {
	throw *this;
}

$Class* IllegalStateException::load$($String* name, bool initialize) {
	$loadClass(IllegalStateException, name, initialize, &_IllegalStateException_ClassInfo_, allocate$IllegalStateException);
	return class$;
}

$Class* IllegalStateException::class$ = nullptr;

	} // lang
} // java