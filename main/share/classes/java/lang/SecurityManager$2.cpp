#include <java/lang/SecurityManager$2.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/Security.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityManager = ::java::lang::SecurityManager;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Security = ::java::security::Security;

namespace java {
	namespace lang {

$FieldInfo _SecurityManager$2_FieldInfo_[] = {
	{"this$0", "Ljava/lang/SecurityManager;", nullptr, $FINAL | $SYNTHETIC, $field(SecurityManager$2, this$0)},
	{}
};

$MethodInfo _SecurityManager$2_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/SecurityManager;)V", nullptr, 0, $method(static_cast<void(SecurityManager$2::*)($SecurityManager*)>(&SecurityManager$2::init$))},
	{"run", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _SecurityManager$2_EnclosingMethodInfo_ = {
	"java.lang.SecurityManager",
	"checkPackageDefinition",
	"(Ljava/lang/String;)V"
};

$InnerClassInfo _SecurityManager$2_InnerClassesInfo_[] = {
	{"java.lang.SecurityManager$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SecurityManager$2_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.SecurityManager$2",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_SecurityManager$2_FieldInfo_,
	_SecurityManager$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/String;>;",
	&_SecurityManager$2_EnclosingMethodInfo_,
	_SecurityManager$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.SecurityManager"
};

$Object* allocate$SecurityManager$2($Class* clazz) {
	return $of($alloc(SecurityManager$2));
}

void SecurityManager$2::init$($SecurityManager* this$0) {
	$set(this, this$0, this$0);
}

$Object* SecurityManager$2::run() {
	return $of($Security::getProperty("package.definition"_s));
}

SecurityManager$2::SecurityManager$2() {
}

$Class* SecurityManager$2::load$($String* name, bool initialize) {
	$loadClass(SecurityManager$2, name, initialize, &_SecurityManager$2_ClassInfo_, allocate$SecurityManager$2);
	return class$;
}

$Class* SecurityManager$2::class$ = nullptr;

	} // lang
} // java