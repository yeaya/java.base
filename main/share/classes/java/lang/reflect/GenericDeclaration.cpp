#include <java/lang/reflect/GenericDeclaration.h>

#include <java/lang/reflect/TypeVariable.h>
#include <jcpp.h>

using $TypeVariableArray = $Array<::java::lang::reflect::TypeVariable>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AnnotatedElement = ::java::lang::reflect::AnnotatedElement;

namespace java {
	namespace lang {
		namespace reflect {

$MethodInfo _GenericDeclaration_MethodInfo_[] = {
	{"getTypeParameters", "()[Ljava/lang/reflect/TypeVariable;", "()[Ljava/lang/reflect/TypeVariable<*>;", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _GenericDeclaration_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.lang.reflect.GenericDeclaration",
	nullptr,
	"java.lang.reflect.AnnotatedElement",
	nullptr,
	_GenericDeclaration_MethodInfo_
};

$Object* allocate$GenericDeclaration($Class* clazz) {
	return $of($alloc(GenericDeclaration));
}

$Class* GenericDeclaration::load$($String* name, bool initialize) {
	$loadClass(GenericDeclaration, name, initialize, &_GenericDeclaration_ClassInfo_, allocate$GenericDeclaration);
	return class$;
}

$Class* GenericDeclaration::class$ = nullptr;

		} // reflect
	} // lang
} // java