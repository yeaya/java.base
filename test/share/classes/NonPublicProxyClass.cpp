#include <NonPublicProxyClass.h>

#include <NonPublicProxyClass$1.h>
#include <NonPublicProxyClass$NewInstancePolicy.h>
#include <NonPublicProxyClass$NonPublicInterface.h>
#include <NonPublicProxyClass$PublicInterface.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/RuntimePermission.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/InvocationHandler.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/Modifier.h>
#include <java/lang/reflect/Proxy.h>
#include <java/lang/reflect/ReflectPermission.h>
#include <java/security/AccessControlException.h>
#include <java/security/Permission.h>
#include <java/security/Policy.h>
#include <jcpp.h>

#undef DEFAULT_POLICY
#undef NEW_PROXY_IN_PKG

using $NonPublicProxyClass$1 = ::NonPublicProxyClass$1;
using $NonPublicProxyClass$NewInstancePolicy = ::NonPublicProxyClass$NewInstancePolicy;
using $NonPublicProxyClass$NonPublicInterface = ::NonPublicProxyClass$NonPublicInterface;
using $NonPublicProxyClass$PublicInterface = ::NonPublicProxyClass$PublicInterface;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $RuntimePermission = ::java::lang::RuntimePermission;
using $SecurityManager = ::java::lang::SecurityManager;
using $Constructor = ::java::lang::reflect::Constructor;
using $InvocationHandler = ::java::lang::reflect::InvocationHandler;
using $Modifier = ::java::lang::reflect::Modifier;
using $Proxy = ::java::lang::reflect::Proxy;
using $ReflectPermission = ::java::lang::reflect::ReflectPermission;
using $AccessControlException = ::java::security::AccessControlException;
using $Permission = ::java::security::Permission;
using $Policy = ::java::security::Policy;

$FieldInfo _NonPublicProxyClass_FieldInfo_[] = {
	{"DEFAULT_POLICY", "Ljava/security/Policy;", nullptr, $STATIC | $FINAL, $staticField(NonPublicProxyClass, DEFAULT_POLICY)},
	{"loader", "Ljava/lang/ClassLoader;", nullptr, $PRIVATE | $FINAL, $field(NonPublicProxyClass, loader)},
	{"interfaces", "[Ljava/lang/Class;", "[Ljava/lang/Class<*>;", $PRIVATE | $FINAL, $field(NonPublicProxyClass, interfaces)},
	{"handler", "Ljava/lang/reflect/InvocationHandler;", nullptr, $PRIVATE | $FINAL, $field(NonPublicProxyClass, handler)},
	{"proxyClass", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PRIVATE, $field(NonPublicProxyClass, proxyClass)},
	{"NEW_PROXY_IN_PKG", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NonPublicProxyClass, NEW_PROXY_IN_PKG)},
	{}
};

$MethodInfo _NonPublicProxyClass_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/ClassLoader;[Ljava/lang/Class;)V", "(Ljava/lang/ClassLoader;[Ljava/lang/Class<*>;)V", $PUBLIC | $TRANSIENT, $method(static_cast<void(NonPublicProxyClass::*)($ClassLoader*,$ClassArray*)>(&NonPublicProxyClass::init$))},
	{"hasAccess", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(NonPublicProxyClass::*)()>(&NonPublicProxyClass::hasAccess))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&NonPublicProxyClass::main)), "java.lang.Exception"},
	{"newInstanceFromConstructor", "(Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;)V", $PRIVATE, $method(static_cast<void(NonPublicProxyClass::*)($Class*)>(&NonPublicProxyClass::newInstanceFromConstructor)), "java.lang.Exception"},
	{"newInvocationHandler", "()Ljava/lang/reflect/InvocationHandler;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$InvocationHandler*(*)()>(&NonPublicProxyClass::newInvocationHandler))},
	{"newProxyInstance", "()V", nullptr, $PRIVATE, $method(static_cast<void(NonPublicProxyClass::*)()>(&NonPublicProxyClass::newProxyInstance))},
	{"run", "()V", nullptr, $PUBLIC, nullptr, "java.lang.Exception"},
	{}
};

