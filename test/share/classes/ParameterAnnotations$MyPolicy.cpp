#include <ParameterAnnotations$MyPolicy.h>

#include <ParameterAnnotations.h>
#include <java/security/Permission.h>
#include <java/security/Policy.h>
#include <java/security/ProtectionDomain.h>
#include <jcpp.h>

using $ParameterAnnotations = ::ParameterAnnotations;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Permission = ::java::security::Permission;
using $Policy = ::java::security::Policy;
using $ProtectionDomain = ::java::security::ProtectionDomain;

$FieldInfo _ParameterAnnotations$MyPolicy_FieldInfo_[] = {
	{"defaultPolicy", "Ljava/security/Policy;", nullptr, $FINAL, $field(ParameterAnnotations$MyPolicy, defaultPolicy)},
	{}
};

$MethodInfo _ParameterAnnotations$MyPolicy_MethodInfo_[] = {
	{"<init>", "(Ljava/security/Policy;)V", nullptr, 0, $method(static_cast<void(ParameterAnnotations$MyPolicy::*)($Policy*)>(&ParameterAnnotations$MyPolicy::init$))},
	{"implies", "(Ljava/security/ProtectionDomain;Ljava/security/Permission;)Z", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ParameterAnnotations$MyPolicy_InnerClassesInfo_[] = {
	{"ParameterAnnotations$MyPolicy", "ParameterAnnotations", "MyPolicy", $STATIC},
	{}
};

$ClassInfo _ParameterAnnotations$MyPolicy_ClassInfo_ = {
	$ACC_SUPER,
	"ParameterAnnotations$MyPolicy",
	"java.security.Policy",
	nullptr,
	_ParameterAnnotations$MyPolicy_FieldInfo_,
	_ParameterAnnotations$MyPolicy_MethodInfo_,
	nullptr,
	nullptr,
	_ParameterAnnotations$MyPolicy_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"ParameterAnnotations"
};

$Object* allocate$ParameterAnnotations$MyPolicy($Class* clazz) {
	return $of($alloc(ParameterAnnotations$MyPolicy));
}

void ParameterAnnotations$MyPolicy::init$($Policy* defaultPolicy) {
	$Policy::init$();
	$set(this, defaultPolicy, defaultPolicy);
}

bool ParameterAnnotations$MyPolicy::implies($ProtectionDomain* pd, $Permission* p) {
	bool var$0 = $nc($($nc(p)->getName()))->equals("setSecurityManager"_s);
	return var$0 || $nc(this->defaultPolicy)->implies(pd, p);
}

ParameterAnnotations$MyPolicy::ParameterAnnotations$MyPolicy() {
}

$Class* ParameterAnnotations$MyPolicy::load$($String* name, bool initialize) {
	$loadClass(ParameterAnnotations$MyPolicy, name, initialize, &_ParameterAnnotations$MyPolicy_ClassInfo_, allocate$ParameterAnnotations$MyPolicy);
	return class$;
}

$Class* ParameterAnnotations$MyPolicy::class$ = nullptr;