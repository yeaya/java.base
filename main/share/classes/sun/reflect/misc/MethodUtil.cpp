#include <sun/reflect/misc/MethodUtil.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/Error.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/InternalError.h>
#include <java/lang/Module.h>
#include <java/lang/SecurityException.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/reflect/InvocationTargetException.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/Modifier.h>
#include <java/net/URL.h>
#include <java/security/AccessController.h>
#include <java/security/AllPermission.h>
#include <java/security/CodeSource.h>
#include <java/security/PermissionCollection.h>
#include <java/security/SecureClassLoader.h>
#include <java/security/cert/Certificate.h>
#include <java/util/Collection.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <sun/reflect/misc/MethodUtil$1.h>
#include <sun/reflect/misc/MethodUtil$Signature.h>
#include <sun/reflect/misc/ReflectUtil.h>
#include <jcpp.h>

#undef MISC_PKG
#undef TRAMPOLINE

using $MethodArray = $Array<::java::lang::reflect::Method>;
using $CertificateArray = $Array<::java::security::cert::Certificate>;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Error = ::java::lang::Error;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $SecurityException = ::java::lang::SecurityException;
using $InvocationTargetException = ::java::lang::reflect::InvocationTargetException;
using $Method = ::java::lang::reflect::Method;
using $Modifier = ::java::lang::reflect::Modifier;
using $URL = ::java::net::URL;
using $AccessController = ::java::security::AccessController;
using $AllPermission = ::java::security::AllPermission;
using $CodeSource = ::java::security::CodeSource;
using $PermissionCollection = ::java::security::PermissionCollection;
using $SecureClassLoader = ::java::security::SecureClassLoader;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;
using $MethodUtil$1 = ::sun::reflect::misc::MethodUtil$1;
using $MethodUtil$Signature = ::sun::reflect::misc::MethodUtil$Signature;
using $ReflectUtil = ::sun::reflect::misc::ReflectUtil;

