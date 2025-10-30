#include <java/lang/TypeNotPresentException.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace java {
	namespace lang {

$FieldInfo _TypeNotPresentException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TypeNotPresentException, serialVersionUID)},
	{"typeName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(TypeNotPresentException, typeName$)},
	{}
};

$MethodInfo _TypeNotPresentException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(TypeNotPresentException::*)($String*,$Throwable*)>(&TypeNotPresentException::init$))},
	{"typeName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _TypeNotPresentException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.lang.TypeNotPresentException",
	"java.lang.RuntimeException",
	nullptr,
	_TypeNotPresentException_FieldInfo_,
	_TypeNotPresentException_MethodInfo_
};

$Object* allocate$TypeNotPresentException($Class* clazz) {
	return $of($alloc(TypeNotPresentException));
}

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
	$loadClass(TypeNotPresentException, name, initialize, &_TypeNotPresentException_ClassInfo_, allocate$TypeNotPresentException);
	return class$;
}

$Class* TypeNotPresentException::class$ = nullptr;

	} // lang
} // java