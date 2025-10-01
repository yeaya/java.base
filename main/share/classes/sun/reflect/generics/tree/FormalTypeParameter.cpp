#include <sun/reflect/generics/tree/FormalTypeParameter.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/reflect/generics/tree/FieldTypeSignature.h>
#include <sun/reflect/generics/visitor/TypeTreeVisitor.h>
#include <jcpp.h>

using $FieldTypeSignatureArray = $Array<::sun::reflect::generics::tree::FieldTypeSignature>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FieldTypeSignature = ::sun::reflect::generics::tree::FieldTypeSignature;
using $TypeTree = ::sun::reflect::generics::tree::TypeTree;
using $TypeTreeVisitor = ::sun::reflect::generics::visitor::TypeTreeVisitor;

namespace sun {
	namespace reflect {
		namespace generics {
			namespace tree {

$FieldInfo _FormalTypeParameter_FieldInfo_[] = {
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(FormalTypeParameter, name)},
	{"bounds", "[Lsun/reflect/generics/tree/FieldTypeSignature;", nullptr, $PRIVATE | $FINAL, $field(FormalTypeParameter, bounds)},
	{}
};

$MethodInfo _FormalTypeParameter_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;[Lsun/reflect/generics/tree/FieldTypeSignature;)V", nullptr, $PRIVATE, $method(static_cast<void(FormalTypeParameter::*)($String*,$FieldTypeSignatureArray*)>(&FormalTypeParameter::init$))},
	{"accept", "(Lsun/reflect/generics/visitor/TypeTreeVisitor;)V", "(Lsun/reflect/generics/visitor/TypeTreeVisitor<*>;)V", $PUBLIC},
	{"getBounds", "()[Lsun/reflect/generics/tree/FieldTypeSignature;", nullptr, $PUBLIC},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"make", "(Ljava/lang/String;[Lsun/reflect/generics/tree/FieldTypeSignature;)Lsun/reflect/generics/tree/FormalTypeParameter;", nullptr, $PUBLIC | $STATIC, $method(static_cast<FormalTypeParameter*(*)($String*,$FieldTypeSignatureArray*)>(&FormalTypeParameter::make))},
	{}
};

$ClassInfo _FormalTypeParameter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.reflect.generics.tree.FormalTypeParameter",
	"java.lang.Object",
	"sun.reflect.generics.tree.TypeTree",
	_FormalTypeParameter_FieldInfo_,
	_FormalTypeParameter_MethodInfo_
};

$Object* allocate$FormalTypeParameter($Class* clazz) {
	return $of($alloc(FormalTypeParameter));
}

void FormalTypeParameter::init$($String* n, $FieldTypeSignatureArray* bs) {
	$set(this, name, n);
	$set(this, bounds, bs);
}

FormalTypeParameter* FormalTypeParameter::make($String* n, $FieldTypeSignatureArray* bs) {
	$init(FormalTypeParameter);
	return $new(FormalTypeParameter, n, bs);
}

$FieldTypeSignatureArray* FormalTypeParameter::getBounds() {
	return this->bounds;
}

$String* FormalTypeParameter::getName() {
	return this->name;
}

void FormalTypeParameter::accept($TypeTreeVisitor* v) {
	$nc(v)->visitFormalTypeParameter(this);
}

FormalTypeParameter::FormalTypeParameter() {
}

$Class* FormalTypeParameter::load$($String* name, bool initialize) {
	$loadClass(FormalTypeParameter, name, initialize, &_FormalTypeParameter_ClassInfo_, allocate$FormalTypeParameter);
	return class$;
}

$Class* FormalTypeParameter::class$ = nullptr;

			} // tree
		} // generics
	} // reflect
} // sun