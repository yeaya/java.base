#include <java/security/AccessControlContext$1.h>

#include <java/security/AccessControlContext.h>
#include <java/security/ProtectionDomain.h>
#include <sun/security/util/Debug.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessControlContext = ::java::security::AccessControlContext;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $ProtectionDomain = ::java::security::ProtectionDomain;
using $Debug = ::sun::security::util::Debug;

namespace java {
	namespace security {

$FieldInfo _AccessControlContext$1_FieldInfo_[] = {
	{"this$0", "Ljava/security/AccessControlContext;", nullptr, $FINAL | $SYNTHETIC, $field(AccessControlContext$1, this$0)},
	{"val$pd", "Ljava/security/ProtectionDomain;", nullptr, $FINAL | $SYNTHETIC, $field(AccessControlContext$1, val$pd)},
	{"val$db", "Lsun/security/util/Debug;", nullptr, $FINAL | $SYNTHETIC, $field(AccessControlContext$1, val$db)},
	{}
};

$MethodInfo _AccessControlContext$1_MethodInfo_[] = {
	{"<init>", "(Ljava/security/AccessControlContext;Lsun/security/util/Debug;Ljava/security/ProtectionDomain;)V", nullptr, 0, $method(static_cast<void(AccessControlContext$1::*)($AccessControlContext*,$Debug*,$ProtectionDomain*)>(&AccessControlContext$1::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _AccessControlContext$1_EnclosingMethodInfo_ = {
	"java.security.AccessControlContext",
	"checkPermission",
	"(Ljava/security/Permission;)V"
};

$InnerClassInfo _AccessControlContext$1_InnerClassesInfo_[] = {
	{"java.security.AccessControlContext$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AccessControlContext$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.security.AccessControlContext$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_AccessControlContext$1_FieldInfo_,
	_AccessControlContext$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
	&_AccessControlContext$1_EnclosingMethodInfo_,
	_AccessControlContext$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.security.AccessControlContext"
};

$Object* allocate$AccessControlContext$1($Class* clazz) {
	return $of($alloc(AccessControlContext$1));
}

void AccessControlContext$1::init$($AccessControlContext* this$0, $Debug* val$db, $ProtectionDomain* val$pd) {
	$set(this, this$0, this$0);
	$set(this, val$db, val$db);
	$set(this, val$pd, val$pd);
}

$Object* AccessControlContext$1::run() {
	$nc(this->val$db)->println($$str({"domain that failed "_s, this->val$pd}));
	return $of(nullptr);
}

AccessControlContext$1::AccessControlContext$1() {
}

$Class* AccessControlContext$1::load$($String* name, bool initialize) {
	$loadClass(AccessControlContext$1, name, initialize, &_AccessControlContext$1_ClassInfo_, allocate$AccessControlContext$1);
	return class$;
}

$Class* AccessControlContext$1::class$ = nullptr;

	} // security
} // java