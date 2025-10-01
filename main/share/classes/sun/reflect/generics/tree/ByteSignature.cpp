#include <sun/reflect/generics/tree/ByteSignature.h>

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

$FieldInfo _ByteSignature_FieldInfo_[] = {
	{"singleton", "Lsun/reflect/generics/tree/ByteSignature;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ByteSignature, singleton)},
	{}
};

$MethodInfo _ByteSignature_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(ByteSignature::*)()>(&ByteSignature::init$))},
	{"accept", "(Lsun/reflect/generics/visitor/TypeTreeVisitor;)V", "(Lsun/reflect/generics/visitor/TypeTreeVisitor<*>;)V", $PUBLIC},
	{"make", "()Lsun/reflect/generics/tree/ByteSignature;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ByteSignature*(*)()>(&ByteSignature::make))},
	{}
};

$ClassInfo _ByteSignature_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.reflect.generics.tree.ByteSignature",
	"java.lang.Object",
	"sun.reflect.generics.tree.BaseType",
	_ByteSignature_FieldInfo_,
	_ByteSignature_MethodInfo_
};

$Object* allocate$ByteSignature($Class* clazz) {
	return $of($alloc(ByteSignature));
}

ByteSignature* ByteSignature::singleton = nullptr;

void ByteSignature::init$() {
}

ByteSignature* ByteSignature::make() {
	$init(ByteSignature);
	return ByteSignature::singleton;
}

void ByteSignature::accept($TypeTreeVisitor* v) {
	$nc(v)->visitByteSignature(this);
}

void clinit$ByteSignature($Class* class$) {
	$assignStatic(ByteSignature::singleton, $new(ByteSignature));
}

ByteSignature::ByteSignature() {
}

$Class* ByteSignature::load$($String* name, bool initialize) {
	$loadClass(ByteSignature, name, initialize, &_ByteSignature_ClassInfo_, clinit$ByteSignature, allocate$ByteSignature);
	return class$;
}

$Class* ByteSignature::class$ = nullptr;

			} // tree
		} // generics
	} // reflect
} // sun