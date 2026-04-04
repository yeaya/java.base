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
using $MethodHandles = ::java::lang::invoke::MethodHandles;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;

namespace test {
	namespace java {
		namespace lang {
			namespace invoke {

bool FindClassSecurityManager::$assertionsDisabled = false;

void FindClassSecurityManager::init$() {
}

void FindClassSecurityManager::main($StringArray* args) {
	$init(FindClassSecurityManager);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	if (!FindClassSecurityManager::$assertionsDisabled && !(nullptr != $System::getSecurityManager())) {
		$throwNew($AssertionError);
	}
	$Class* thisClass = FindClassSecurityManager::class$;
	$var($MethodHandles$Lookup, lookup, $MethodHandles::lookup());
	$Class* lookedUp = $nc(lookup)->findClass($(thisClass->getName()));
	if (!FindClassSecurityManager::$assertionsDisabled && !(thisClass == lookedUp)) {
		$throwNew($AssertionError);
	}
	$Class* accessed = lookup->accessClass(thisClass);
	if (!FindClassSecurityManager::$assertionsDisabled && !(thisClass == accessed)) {
		$throwNew($AssertionError);
	}
}

void FindClassSecurityManager::clinit$($Class* clazz) {
	FindClassSecurityManager::$assertionsDisabled = !FindClassSecurityManager::class$->desiredAssertionStatus();
}

FindClassSecurityManager::FindClassSecurityManager() {
}

$Class* FindClassSecurityManager::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(FindClassSecurityManager, $assertionsDisabled)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FindClassSecurityManager, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(FindClassSecurityManager, main, void, $StringArray*), "java.lang.Throwable"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"test.java.lang.invoke.FindClassSecurityManager",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(FindClassSecurityManager, name, initialize, &classInfo$$, FindClassSecurityManager::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(FindClassSecurityManager);
	});
	return class$;
}

$Class* FindClassSecurityManager::class$ = nullptr;

			} // invoke
		} // lang
	} // java
} // test