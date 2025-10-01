#include <sun/reflect/generics/tree/LongSignature.h>

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

$FieldInfo _LongSignature_FieldInfo_[] = {
	{"singleton", "Lsun/reflect/generics/tree/LongSignature;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LongSignature, singleton)},
	{}
};

$MethodInfo _LongSignature_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(LongSignature::*)()>(&LongSignature::init$))},
	{"accept", "(Lsun/reflect/generics/visitor/TypeTreeVisitor;)V", "(Lsun/reflect/generics/visitor/TypeTreeVisitor<*>;)V", $PUBLIC},
	{"make", "()Lsun/reflect/generics/tree/LongSignature;", nullptr, $PUBLIC | $STATIC, $method(static_cast<LongSignature*(*)()>(&LongSignature::make))},
	{}
};

$ClassInfo _LongSignature_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.reflect.generics.tree.LongSignature",
	"java.lang.Object",
	"sun.reflect.generics.tree.BaseType",
	_LongSignature_FieldInfo_,
	_LongSignature_MethodInfo_
};

$Object* allocate$LongSignature($Class* clazz) {
	return $of($alloc(LongSignature));
}

LongSignature* LongSignature::singleton = nullptr;

void LongSignature::init$() {
}

LongSignature* LongSignature::make() {
	$init(LongSignature);
	return LongSignature::singleton;
}

void LongSignature::accept($TypeTreeVisitor* v) {
	$nc(v)->visitLongSignature(this);
}

void clinit$LongSignature($Class* class$) {
	$assignStatic(LongSignature::singleton, $new(LongSignature));
}

LongSignature::LongSignature() {
}

$Class* LongSignature::load$($String* name, bool initialize) {
	$loadClass(LongSignature, name, initialize, &_LongSignature_ClassInfo_, clinit$LongSignature, allocate$LongSignature);
	return class$;
}

$Class* LongSignature::class$ = nullptr;

			} // tree
		} // generics
	} // reflect
} // sun