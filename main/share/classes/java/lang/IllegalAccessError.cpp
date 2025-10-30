#include <java/lang/IllegalAccessError.h>

#include <java/lang/IncompatibleClassChangeError.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IncompatibleClassChangeError = ::java::lang::IncompatibleClassChangeError;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {

$FieldInfo _IllegalAccessError_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IllegalAccessError, serialVersionUID)},
	{}
};

$MethodInfo _IllegalAccessError_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IllegalAccessError::*)()>(&IllegalAccessError::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(IllegalAccessError::*)($String*)>(&IllegalAccessError::init$))},
	{}
};

$ClassInfo _IllegalAccessError_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.lang.IllegalAccessError",
	"java.lang.IncompatibleClassChangeError",
	nullptr,
	_IllegalAccessError_FieldInfo_,
	_IllegalAccessError_MethodInfo_
};

$Object* allocate$IllegalAccessError($Class* clazz) {
	return $of($alloc(IllegalAccessError));
}

void IllegalAccessError::init$() {
	$IncompatibleClassChangeError::init$();
}

void IllegalAccessError::init$($String* s) {
	$IncompatibleClassChangeError::init$(s);
}

IllegalAccessError::IllegalAccessError() {
}

IllegalAccessError::IllegalAccessError(const IllegalAccessError& e) : $IncompatibleClassChangeError(e) {
}

void IllegalAccessError::throw$() {
	throw *this;
}

$Class* IllegalAccessError::load$($String* name, bool initialize) {
	$loadClass(IllegalAccessError, name, initialize, &_IllegalAccessError_ClassInfo_, allocate$IllegalAccessError);
	return class$;
}

$Class* IllegalAccessError::class$ = nullptr;

	} // lang
} // java