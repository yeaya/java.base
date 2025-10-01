#include <sun/reflect/generics/tree/BottomSignature.h>

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
using $FieldTypeSignature = ::sun::reflect::generics::tree::FieldTypeSignature;
using $TypeTreeVisitor = ::sun::reflect::generics::visitor::TypeTreeVisitor;

namespace sun {
	namespace reflect {
		namespace generics {
			namespace tree {

$FieldInfo _BottomSignature_FieldInfo_[] = {
	{"singleton", "Lsun/reflect/generics/tree/BottomSignature;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BottomSignature, singleton)},
	{}
};

$MethodInfo _BottomSignature_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(BottomSignature::*)()>(&BottomSignature::init$))},
	{"accept", "(Lsun/reflect/generics/visitor/TypeTreeVisitor;)V", "(Lsun/reflect/generics/visitor/TypeTreeVisitor<*>;)V", $PUBLIC},
	{"make", "()Lsun/reflect/generics/tree/BottomSignature;", nullptr, $PUBLIC | $STATIC, $method(static_cast<BottomSignature*(*)()>(&BottomSignature::make))},
	{}
};

$ClassInfo _BottomSignature_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.reflect.generics.tree.BottomSignature",
	"java.lang.Object",
	"sun.reflect.generics.tree.FieldTypeSignature",
	_BottomSignature_FieldInfo_,
	_BottomSignature_MethodInfo_
};

$Object* allocate$BottomSignature($Class* clazz) {
	return $of($alloc(BottomSignature));
}

BottomSignature* BottomSignature::singleton = nullptr;

void BottomSignature::init$() {
}

BottomSignature* BottomSignature::make() {
	$init(BottomSignature);
	return BottomSignature::singleton;
}

void BottomSignature::accept($TypeTreeVisitor* v) {
	$nc(v)->visitBottomSignature(this);
}

void clinit$BottomSignature($Class* class$) {
	$assignStatic(BottomSignature::singleton, $new(BottomSignature));
}

BottomSignature::BottomSignature() {
}

$Class* BottomSignature::load$($String* name, bool initialize) {
	$loadClass(BottomSignature, name, initialize, &_BottomSignature_ClassInfo_, clinit$BottomSignature, allocate$BottomSignature);
	return class$;
}

$Class* BottomSignature::class$ = nullptr;

			} // tree
		} // generics
	} // reflect
} // sun