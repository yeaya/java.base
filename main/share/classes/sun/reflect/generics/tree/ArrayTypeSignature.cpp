#include <sun/reflect/generics/tree/ArrayTypeSignature.h>

#include <sun/reflect/generics/tree/TypeSignature.h>
#include <sun/reflect/generics/visitor/TypeTreeVisitor.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FieldTypeSignature = ::sun::reflect::generics::tree::FieldTypeSignature;
using $TypeSignature = ::sun::reflect::generics::tree::TypeSignature;
using $TypeTreeVisitor = ::sun::reflect::generics::visitor::TypeTreeVisitor;

namespace sun {
	namespace reflect {
		namespace generics {
			namespace tree {

$FieldInfo _ArrayTypeSignature_FieldInfo_[] = {
	{"componentType", "Lsun/reflect/generics/tree/TypeSignature;", nullptr, $PRIVATE | $FINAL, $field(ArrayTypeSignature, componentType)},
	{}
};

$MethodInfo _ArrayTypeSignature_MethodInfo_[] = {
	{"<init>", "(Lsun/reflect/generics/tree/TypeSignature;)V", nullptr, $PRIVATE, $method(static_cast<void(ArrayTypeSignature::*)($TypeSignature*)>(&ArrayTypeSignature::init$))},
	{"accept", "(Lsun/reflect/generics/visitor/TypeTreeVisitor;)V", "(Lsun/reflect/generics/visitor/TypeTreeVisitor<*>;)V", $PUBLIC},
	{"getComponentType", "()Lsun/reflect/generics/tree/TypeSignature;", nullptr, $PUBLIC},
	{"make", "(Lsun/reflect/generics/tree/TypeSignature;)Lsun/reflect/generics/tree/ArrayTypeSignature;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ArrayTypeSignature*(*)($TypeSignature*)>(&ArrayTypeSignature::make))},
	{}
};

$ClassInfo _ArrayTypeSignature_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.reflect.generics.tree.ArrayTypeSignature",
	"java.lang.Object",
	"sun.reflect.generics.tree.FieldTypeSignature",
	_ArrayTypeSignature_FieldInfo_,
	_ArrayTypeSignature_MethodInfo_
};

$Object* allocate$ArrayTypeSignature($Class* clazz) {
	return $of($alloc(ArrayTypeSignature));
}

void ArrayTypeSignature::init$($TypeSignature* ct) {
	$set(this, componentType, ct);
}

ArrayTypeSignature* ArrayTypeSignature::make($TypeSignature* ct) {
	$init(ArrayTypeSignature);
	return $new(ArrayTypeSignature, ct);
}

$TypeSignature* ArrayTypeSignature::getComponentType() {
	return this->componentType;
}

void ArrayTypeSignature::accept($TypeTreeVisitor* v) {
	$nc(v)->visitArrayTypeSignature(this);
}

ArrayTypeSignature::ArrayTypeSignature() {
}

$Class* ArrayTypeSignature::load$($String* name, bool initialize) {
	$loadClass(ArrayTypeSignature, name, initialize, &_ArrayTypeSignature_ClassInfo_, allocate$ArrayTypeSignature);
	return class$;
}

$Class* ArrayTypeSignature::class$ = nullptr;

			} // tree
		} // generics
	} // reflect
} // sun