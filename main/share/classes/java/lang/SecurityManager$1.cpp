#include <java/lang/SecurityManager$1.h>

#include <java/lang/SecurityManager.h>
#include <java/security/Security.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityManager = ::java::lang::SecurityManager;
using $Security = ::java::security::Security;

namespace java {
	namespace lang {

$FieldInfo _SecurityManager$1_FieldInfo_[] = {
	{"this$0", "Ljava/lang/SecurityManager;", nullptr, $FINAL | $SYNTHETIC, $field(SecurityManager$1, this$0)},
	{}
};

$MethodInfo _SecurityManager$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/SecurityManager;)V", nullptr, 0, $method(static_cast<void(SecurityManager$1::*)($SecurityManager*)>(&SecurityManager$1::init$))},
	{"run", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _SecurityManager$1_EnclosingMethodInfo_ = {
	"java.lang.SecurityManager",
	"checkPackageAccess",
	"(Ljava/lang/String;)V"
};

$InnerClassInfo _SecurityManager$1_InnerClassesInfo_[] = {
	{"java.lang.SecurityManager$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SecurityManager$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.SecurityManager$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_SecurityManager$1_FieldInfo_,
	_SecurityManager$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/String;>;",
	&_SecurityManager$1_EnclosingMethodInfo_,
	_SecurityManager$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.SecurityManager"
};

$Object* allocate$SecurityManager$1($Class* clazz) {
	return $of($alloc(SecurityManager$1));
}

void SecurityManager$1::init$($SecurityManager* this$0) {
	$set(this, this$0, this$0);
}

$Object* SecurityManager$1::run() {
	return $of($Security::getProperty("package.access"_s));
}

SecurityManager$1::SecurityManager$1() {
}

$Class* SecurityManager$1::load$($String* name, bool initialize) {
	$loadClass(SecurityManager$1, name, initialize, &_SecurityManager$1_ClassInfo_, allocate$SecurityManager$1);
	return class$;
}

$Class* SecurityManager$1::class$ = nullptr;

	} // lang
} // java