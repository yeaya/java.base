#include <java/lang/IllegalArgumentException.h>

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

$FieldInfo _IllegalArgumentException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IllegalArgumentException, serialVersionUID)},
	{}
};

$MethodInfo _IllegalArgumentException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IllegalArgumentException::*)()>(&IllegalArgumentException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(IllegalArgumentException::*)($String*)>(&IllegalArgumentException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(IllegalArgumentException::*)($String*,$Throwable*)>(&IllegalArgumentException::init$))},
	{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(IllegalArgumentException::*)($Throwable*)>(&IllegalArgumentException::init$))},
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

IllegalArgumentException::IllegalArgumentException(const IllegalArgumentException& e) {
}

IllegalArgumentException IllegalArgumentException::wrapper$() {
	$pendingException(this);
	return *this;
}

void IllegalArgumentException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* IllegalArgumentException::load$($String* name, bool initialize) {
	$loadClass(IllegalArgumentException, name, initialize, &_IllegalArgumentException_ClassInfo_, allocate$IllegalArgumentException);
	return class$;
}

$Class* IllegalArgumentException::class$ = nullptr;

	} // lang
} // java