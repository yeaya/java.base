#include <test/java/lang/invoke/MethodTypeSecurityManager.h>

#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/RuntimePermission.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessControlException.h>
#include <java/security/Permission.h>
#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $RuntimePermission = ::java::lang::RuntimePermission;
using $SecurityManager = ::java::lang::SecurityManager;
using $MethodType = ::java::lang::invoke::MethodType;
using $AccessControlException = ::java::security::AccessControlException;
using $Permission = ::java::security::Permission;

namespace test {
	namespace java {
		namespace lang {
			namespace invoke {

$FieldInfo _MethodTypeSecurityManager_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(MethodTypeSecurityManager, $assertionsDisabled)},
	{"hasClassLoaderAccess", "Z", nullptr, $PRIVATE | $STATIC, $staticField(MethodTypeSecurityManager, hasClassLoaderAccess)},
	{}
};

$MethodInfo _MethodTypeSecurityManager_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MethodTypeSecurityManager::*)()>(&MethodTypeSecurityManager::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $method(static_cast<void(*)($StringArray*)>(&MethodTypeSecurityManager::main)), "java.lang.Throwable"},
	{"throwACC", "(Ljava/lang/String;Ljava/lang/ClassLoader;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*,$ClassLoader*)>(&MethodTypeSecurityManager::throwACC))},
	{}
};

$ClassInfo _MethodTypeSecurityManager_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"test.java.lang.invoke.MethodTypeSecurityManager",
	"java.lang.Object",
	nullptr,
	_MethodTypeSecurityManager_FieldInfo_,
	_MethodTypeSecurityManager_MethodInfo_
};

$Object* allocate$MethodTypeSecurityManager($Class* clazz) {
	return $of($alloc(MethodTypeSecurityManager));
}

bool MethodTypeSecurityManager::$assertionsDisabled = false;
bool MethodTypeSecurityManager::hasClassLoaderAccess = false;

void MethodTypeSecurityManager::init$() {
}

void MethodTypeSecurityManager::main($StringArray* args) {
	$init(MethodTypeSecurityManager);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($ClassLoader, platformLoader, $ClassLoader::getPlatformClassLoader());
	$var($ClassLoader, appLoader, $ClassLoader::getSystemClassLoader());
	MethodTypeSecurityManager::hasClassLoaderAccess = $nc(args)->length == 1 && "access"_s->equals(args->get(0));
	if (!MethodTypeSecurityManager::$assertionsDisabled && !(MethodTypeSecurityManager::hasClassLoaderAccess || $System::getSecurityManager() == nullptr)) {
		$throwNew($AssertionError);
	}
	if (!MethodTypeSecurityManager::hasClassLoaderAccess) {
		$System::setSecurityManager($$new($SecurityManager));
	}
	throwACC("()Ljdk/internal/misc/VM;"_s, nullptr);
	throwACC("()Ljdk/internal/misc/VM;"_s, appLoader);
	$MethodType::fromMethodDescriptorString("()Ljdk/internal/misc/VM;"_s, platformLoader);
}

void MethodTypeSecurityManager::throwACC($String* desc, $ClassLoader* loader) {
	$init(MethodTypeSecurityManager);
	$useLocalCurrentObjectStackCache();
	try {
		$MethodType::fromMethodDescriptorString(desc, loader);
		$throwNew($RuntimeException, "should never leak JDK internal class"_s);
	} catch ($AccessControlException&) {
		$var($AccessControlException, e, $catch());
		$init($System);
		$nc($System::out)->println($(e->getMessage()));
		$var($Permission, perm, e->getPermission());
		if (!($instanceOf($RuntimePermission, perm))) {
			$throw(e);
		}
		{
			$var($String, s3149$, $nc(perm)->getName());
			int32_t tmp3149$ = -1;
			switch ($nc(s3149$)->hashCode()) {
			case (int32_t)0xA0BF1275:
				{
					if (s3149$->equals("getClassLoader"_s)) {
						tmp3149$ = 0;
					}
					break;
				}
			case (int32_t)0xCF34445F:
				{
					if (s3149$->equals("accessClassInPackage.jdk.internal.misc"_s)) {
						tmp3149$ = 1;
					}
					break;
				}
			}
			switch (tmp3149$) {
			case 0:
				{
					if (!MethodTypeSecurityManager::hasClassLoaderAccess) {
						break;
					}
				}
			case 1:
				{
					break;
				}
			default:
				{
					$throw(e);
				}
			}
		}
	}
}

void clinit$MethodTypeSecurityManager($Class* class$) {
	MethodTypeSecurityManager::$assertionsDisabled = !MethodTypeSecurityManager::class$->desiredAssertionStatus();
}

MethodTypeSecurityManager::MethodTypeSecurityManager() {
}

$Class* MethodTypeSecurityManager::load$($String* name, bool initialize) {
	$loadClass(MethodTypeSecurityManager, name, initialize, &_MethodTypeSecurityManager_ClassInfo_, clinit$MethodTypeSecurityManager, allocate$MethodTypeSecurityManager);
	return class$;
}

$Class* MethodTypeSecurityManager::class$ = nullptr;

			} // invoke
		} // lang
	} // java
} // test