#include <java/lang/ClassLoader$1.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/SecurityManager.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityManager = ::java::lang::SecurityManager;

namespace java {
	namespace lang {

void ClassLoader$1::init$($ClassLoader* this$0, $SecurityManager* val$sm, $String* val$packageName) {
	$set(this, this$0, this$0);
	$set(this, val$sm, val$sm);
	$set(this, val$packageName, val$packageName);
}

$Object* ClassLoader$1::run() {
	$nc(this->val$sm)->checkPackageAccess(this->val$packageName);
	return nullptr;
}

ClassLoader$1::ClassLoader$1() {
}

$Class* ClassLoader$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/lang/ClassLoader;", nullptr, $FINAL | $SYNTHETIC, $field(ClassLoader$1, this$0)},
		{"val$packageName", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(ClassLoader$1, val$packageName)},
		{"val$sm", "Ljava/lang/SecurityManager;", nullptr, $FINAL | $SYNTHETIC, $field(ClassLoader$1, val$sm)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/ClassLoader;Ljava/lang/SecurityManager;Ljava/lang/String;)V", nullptr, 0, $method(ClassLoader$1, init$, void, $ClassLoader*, $SecurityManager*, $String*)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(ClassLoader$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.lang.ClassLoader",
		"checkPackageAccess",
		"(Ljava/lang/Class;Ljava/security/ProtectionDomain;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.ClassLoader$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.ClassLoader$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.ClassLoader"
	};
	$loadClass(ClassLoader$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ClassLoader$1);
	});
	return class$;
}

$Class* ClassLoader$1::class$ = nullptr;

	} // lang
} // java