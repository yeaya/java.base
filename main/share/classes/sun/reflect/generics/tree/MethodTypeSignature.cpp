#include <sun/reflect/generics/tree/MethodTypeSignature.h>

#include <sun/reflect/generics/tree/FieldTypeSignature.h>
#include <sun/reflect/generics/tree/FormalTypeParameter.h>
#include <sun/reflect/generics/tree/ReturnType.h>
#include <sun/reflect/generics/tree/TypeSignature.h>
#include <sun/reflect/generics/visitor/Visitor.h>
#include <jcpp.h>

using $FieldTypeSignatureArray = $Array<::sun::reflect::generics::tree::FieldTypeSignature>;
using $FormalTypeParameterArray = $Array<::sun::reflect::generics::tree::FormalTypeParameter>;
using $TypeSignatureArray = $Array<::sun::reflect::generics::tree::TypeSignature>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReturnType = ::sun::reflect::generics::tree::ReturnType;
using $Visitor = ::sun::reflect::generics::visitor::Visitor;

namespace sun {
	namespace reflect {
		namespace generics {
			namespace tree {

$FieldInfo _MethodTypeSignature_FieldInfo_[] = {
	{"formalTypeParams", "[Lsun/reflect/generics/tree/FormalTypeParameter;", nullptr, $PRIVATE | $FINAL, $field(MethodTypeSignature, formalTypeParams)},
	{"parameterTypes", "[Lsun/reflect/generics/tree/TypeSignature;", nullptr, $PRIVATE | $FINAL, $field(MethodTypeSignature, parameterTypes)},
	{"returnType", "Lsun/reflect/generics/tree/ReturnType;", nullptr, $PRIVATE | $FINAL, $field(MethodTypeSignature, returnType)},
	{"exceptionTypes", "[Lsun/reflect/generics/tree/FieldTypeSignature;", nullptr, $PRIVATE | $FINAL, $field(MethodTypeSignature, exceptionTypes)},
	{}
};

$MethodInfo _MethodTypeSignature_MethodInfo_[] = {
	{"<init>", "([Lsun/reflect/generics/tree/FormalTypeParameter;[Lsun/reflect/generics/tree/TypeSignature;Lsun/reflect/generics/tree/ReturnType;[Lsun/reflect/generics/tree/FieldTypeSignature;)V", nullptr, $PRIVATE, $method(MethodTypeSignature, init$, void, $FormalTypeParameterArray*, $TypeSignatureArray*, $ReturnType*, $FieldTypeSignatureArray*)},
	{"accept", "(Lsun/reflect/generics/visitor/Visitor;)V", "(Lsun/reflect/generics/visitor/Visitor<*>;)V", $PUBLIC, $virtualMethod(MethodTypeSignature, accept, void, $Visitor*)},
	{"getExceptionTypes", "()[Lsun/reflect/generics/tree/FieldTypeSignature;", nullptr, $PUBLIC, $virtualMethod(MethodTypeSignature, getExceptionTypes, $FieldTypeSignatureArray*)},
	{"getFormalTypeParameters", "()[Lsun/reflect/generics/tree/FormalTypeParameter;", nullptr, $PUBLIC, $virtualMethod(MethodTypeSignature, getFormalTypeParameters, $FormalTypeParameterArray*)},
	{"getParameterTypes", "()[Lsun/reflect/generics/tree/TypeSignature;", nullptr, $PUBLIC, $virtualMethod(MethodTypeSignature, getParameterTypes, $TypeSignatureArray*)},
	{"getReturnType", "()Lsun/reflect/generics/tree/ReturnType;", nullptr, $PUBLIC, $virtualMethod(MethodTypeSignature, getReturnType, $ReturnType*)},
	{"make", "([Lsun/reflect/generics/tree/FormalTypeParameter;[Lsun/reflect/generics/tree/TypeSignature;Lsun/reflect/generics/tree/ReturnType;[Lsun/reflect/generics/tree/FieldTypeSignature;)Lsun/reflect/generics/tree/MethodTypeSignature;", nullptr, $PUBLIC | $STATIC, $staticMethod(MethodTypeSignature, make, MethodTypeSignature*, $FormalTypeParameterArray*, $TypeSignatureArray*, $ReturnType*, $FieldTypeSignatureArray*)},
	{}
};

$ClassInfo _MethodTypeSignature_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.reflect.generics.tree.MethodTypeSignature",
	"java.lang.Object",
	"sun.reflect.generics.tree.Signature",
	_MethodTypeSignature_FieldInfo_,
	_MethodTypeSignature_MethodInfo_
};

$Object* allocate$MethodTypeSignature($Class* clazz) {
	return $of($alloc(MethodTypeSignature));
}

void MethodTypeSignature::init$($FormalTypeParameterArray* ftps, $TypeSignatureArray* pts, $ReturnType* rt, $FieldTypeSignatureArray* ets) {
	$set(this, formalTypeParams, ftps);
	$set(this, parameterTypes, pts);
	$set(this, returnType, rt);
	$set(this, exceptionTypes, ets);
}

MethodTypeSignature* MethodTypeSignature::make($FormalTypeParameterArray* ftps, $TypeSignatureArray* pts, $ReturnType* rt, $FieldTypeSignatureArray* ets) {
	$init(MethodTypeSignature);
	return $new(MethodTypeSignature, ftps, pts, rt, ets);
}

$FormalTypeParameterArray* MethodTypeSignature::getFormalTypeParameters() {
	return this->formalTypeParams;
}

$TypeSignatureArray* MethodTypeSignature::getParameterTypes() {
	return this->parameterTypes;
}

$ReturnType* MethodTypeSignature::getReturnType() {
	return this->returnType;
}

$FieldTypeSignatureArray* MethodTypeSignature::getExceptionTypes() {
	return this->exceptionTypes;
}

void MethodTypeSignature::accept($Visitor* v) {
	$nc(v)->visitMethodTypeSignature(this);
}

MethodTypeSignature::MethodTypeSignature() {
}

$Class* MethodTypeSignature::load$($String* name, bool initialize) {
	$loadClass(MethodTypeSignature, name, initialize, &_MethodTypeSignature_ClassInfo_, allocate$MethodTypeSignature);
	return class$;
}

$Class* MethodTypeSignature::class$ = nullptr;

			} // tree
		} // generics
	} // reflect
} // sun