#include <java/lang/IllegalCallerException.h>

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

$FieldInfo _IllegalCallerException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(IllegalCallerException, serialVersionUID)},
	{}
};

$MethodInfo _IllegalCallerException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IllegalCallerException::*)()>(&IllegalCallerException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(IllegalCallerException::*)($String*)>(&IllegalCallerException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(IllegalCallerException::*)($String*,$Throwable*)>(&IllegalCallerException::init$))},
	{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(IllegalCallerException::*)($Throwable*)>(&IllegalCallerException::init$))},
	{}
};

$ClassInfo _IllegalCallerException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.lang.IllegalCallerException",
	"java.lang.RuntimeException",
	nullptr,
	_IllegalCallerException_FieldInfo_,
	_IllegalCallerException_MethodInfo_
};

$Object* allocate$IllegalCallerException($Class* clazz) {
	return $of($alloc(IllegalCallerException));
}

void IllegalCallerException::init$() {
	$RuntimeException::init$();
}

void IllegalCallerException::init$($String* s) {
	$RuntimeException::init$(s);
}

void IllegalCallerException::init$($String* message, $Throwable* cause) {
	$RuntimeException::init$(message, cause);
}

void IllegalCallerException::init$($Throwable* cause) {
	$RuntimeException::init$(cause);
}

IllegalCallerException::IllegalCallerException() {
}

IllegalCallerException::IllegalCallerException(const IllegalCallerException& e) {
}

IllegalCallerException IllegalCallerException::wrapper$() {
	$pendingException(this);
	return *this;
}

void IllegalCallerException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* IllegalCallerException::load$($String* name, bool initialize) {
	$loadClass(IllegalCallerException, name, initialize, &_IllegalCallerException_ClassInfo_, allocate$IllegalCallerException);
	return class$;
}

$Class* IllegalCallerException::class$ = nullptr;

	} // lang
} // java