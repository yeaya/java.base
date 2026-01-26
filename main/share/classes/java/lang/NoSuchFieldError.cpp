#include <java/lang/NoSuchFieldError.h>

#include <java/lang/IncompatibleClassChangeError.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IncompatibleClassChangeError = ::java::lang::IncompatibleClassChangeError;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {

$FieldInfo _NoSuchFieldError_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NoSuchFieldError, serialVersionUID)},
	{}
};

$MethodInfo _NoSuchFieldError_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(NoSuchFieldError, init$, void)},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(NoSuchFieldError, init$, void, $String*)},
	{}
};

$ClassInfo _NoSuchFieldError_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.lang.NoSuchFieldError",
	"java.lang.IncompatibleClassChangeError",
	nullptr,
	_NoSuchFieldError_FieldInfo_,
	_NoSuchFieldError_MethodInfo_
};

$Object* allocate$NoSuchFieldError($Class* clazz) {
	return $of($alloc(NoSuchFieldError));
}

void NoSuchFieldError::init$() {
	$IncompatibleClassChangeError::init$();
}

void NoSuchFieldError::init$($String* s) {
	$IncompatibleClassChangeError::init$(s);
}

NoSuchFieldError::NoSuchFieldError() {
}

NoSuchFieldError::NoSuchFieldError(const NoSuchFieldError& e) : $IncompatibleClassChangeError(e) {
}

void NoSuchFieldError::throw$() {
	throw *this;
}

$Class* NoSuchFieldError::load$($String* name, bool initialize) {
	$loadClass(NoSuchFieldError, name, initialize, &_NoSuchFieldError_ClassInfo_, allocate$NoSuchFieldError);
	return class$;
}

$Class* NoSuchFieldError::class$ = nullptr;

	} // lang
} // java