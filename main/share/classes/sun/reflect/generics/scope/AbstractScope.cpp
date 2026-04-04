#include <sun/reflect/generics/scope/AbstractScope.h>
#include <java/lang/reflect/GenericDeclaration.h>
#include <java/lang/reflect/TypeVariable.h>
#include <sun/reflect/generics/scope/Scope.h>
#include <jcpp.h>

using $TypeVariableArray = $Array<::java::lang::reflect::TypeVariable>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GenericDeclaration = ::java::lang::reflect::GenericDeclaration;
using $TypeVariable = ::java::lang::reflect::TypeVariable;
using $Scope = ::sun::reflect::generics::scope::Scope;

namespace sun {
	namespace reflect {
		namespace generics {
			namespace scope {

void AbstractScope::init$($GenericDeclaration* decl) {
	$set(this, recvr, decl);
}

$GenericDeclaration* AbstractScope::getRecvr() {
	return this->recvr;
}

$Scope* AbstractScope::getEnclosingScope() {
	$var($Scope, value, this->enclosingScope);
	if (value == nullptr) {
		$assign(value, computeEnclosingScope());
		$set(this, enclosingScope, value);
	}
	return value;
}

$TypeVariable* AbstractScope::lookup($String* name) {
	$useLocalObjectStack();
	$var($TypeVariableArray, tas, $$nc(getRecvr())->getTypeParameters());
	{
		$var($TypeVariableArray, arr$, tas);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($TypeVariable, tv, arr$->get(i$));
			if ($$nc($nc(tv)->getName())->equals(name)) {
				return tv;
			}
		}
	}
	return $$nc(getEnclosingScope())->lookup(name);
}

AbstractScope::AbstractScope() {
}

$Class* AbstractScope::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"recvr", "Ljava/lang/reflect/GenericDeclaration;", "TD;", $PRIVATE | $FINAL, $field(AbstractScope, recvr)},
		{"enclosingScope", "Lsun/reflect/generics/scope/Scope;", nullptr, $PRIVATE | $VOLATILE, $field(AbstractScope, enclosingScope)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/reflect/GenericDeclaration;)V", "(TD;)V", $PROTECTED, $method(AbstractScope, init$, void, $GenericDeclaration*)},
		{"computeEnclosingScope", "()Lsun/reflect/generics/scope/Scope;", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(AbstractScope, computeEnclosingScope, $Scope*)},
		{"getEnclosingScope", "()Lsun/reflect/generics/scope/Scope;", nullptr, $PROTECTED, $virtualMethod(AbstractScope, getEnclosingScope, $Scope*)},
		{"getRecvr", "()Ljava/lang/reflect/GenericDeclaration;", "()TD;", $PROTECTED, $virtualMethod(AbstractScope, getRecvr, $GenericDeclaration*)},
		{"lookup", "(Ljava/lang/String;)Ljava/lang/reflect/TypeVariable;", "(Ljava/lang/String;)Ljava/lang/reflect/TypeVariable<*>;", $PUBLIC, $virtualMethod(AbstractScope, lookup, $TypeVariable*, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"sun.reflect.generics.scope.AbstractScope",
		"java.lang.Object",
		"sun.reflect.generics.scope.Scope",
		fieldInfos$$,
		methodInfos$$,
		"<D::Ljava/lang/reflect/GenericDeclaration;>Ljava/lang/Object;Lsun/reflect/generics/scope/Scope;"
	};
	$loadClass(AbstractScope, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AbstractScope);
	});
	return class$;
}

$Class* AbstractScope::class$ = nullptr;

			} // scope
		} // generics
	} // reflect
} // sun