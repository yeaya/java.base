#include <java/lang/TypeNotPresentException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace java {
	namespace lang {

void TypeNotPresentException::init$($String* typeName, $Throwable* cause) {
	$RuntimeException::init$($$str({"Type "_s, typeName, " not present"_s}), cause);
	$set(this, typeName$, typeName);
}

$String* TypeNotPresentException::typeName() {
	return this->typeName$;
}

TypeNotPresentException::TypeNotPresentException() {
}

TypeNotPresentException::TypeNotPresentException(const TypeNotPresentException& e) : $RuntimeException(e) {
}

void TypeNotPresentException::throw$() {
	throw *this;
}

$Class* TypeNotPresentException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TypeNotPresentException, serialVersionUID)},
		{"typeName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(TypeNotPresentException, typeName$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(TypeNotPresentException, init$, void, $String*, $Throwable*)},
		{"typeName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(TypeNotPresentException, typeName, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.lang.TypeNotPresentException",
		"java.lang.RuntimeException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TypeNotPresentException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TypeNotPresentException);
	});
	return class$;
}

$Class* TypeNotPresentException::class$ = nullptr;

	} // lang
} // java