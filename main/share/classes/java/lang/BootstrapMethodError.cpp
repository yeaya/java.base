#include <java/lang/BootstrapMethodError.h>

#include <java/lang/LinkageError.h>
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
	{"<init>", "()V", nullptr, $PUBLIC, $method(BootstrapMethodError, init$, void)},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(BootstrapMethodError, init$, void, $String*)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(BootstrapMethodError, init$, void, $String*, $Throwable*)},
	{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(BootstrapMethodError, init$, void, $Throwable*)},
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

BootstrapMethodError::BootstrapMethodError(const BootstrapMethodError& e) : $LinkageError(e) {
}

void BootstrapMethodError::throw$() {
	throw *this;
}

$Class* BootstrapMethodError::load$($String* name, bool initialize) {
	$loadClass(BootstrapMethodError, name, initialize, &_BootstrapMethodError_ClassInfo_, allocate$BootstrapMethodError);
	return class$;
}

$Class* BootstrapMethodError::class$ = nullptr;

	} // lang
} // java