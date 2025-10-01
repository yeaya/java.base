#include <p3/NoAccess.h>

#include <java/io/FilePermission.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Module.h>
#include <java/lang/ModuleLayer.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/module/Configuration.h>
#include <java/lang/module/ModuleFinder.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/Paths.h>
#include <java/security/AccessControlException.h>
#include <java/security/Permission.h>
#include <java/util/Collection.h>
#include <java/util/Optional.h>
#include <java/util/Set.h>
#include <jcpp.h>

#undef MODS_DIR1
#undef MODS_DIR2
#undef M3

using $PathArray = $Array<::java::nio::file::Path>;
using $FilePermission = ::java::io::FilePermission;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Module = ::java::lang::Module;
using $ModuleLayer = ::java::lang::ModuleLayer;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $SecurityManager = ::java::lang::SecurityManager;
using $Configuration = ::java::lang::module::Configuration;
using $ModuleFinder = ::java::lang::module::ModuleFinder;
using $Path = ::java::nio::file::Path;
using $Paths = ::java::nio::file::Paths;
using $AccessControlException = ::java::security::AccessControlException;
using $Permission = ::java::security::Permission;
using $Collection = ::java::util::Collection;
using $Optional = ::java::util::Optional;
using $Set = ::java::util::Set;

namespace p3 {

$FieldInfo _NoAccess_FieldInfo_[] = {
	{"M3", "Ljava/lang/Module;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NoAccess, M3)},
	{"MODS_DIR1", "Ljava/nio/file/Path;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NoAccess, MODS_DIR1)},
	{"MODS_DIR2", "Ljava/nio/file/Path;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NoAccess, MODS_DIR2)},
	{}
};

$MethodInfo _NoAccess_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(NoAccess::*)()>(&NoAccess::init$))},
	{"findClass", "(Ljava/lang/Module;Ljava/lang/String;)Ljava/lang/Class;", "(Ljava/lang/Module;Ljava/lang/String;)Ljava/lang/Class<*>;", $STATIC, $method(static_cast<$Class*(*)($Module*,$String*)>(&NoAccess::findClass))},
	{"findClass", "(Ljava/lang/Module;Ljava/lang/String;Ljava/security/Permission;)Ljava/lang/Class;", "(Ljava/lang/Module;Ljava/lang/String;Ljava/security/Permission;)Ljava/lang/Class<*>;", $STATIC, $method(static_cast<$Class*(*)($Module*,$String*,$Permission*)>(&NoAccess::findClass))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&NoAccess::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _NoAccess_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"p3.NoAccess",
	"java.lang.Object",
	nullptr,
	_NoAccess_FieldInfo_,
	_NoAccess_MethodInfo_
};

$Object* allocate$NoAccess($Class* clazz) {
	return $of($alloc(NoAccess));
}

$Module* NoAccess::M3 = nullptr;
$Path* NoAccess::MODS_DIR1 = nullptr;
$Path* NoAccess::MODS_DIR2 = nullptr;

void NoAccess::init$() {
}

void NoAccess::main($StringArray* args) {
	$init(NoAccess);
	$beforeCallerSensitive();
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		$System::setSecurityManager(nullptr);
	}
	$var($ModuleFinder, finder, $ModuleFinder::of($$new($PathArray, {
		$($Paths::get("mods1"_s, $$new($StringArray, 0))),
		$($Paths::get("mods2"_s, $$new($StringArray, 0)))
	})));
	$var($ModuleLayer, bootLayer, $ModuleLayer::boot());
	$var($Configuration, parent, $nc(bootLayer)->configuration());
	$var($ModuleFinder, var$0, finder);
	$var($ModuleFinder, var$1, $ModuleFinder::of($$new($PathArray, 0)));
	$var($Configuration, cf, $nc(parent)->resolveAndBind(var$0, var$1, $(static_cast<$Collection*>($Set::of("m1"_s, "m2"_s)))));
	$var($ClassLoader, scl, $ClassLoader::getSystemClassLoader());
	$var($ModuleLayer, layer, bootLayer->defineModulesWithManyLoaders(cf, scl));
	if (sm != nullptr) {
		$System::setSecurityManager(sm);
	}
	$var($Module, m1, $cast($Module, $nc($(bootLayer->findModule("m1"_s)))->get()));
	$var($Module, m2, $cast($Module, $nc($(bootLayer->findModule("m2"_s)))->get()));
	$var($Module, m3, $cast($Module, $nc($(bootLayer->findModule("m3"_s)))->get()));
	findClass(m1, "p1.internal.B"_s);
	findClass(m2, "p2.C"_s);
	findClass(m3, "p3.internal.Foo"_s);
	findClass(m1, "p1.A"_s);
	findClass(m1, "p1.internal.B"_s);
	findClass(m2, "p2.C"_s);
	findClass(m3, "p3.internal.Foo"_s);
	$assign(m1, $cast($Module, $nc($($nc(layer)->findModule("m1"_s)))->get()));
	$assign(m2, $cast($Module, $nc($(layer->findModule("m2"_s)))->get()));
	$assign(m3, $cast($Module, $nc($(layer->findModule("m3"_s)))->get()));
	findClass(m1, "p1.A"_s);
	findClass(m3, "p3.internal.Foo"_s);
	$var($Path, path, $nc($($nc($($nc(NoAccess::MODS_DIR1)->resolve("p1"_s)))->resolve("internal"_s)))->resolve("B.class"_s));
	findClass(m1, "p1.internal.B"_s, $$new($FilePermission, $($nc(path)->toString()), "read"_s));
	$assign(path, $nc($($nc(NoAccess::MODS_DIR2)->resolve("p2"_s)))->resolve("C.class"_s));
	findClass(m2, "p2.C"_s, $$new($FilePermission, $($nc(path)->toString()), "read"_s));
}

$Class* NoAccess::findClass($Module* module, $String* cn) {
	$init(NoAccess);
	return findClass(module, cn, nullptr);
}

$Class* NoAccess::findClass($Module* module, $String* cn, $Permission* perm) {
	$init(NoAccess);
	$beforeCallerSensitive();
	try {
		$Class* c = $Class::forName(module, cn);
		if (c == nullptr) {
			$throwNew($RuntimeException, $$str({cn, " not found in "_s, module}));
		}
		if ($nc(c)->getModule() != module) {
			$throwNew($RuntimeException, $$str({$(c->getModule()), " != "_s, module}));
		}
		return c;
	} catch ($AccessControlException&) {
		$var($AccessControlException, e, $catch());
		if ($nc($(e->getPermission()))->equals(perm)) {
			return nullptr;
		}
		$throw(e);
	}
	$shouldNotReachHere();
}

void clinit$NoAccess($Class* class$) {
	$assignStatic(NoAccess::M3, NoAccess::class$->getModule());
	$assignStatic(NoAccess::MODS_DIR1, $Paths::get("mods1"_s, $$new($StringArray, 0)));
	$assignStatic(NoAccess::MODS_DIR2, $Paths::get("mods2"_s, $$new($StringArray, 0)));
}

NoAccess::NoAccess() {
}

$Class* NoAccess::load$($String* name, bool initialize) {
	$loadClass(NoAccess, name, initialize, &_NoAccess_ClassInfo_, clinit$NoAccess, allocate$NoAccess);
	return class$;
}

$Class* NoAccess::class$ = nullptr;

} // p3