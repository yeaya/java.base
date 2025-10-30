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
using $PrivilegedAction = ::java::security::PrivilegedAction;

namespace java {
	namespace net {

$FieldInfo _URLClassLoader$4_FieldInfo_[] = {
	{"this$0", "Ljava/net/URLClassLoader;", nullptr, $FINAL | $SYNTHETIC, $field(URLClassLoader$4, this$0)},
	{"val$fp", "Ljava/security/Permission;", nullptr, $FINAL | $SYNTHETIC, $field(URLClassLoader$4, val$fp)},
	{"val$sm", "Ljava/lang/SecurityManager;", nullptr, $FINAL | $SYNTHETIC, $field(URLClassLoader$4, val$sm)},
	{}
};

$MethodInfo _URLClassLoader$4_MethodInfo_[] = {
	{"<init>", "(Ljava/net/URLClassLoader;Ljava/lang/SecurityManager;Ljava/security/Permission;)V", nullptr, 0, $method(static_cast<void(URLClassLoader$4::*)($URLClassLoader*,$SecurityManager*,$Permission*)>(&URLClassLoader$4::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, nullptr, "java.lang.SecurityException"},
	{}
};

$EnclosingMethodInfo _URLClassLoader$4_EnclosingMethodInfo_ = {
	"java.net.URLClassLoader",
	"getPermissions",
	"(Ljava/security/CodeSource;)Ljava/security/PermissionCollection;"
};

$InnerClassInfo _URLClassLoader$4_InnerClassesInfo_[] = {
	{"java.net.URLClassLoader$4", nullptr, nullptr, 0},
	{}
};

$ClassInfo _URLClassLoader$4_ClassInfo_ = {
	$ACC_SUPER,
	"java.net.URLClassLoader$4",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_URLClassLoader$4_FieldInfo_,
	_URLClassLoader$4_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
	&_URLClassLoader$4_EnclosingMethodInfo_,
	_URLClassLoader$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.net.URLClassLoader"
};

$Object* allocate$URLClassLoader$4($Class* clazz) {
	return $of($alloc(URLClassLoader$4));
}

void URLClassLoader$4::init$($URLClassLoader* this$0, $SecurityManager* val$sm, $Permission* val$fp) {
	$set(this, this$0, this$0);
	$set(this, val$sm, val$sm);
	$set(this, val$fp, val$fp);
}

$Object* URLClassLoader$4::run() {
	$nc(this->val$sm)->checkPermission(this->val$fp);
	return $of(nullptr);
}

URLClassLoader$4::URLClassLoader$4() {
}

$Class* URLClassLoader$4::load$($String* name, bool initialize) {
	$loadClass(URLClassLoader$4, name, initialize, &_URLClassLoader$4_ClassInfo_, allocate$URLClassLoader$4);
	return class$;
}

$Class* URLClassLoader$4::class$ = nullptr;

	} // net
} // java