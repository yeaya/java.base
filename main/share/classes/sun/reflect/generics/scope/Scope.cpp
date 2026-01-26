#include <sun/reflect/generics/scope/Scope.h>

#include <java/lang/reflect/TypeVariable.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TypeVariable = ::java::lang::reflect::TypeVariable;

namespace sun {
	namespace reflect {
		namespace generics {
			namespace scope {

$MethodInfo _Scope_MethodInfo_[] = {
	{"lookup", "(Ljava/lang/String;)Ljava/lang/reflect/TypeVariable;", "(Ljava/lang/String;)Ljava/lang/reflect/TypeVariable<*>;", $PUBLIC | $ABSTRACT, $virtualMethod(Scope, lookup, $TypeVariable*, $String*)},
	{}
};

$ClassInfo _Scope_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.reflect.generics.scope.Scope",
	nullptr,
	nullptr,
	nullptr,
	_Scope_MethodInfo_
};

$Object* allocate$Scope($Class* clazz) {
	return $of($alloc(Scope));
}

$Class* Scope::load$($String* name, bool initialize) {
	$loadClass(Scope, name, initialize, &_Scope_ClassInfo_, allocate$Scope);
	return class$;
}

$Class* Scope::class$ = nullptr;

			} // scope
		} // generics
	} // reflect
} // sun