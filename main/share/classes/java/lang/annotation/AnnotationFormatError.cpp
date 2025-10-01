#include <java/lang/annotation/AnnotationFormatError.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Error.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {
		namespace annotation {

$FieldInfo _AnnotationFormatError_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AnnotationFormatError, serialVersionUID)},
	{}
};

$MethodInfo _AnnotationFormatError_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(AnnotationFormatError::*)($String*)>(&AnnotationFormatError::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(AnnotationFormatError::*)($String*,$Throwable*)>(&AnnotationFormatError::init$))},
	{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(AnnotationFormatError::*)($Throwable*)>(&AnnotationFormatError::init$))},
	{}
};

$ClassInfo _AnnotationFormatError_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.lang.annotation.AnnotationFormatError",
	"java.lang.Error",
	nullptr,
	_AnnotationFormatError_FieldInfo_,
	_AnnotationFormatError_MethodInfo_
};

$Object* allocate$AnnotationFormatError($Class* clazz) {
	return $of($alloc(AnnotationFormatError));
}

void AnnotationFormatError::init$($String* message) {
	$Error::init$(message);
}

void AnnotationFormatError::init$($String* message, $Throwable* cause) {
	$Error::init$(message, cause);
}

void AnnotationFormatError::init$($Throwable* cause) {
	$Error::init$(cause);
}

AnnotationFormatError::AnnotationFormatError() {
}

AnnotationFormatError::AnnotationFormatError(const AnnotationFormatError& e) {
}

AnnotationFormatError AnnotationFormatError::wrapper$() {
	$pendingException(this);
	return *this;
}

void AnnotationFormatError::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* AnnotationFormatError::load$($String* name, bool initialize) {
	$loadClass(AnnotationFormatError, name, initialize, &_AnnotationFormatError_ClassInfo_, allocate$AnnotationFormatError);
	return class$;
}

$Class* AnnotationFormatError::class$ = nullptr;

		} // annotation
	} // lang
} // java