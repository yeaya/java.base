#include <java/lang/BootstrapMethodError.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/LinkageError.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $LinkageError = ::java::lang::LinkageError;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {

$FieldInfo _BootstrapMethodError_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BootstrapMethodError, serialVersionUID)},
	{}
};

$MethodInfo _BootstrapMethodError_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BootstrapMethodError::*)()>(&BootstrapMethodError::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(BootstrapMethodError::*)($String*)>(&BootstrapMethodError::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(BootstrapMethodError::*)($String*,$Throwable*)>(&BootstrapMethodError::init$))},
	{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(BootstrapMethodError::*)($Throwable*)>(&BootstrapMethodError::init$))},
	{}
};

$ClassInfo _BootstrapMethodError_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.lang.BootstrapMethodError",
	"java.lang.LinkageError",
	nullptr,
	_BootstrapMethodError_FieldInfo_,
	_BootstrapMethodError_MethodInfo_
};

$Object* allocate$BootstrapMethodError($Class* clazz) {
	return $of($alloc(BootstrapMethodError));
}

void BootstrapMethodError::init$() {
	$LinkageError::init$();
}

void BootstrapMethodError::init$($String* s) {
	$LinkageError::init$(s);
}

void BootstrapMethodError::init$($String* s, $Throwable* cause) {
	$LinkageError::init$(s, cause);
}

void BootstrapMethodError::init$($Throwable* cause) {
	$LinkageError::init$(cause == nullptr ? ($String*)nullptr : $($nc(cause)->toString()));
	initCause(cause);
}

BootstrapMethodError::BootstrapMethodError() {
}

BootstrapMethodError::BootstrapMethodError(const BootstrapMethodError& e) {
}

BootstrapMethodError BootstrapMethodError::wrapper$() {
	$pendingException(this);
	return *this;
}

void BootstrapMethodError::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* BootstrapMethodError::load$($String* name, bool initialize) {
	$loadClass(BootstrapMethodError, name, initialize, &_BootstrapMethodError_ClassInfo_, allocate$BootstrapMethodError);
	return class$;
}

$Class* BootstrapMethodError::class$ = nullptr;

	} // lang
} // java