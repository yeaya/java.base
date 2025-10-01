#include <sun/reflect/generics/tree/CharSignature.h>

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

$FieldInfo _CharSignature_FieldInfo_[] = {
	{"singleton", "Lsun/reflect/generics/tree/CharSignature;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CharSignature, singleton)},
	{}
};

$MethodInfo _CharSignature_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(CharSignature::*)()>(&CharSignature::init$))},
	{"accept", "(Lsun/reflect/generics/visitor/TypeTreeVisitor;)V", "(Lsun/reflect/generics/visitor/TypeTreeVisitor<*>;)V", $PUBLIC},
	{"make", "()Lsun/reflect/generics/tree/CharSignature;", nullptr, $PUBLIC | $STATIC, $method(static_cast<CharSignature*(*)()>(&CharSignature::make))},
	{}
};

$ClassInfo _CharSignature_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.reflect.generics.tree.CharSignature",
	"java.lang.Object",
	"sun.reflect.generics.tree.BaseType",
	_CharSignature_FieldInfo_,
	_CharSignature_MethodInfo_
};

$Object* allocate$CharSignature($Class* clazz) {
	return $of($alloc(CharSignature));
}

CharSignature* CharSignature::singleton = nullptr;

void CharSignature::init$() {
}

CharSignature* CharSignature::make() {
	$init(CharSignature);
	return CharSignature::singleton;
}

void CharSignature::accept($TypeTreeVisitor* v) {
	$nc(v)->visitCharSignature(this);
}

void clinit$CharSignature($Class* class$) {
	$assignStatic(CharSignature::singleton, $new(CharSignature));
}

CharSignature::CharSignature() {
}

$Class* CharSignature::load$($String* name, bool initialize) {
	$loadClass(CharSignature, name, initialize, &_CharSignature_ClassInfo_, clinit$CharSignature, allocate$CharSignature);
	return class$;
}

$Class* CharSignature::class$ = nullptr;

			} // tree
		} // generics
	} // reflect
} // sun