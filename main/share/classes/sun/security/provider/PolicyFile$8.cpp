#include <sun/security/provider/PolicyFile$8.h>

#include <java/security/CodeSource.h>
#include <sun/security/provider/PolicyFile$PolicyEntry.h>
#include <sun/security/provider/PolicyFile.h>
#include <jcpp.h>

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CodeSource = ::java::security::CodeSource;
using $PolicyFile = ::sun::security::provider::PolicyFile;
using $PolicyFile$PolicyEntry = ::sun::security::provider::PolicyFile$PolicyEntry;

namespace sun {
	namespace security {
		namespace provider {

$FieldInfo _PolicyFile$8_FieldInfo_[] = {
	{"this$0", "Lsun/security/provider/PolicyFile;", nullptr, $FINAL | $SYNTHETIC, $field(PolicyFile$8, this$0)},
	{"val$cs", "Ljava/security/CodeSource;", nullptr, $FINAL | $SYNTHETIC, $field(PolicyFile$8, val$cs)},
	{"val$entry", "Lsun/security/provider/PolicyFile$PolicyEntry;", nullptr, $FINAL | $SYNTHETIC, $field(PolicyFile$8, val$entry)},
	{}
};

$MethodInfo _PolicyFile$8_MethodInfo_[] = {
	{"<init>", "(Lsun/security/provider/PolicyFile;Lsun/security/provider/PolicyFile$PolicyEntry;Ljava/security/CodeSource;)V", nullptr, 0, $method(PolicyFile$8, init$, void, $PolicyFile*, $PolicyFile$PolicyEntry*, $CodeSource*)},
	{"run", "()Ljava/lang/Boolean;", nullptr, $PUBLIC, $virtualMethod(PolicyFile$8, run, $Object*)},
	{}
};

$EnclosingMethodInfo _PolicyFile$8_EnclosingMethodInfo_ = {
	"sun.security.provider.PolicyFile",
	"addPermissions",
	"(Ljava/security/Permissions;Ljava/security/CodeSource;[Ljava/security/Principal;Lsun/security/provider/PolicyFile$PolicyEntry;)V"
};

$InnerClassInfo _PolicyFile$8_InnerClassesInfo_[] = {
	{"sun.security.provider.PolicyFile$8", nullptr, nullptr, 0},
	{"sun.security.provider.PolicyFile$PolicyEntry", "sun.security.provider.PolicyFile", "PolicyEntry", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _PolicyFile$8_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.provider.PolicyFile$8",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_PolicyFile$8_FieldInfo_,
	_PolicyFile$8_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Boolean;>;",
	&_PolicyFile$8_EnclosingMethodInfo_,
	_PolicyFile$8_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.provider.PolicyFile"
};

$Object* allocate$PolicyFile$8($Class* clazz) {
	return $of($alloc(PolicyFile$8));
}

void PolicyFile$8::init$($PolicyFile* this$0, $PolicyFile$PolicyEntry* val$entry, $CodeSource* val$cs) {
	$set(this, this$0, this$0);
	$set(this, val$entry, val$entry);
	$set(this, val$cs, val$cs);
}

$Object* PolicyFile$8::run() {
	return $of($Boolean::valueOf($nc($($nc(this->val$entry)->getCodeSource()))->implies(this->val$cs)));
}

PolicyFile$8::PolicyFile$8() {
}

$Class* PolicyFile$8::load$($String* name, bool initialize) {
	$loadClass(PolicyFile$8, name, initialize, &_PolicyFile$8_ClassInfo_, allocate$PolicyFile$8);
	return class$;
}

$Class* PolicyFile$8::class$ = nullptr;

		} // provider
	} // security
} // sun