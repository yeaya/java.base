#include <sun/reflect/generics/repository/MethodRepository.h>
#include <java/lang/reflect/Type.h>
#include <sun/reflect/generics/factory/GenericsFactory.h>
#include <sun/reflect/generics/repository/AbstractRepository.h>
#include <sun/reflect/generics/repository/ConstructorRepository.h>
#include <sun/reflect/generics/tree/MethodTypeSignature.h>
#include <sun/reflect/generics/tree/ReturnType.h>
#include <sun/reflect/generics/tree/Tree.h>
#include <sun/reflect/generics/visitor/Reifier.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Type = ::java::lang::reflect::Type;
using $GenericsFactory = ::sun::reflect::generics::factory::GenericsFactory;
using $ConstructorRepository = ::sun::reflect::generics::repository::ConstructorRepository;
using $MethodTypeSignature = ::sun::reflect::generics::tree::MethodTypeSignature;
using $Reifier = ::sun::reflect::generics::visitor::Reifier;

namespace sun {
	namespace reflect {
		namespace generics {
			namespace repository {

void MethodRepository::init$($String* rawSig, $GenericsFactory* f) {
	$ConstructorRepository::init$(rawSig, f);
}

MethodRepository* MethodRepository::make($String* rawSig, $GenericsFactory* f) {
	$init(MethodRepository);
	return $new(MethodRepository, rawSig, f);
}

$Type* MethodRepository::getReturnType() {
	$var($Type, value, this->returnType);
	if (value == nullptr) {
		$assign(value, computeReturnType());
		$set(this, returnType, value);
	}
	return value;
}

$Type* MethodRepository::computeReturnType() {
	$useLocalObjectStack();
	$var($Reifier, r, getReifier());
	$$nc($$sure($MethodTypeSignature, getTree())->getReturnType())->accept(r);
	return $cast($Type, $nc(r)->getResult());
}

MethodRepository::MethodRepository() {
}

$Class* MethodRepository::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"returnType", "Ljava/lang/reflect/Type;", nullptr, $PRIVATE | $VOLATILE, $field(MethodRepository, returnType)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Lsun/reflect/generics/factory/GenericsFactory;)V", nullptr, $PRIVATE, $method(MethodRepository, init$, void, $String*, $GenericsFactory*)},
		{"computeReturnType", "()Ljava/lang/reflect/Type;", nullptr, $PRIVATE, $method(MethodRepository, computeReturnType, $Type*)},
		{"getReturnType", "()Ljava/lang/reflect/Type;", nullptr, $PUBLIC, $virtualMethod(MethodRepository, getReturnType, $Type*)},
		{"make", "(Ljava/lang/String;Lsun/reflect/generics/factory/GenericsFactory;)Lsun/reflect/generics/repository/MethodRepository;", nullptr, $PUBLIC | $STATIC, $staticMethod(MethodRepository, make, MethodRepository*, $String*, $GenericsFactory*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.reflect.generics.repository.MethodRepository",
		"sun.reflect.generics.repository.ConstructorRepository",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(MethodRepository, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MethodRepository);
	});
	return class$;
}

$Class* MethodRepository::class$ = nullptr;

			} // repository
		} // generics
	} // reflect
} // sun