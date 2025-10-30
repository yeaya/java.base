#include <sun/reflect/generics/tree/ShortSignature.h>

#include <sun/reflect/generics/visitor/TypeTreeVisitor.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BaseType = ::sun::reflect::generics::tree::BaseType;
using $TypeTreeVisitor = ::sun::reflect::generics::visitor::TypeTreeVisitor;

namespace sun {
	namespace reflect {
		namespace generics {
			namespace tree {

$FieldInfo _ShortSignature_FieldInfo_[] = {
	{"singleton", "Lsun/reflect/generics/tree/ShortSignature;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ShortSignature, singleton)},
	{}
};

$MethodInfo _ShortSignature_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(ShortSignature::*)()>(&ShortSignature::init$))},
	{"accept", "(Lsun/reflect/generics/visitor/TypeTreeVisitor;)V", "(Lsun/reflect/generics/visitor/TypeTreeVisitor<*>;)V", $PUBLIC},
	{"make", "()Lsun/reflect/generics/tree/ShortSignature;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ShortSignature*(*)()>(&ShortSignature::make))},
	{}
};

$ClassInfo _ShortSignature_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.reflect.generics.tree.ShortSignature",
	"java.lang.Object",
	"sun.reflect.generics.tree.BaseType",
	_ShortSignature_FieldInfo_,
	_ShortSignature_MethodInfo_
};

$Object* allocate$ShortSignature($Class* clazz) {
	return $of($alloc(ShortSignature));
}

ShortSignature* ShortSignature::singleton = nullptr;

void ShortSignature::init$() {
}

ShortSignature* ShortSignature::make() {
	$init(ShortSignature);
	return ShortSignature::singleton;
}

void ShortSignature::accept($TypeTreeVisitor* v) {
	$nc(v)->visitShortSignature(this);
}

void clinit$ShortSignature($Class* class$) {
	$assignStatic(ShortSignature::singleton, $new(ShortSignature));
}

ShortSignature::ShortSignature() {
}

$Class* ShortSignature::load$($String* name, bool initialize) {
	$loadClass(ShortSignature, name, initialize, &_ShortSignature_ClassInfo_, clinit$ShortSignature, allocate$ShortSignature);
	return class$;
}

$Class* ShortSignature::class$ = nullptr;

			} // tree
		} // generics
	} // reflect
} // sun