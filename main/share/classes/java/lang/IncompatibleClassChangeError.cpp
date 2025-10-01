#include <java/lang/IncompatibleClassChangeError.h>

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

$FieldInfo _IncompatibleClassChangeError_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IncompatibleClassChangeError, serialVersionUID)},
	{}
};

$MethodInfo _IncompatibleClassChangeError_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IncompatibleClassChangeError::*)()>(&IncompatibleClassChangeError::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(IncompatibleClassChangeError::*)($String*)>(&IncompatibleClassChangeError::init$))},
	{}
};

$ClassInfo _IncompatibleClassChangeError_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.lang.IncompatibleClassChangeError",
	"java.lang.LinkageError",
	nullptr,
	_IncompatibleClassChangeError_FieldInfo_,
	_IncompatibleClassChangeError_MethodInfo_
};

$Object* allocate$IncompatibleClassChangeError($Class* clazz) {
	return $of($alloc(IncompatibleClassChangeError));
}

void IncompatibleClassChangeError::init$() {
	$LinkageError::init$();
}

void IncompatibleClassChangeError::init$($String* s) {
	$LinkageError::init$(s);
}

IncompatibleClassChangeError::IncompatibleClassChangeError() {
}

IncompatibleClassChangeError::IncompatibleClassChangeError(const IncompatibleClassChangeError& e) {
}

IncompatibleClassChangeError IncompatibleClassChangeError::wrapper$() {
	$pendingException(this);
	return *this;
}

void IncompatibleClassChangeError::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* IncompatibleClassChangeError::load$($String* name, bool initialize) {
	$loadClass(IncompatibleClassChangeError, name, initialize, &_IncompatibleClassChangeError_ClassInfo_, allocate$IncompatibleClassChangeError);
	return class$;
}

$Class* IncompatibleClassChangeError::class$ = nullptr;

	} // lang
} // java