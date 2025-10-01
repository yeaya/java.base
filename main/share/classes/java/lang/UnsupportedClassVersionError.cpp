#include <java/lang/UnsupportedClassVersionError.h>

#include <java/lang/Class.h>
#include <java/lang/ClassFormatError.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassFormatError = ::java::lang::ClassFormatError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {

$FieldInfo _UnsupportedClassVersionError_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UnsupportedClassVersionError, serialVersionUID)},
	{}
};

$MethodInfo _UnsupportedClassVersionError_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(UnsupportedClassVersionError::*)()>(&UnsupportedClassVersionError::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(UnsupportedClassVersionError::*)($String*)>(&UnsupportedClassVersionError::init$))},
	{}
};

$ClassInfo _UnsupportedClassVersionError_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.lang.UnsupportedClassVersionError",
	"java.lang.ClassFormatError",
	nullptr,
	_UnsupportedClassVersionError_FieldInfo_,
	_UnsupportedClassVersionError_MethodInfo_
};

$Object* allocate$UnsupportedClassVersionError($Class* clazz) {
	return $of($alloc(UnsupportedClassVersionError));
}

void UnsupportedClassVersionError::init$() {
	$ClassFormatError::init$();
}

void UnsupportedClassVersionError::init$($String* s) {
	$ClassFormatError::init$(s);
}

UnsupportedClassVersionError::UnsupportedClassVersionError() {
}

UnsupportedClassVersionError::UnsupportedClassVersionError(const UnsupportedClassVersionError& e) {
}

UnsupportedClassVersionError UnsupportedClassVersionError::wrapper$() {
	$pendingException(this);
	return *this;
}

void UnsupportedClassVersionError::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* UnsupportedClassVersionError::load$($String* name, bool initialize) {
	$loadClass(UnsupportedClassVersionError, name, initialize, &_UnsupportedClassVersionError_ClassInfo_, allocate$UnsupportedClassVersionError);
	return class$;
}

$Class* UnsupportedClassVersionError::class$ = nullptr;

	} // lang
} // java