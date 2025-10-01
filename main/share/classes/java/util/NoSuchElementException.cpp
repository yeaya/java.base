#include <java/util/NoSuchElementException.h>

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
	namespace util {

$FieldInfo _NoSuchElementException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NoSuchElementException, serialVersionUID)},
	{}
};

$MethodInfo _NoSuchElementException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(NoSuchElementException::*)()>(&NoSuchElementException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(NoSuchElementException::*)($String*,$Throwable*)>(&NoSuchElementException::init$))},
	{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(NoSuchElementException::*)($Throwable*)>(&NoSuchElementException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(NoSuchElementException::*)($String*)>(&NoSuchElementException::init$))},
	{}
};

$ClassInfo _NoSuchElementException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.util.NoSuchElementException",
	"java.lang.RuntimeException",
	nullptr,
	_NoSuchElementException_FieldInfo_,
	_NoSuchElementException_MethodInfo_
};

$Object* allocate$NoSuchElementException($Class* clazz) {
	return $of($alloc(NoSuchElementException));
}

void NoSuchElementException::init$() {
	$RuntimeException::init$();
}

void NoSuchElementException::init$($String* s, $Throwable* cause) {
	$RuntimeException::init$(s, cause);
}

void NoSuchElementException::init$($Throwable* cause) {
	$RuntimeException::init$(cause);
}

void NoSuchElementException::init$($String* s) {
	$RuntimeException::init$(s);
}

NoSuchElementException::NoSuchElementException() {
}

NoSuchElementException::NoSuchElementException(const NoSuchElementException& e) {
}

NoSuchElementException NoSuchElementException::wrapper$() {
	$pendingException(this);
	return *this;
}

void NoSuchElementException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* NoSuchElementException::load$($String* name, bool initialize) {
	$loadClass(NoSuchElementException, name, initialize, &_NoSuchElementException_ClassInfo_, allocate$NoSuchElementException);
	return class$;
}

$Class* NoSuchElementException::class$ = nullptr;

	} // util
} // java