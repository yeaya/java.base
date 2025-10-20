#include <java/lang/annotation/IncompleteAnnotationException.h>

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

namespace java {
	namespace lang {
		namespace annotation {

$FieldInfo _IncompleteAnnotationException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IncompleteAnnotationException, serialVersionUID)},
	{"annotationType", "Ljava/lang/Class;", "Ljava/lang/Class<+Ljava/lang/annotation/Annotation;>;", $PRIVATE, $field(IncompleteAnnotationException, annotationType$)},
	{"elementName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(IncompleteAnnotationException, elementName$)},
	{}
};

$MethodInfo _IncompleteAnnotationException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Class;Ljava/lang/String;)V", "(Ljava/lang/Class<+Ljava/lang/annotation/Annotation;>;Ljava/lang/String;)V", $PUBLIC, $method(static_cast<void(IncompleteAnnotationException::*)($Class*,$String*)>(&IncompleteAnnotationException::init$))},
	{"annotationType", "()Ljava/lang/Class;", "()Ljava/lang/Class<+Ljava/lang/annotation/Annotation;>;", $PUBLIC},
	{"elementName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _IncompleteAnnotationException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.lang.annotation.IncompleteAnnotationException",
	"java.lang.RuntimeException",
	nullptr,
	_IncompleteAnnotationException_FieldInfo_,
	_IncompleteAnnotationException_MethodInfo_
};

$Object* allocate$IncompleteAnnotationException($Class* clazz) {
	return $of($alloc(IncompleteAnnotationException));
}

void IncompleteAnnotationException::init$($Class* annotationType, $String* elementName) {
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, $$str({$($nc(annotationType)->getName()), " missing element "_s}));
	$RuntimeException::init$($$concat(var$0, $($nc(elementName)->toString())));
	$set(this, annotationType$, annotationType);
	$set(this, elementName$, elementName);
}

$Class* IncompleteAnnotationException::annotationType() {
	return this->annotationType$;
}

$String* IncompleteAnnotationException::elementName() {
	return this->elementName$;
}

IncompleteAnnotationException::IncompleteAnnotationException() {
}

IncompleteAnnotationException::IncompleteAnnotationException(const IncompleteAnnotationException& e) {
}

IncompleteAnnotationException IncompleteAnnotationException::wrapper$() {
	$pendingException(this);
	return *this;
}

void IncompleteAnnotationException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* IncompleteAnnotationException::load$($String* name, bool initialize) {
	$loadClass(IncompleteAnnotationException, name, initialize, &_IncompleteAnnotationException_ClassInfo_, allocate$IncompleteAnnotationException);
	return class$;
}

$Class* IncompleteAnnotationException::class$ = nullptr;

		} // annotation
	} // lang
} // java