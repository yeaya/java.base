#include <sun/security/provider/PolicyFile$1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/Security.h>
#include <sun/security/provider/PolicyFile.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Security = ::java::security::Security;
using $PolicyFile = ::sun::security::provider::PolicyFile;

namespace sun {
	namespace security {
		namespace provider {

$FieldInfo _PolicyFile$1_FieldInfo_[] = {
	{"this$0", "Lsun/security/provider/PolicyFile;", nullptr, $FINAL | $SYNTHETIC, $field(PolicyFile$1, this$0)},
	{}
};

$MethodInfo _PolicyFile$1_MethodInfo_[] = {
	{"<init>", "(Lsun/security/provider/PolicyFile;)V", nullptr, 0, $method(static_cast<void(PolicyFile$1::*)($PolicyFile*)>(&PolicyFile$1::init$))},
	{"run", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _PolicyFile$1_EnclosingMethodInfo_ = {
	"sun.security.provider.PolicyFile",
	"init",
	"(Ljava/net/URL;)V"
};

$InnerClassInfo _PolicyFile$1_InnerClassesInfo_[] = {
	{"sun.security.provider.PolicyFile$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _PolicyFile$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.provider.PolicyFile$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_PolicyFile$1_FieldInfo_,
	_PolicyFile$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/String;>;",
	&_PolicyFile$1_EnclosingMethodInfo_,
	_PolicyFile$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.provider.PolicyFile"
};

$Object* allocate$PolicyFile$1($Class* clazz) {
	return $of($alloc(PolicyFile$1));
}

void PolicyFile$1::init$($PolicyFile* this$0) {
	$set(this, this$0, this$0);
}

$Object* PolicyFile$1::run() {
	$useLocalCurrentObjectStackCache();
	this->this$0->expandProperties = "true"_s->equalsIgnoreCase($($Security::getProperty("policy.expandProperties"_s)));
	this->this$0->allowSystemProperties = "true"_s->equalsIgnoreCase($($Security::getProperty("policy.allowSystemProperty"_s)));
	this->this$0->notUtf8 = "false"_s->equalsIgnoreCase($($System::getProperty("sun.security.policy.utf8"_s)));
	return $of($System::getProperty("sun.security.policy.numcaches"_s));
}

PolicyFile$1::PolicyFile$1() {
}

$Class* PolicyFile$1::load$($String* name, bool initialize) {
	$loadClass(PolicyFile$1, name, initialize, &_PolicyFile$1_ClassInfo_, allocate$PolicyFile$1);
	return class$;
}

$Class* PolicyFile$1::class$ = nullptr;

		} // provider
	} // security
} // sun