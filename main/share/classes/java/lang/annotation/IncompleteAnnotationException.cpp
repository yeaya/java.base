#include <java/lang/annotation/IncompleteAnnotationException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace java {
	namespace lang {
		namespace annotation {

void IncompleteAnnotationException::init$($Class* annotationType, $String* elementName) {
	$useLocalObjectStack();
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append($($nc(annotationType)->getName()));
	var$0->append(" missing element "_s);
	var$0->append($($nc(elementName)->toString()));
	$RuntimeException::init$($$str(var$0));
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

IncompleteAnnotationException::IncompleteAnnotationException(const IncompleteAnnotationException& e) : $RuntimeException(e) {
}

void IncompleteAnnotationException::throw$() {
	throw *this;
}

$Class* IncompleteAnnotationException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IncompleteAnnotationException, serialVersionUID)},
		{"annotationType", "Ljava/lang/Class;", "Ljava/lang/Class<+Ljava/lang/annotation/Annotation;>;", $PRIVATE, $field(IncompleteAnnotationException, annotationType$)},
		{"elementName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(IncompleteAnnotationException, elementName$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Class;Ljava/lang/String;)V", "(Ljava/lang/Class<+Ljava/lang/annotation/Annotation;>;Ljava/lang/String;)V", $PUBLIC, $method(IncompleteAnnotationException, init$, void, $Class*, $String*)},
		{"annotationType", "()Ljava/lang/Class;", "()Ljava/lang/Class<+Ljava/lang/annotation/Annotation;>;", $PUBLIC, $virtualMethod(IncompleteAnnotationException, annotationType, $Class*)},
		{"elementName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(IncompleteAnnotationException, elementName, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.lang.annotation.IncompleteAnnotationException",
		"java.lang.RuntimeException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(IncompleteAnnotationException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(IncompleteAnnotationException);
	});
	return class$;
}

$Class* IncompleteAnnotationException::class$ = nullptr;

		} // annotation
	} // lang
} // java