#include <java/lang/VerifyError.h>

#include <java/lang/LinkageError.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $LinkageError = ::java::lang::LinkageError;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {

$FieldInfo _VerifyError_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(VerifyError, serialVersionUID)},
	{}
};

$MethodInfo _VerifyError_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(VerifyError, init$, void)},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(VerifyError, init$, void, $String*)},
	{}
};

$ClassInfo _VerifyError_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.lang.VerifyError",
	"java.lang.LinkageError",
	nullptr,
	_VerifyError_FieldInfo_,
	_VerifyError_MethodInfo_
};

$Object* allocate$VerifyError($Class* clazz) {
	return $of($alloc(VerifyError));
}

void VerifyError::init$() {
	$LinkageError::init$();
}

void VerifyError::init$($String* s) {
	$LinkageError::init$(s);
}

VerifyError::VerifyError() {
}

VerifyError::VerifyError(const VerifyError& e) : $LinkageError(e) {
}

void VerifyError::throw$() {
	throw *this;
}

$Class* VerifyError::load$($String* name, bool initialize) {
	$loadClass(VerifyError, name, initialize, &_VerifyError_ClassInfo_, allocate$VerifyError);
	return class$;
}

$Class* VerifyError::class$ = nullptr;

	} // lang
} // java