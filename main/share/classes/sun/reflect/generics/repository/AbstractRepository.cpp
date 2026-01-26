#include <sun/reflect/generics/repository/AbstractRepository.h>

#include <sun/reflect/generics/factory/GenericsFactory.h>
#include <sun/reflect/generics/tree/Tree.h>
#include <sun/reflect/generics/visitor/Reifier.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GenericsFactory = ::sun::reflect::generics::factory::GenericsFactory;
using $Tree = ::sun::reflect::generics::tree::Tree;
using $Reifier = ::sun::reflect::generics::visitor::Reifier;

namespace sun {
	namespace reflect {
		namespace generics {
			namespace repository {

$FieldInfo _AbstractRepository_FieldInfo_[] = {
	{"factory", "Lsun/reflect/generics/factory/GenericsFactory;", nullptr, $PRIVATE | $FINAL, $field(AbstractRepository, factory)},
	{"tree", "Lsun/reflect/generics/tree/Tree;", "TT;", $PRIVATE | $FINAL, $field(AbstractRepository, tree)},
	{}
};

$MethodInfo _AbstractRepository_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Lsun/reflect/generics/factory/GenericsFactory;)V", nullptr, $PROTECTED, $method(AbstractRepository, init$, void, $String*, $GenericsFactory*)},
	{"getFactory", "()Lsun/reflect/generics/factory/GenericsFactory;", nullptr, $PRIVATE, $method(AbstractRepository, getFactory, $GenericsFactory*)},
	{"getReifier", "()Lsun/reflect/generics/visitor/Reifier;", nullptr, $PROTECTED, $virtualMethod(AbstractRepository, getReifier, $Reifier*)},
	{"getTree", "()Lsun/reflect/generics/tree/Tree;", "()TT;", $PROTECTED, $virtualMethod(AbstractRepository, getTree, $Tree*)},
	{"parse", "(Ljava/lang/String;)Lsun/reflect/generics/tree/Tree;", "(Ljava/lang/String;)TT;", $PROTECTED | $ABSTRACT, $virtualMethod(AbstractRepository, parse, $Tree*, $String*)},
	{}
};

$ClassInfo _AbstractRepository_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.reflect.generics.repository.AbstractRepository",
	"java.lang.Object",
	nullptr,
	_AbstractRepository_FieldInfo_,
	_AbstractRepository_MethodInfo_,
	"<T::Lsun/reflect/generics/tree/Tree;>Ljava/lang/Object;"
};

$Object* allocate$AbstractRepository($Class* clazz) {
	return $of($alloc(AbstractRepository));
}

$GenericsFactory* AbstractRepository::getFactory() {
	return this->factory;
}

$Tree* AbstractRepository::getTree() {
	return this->tree;
}

$Reifier* AbstractRepository::getReifier() {
	return $Reifier::make($(getFactory()));
}

void AbstractRepository::init$($String* rawSig, $GenericsFactory* f) {
	$set(this, tree, parse(rawSig));
	$set(this, factory, f);
}

AbstractRepository::AbstractRepository() {
}

$Class* AbstractRepository::load$($String* name, bool initialize) {
	$loadClass(AbstractRepository, name, initialize, &_AbstractRepository_ClassInfo_, allocate$AbstractRepository);
	return class$;
}

$Class* AbstractRepository::class$ = nullptr;

			} // repository
		} // generics
	} // reflect
} // sun