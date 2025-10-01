#include <java/lang/VerifyError.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/LinkageError.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(VerifyError::*)()>(&VerifyError::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(VerifyError::*)($String*)>(&VerifyError::init$))},
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

VerifyError::VerifyError(const VerifyError& e) {
}

VerifyError VerifyError::wrapper$() {
	$pendingException(this);
	return *this;
}

void VerifyError::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* VerifyError::load$($String* name, bool initialize) {
	$loadClass(VerifyError, name, initialize, &_VerifyError_ClassInfo_, allocate$VerifyError);
	return class$;
}

$Class* VerifyError::class$ = nullptr;

	} // lang
} // java