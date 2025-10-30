#include <sun/reflect/generics/tree/ClassSignature.h>

#include <sun/reflect/generics/tree/ClassTypeSignature.h>
#include <sun/reflect/generics/tree/FormalTypeParameter.h>
#include <sun/reflect/generics/visitor/Visitor.h>
#include <jcpp.h>

using $ClassTypeSignatureArray = $Array<::sun::reflect::generics::tree::ClassTypeSignature>;
using $FormalTypeParameterArray = $Array<::sun::reflect::generics::tree::FormalTypeParameter>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ClassTypeSignature = ::sun::reflect::generics::tree::ClassTypeSignature;
using $FormalTypeParameter = ::sun::reflect::generics::tree::FormalTypeParameter;
using $Signature = ::sun::reflect::generics::tree::Signature;
using $Visitor = ::sun::reflect::generics::visitor::Visitor;

namespace sun {
	namespace reflect {
		namespace generics {
			namespace tree {

$FieldInfo _ClassSignature_FieldInfo_[] = {
	{"formalTypeParams", "[Lsun/reflect/generics/tree/FormalTypeParameter;", nullptr, $PRIVATE | $FINAL, $field(ClassSignature, formalTypeParams)},
	{"superclass", "Lsun/reflect/generics/tree/ClassTypeSignature;", nullptr, $PRIVATE | $FINAL, $field(ClassSignature, superclass)},
	{"superInterfaces", "[Lsun/reflect/generics/tree/ClassTypeSignature;", nullptr, $PRIVATE | $FINAL, $field(ClassSignature, superInterfaces)},
	{}
};

$MethodInfo _ClassSignature_MethodInfo_[] = {
	{"<init>", "([Lsun/reflect/generics/tree/FormalTypeParameter;Lsun/reflect/generics/tree/ClassTypeSignature;[Lsun/reflect/generics/tree/ClassTypeSignature;)V", nullptr, $PRIVATE, $method(static_cast<void(ClassSignature::*)($FormalTypeParameterArray*,$ClassTypeSignature*,$ClassTypeSignatureArray*)>(&ClassSignature::init$))},
	{"accept", "(Lsun/reflect/generics/visitor/Visitor;)V", "(Lsun/reflect/generics/visitor/Visitor<*>;)V", $PUBLIC},
	{"getFormalTypeParameters", "()[Lsun/reflect/generics/tree/FormalTypeParameter;", nullptr, $PUBLIC},
	{"getSuperInterfaces", "()[Lsun/reflect/generics/tree/ClassTypeSignature;", nullptr, $PUBLIC},
	{"getSuperclass", "()Lsun/reflect/generics/tree/ClassTypeSignature;", nullptr, $PUBLIC},
	{"make", "([Lsun/reflect/generics/tree/FormalTypeParameter;Lsun/reflect/generics/tree/ClassTypeSignature;[Lsun/reflect/generics/tree/ClassTypeSignature;)Lsun/reflect/generics/tree/ClassSignature;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ClassSignature*(*)($FormalTypeParameterArray*,$ClassTypeSignature*,$ClassTypeSignatureArray*)>(&ClassSignature::make))},
	{}
};

$ClassInfo _ClassSignature_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.reflect.generics.tree.ClassSignature",
	"java.lang.Object",
	"sun.reflect.generics.tree.Signature",
	_ClassSignature_FieldInfo_,
	_ClassSignature_MethodInfo_
};

$Object* allocate$ClassSignature($Class* clazz) {
	return $of($alloc(ClassSignature));
}

void ClassSignature::init$($FormalTypeParameterArray* ftps, $ClassTypeSignature* sc, $ClassTypeSignatureArray* sis) {
	$set(this, formalTypeParams, ftps);
	$set(this, superclass, sc);
	$set(this, superInterfaces, sis);
}

ClassSignature* ClassSignature::make($FormalTypeParameterArray* ftps, $ClassTypeSignature* sc, $ClassTypeSignatureArray* sis) {
	$init(ClassSignature);
	return $new(ClassSignature, ftps, sc, sis);
}

$FormalTypeParameterArray* ClassSignature::getFormalTypeParameters() {
	return this->formalTypeParams;
}

$ClassTypeSignature* ClassSignature::getSuperclass() {
	return this->superclass;
}

$ClassTypeSignatureArray* ClassSignature::getSuperInterfaces() {
	return this->superInterfaces;
}

void ClassSignature::accept($Visitor* v) {
	$nc(v)->visitClassSignature(this);
}

ClassSignature::ClassSignature() {
}

$Class* ClassSignature::load$($String* name, bool initialize) {
	$loadClass(ClassSignature, name, initialize, &_ClassSignature_ClassInfo_, allocate$ClassSignature);
	return class$;
}

$Class* ClassSignature::class$ = nullptr;

			} // tree
		} // generics
	} // reflect
} // sun