$InnerClassInfo _NonPublicProxyClass_InnerClassesInfo_[] = {
	{"NonPublicProxyClass$NewInstancePolicy", "NonPublicProxyClass", "NewInstancePolicy", $STATIC},
	{"NonPublicProxyClass$NonPublicInterface", "NonPublicProxyClass", "NonPublicInterface", $STATIC | $INTERFACE | $ABSTRACT},
	{"NonPublicProxyClass$PublicInterface", "NonPublicProxyClass", "PublicInterface", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"NonPublicProxyClass$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _NonPublicProxyClass_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"NonPublicProxyClass",
	"java.lang.Object",
	nullptr,
	_NonPublicProxyClass_FieldInfo_,
	_NonPublicProxyClass_MethodInfo_,
	nullptr,
	nullptr,
	_NonPublicProxyClass_InnerClassesInfo_,
	nullptr,
	nullptr,
	"NonPublicProxyClass$NewInstancePolicy,NonPublicProxyClass$NonPublicInterface,NonPublicProxyClass$PublicInterface,NonPublicProxyClass$1"
};

$Object* allocate$NonPublicProxyClass($Class* clazz) {
	return $of($alloc(NonPublicProxyClass));
}

$Policy* NonPublicProxyClass::DEFAULT_POLICY = nullptr;
$String* NonPublicProxyClass::NEW_PROXY_IN_PKG = nullptr;

void NonPublicProxyClass::main($StringArray* args) {
	$init(NonPublicProxyClass);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($ClassLoader, loader, $ClassLoader::getSystemClassLoader());
	$Class* zipConstantsClass = $Class::forName("java.util.zip.ZipConstants"_s, false, nullptr);
	$Class* fooClass = $Class::forName("p.Foo"_s);
		$load($NonPublicProxyClass$PublicInterface);
		$load($NonPublicProxyClass$NonPublicInterface);
	$var(NonPublicProxyClass, test1, $new(NonPublicProxyClass, loader, $$new($ClassArray, {
		$NonPublicProxyClass$PublicInterface::class$,
		$NonPublicProxyClass$NonPublicInterface::class$
	})));
	$var(NonPublicProxyClass, test2, $new(NonPublicProxyClass, loader, $$new($ClassArray, {
		fooClass,
		$NonPublicProxyClass$PublicInterface::class$
	})));
	$var(NonPublicProxyClass, test3, $new(NonPublicProxyClass, nullptr, $$new($ClassArray, {zipConstantsClass})));
	if ($nc(args)->length == 1) {
		{
			$var($String, s2808$, args->get(0));
			int32_t tmp2808$ = -1;
			switch ($nc(s2808$)->hashCode()) {
			case 0x05E0C11C:
				{
					if (s2808$->equals("grant"_s)) {
						tmp2808$ = 0;
					}
					break;
				}
			case 0x002EFE0C:
				{
					if (s2808$->equals("deny"_s)) {
						tmp2808$ = 1;
					}
					break;
				}
			}
			switch (tmp2808$) {
			case 0:
				{
					$Policy::setPolicy($$new($NonPublicProxyClass$NewInstancePolicy, true));
					break;
				}
			case 1:
				{
					$Policy::setPolicy($$new($NonPublicProxyClass$NewInstancePolicy, false));
					break;
				}
			default:
				{
					$throwNew($IllegalArgumentException, args->get(0));
				}
			}
		}
		$System::setSecurityManager($$new($SecurityManager));
	}
	test1->run();
	test2->run();
	test3->run();
	$init($System);
	$nc($System::out)->format("Test passed: security %s%n"_s, $$new($ObjectArray, {($nc(args)->length == 0 ? $of("manager not installed"_s) : $($of($Policy::getPolicy())))}));
}

void NonPublicProxyClass::init$($ClassLoader* loader, $ClassArray* intfs) {
	$set(this, handler, newInvocationHandler());
	$set(this, loader, loader);
	$set(this, interfaces, intfs);
}

void NonPublicProxyClass::run() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	bool hasAccess = this->loader != nullptr || this->hasAccess();
	try {
		$set(this, proxyClass, $Proxy::getProxyClass(this->loader, this->interfaces));
		if (!hasAccess) {
			$throwNew($RuntimeException, "should have no permission to create proxy class"_s);
		}
	} catch ($AccessControlException&) {
		$var($AccessControlException, e, $catch());
		if (hasAccess) {
			$throw(e);
		}
		$load($RuntimePermission);
		bool var$0 = $nc($of($(e->getPermission())))->getClass() != $RuntimePermission::class$;
		if (var$0 || !$nc($($nc($(e->getPermission()))->getName()))->equals("getClassLoader"_s)) {
			$throw(e);
		}
		return;
	}
	if ($Modifier::isPublic($nc(this->proxyClass)->getModifiers())) {
		$throwNew($RuntimeException, $$str({this->proxyClass, " must be non-public"_s}));
	}
	newProxyInstance();
	newInstanceFromConstructor(this->proxyClass);
}

