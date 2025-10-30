#include <java/lang/NoSuchMethodError.h>

#include <java/lang/IncompatibleClassChangeError.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IncompatibleClassChangeError = ::java::lang::IncompatibleClassChangeError;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {

$FieldInfo _NoSuchMethodError_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NoSuchMethodError, serialVersionUID)},
	{}
};

$MethodInfo _NoSuchMethodError_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(NoSuchMethodError::*)()>(&NoSuchMethodError::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(NoSuchMethodError::*)($String*)>(&NoSuchMethodError::init$))},
	{}
};

$ClassInfo _NoSuchMethodError_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.lang.NoSuchMethodError",
	"java.lang.IncompatibleClassChangeError",
	nullptr,
	_NoSuchMethodError_FieldInfo_,
	_NoSuchMethodError_MethodInfo_
};

$Object* allocate$NoSuchMethodError($Class* clazz) {
	return $of($alloc(NoSuchMethodError));
}

void NoSuchMethodError::init$() {
	$IncompatibleClassChangeError::init$();
}

void NoSuchMethodError::init$($String* s) {
	$IncompatibleClassChangeError::init$(s);
}

NoSuchMethodError::NoSuchMethodError() {
}

NoSuchMethodError::NoSuchMethodError(const NoSuchMethodError& e) : $IncompatibleClassChangeError(e) {
}

void NoSuchMethodError::throw$() {
	throw *this;
}

$Class* NoSuchMethodError::load$($String* name, bool initialize) {
	$loadClass(NoSuchMethodError, name, initialize, &_NoSuchMethodError_ClassInfo_, allocate$NoSuchMethodError);
	return class$;
}

$Class* NoSuchMethodError::class$ = nullptr;

	} // lang
} // java