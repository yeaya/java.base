#include <java/lang/reflect/TypeVariable.h>

#include <java/lang/reflect/AnnotatedType.h>
#include <java/lang/reflect/GenericDeclaration.h>
#include <java/lang/reflect/Type.h>
#include <jcpp.h>

using $AnnotatedTypeArray = $Array<::java::lang::reflect::AnnotatedType>;
using $TypeArray = $Array<::java::lang::reflect::Type>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AnnotatedElement = ::java::lang::reflect::AnnotatedElement;
using $GenericDeclaration = ::java::lang::reflect::GenericDeclaration;
using $Type = ::java::lang::reflect::Type;

namespace java {
	namespace lang {
		namespace reflect {

$MethodInfo _TypeVariable_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"getAnnotatedBounds", "()[Ljava/lang/reflect/AnnotatedType;", nullptr, $PUBLIC | $ABSTRACT},
	{"getBounds", "()[Ljava/lang/reflect/Type;", nullptr, $PUBLIC | $ABSTRACT},
	{"getGenericDeclaration", "()Ljava/lang/reflect/GenericDeclaration;", "()TD;", $PUBLIC | $ABSTRACT},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _TypeVariable_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.lang.reflect.TypeVariable",
	nullptr,
	"java.lang.reflect.Type,java.lang.reflect.AnnotatedElement",
	nullptr,
	_TypeVariable_MethodInfo_,
	"<D::Ljava/lang/reflect/GenericDeclaration;>Ljava/lang/Object;Ljava/lang/reflect/Type;Ljava/lang/reflect/AnnotatedElement;"
};

$Object* allocate$TypeVariable($Class* clazz) {
	return $of($alloc(TypeVariable));
}

int32_t TypeVariable::hashCode() {
	 return this->$Type::hashCode();
}

bool TypeVariable::equals(Object$* obj) {
	 return this->$Type::equals(obj);
}

$Object* TypeVariable::clone() {
	 return this->$Type::clone();
}

$String* TypeVariable::toString() {
	 return this->$Type::toString();
}

void TypeVariable::finalize() {
	this->$Type::finalize();
}

$Class* TypeVariable::load$($String* name, bool initialize) {
	$loadClass(TypeVariable, name, initialize, &_TypeVariable_ClassInfo_, allocate$TypeVariable);
	return class$;
}

$Class* TypeVariable::class$ = nullptr;

		} // reflect
	} // lang
} // java