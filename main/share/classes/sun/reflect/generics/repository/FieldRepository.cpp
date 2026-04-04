#include <sun/reflect/generics/repository/FieldRepository.h>
#include <java/lang/reflect/Type.h>
#include <sun/reflect/generics/factory/GenericsFactory.h>
#include <sun/reflect/generics/parser/SignatureParser.h>
#include <sun/reflect/generics/repository/AbstractRepository.h>
#include <sun/reflect/generics/tree/Tree.h>
#include <sun/reflect/generics/tree/TypeSignature.h>
#include <sun/reflect/generics/tree/TypeTree.h>
#include <sun/reflect/generics/visitor/Reifier.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Type = ::java::lang::reflect::Type;
using $GenericsFactory = ::sun::reflect::generics::factory::GenericsFactory;
using $SignatureParser = ::sun::reflect::generics::parser::SignatureParser;
using $AbstractRepository = ::sun::reflect::generics::repository::AbstractRepository;
using $Tree = ::sun::reflect::generics::tree::Tree;
using $TypeSignature = ::sun::reflect::generics::tree::TypeSignature;
using $Reifier = ::sun::reflect::generics::visitor::Reifier;

namespace sun {
	namespace reflect {
		namespace generics {
			namespace repository {

void FieldRepository::init$($String* rawSig, $GenericsFactory* f) {
	$AbstractRepository::init$(rawSig, f);
}

$Tree* FieldRepository::parse($String* s) {
	return $$nc($SignatureParser::make())->parseTypeSig(s);
}

FieldRepository* FieldRepository::make($String* rawSig, $GenericsFactory* f) {
	$init(FieldRepository);
	return $new(FieldRepository, rawSig, f);
}

$Type* FieldRepository::getGenericType() {
	$var($Type, value, this->genericType);
	if (value == nullptr) {
		$assign(value, computeGenericType());
		$set(this, genericType, value);
	}
	return value;
}

$Type* FieldRepository::computeGenericType() {
	$useLocalObjectStack();
	$var($Reifier, r, getReifier());
	$$sure($TypeSignature, getTree())->accept(r);
	return $cast($Type, $nc(r)->getResult());
}

FieldRepository::FieldRepository() {
}

$Class* FieldRepository::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"genericType", "Ljava/lang/reflect/Type;", nullptr, $PRIVATE | $VOLATILE, $field(FieldRepository, genericType)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Lsun/reflect/generics/factory/GenericsFactory;)V", nullptr, $PROTECTED, $method(FieldRepository, init$, void, $String*, $GenericsFactory*)},
		{"computeGenericType", "()Ljava/lang/reflect/Type;", nullptr, $PRIVATE, $method(FieldRepository, computeGenericType, $Type*)},
		{"getGenericType", "()Ljava/lang/reflect/Type;", nullptr, $PUBLIC, $virtualMethod(FieldRepository, getGenericType, $Type*)},
		{"make", "(Ljava/lang/String;Lsun/reflect/generics/factory/GenericsFactory;)Lsun/reflect/generics/repository/FieldRepository;", nullptr, $PUBLIC | $STATIC, $staticMethod(FieldRepository, make, FieldRepository*, $String*, $GenericsFactory*)},
		{"parse", "(Ljava/lang/String;)Lsun/reflect/generics/tree/TypeSignature;", nullptr, $PROTECTED, $virtualMethod(FieldRepository, parse, $Tree*, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.reflect.generics.repository.FieldRepository",
		"sun.reflect.generics.repository.AbstractRepository",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Lsun/reflect/generics/repository/AbstractRepository<Lsun/reflect/generics/tree/TypeSignature;>;"
	};
	$loadClass(FieldRepository, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FieldRepository);
	});
	return class$;
}

$Class* FieldRepository::class$ = nullptr;

			} // repository
		} // generics
	} // reflect
} // sun