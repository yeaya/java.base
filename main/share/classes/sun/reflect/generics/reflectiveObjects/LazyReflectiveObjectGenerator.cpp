#include <sun/reflect/generics/reflectiveObjects/LazyReflectiveObjectGenerator.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/Type.h>
#include <sun/reflect/generics/factory/GenericsFactory.h>
#include <sun/reflect/generics/tree/FieldTypeSignature.h>
#include <sun/reflect/generics/tree/TypeTree.h>
#include <sun/reflect/generics/visitor/Reifier.h>
#include <sun/reflect/generics/visitor/TypeTreeVisitor.h>
#include <jcpp.h>

using $TypeArray = $Array<::java::lang::reflect::Type>;
using $FieldTypeSignatureArray = $Array<::sun::reflect::generics::tree::FieldTypeSignature>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Type = ::java::lang::reflect::Type;
using $GenericsFactory = ::sun::reflect::generics::factory::GenericsFactory;
using $FieldTypeSignature = ::sun::reflect::generics::tree::FieldTypeSignature;
using $TypeTree = ::sun::reflect::generics::tree::TypeTree;
using $Reifier = ::sun::reflect::generics::visitor::Reifier;
using $TypeTreeVisitor = ::sun::reflect::generics::visitor::TypeTreeVisitor;

namespace sun {
	namespace reflect {
		namespace generics {
			namespace reflectiveObjects {

$FieldInfo _LazyReflectiveObjectGenerator_FieldInfo_[] = {
	{"factory", "Lsun/reflect/generics/factory/GenericsFactory;", nullptr, $PRIVATE | $FINAL, $field(LazyReflectiveObjectGenerator, factory)},
	{}
};

$MethodInfo _LazyReflectiveObjectGenerator_MethodInfo_[] = {
	{"<init>", "(Lsun/reflect/generics/factory/GenericsFactory;)V", nullptr, $PROTECTED, $method(static_cast<void(LazyReflectiveObjectGenerator::*)($GenericsFactory*)>(&LazyReflectiveObjectGenerator::init$))},
	{"getFactory", "()Lsun/reflect/generics/factory/GenericsFactory;", nullptr, $PRIVATE, $method(static_cast<$GenericsFactory*(LazyReflectiveObjectGenerator::*)()>(&LazyReflectiveObjectGenerator::getFactory))},
	{"getReifier", "()Lsun/reflect/generics/visitor/Reifier;", nullptr, $PROTECTED},
	{"reifyBounds", "([Lsun/reflect/generics/tree/FieldTypeSignature;)[Ljava/lang/reflect/Type;", nullptr, 0},
	{}
};

$ClassInfo _LazyReflectiveObjectGenerator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.reflect.generics.reflectiveObjects.LazyReflectiveObjectGenerator",
	"java.lang.Object",
	nullptr,
	_LazyReflectiveObjectGenerator_FieldInfo_,
	_LazyReflectiveObjectGenerator_MethodInfo_
};

$Object* allocate$LazyReflectiveObjectGenerator($Class* clazz) {
	return $of($alloc(LazyReflectiveObjectGenerator));
}

void LazyReflectiveObjectGenerator::init$($GenericsFactory* f) {
	$set(this, factory, f);
}

$GenericsFactory* LazyReflectiveObjectGenerator::getFactory() {
	return this->factory;
}

$Reifier* LazyReflectiveObjectGenerator::getReifier() {
	return $Reifier::make($(getFactory()));
}

$TypeArray* LazyReflectiveObjectGenerator::reifyBounds($FieldTypeSignatureArray* boundASTs) {
	int32_t length = $nc(boundASTs)->length;
	$var($TypeArray, bounds, $new($TypeArray, length));
	for (int32_t i = 0; i < length; ++i) {
		$var($Reifier, r, getReifier());
		$nc(boundASTs->get(i))->accept(r);
		bounds->set(i, $($cast($Type, $nc(r)->getResult())));
	}
	return bounds;
}

LazyReflectiveObjectGenerator::LazyReflectiveObjectGenerator() {
}

$Class* LazyReflectiveObjectGenerator::load$($String* name, bool initialize) {
	$loadClass(LazyReflectiveObjectGenerator, name, initialize, &_LazyReflectiveObjectGenerator_ClassInfo_, allocate$LazyReflectiveObjectGenerator);
	return class$;
}

$Class* LazyReflectiveObjectGenerator::class$ = nullptr;

			} // reflectiveObjects
		} // generics
	} // reflect
} // sun