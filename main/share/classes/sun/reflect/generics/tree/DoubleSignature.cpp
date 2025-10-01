#include <sun/reflect/generics/tree/DoubleSignature.h>

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

$FieldInfo _DoubleSignature_FieldInfo_[] = {
	{"singleton", "Lsun/reflect/generics/tree/DoubleSignature;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DoubleSignature, singleton)},
	{}
};

$MethodInfo _DoubleSignature_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(DoubleSignature::*)()>(&DoubleSignature::init$))},
	{"accept", "(Lsun/reflect/generics/visitor/TypeTreeVisitor;)V", "(Lsun/reflect/generics/visitor/TypeTreeVisitor<*>;)V", $PUBLIC},
	{"make", "()Lsun/reflect/generics/tree/DoubleSignature;", nullptr, $PUBLIC | $STATIC, $method(static_cast<DoubleSignature*(*)()>(&DoubleSignature::make))},
	{}
};

$ClassInfo _DoubleSignature_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.reflect.generics.tree.DoubleSignature",
	"java.lang.Object",
	"sun.reflect.generics.tree.BaseType",
	_DoubleSignature_FieldInfo_,
	_DoubleSignature_MethodInfo_
};

$Object* allocate$DoubleSignature($Class* clazz) {
	return $of($alloc(DoubleSignature));
}

DoubleSignature* DoubleSignature::singleton = nullptr;

void DoubleSignature::init$() {
}

DoubleSignature* DoubleSignature::make() {
	$init(DoubleSignature);
	return DoubleSignature::singleton;
}

void DoubleSignature::accept($TypeTreeVisitor* v) {
	$nc(v)->visitDoubleSignature(this);
}

void clinit$DoubleSignature($Class* class$) {
	$assignStatic(DoubleSignature::singleton, $new(DoubleSignature));
}

DoubleSignature::DoubleSignature() {
}

$Class* DoubleSignature::load$($String* name, bool initialize) {
	$loadClass(DoubleSignature, name, initialize, &_DoubleSignature_ClassInfo_, clinit$DoubleSignature, allocate$DoubleSignature);
	return class$;
}

$Class* DoubleSignature::class$ = nullptr;

			} // tree
		} // generics
	} // reflect
} // sun