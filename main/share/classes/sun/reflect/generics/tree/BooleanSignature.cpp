#include <sun/reflect/generics/tree/BooleanSignature.h>

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

$FieldInfo _BooleanSignature_FieldInfo_[] = {
	{"singleton", "Lsun/reflect/generics/tree/BooleanSignature;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BooleanSignature, singleton)},
	{}
};

$MethodInfo _BooleanSignature_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(BooleanSignature::*)()>(&BooleanSignature::init$))},
	{"accept", "(Lsun/reflect/generics/visitor/TypeTreeVisitor;)V", "(Lsun/reflect/generics/visitor/TypeTreeVisitor<*>;)V", $PUBLIC},
	{"make", "()Lsun/reflect/generics/tree/BooleanSignature;", nullptr, $PUBLIC | $STATIC, $method(static_cast<BooleanSignature*(*)()>(&BooleanSignature::make))},
	{}
};

$ClassInfo _BooleanSignature_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.reflect.generics.tree.BooleanSignature",
	"java.lang.Object",
	"sun.reflect.generics.tree.BaseType",
	_BooleanSignature_FieldInfo_,
	_BooleanSignature_MethodInfo_
};

$Object* allocate$BooleanSignature($Class* clazz) {
	return $of($alloc(BooleanSignature));
}

BooleanSignature* BooleanSignature::singleton = nullptr;

void BooleanSignature::init$() {
}

BooleanSignature* BooleanSignature::make() {
	$init(BooleanSignature);
	return BooleanSignature::singleton;
}

void BooleanSignature::accept($TypeTreeVisitor* v) {
	$nc(v)->visitBooleanSignature(this);
}

void clinit$BooleanSignature($Class* class$) {
	$assignStatic(BooleanSignature::singleton, $new(BooleanSignature));
}

BooleanSignature::BooleanSignature() {
}

$Class* BooleanSignature::load$($String* name, bool initialize) {
	$loadClass(BooleanSignature, name, initialize, &_BooleanSignature_ClassInfo_, clinit$BooleanSignature, allocate$BooleanSignature);
	return class$;
}

$Class* BooleanSignature::class$ = nullptr;

			} // tree
		} // generics
	} // reflect
} // sun