#include <sun/reflect/generics/tree/IntSignature.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$FieldInfo _IntSignature_FieldInfo_[] = {
	{"singleton", "Lsun/reflect/generics/tree/IntSignature;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IntSignature, singleton)},
	{}
};

$MethodInfo _IntSignature_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(IntSignature::*)()>(&IntSignature::init$))},
	{"accept", "(Lsun/reflect/generics/visitor/TypeTreeVisitor;)V", "(Lsun/reflect/generics/visitor/TypeTreeVisitor<*>;)V", $PUBLIC},
	{"make", "()Lsun/reflect/generics/tree/IntSignature;", nullptr, $PUBLIC | $STATIC, $method(static_cast<IntSignature*(*)()>(&IntSignature::make))},
	{}
};

$ClassInfo _IntSignature_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.reflect.generics.tree.IntSignature",
	"java.lang.Object",
	"sun.reflect.generics.tree.BaseType",
	_IntSignature_FieldInfo_,
	_IntSignature_MethodInfo_
};

$Object* allocate$IntSignature($Class* clazz) {
	return $of($alloc(IntSignature));
}

IntSignature* IntSignature::singleton = nullptr;

void IntSignature::init$() {
}

IntSignature* IntSignature::make() {
	$init(IntSignature);
	return IntSignature::singleton;
}

void IntSignature::accept($TypeTreeVisitor* v) {
	$nc(v)->visitIntSignature(this);
}

void clinit$IntSignature($Class* class$) {
	$assignStatic(IntSignature::singleton, $new(IntSignature));
}

IntSignature::IntSignature() {
}

$Class* IntSignature::load$($String* name, bool initialize) {
	$loadClass(IntSignature, name, initialize, &_IntSignature_ClassInfo_, clinit$IntSignature, allocate$IntSignature);
	return class$;
}

$Class* IntSignature::class$ = nullptr;

			} // tree
		} // generics
	} // reflect
} // sun