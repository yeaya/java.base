#include <sun/security/provider/PolicyFile$7.h>

#include <java/security/CodeSource.h>
#include <sun/security/provider/PolicyFile.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CodeSource = ::java::security::CodeSource;
using $PolicyFile = ::sun::security::provider::PolicyFile;

namespace sun {
	namespace security {
		namespace provider {

$FieldInfo _PolicyFile$7_FieldInfo_[] = {
	{"this$0", "Lsun/security/provider/PolicyFile;", nullptr, $FINAL | $SYNTHETIC, $field(PolicyFile$7, this$0)},
	{"val$cs", "Ljava/security/CodeSource;", nullptr, $FINAL | $SYNTHETIC, $field(PolicyFile$7, val$cs)},
	{}
};

$MethodInfo _PolicyFile$7_MethodInfo_[] = {
	{"<init>", "(Lsun/security/provider/PolicyFile;Ljava/security/CodeSource;)V", nullptr, 0, $method(static_cast<void(PolicyFile$7::*)($PolicyFile*,$CodeSource*)>(&PolicyFile$7::init$))},
	{"run", "()Ljava/security/CodeSource;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _PolicyFile$7_EnclosingMethodInfo_ = {
	"sun.security.provider.PolicyFile",
	"getPermissions",
	"(Ljava/security/Permissions;Ljava/security/CodeSource;)Ljava/security/PermissionCollection;"
};

$InnerClassInfo _PolicyFile$7_InnerClassesInfo_[] = {
	{"sun.security.provider.PolicyFile$7", nullptr, nullptr, 0},
	{}
};

$ClassInfo _PolicyFile$7_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.provider.PolicyFile$7",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_PolicyFile$7_FieldInfo_,
	_PolicyFile$7_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/security/CodeSource;>;",
	&_PolicyFile$7_EnclosingMethodInfo_,
	_PolicyFile$7_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.provider.PolicyFile"
};

$Object* allocate$PolicyFile$7($Class* clazz) {
	return $of($alloc(PolicyFile$7));
}

void PolicyFile$7::init$($PolicyFile* this$0, $CodeSource* val$cs) {
	$set(this, this$0, this$0);
	$set(this, val$cs, val$cs);
}

$Object* PolicyFile$7::run() {
	return $of(this->this$0->canonicalizeCodebase(this->val$cs, true));
}

PolicyFile$7::PolicyFile$7() {
}

$Class* PolicyFile$7::load$($String* name, bool initialize) {
	$loadClass(PolicyFile$7, name, initialize, &_PolicyFile$7_ClassInfo_, allocate$PolicyFile$7);
	return class$;
}

$Class* PolicyFile$7::class$ = nullptr;

		} // provider
	} // security
} // sun