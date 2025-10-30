#include <sun/reflect/generics/tree/FloatSignature.h>

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

$FieldInfo _FloatSignature_FieldInfo_[] = {
	{"singleton", "Lsun/reflect/generics/tree/FloatSignature;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(FloatSignature, singleton)},
	{}
};

$MethodInfo _FloatSignature_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(FloatSignature::*)()>(&FloatSignature::init$))},
	{"accept", "(Lsun/reflect/generics/visitor/TypeTreeVisitor;)V", "(Lsun/reflect/generics/visitor/TypeTreeVisitor<*>;)V", $PUBLIC},
	{"make", "()Lsun/reflect/generics/tree/FloatSignature;", nullptr, $PUBLIC | $STATIC, $method(static_cast<FloatSignature*(*)()>(&FloatSignature::make))},
	{}
};

$ClassInfo _FloatSignature_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.reflect.generics.tree.FloatSignature",
	"java.lang.Object",
	"sun.reflect.generics.tree.BaseType",
	_FloatSignature_FieldInfo_,
	_FloatSignature_MethodInfo_
};

$Object* allocate$FloatSignature($Class* clazz) {
	return $of($alloc(FloatSignature));
}

FloatSignature* FloatSignature::singleton = nullptr;

void FloatSignature::init$() {
}

FloatSignature* FloatSignature::make() {
	$init(FloatSignature);
	return FloatSignature::singleton;
}

void FloatSignature::accept($TypeTreeVisitor* v) {
	$nc(v)->visitFloatSignature(this);
}

void clinit$FloatSignature($Class* class$) {
	$assignStatic(FloatSignature::singleton, $new(FloatSignature));
}

FloatSignature::FloatSignature() {
}

$Class* FloatSignature::load$($String* name, bool initialize) {
	$loadClass(FloatSignature, name, initialize, &_FloatSignature_ClassInfo_, clinit$FloatSignature, allocate$FloatSignature);
	return class$;
}

$Class* FloatSignature::class$ = nullptr;

			} // tree
		} // generics
	} // reflect
} // sun