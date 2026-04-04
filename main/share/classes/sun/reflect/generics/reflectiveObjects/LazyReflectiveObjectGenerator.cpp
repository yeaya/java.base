#include <sun/reflect/generics/reflectiveObjects/LazyReflectiveObjectGenerator.h>
#include <java/lang/reflect/Type.h>
#include <sun/reflect/generics/factory/GenericsFactory.h>
#include <sun/reflect/generics/tree/FieldTypeSignature.h>
#include <sun/reflect/generics/tree/TypeTree.h>
#include <sun/reflect/generics/visitor/Reifier.h>
#include <jcpp.h>

using $TypeArray = $Array<::java::lang::reflect::Type>;
using $FieldTypeSignatureArray = $Array<::sun::reflect::generics::tree::FieldTypeSignature>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Type = ::java::lang::reflect::Type;
using $GenericsFactory = ::sun::reflect::generics::factory::GenericsFactory;
using $Reifier = ::sun::reflect::generics::visitor::Reifier;

namespace sun {
	namespace reflect {
		namespace generics {
			namespace reflectiveObjects {

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
	$useLocalObjectStack();
	int32_t length = $nc(boundASTs)->length;
	$var($TypeArray, bounds, $new($TypeArray, length));
	for (int32_t i = 0; i < length; ++i) {
		$var($Reifier, r, getReifier());
		$nc(boundASTs->get(i))->accept(r);
		bounds->set(i, $$cast($Type, $nc(r)->getResult()));
	}
	return bounds;
}

LazyReflectiveObjectGenerator::LazyReflectiveObjectGenerator() {
}

$Class* LazyReflectiveObjectGenerator::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"factory", "Lsun/reflect/generics/factory/GenericsFactory;", nullptr, $PRIVATE | $FINAL, $field(LazyReflectiveObjectGenerator, factory)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/reflect/generics/factory/GenericsFactory;)V", nullptr, $PROTECTED, $method(LazyReflectiveObjectGenerator, init$, void, $GenericsFactory*)},
		{"getFactory", "()Lsun/reflect/generics/factory/GenericsFactory;", nullptr, $PRIVATE, $method(LazyReflectiveObjectGenerator, getFactory, $GenericsFactory*)},
		{"getReifier", "()Lsun/reflect/generics/visitor/Reifier;", nullptr, $PROTECTED, $virtualMethod(LazyReflectiveObjectGenerator, getReifier, $Reifier*)},
		{"reifyBounds", "([Lsun/reflect/generics/tree/FieldTypeSignature;)[Ljava/lang/reflect/Type;", nullptr, 0, $virtualMethod(LazyReflectiveObjectGenerator, reifyBounds, $TypeArray*, $FieldTypeSignatureArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"sun.reflect.generics.reflectiveObjects.LazyReflectiveObjectGenerator",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(LazyReflectiveObjectGenerator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LazyReflectiveObjectGenerator);
	});
	return class$;
}

$Class* LazyReflectiveObjectGenerator::class$ = nullptr;

			} // reflectiveObjects
		} // generics
	} // reflect
} // sun