bool NonPublicProxyClass::hasAccess() {
	$useLocalCurrentObjectStackCache();
	if ($System::getSecurityManager() == nullptr) {
		return true;
	}
	$load($NonPublicProxyClass$NewInstancePolicy);
	$var($NonPublicProxyClass$NewInstancePolicy, policy, $cast($NonPublicProxyClass$NewInstancePolicy, $NonPublicProxyClass$NewInstancePolicy::class$->cast($($Policy::getPolicy()))));
	return $nc(policy)->grant;
}

void NonPublicProxyClass::newProxyInstance() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	int32_t i = $nc($($nc(this->proxyClass)->getName()))->lastIndexOf((int32_t)u'.');
	$var($String, pkg, (i != -1) ? $nc($($nc(this->proxyClass)->getName()))->substring(0, i) : ""_s);
	bool var$0 = $nc(pkg)->isEmpty();
	bool hasAccess = var$0 || this->hasAccess();
	try {
		$Proxy::newProxyInstance(this->loader, this->interfaces, this->handler);
		if (!hasAccess) {
			$throwNew($RuntimeException, $$str({"ERROR: Proxy.newProxyInstance should fail "_s, this->proxyClass}));
		}
	} catch ($AccessControlException&) {
		$var($AccessControlException, e, $catch());
		if (hasAccess) {
			$throw(e);
		}
		$load($ReflectPermission);
		bool var$1 = $nc($of($(e->getPermission())))->getClass() != $ReflectPermission::class$;
		if (var$1 || !$nc($($nc($(e->getPermission()))->getName()))->equals($$str({NonPublicProxyClass::NEW_PROXY_IN_PKG, pkg}))) {
			$throw(e);
		}
	}
}

void NonPublicProxyClass::newInstanceFromConstructor($Class* proxyClass) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	bool isSamePackage = $nc($($nc(proxyClass)->getName()))->lastIndexOf((int32_t)u'.') == -1;
	try {
		$load($InvocationHandler);
		$var($Constructor, cons, proxyClass->getConstructor($$new($ClassArray, {$InvocationHandler::class$})));
		$nc(cons)->newInstance($$new($ObjectArray, {$($of(newInvocationHandler()))}));
		if (!isSamePackage) {
			$throwNew($RuntimeException, "ERROR: Constructor.newInstance should not succeed"_s);
		}
	} catch ($IllegalAccessException&) {
		$var($IllegalAccessException, e, $catch());
		if (isSamePackage) {
			$throw(e);
		}
	}
}

$InvocationHandler* NonPublicProxyClass::newInvocationHandler() {
	$init(NonPublicProxyClass);
	return $new($NonPublicProxyClass$1);
}

void clinit$NonPublicProxyClass($Class* class$) {
	$assignStatic(NonPublicProxyClass::NEW_PROXY_IN_PKG, "newProxyInPackage."_s);
	$assignStatic(NonPublicProxyClass::DEFAULT_POLICY, $Policy::getPolicy());
}

NonPublicProxyClass::NonPublicProxyClass() {
}

$Class* NonPublicProxyClass::load$($String* name, bool initialize) {
	$loadClass(NonPublicProxyClass, name, initialize, &_NonPublicProxyClass_ClassInfo_, clinit$NonPublicProxyClass, allocate$NonPublicProxyClass);
	return class$;
}

$Class* NonPublicProxyClass::class$ = nullptr;