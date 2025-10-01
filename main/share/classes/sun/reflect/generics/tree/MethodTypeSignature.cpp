#include <sun/reflect/generics/tree/MethodTypeSignature.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
using $FieldTypeSignature = ::sun::reflect::generics::tree::FieldTypeSignature;
using $FormalTypeParameter = ::sun::reflect::generics::tree::FormalTypeParameter;
using $ReturnType = ::sun::reflect::generics::tree::ReturnType;
using $Signature = ::sun::reflect::generics::tree::Signature;
using $TypeSignature = ::sun::reflect::generics::tree::TypeSignature;
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
	{"<init>", "([Lsun/reflect/generics/tree/FormalTypeParameter;[Lsun/reflect/generics/tree/TypeSignature;Lsun/reflect/generics/tree/ReturnType;[Lsun/reflect/generics/tree/FieldTypeSignature;)V", nullptr, $PRIVATE, $method(static_cast<void(MethodTypeSignature::*)($FormalTypeParameterArray*,$TypeSignatureArray*,$ReturnType*,$FieldTypeSignatureArray*)>(&MethodTypeSignature::init$))},
	{"accept", "(Lsun/reflect/generics/visitor/Visitor;)V", "(Lsun/reflect/generics/visitor/Visitor<*>;)V", $PUBLIC},
	{"getExceptionTypes", "()[Lsun/reflect/generics/tree/FieldTypeSignature;", nullptr, $PUBLIC},
	{"getFormalTypeParameters", "()[Lsun/reflect/generics/tree/FormalTypeParameter;", nullptr, $PUBLIC},
	{"getParameterTypes", "()[Lsun/reflect/generics/tree/TypeSignature;", nullptr, $PUBLIC},
	{"getReturnType", "()Lsun/reflect/generics/tree/ReturnType;", nullptr, $PUBLIC},
	{"make", "([Lsun/reflect/generics/tree/FormalTypeParameter;[Lsun/reflect/generics/tree/TypeSignature;Lsun/reflect/generics/tree/ReturnType;[Lsun/reflect/generics/tree/FieldTypeSignature;)Lsun/reflect/generics/tree/MethodTypeSignature;", nullptr, $PUBLIC | $STATIC, $method(static_cast<MethodTypeSignature*(*)($FormalTypeParameterArray*,$TypeSignatureArray*,$ReturnType*,$FieldTypeSignatureArray*)>(&MethodTypeSignature::make))},
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