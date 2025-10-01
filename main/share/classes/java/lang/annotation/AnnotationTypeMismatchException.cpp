#include <java/lang/annotation/AnnotationTypeMismatchException.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Method = ::java::lang::reflect::Method;

namespace java {
	namespace lang {
		namespace annotation {

$FieldInfo _AnnotationTypeMismatchException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AnnotationTypeMismatchException, serialVersionUID)},
	{"element", "Ljava/lang/reflect/Method;", nullptr, $PRIVATE | $FINAL | $TRANSIENT, $field(AnnotationTypeMismatchException, element$)},
	{"foundType", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(AnnotationTypeMismatchException, foundType$)},
	{}
};

$MethodInfo _AnnotationTypeMismatchException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/reflect/Method;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(AnnotationTypeMismatchException::*)($Method*,$String*)>(&AnnotationTypeMismatchException::init$))},
	{"element", "()Ljava/lang/reflect/Method;", nullptr, $PUBLIC},
	{"foundType", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _AnnotationTypeMismatchException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.lang.annotation.AnnotationTypeMismatchException",
	"java.lang.RuntimeException",
	nullptr,
	_AnnotationTypeMismatchException_FieldInfo_,
	_AnnotationTypeMismatchException_MethodInfo_
};

$Object* allocate$AnnotationTypeMismatchException($Class* clazz) {
	return $of($alloc(AnnotationTypeMismatchException));
}

void AnnotationTypeMismatchException::init$($Method* element, $String* foundType) {
	$RuntimeException::init$($$str({"Incorrectly typed data found for annotation element "_s, element, " (Found data of type "_s, foundType, ")"_s}));
	$set(this, element$, element);
	$set(this, foundType$, foundType);
}

$Method* AnnotationTypeMismatchException::element() {
	return this->element$;
}

$String* AnnotationTypeMismatchException::foundType() {
	return this->foundType$;
}

AnnotationTypeMismatchException::AnnotationTypeMismatchException() {
}

AnnotationTypeMismatchException::AnnotationTypeMismatchException(const AnnotationTypeMismatchException& e) {
}

AnnotationTypeMismatchException AnnotationTypeMismatchException::wrapper$() {
	$pendingException(this);
	return *this;
}

void AnnotationTypeMismatchException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* AnnotationTypeMismatchException::load$($String* name, bool initialize) {
	$loadClass(AnnotationTypeMismatchException, name, initialize, &_AnnotationTypeMismatchException_ClassInfo_, allocate$AnnotationTypeMismatchException);
	return class$;
}

$Class* AnnotationTypeMismatchException::class$ = nullptr;

		} // annotation
	} // lang
} // java