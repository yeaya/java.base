#include <java/net/URLClassLoader$4.h>
#include <java/lang/SecurityManager.h>
#include <java/net/URLClassLoader.h>
#include <java/security/Permission.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityManager = ::java::lang::SecurityManager;
using $URLClassLoader = ::java::net::URLClassLoader;
using $Permission = ::java::security::Permission;

namespace java {
	namespace net {

void URLClassLoader$4::init$($URLClassLoader* this$0, $SecurityManager* val$sm, $Permission* val$fp) {
	$set(this, this$0, this$0);
	$set(this, val$sm, val$sm);
	$set(this, val$fp, val$fp);
}

$Object* URLClassLoader$4::run() {
	$nc(this->val$sm)->checkPermission(this->val$fp);
	return nullptr;
}

URLClassLoader$4::URLClassLoader$4() {
}

$Class* URLClassLoader$4::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/net/URLClassLoader;", nullptr, $FINAL | $SYNTHETIC, $field(URLClassLoader$4, this$0)},
		{"val$fp", "Ljava/security/Permission;", nullptr, $FINAL | $SYNTHETIC, $field(URLClassLoader$4, val$fp)},
		{"val$sm", "Ljava/lang/SecurityManager;", nullptr, $FINAL | $SYNTHETIC, $field(URLClassLoader$4, val$sm)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/net/URLClassLoader;Ljava/lang/SecurityManager;Ljava/security/Permission;)V", nullptr, 0, $method(URLClassLoader$4, init$, void, $URLClassLoader*, $SecurityManager*, $Permission*)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(URLClassLoader$4, run, $Object*), "java.lang.SecurityException"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.net.URLClassLoader",
		"getPermissions",
		"(Ljava/security/CodeSource;)Ljava/security/PermissionCollection;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.net.URLClassLoader$4", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.net.URLClassLoader$4",
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
		"java.net.URLClassLoader"
	};
	$loadClass(URLClassLoader$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(URLClassLoader$4);
	});
	return class$;
}

$Class* URLClassLoader$4::class$ = nullptr;

	} // net
} // java