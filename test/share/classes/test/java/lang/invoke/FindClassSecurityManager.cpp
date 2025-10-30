#include <test/java/lang/invoke/FindClassSecurityManager.h>

#include <java/lang/AssertionError.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodHandles.h>
#include <jcpp.h>

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityManager = ::java::lang::SecurityManager;
using $MethodHandles = ::java::lang::invoke::MethodHandles;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;

namespace test {
	namespace java {
		namespace lang {
			namespace invoke {

$FieldInfo _FindClassSecurityManager_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(FindClassSecurityManager, $assertionsDisabled)},
	{}
};

$MethodInfo _FindClassSecurityManager_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FindClassSecurityManager::*)()>(&FindClassSecurityManager::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&FindClassSecurityManager::main)), "java.lang.Throwable"},
	{}
};

$ClassInfo _FindClassSecurityManager_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"test.java.lang.invoke.FindClassSecurityManager",
	"java.lang.Object",
	nullptr,
	_FindClassSecurityManager_FieldInfo_,
	_FindClassSecurityManager_MethodInfo_
};

$Object* allocate$FindClassSecurityManager($Class* clazz) {
	return $of($alloc(FindClassSecurityManager));
}

bool FindClassSecurityManager::$assertionsDisabled = false;

void FindClassSecurityManager::init$() {
}

void FindClassSecurityManager::main($StringArray* args) {
	$init(FindClassSecurityManager);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	if (!FindClassSecurityManager::$assertionsDisabled && !(nullptr != $System::getSecurityManager())) {
		$throwNew($AssertionError);
	}
	$Class* thisClass = FindClassSecurityManager::class$;
	$var($MethodHandles$Lookup, lookup, $MethodHandles::lookup());
	$Class* lookedUp = $nc(lookup)->findClass($($nc(thisClass)->getName()));
	if (!FindClassSecurityManager::$assertionsDisabled && !(thisClass == lookedUp)) {
		$throwNew($AssertionError);
	}
	$Class* accessed = lookup->accessClass(thisClass);
	if (!FindClassSecurityManager::$assertionsDisabled && !(thisClass == accessed)) {
		$throwNew($AssertionError);
	}
}

void clinit$FindClassSecurityManager($Class* class$) {
	FindClassSecurityManager::$assertionsDisabled = !FindClassSecurityManager::class$->desiredAssertionStatus();
}

FindClassSecurityManager::FindClassSecurityManager() {
}

$Class* FindClassSecurityManager::load$($String* name, bool initialize) {
	$loadClass(FindClassSecurityManager, name, initialize, &_FindClassSecurityManager_ClassInfo_, clinit$FindClassSecurityManager, allocate$FindClassSecurityManager);
	return class$;
}

$Class* FindClassSecurityManager::class$ = nullptr;

			} // invoke
		} // lang
	} // java
} // test