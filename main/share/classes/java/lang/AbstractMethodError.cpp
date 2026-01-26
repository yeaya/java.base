#include <java/lang/AbstractMethodError.h>

#include <java/lang/IncompatibleClassChangeError.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IncompatibleClassChangeError = ::java::lang::IncompatibleClassChangeError;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {

$FieldInfo _AbstractMethodError_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AbstractMethodError, serialVersionUID)},
	{}
};

$MethodInfo _AbstractMethodError_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(AbstractMethodError, init$, void)},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(AbstractMethodError, init$, void, $String*)},
	{}
};

$ClassInfo _AbstractMethodError_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.lang.AbstractMethodError",
	"java.lang.IncompatibleClassChangeError",
	nullptr,
	_AbstractMethodError_FieldInfo_,
	_AbstractMethodError_MethodInfo_
};

$Object* allocate$AbstractMethodError($Class* clazz) {
	return $of($alloc(AbstractMethodError));
}

void AbstractMethodError::init$() {
	$IncompatibleClassChangeError::init$();
}

void AbstractMethodError::init$($String* s) {
	$IncompatibleClassChangeError::init$(s);
}

AbstractMethodError::AbstractMethodError() {
}

AbstractMethodError::AbstractMethodError(const AbstractMethodError& e) : $IncompatibleClassChangeError(e) {
}

void AbstractMethodError::throw$() {
	throw *this;
}

$Class* AbstractMethodError::load$($String* name, bool initialize) {
	$loadClass(AbstractMethodError, name, initialize, &_AbstractMethodError_ClassInfo_, allocate$AbstractMethodError);
	return class$;
}

$Class* AbstractMethodError::class$ = nullptr;

	} // lang
} // java