namespace sun {
	namespace reflect {
		namespace misc {

$String* MethodUtil::MISC_PKG = nullptr;
$String* MethodUtil::TRAMPOLINE = nullptr;
$Method* MethodUtil::bounce = nullptr;

void MethodUtil::init$() {
	$SecureClassLoader::init$();
}

$Method* MethodUtil::getMethod($Class* cls, $String* name, $ClassArray* args) {
	$init(MethodUtil);
	$beforeCallerSensitive();
	$ReflectUtil::checkPackageAccess(cls);
	return $nc(cls)->getMethod(name, args);
}

$MethodArray* MethodUtil::getMethods($Class* cls) {
	$init(MethodUtil);
	$beforeCallerSensitive();
	$ReflectUtil::checkPackageAccess(cls);
	return $nc(cls)->getMethods();
}

$MethodArray* MethodUtil::getPublicMethods($Class* cls) {
	$init(MethodUtil);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	if ($System::getSecurityManager() == nullptr) {
		return $nc(cls)->getMethods();
	}
	$var($Map, sigs, $new($HashMap));
	while (cls != nullptr) {
		bool done = getInternalPublicMethods(cls, sigs);
		if (done) {
			break;
		}
		getInterfaceMethods(cls, sigs);
		cls = cls->getSuperclass();
	}
	return $cast($MethodArray, $$nc(sigs->values())->toArray($$new($MethodArray, sigs->size())));
}

void MethodUtil::getInterfaceMethods($Class* cls, $Map* sigs) {
	$init(MethodUtil);
	$var($ClassArray, intfs, $nc(cls)->getInterfaces());
	for (int32_t i = 0; i < intfs->length; ++i) {
		$Class* intf = intfs->get(i);
		bool done = getInternalPublicMethods(intf, sigs);
		if (!done) {
			getInterfaceMethods(intf, sigs);
		}
	}
}

bool MethodUtil::getInternalPublicMethods($Class* cls, $Map* sigs) {
	$init(MethodUtil);
	$beforeCallerSensitive();
	$var($MethodArray, methods, nullptr);
	try {
		if (!$Modifier::isPublic($nc(cls)->getModifiers())) {
			return false;
		}
		if (!$ReflectUtil::isPackageAccessible(cls)) {
			return false;
		}
		$assign(methods, cls->getMethods());
	} catch ($SecurityException& se) {
		return false;
	}
	bool done = true;
	for (int32_t i = 0; i < $nc(methods)->length; ++i) {
		$Class* dc = $nc(methods->get(i))->getDeclaringClass();
		if (!$Modifier::isPublic($nc(dc)->getModifiers())) {
			done = false;
			break;
		}
	}
	if (done) {
		for (int32_t i = 0; i < methods->length; ++i) {
			addMethod(sigs, methods->get(i));
		}
	} else {
		for (int32_t i = 0; i < methods->length; ++i) {
			$Class* dc = $nc(methods->get(i))->getDeclaringClass();
			if ($nc($of(cls))->equals(dc)) {
				addMethod(sigs, methods->get(i));
			}
		}
	}
	return done;
}

void MethodUtil::addMethod($Map* sigs, $Method* method) {
	$init(MethodUtil);
	$useLocalObjectStack();
	$var($MethodUtil$Signature, signature, $new($MethodUtil$Signature, method));
	if (!$nc(sigs)->containsKey(signature)) {
		sigs->put(signature, method);
	} else if (!$nc($nc(method)->getDeclaringClass())->isInterface()) {
		$var($Method, old, $cast($Method, sigs->get(signature)));
		if ($nc($nc(old)->getDeclaringClass())->isInterface()) {
			sigs->put(signature, method);
		}
	}
}

$Object* MethodUtil::invoke($Method* m, Object$* obj, $ObjectArray* params) {
	$init(MethodUtil);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	try {
		return $nc(MethodUtil::bounce)->invoke(nullptr, $$new($ObjectArray, {
			m,
			obj,
			params
		}));
	} catch ($InvocationTargetException& ie) {
		$var($Throwable, t, ie->getCause());
		if ($instanceOf($InvocationTargetException, t)) {
			$throw($cast($InvocationTargetException, t));
		} else if ($instanceOf($IllegalAccessException, t)) {
			$throw($cast($IllegalAccessException, t));
		} else if ($instanceOf($RuntimeException, t)) {
			$throw($cast($RuntimeException, t));
		} else if ($instanceOf($Error, t)) {
			$throw($cast($Error, t));
		} else {
			$throwNew($Error, "Unexpected invocation error"_s, t);
		}
	} catch ($IllegalAccessException& iae) {
		$throwNew($Error, "Unexpected invocation error"_s, iae);
	}
	$shouldNotReachHere();
}

$Method* MethodUtil::getTrampoline() {
	$init(MethodUtil);
	$beforeCallerSensitive();
	try {
		return $cast($Method, $AccessController::doPrivileged($$new($MethodUtil$1)));
	} catch ($Exception& e) {
		$throwNew($InternalError, "bouncer cannot be found"_s, e);
	}
	$shouldNotReachHere();
}

$Class* MethodUtil::loadClass($String* name, bool resolve) {
	$synchronized(this) {
		$beforeCallerSensitive();
		$ReflectUtil::checkPackageAccess(name);
		$Class* c = findLoadedClass(name);
		if (c == nullptr) {
			try {
				c = findClass(name);
			} catch ($ClassNotFoundException& e) {
			}
			if (c == nullptr) {
				c = $$nc(getParent())->loadClass(name);
			}
		}
		if (resolve) {
			resolveClass(c);
		}
		return c;
	}
}

$Class* MethodUtil::findClass($String* name) {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	if (!$nc(name)->startsWith(MethodUtil::MISC_PKG)) {
		$throwNew($ClassNotFoundException, name);
	}
	$var($String, path, $(name->replace(u'.', u'/'))->concat(".class"_s));
	try {
		$var($InputStream, in, $$nc($Object::class$->getModule())->getResourceAsStream(path));
		if (in != nullptr) {
			$var($InputStream, twrVar0$, in);
			$var($Throwable, var$0, nullptr);
			$var($Class, var$2, nullptr);
			bool return$1 = false;
			try {
				try {
					$var($bytes, b, in->readAllBytes());
					var$2 = defineClass(name, b);
					return$1 = true;
					goto $finally;
				} catch ($Throwable& t$) {
					if (twrVar0$ != nullptr) {
						try {
							twrVar0$->close();
						} catch ($Throwable& x2) {
							t$->addSuppressed(x2);
						}
					}
					$throw(t$);
				}
			} catch ($Throwable& var$3) {
				$assign(var$0, var$3);
			} $finally: {
				if (twrVar0$ != nullptr) {
					twrVar0$->close();
				}
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
			if (return$1) {
				return var$2;
			}
		}
	} catch ($IOException& e) {
		$throwNew($ClassNotFoundException, name, e);
	}
	$throwNew($ClassNotFoundException, name);
	$shouldNotReachHere();
}

$Class* MethodUtil::defineClass($String* name, $bytes* b) {
	$useLocalObjectStack();
	$var($CodeSource, cs, $new($CodeSource, nullptr, ($CertificateArray*)nullptr));
	if (!$nc(name)->equals(MethodUtil::TRAMPOLINE)) {
		$throwNew($IOException, $$str({"MethodUtil: bad name "_s, name}));
	}
	return defineClass(name, b, 0, $nc(b)->length, cs);
}

$PermissionCollection* MethodUtil::getPermissions($CodeSource* codesource) {
	$useLocalObjectStack();
	$var($PermissionCollection, perms, $SecureClassLoader::getPermissions(codesource));
	$nc(perms)->add($$new($AllPermission));
	return perms;
}

$Class* MethodUtil::getTrampolineClass() {
	$init(MethodUtil);
	$beforeCallerSensitive();
	try {
		return $Class::forName(MethodUtil::TRAMPOLINE, true, $$new(MethodUtil));
	} catch ($ClassNotFoundException& e) {
	}
	return nullptr;
}

void MethodUtil::clinit$($Class* clazz) {
	$assignStatic(MethodUtil::MISC_PKG, "sun.reflect.misc."_s);
	$assignStatic(MethodUtil::TRAMPOLINE, $str({MethodUtil::MISC_PKG, "Trampoline"_s}));
	$assignStatic(MethodUtil::bounce, MethodUtil::getTrampoline());
}

MethodUtil::MethodUtil() {
}

$Class* MethodUtil::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"MISC_PKG", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MethodUtil, MISC_PKG)},
		{"TRAMPOLINE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MethodUtil, TRAMPOLINE)},
		{"bounce", "Ljava/lang/reflect/Method;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MethodUtil, bounce)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(MethodUtil, init$, void)},
		{"addMethod", "(Ljava/util/Map;Ljava/lang/reflect/Method;)V", "(Ljava/util/Map<Lsun/reflect/misc/MethodUtil$Signature;Ljava/lang/reflect/Method;>;Ljava/lang/reflect/Method;)V", $PRIVATE | $STATIC, $staticMethod(MethodUtil, addMethod, void, $Map*, $Method*)},
		{"defineClass", "(Ljava/lang/String;[B)Ljava/lang/Class;", "(Ljava/lang/String;[B)Ljava/lang/Class<*>;", $PRIVATE, $method(MethodUtil, defineClass, $Class*, $String*, $bytes*), "java.io.IOException"},
		{"findClass", "(Ljava/lang/String;)Ljava/lang/Class;", "(Ljava/lang/String;)Ljava/lang/Class<*>;", $PROTECTED, $virtualMethod(MethodUtil, findClass, $Class*, $String*), "java.lang.ClassNotFoundException"},
		{"getInterfaceMethods", "(Ljava/lang/Class;Ljava/util/Map;)V", "(Ljava/lang/Class<*>;Ljava/util/Map<Lsun/reflect/misc/MethodUtil$Signature;Ljava/lang/reflect/Method;>;)V", $PRIVATE | $STATIC, $staticMethod(MethodUtil, getInterfaceMethods, void, $Class*, $Map*)},
		{"getInternalPublicMethods", "(Ljava/lang/Class;Ljava/util/Map;)Z", "(Ljava/lang/Class<*>;Ljava/util/Map<Lsun/reflect/misc/MethodUtil$Signature;Ljava/lang/reflect/Method;>;)Z", $PRIVATE | $STATIC, $staticMethod(MethodUtil, getInternalPublicMethods, bool, $Class*, $Map*)},
		{"getMethod", "(Ljava/lang/Class;Ljava/lang/String;[Ljava/lang/Class;)Ljava/lang/reflect/Method;", "(Ljava/lang/Class<*>;Ljava/lang/String;[Ljava/lang/Class<*>;)Ljava/lang/reflect/Method;", $PUBLIC | $STATIC, $staticMethod(MethodUtil, getMethod, $Method*, $Class*, $String*, $ClassArray*), "java.lang.NoSuchMethodException"},
		{"getMethods", "(Ljava/lang/Class;)[Ljava/lang/reflect/Method;", "(Ljava/lang/Class<*>;)[Ljava/lang/reflect/Method;", $PUBLIC | $STATIC, $staticMethod(MethodUtil, getMethods, $MethodArray*, $Class*)},
		{"getPermissions", "(Ljava/security/CodeSource;)Ljava/security/PermissionCollection;", nullptr, $PROTECTED, $virtualMethod(MethodUtil, getPermissions, $PermissionCollection*, $CodeSource*)},
		{"getPublicMethods", "(Ljava/lang/Class;)[Ljava/lang/reflect/Method;", "(Ljava/lang/Class<*>;)[Ljava/lang/reflect/Method;", $PUBLIC | $STATIC, $staticMethod(MethodUtil, getPublicMethods, $MethodArray*, $Class*)},
		{"getTrampoline", "()Ljava/lang/reflect/Method;", nullptr, $PRIVATE | $STATIC, $staticMethod(MethodUtil, getTrampoline, $Method*)},
		{"getTrampolineClass", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", $PRIVATE | $STATIC, $staticMethod(MethodUtil, getTrampolineClass, $Class*)},
		{"invoke", "(Ljava/lang/reflect/Method;Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC, $staticMethod(MethodUtil, invoke, $Object*, $Method*, Object$*, $ObjectArray*), "java.lang.reflect.InvocationTargetException,java.lang.IllegalAccessException"},
		{"loadClass", "(Ljava/lang/String;Z)Ljava/lang/Class;", "(Ljava/lang/String;Z)Ljava/lang/Class<*>;", $PROTECTED | $SYNCHRONIZED, $virtualMethod(MethodUtil, loadClass, $Class*, $String*, bool), "java.lang.ClassNotFoundException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.reflect.misc.MethodUtil$Signature", "sun.reflect.misc.MethodUtil", "Signature", $PRIVATE | $STATIC},
		{"sun.reflect.misc.MethodUtil$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.reflect.misc.MethodUtil",
		"java.security.SecureClassLoader",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.reflect.misc.MethodUtil$Signature,sun.reflect.misc.MethodUtil$1"
	};
	$loadClass(MethodUtil, name, initialize, &classInfo$$, MethodUtil::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(MethodUtil);
	});
	return class$;
}

$Class* MethodUtil::class$ = nullptr;

		} // misc
	} // reflect
} // sun