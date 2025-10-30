#include <java/lang/InstantiationError.h>

#include <java/lang/IncompatibleClassChangeError.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IncompatibleClassChangeError = ::java::lang::IncompatibleClassChangeError;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {

$FieldInfo _InstantiationError_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InstantiationError, serialVersionUID)},
	{}
};

$MethodInfo _InstantiationError_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(InstantiationError::*)()>(&InstantiationError::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(InstantiationError::*)($String*)>(&InstantiationError::init$))},
	{}
};

$ClassInfo _InstantiationError_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.lang.InstantiationError",
	"java.lang.IncompatibleClassChangeError",
	nullptr,
	_InstantiationError_FieldInfo_,
	_InstantiationError_MethodInfo_
};

$Object* allocate$InstantiationError($Class* clazz) {
	return $of($alloc(InstantiationError));
}

void InstantiationError::init$() {
	$IncompatibleClassChangeError::init$();
}

void InstantiationError::init$($String* s) {
	$IncompatibleClassChangeError::init$(s);
}

InstantiationError::InstantiationError() {
}

InstantiationError::InstantiationError(const InstantiationError& e) : $IncompatibleClassChangeError(e) {
}

void InstantiationError::throw$() {
	throw *this;
}

$Class* InstantiationError::load$($String* name, bool initialize) {
	$loadClass(InstantiationError, name, initialize, &_InstantiationError_ClassInfo_, allocate$InstantiationError);
	return class$;
}

$Class* InstantiationError::class$ = nullptr;

	} // lang
} // java