#include <p3/NoGetClassLoaderAccess.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Module.h>
#include <java/lang/ModuleLayer.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/RuntimePermission.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessControlException.h>
#include <java/security/BasicPermission.h>
#include <java/security/Permission.h>
#include <java/util/Optional.h>
#include <jcpp.h>

#undef GET_CLASSLOADER_PERMISSION

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Module = ::java::lang::Module;
using $ModuleLayer = ::java::lang::ModuleLayer;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $RuntimePermission = ::java::lang::RuntimePermission;
using $SecurityManager = ::java::lang::SecurityManager;
using $AccessControlException = ::java::security::AccessControlException;
using $BasicPermission = ::java::security::BasicPermission;
using $Permission = ::java::security::Permission;
using $Optional = ::java::util::Optional;

namespace p3 {

$FieldInfo _NoGetClassLoaderAccess_FieldInfo_[] = {
	{"m3", "Ljava/lang/Module;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NoGetClassLoaderAccess, m3)},
	{"GET_CLASSLOADER_PERMISSION", "Ljava/security/Permission;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NoGetClassLoaderAccess, GET_CLASSLOADER_PERMISSION)},
	{}
};

$MethodInfo _NoGetClassLoaderAccess_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(NoGetClassLoaderAccess::*)()>(&NoGetClassLoaderAccess::init$))},
	{"findClass", "(Ljava/lang/Module;Ljava/lang/String;)Ljava/lang/Class;", "(Ljava/lang/Module;Ljava/lang/String;)Ljava/lang/Class<*>;", $STATIC, $method(static_cast<$Class*(*)($Module*,$String*)>(&NoGetClassLoaderAccess::findClass))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&NoGetClassLoaderAccess::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _NoGetClassLoaderAccess_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"p3.NoGetClassLoaderAccess",
	"java.lang.Object",
	nullptr,
	_NoGetClassLoaderAccess_FieldInfo_,
	_NoGetClassLoaderAccess_MethodInfo_
};

$Object* allocate$NoGetClassLoaderAccess($Class* clazz) {
	return $of($alloc(NoGetClassLoaderAccess));
}

$Module* NoGetClassLoaderAccess::m3 = nullptr;
$Permission* NoGetClassLoaderAccess::GET_CLASSLOADER_PERMISSION = nullptr;

void NoGetClassLoaderAccess::init$() {
}

void NoGetClassLoaderAccess::main($StringArray* args) {
	$init(NoGetClassLoaderAccess);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($ModuleLayer, boot, $ModuleLayer::boot());
	$System::setSecurityManager($$new($SecurityManager));
	$var($Module, m1, $cast($Module, $nc($($nc(boot)->findModule("m1"_s)))->get()));
	$var($Module, m2, $cast($Module, $nc($(boot->findModule("m2"_s)))->get()));
	findClass(m1, "p1.A"_s);
	findClass(m1, "p1.internal.B"_s);
	findClass(m2, "p2.C"_s);
	findClass(NoGetClassLoaderAccess::m3, "p3.internal.Foo"_s);
}

$Class* NoGetClassLoaderAccess::findClass($Module* module, $String* cn) {
	$init(NoGetClassLoaderAccess);
	$useLocalCurrentObjectStackCache();
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
		if (module != NoGetClassLoaderAccess::m3) {
			if ($nc($(e->getPermission()))->equals(NoGetClassLoaderAccess::GET_CLASSLOADER_PERMISSION)) {
				return nullptr;
			}
		}
		$throw(e);
	}
	$shouldNotReachHere();
}

void clinit$NoGetClassLoaderAccess($Class* class$) {
	$assignStatic(NoGetClassLoaderAccess::m3, NoGetClassLoaderAccess::class$->getModule());
	$assignStatic(NoGetClassLoaderAccess::GET_CLASSLOADER_PERMISSION, $new($RuntimePermission, "getClassLoader"_s));
}

NoGetClassLoaderAccess::NoGetClassLoaderAccess() {
}

$Class* NoGetClassLoaderAccess::load$($String* name, bool initialize) {
	$loadClass(NoGetClassLoaderAccess, name, initialize, &_NoGetClassLoaderAccess_ClassInfo_, clinit$NoGetClassLoaderAccess, allocate$NoGetClassLoaderAccess);
	return class$;
}

$Class* NoGetClassLoaderAccess::class$ = nullptr;

} // p3