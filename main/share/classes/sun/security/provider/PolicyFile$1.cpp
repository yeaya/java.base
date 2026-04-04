#include <sun/security/provider/PolicyFile$1.h>
#include <java/security/Security.h>
#include <sun/security/provider/PolicyFile.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Security = ::java::security::Security;
using $PolicyFile = ::sun::security::provider::PolicyFile;

namespace sun {
	namespace security {
		namespace provider {

void PolicyFile$1::init$($PolicyFile* this$0) {
	$set(this, this$0, this$0);
}

$Object* PolicyFile$1::run() {
	$useLocalObjectStack();
	this->this$0->expandProperties = "true"_s->equalsIgnoreCase($($Security::getProperty("policy.expandProperties"_s)));
	this->this$0->allowSystemProperties = "true"_s->equalsIgnoreCase($($Security::getProperty("policy.allowSystemProperty"_s)));
	this->this$0->notUtf8 = "false"_s->equalsIgnoreCase($($System::getProperty("sun.security.policy.utf8"_s)));
	return $of($System::getProperty("sun.security.policy.numcaches"_s));
}

PolicyFile$1::PolicyFile$1() {
}

$Class* PolicyFile$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/security/provider/PolicyFile;", nullptr, $FINAL | $SYNTHETIC, $field(PolicyFile$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/security/provider/PolicyFile;)V", nullptr, 0, $method(PolicyFile$1, init$, void, $PolicyFile*)},
		{"run", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(PolicyFile$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.security.provider.PolicyFile",
		"init",
		"(Ljava/net/URL;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.provider.PolicyFile$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.provider.PolicyFile$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/String;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.provider.PolicyFile"
	};
	$loadClass(PolicyFile$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PolicyFile$1);
	});
	return class$;
}

$Class* PolicyFile$1::class$ = nullptr;

		} // provider
	} // security
} // sun