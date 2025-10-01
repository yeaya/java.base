#include <java/lang/module/ModuleFinder$1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Objects.h>
#include <java/util/Optional.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ModuleFinder = ::java::lang::module::ModuleFinder;
using $Objects = ::java::util::Objects;
using $Optional = ::java::util::Optional;
using $Set = ::java::util::Set;

namespace java {
	namespace lang {
		namespace module {

$MethodInfo _ModuleFinder$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ModuleFinder$1::*)()>(&ModuleFinder$1::init$))},
	{"find", "(Ljava/lang/String;)Ljava/util/Optional;", "(Ljava/lang/String;)Ljava/util/Optional<Ljava/lang/module/ModuleReference;>;", $PUBLIC},
	{"findAll", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/module/ModuleReference;>;", $PUBLIC},
	{}
};

$EnclosingMethodInfo _ModuleFinder$1_EnclosingMethodInfo_ = {
	"java.lang.module.ModuleFinder",
	"of",
	"([Ljava/nio/file/Path;)Ljava/lang/module/ModuleFinder;"
};

$InnerClassInfo _ModuleFinder$1_InnerClassesInfo_[] = {
	{"java.lang.module.ModuleFinder$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ModuleFinder$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.module.ModuleFinder$1",
	"java.lang.Object",
	"java.lang.module.ModuleFinder",
	nullptr,
	_ModuleFinder$1_MethodInfo_,
	nullptr,
	&_ModuleFinder$1_EnclosingMethodInfo_,
	_ModuleFinder$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.module.ModuleFinder"
};

$Object* allocate$ModuleFinder$1($Class* clazz) {
	return $of($alloc(ModuleFinder$1));
}

void ModuleFinder$1::init$() {
}

$Optional* ModuleFinder$1::find($String* name) {
	$Objects::requireNonNull(name);
	return $Optional::empty();
}

$Set* ModuleFinder$1::findAll() {
	return $Set::of();
}

ModuleFinder$1::ModuleFinder$1() {
}

$Class* ModuleFinder$1::load$($String* name, bool initialize) {
	$loadClass(ModuleFinder$1, name, initialize, &_ModuleFinder$1_ClassInfo_, allocate$ModuleFinder$1);
	return class$;
}

$Class* ModuleFinder$1::class$ = nullptr;

		} // module
	} // lang
} // java