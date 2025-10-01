#include <sun/reflect/generics/scope/AbstractScope.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/GenericDeclaration.h>
#include <java/lang/reflect/Method.h>
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

$FieldInfo _AbstractScope_FieldInfo_[] = {
	{"recvr", "Ljava/lang/reflect/GenericDeclaration;", "TD;", $PRIVATE | $FINAL, $field(AbstractScope, recvr)},
	{"enclosingScope", "Lsun/reflect/generics/scope/Scope;", nullptr, $PRIVATE | $VOLATILE, $field(AbstractScope, enclosingScope)},
	{}
};

$MethodInfo _AbstractScope_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/reflect/GenericDeclaration;)V", "(TD;)V", $PROTECTED, $method(static_cast<void(AbstractScope::*)($GenericDeclaration*)>(&AbstractScope::init$))},
	{"computeEnclosingScope", "()Lsun/reflect/generics/scope/Scope;", nullptr, $PROTECTED | $ABSTRACT},
	{"getEnclosingScope", "()Lsun/reflect/generics/scope/Scope;", nullptr, $PROTECTED},
	{"getRecvr", "()Ljava/lang/reflect/GenericDeclaration;", "()TD;", $PROTECTED},
	{"lookup", "(Ljava/lang/String;)Ljava/lang/reflect/TypeVariable;", "(Ljava/lang/String;)Ljava/lang/reflect/TypeVariable<*>;", $PUBLIC},
	{}
};

$ClassInfo _AbstractScope_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.reflect.generics.scope.AbstractScope",
	"java.lang.Object",
	"sun.reflect.generics.scope.Scope",
	_AbstractScope_FieldInfo_,
	_AbstractScope_MethodInfo_,
	"<D::Ljava/lang/reflect/GenericDeclaration;>Ljava/lang/Object;Lsun/reflect/generics/scope/Scope;"
};

$Object* allocate$AbstractScope($Class* clazz) {
	return $of($alloc(AbstractScope));
}

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
	$var($TypeVariableArray, tas, $nc($(getRecvr()))->getTypeParameters());
	{
		$var($TypeVariableArray, arr$, tas);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($TypeVariable, tv, arr$->get(i$));
			{
				if ($nc($($nc(tv)->getName()))->equals(name)) {
					return tv;
				}
			}
		}
	}
	return $nc($(getEnclosingScope()))->lookup(name);
}

AbstractScope::AbstractScope() {
}

$Class* AbstractScope::load$($String* name, bool initialize) {
	$loadClass(AbstractScope, name, initialize, &_AbstractScope_ClassInfo_, allocate$AbstractScope);
	return class$;
}

$Class* AbstractScope::class$ = nullptr;

			} // scope
		} // generics
	} // reflect
} // sun