#include <java/security/Policy$2.h>

#include <java/lang/ClassLoader.h>
#include <java/security/Policy.h>
#include <sun/security/util/Debug.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Policy = ::java::security::Policy;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Debug = ::sun::security::util::Debug;

namespace java {
	namespace security {

$FieldInfo _Policy$2_FieldInfo_[] = {
	{"val$policyProvider", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(Policy$2, val$policyProvider)},
	{}
};

$MethodInfo _Policy$2_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(Policy$2::*)($String*)>(&Policy$2::init$))},
	{"run", "()Ljava/security/Policy;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Policy$2_EnclosingMethodInfo_ = {
	"java.security.Policy",
	"loadPolicyProvider",
	"()Ljava/security/Policy;"
};

$InnerClassInfo _Policy$2_InnerClassesInfo_[] = {
	{"java.security.Policy$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Policy$2_ClassInfo_ = {
	$ACC_SUPER,
	"java.security.Policy$2",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_Policy$2_FieldInfo_,
	_Policy$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/security/Policy;>;",
	&_Policy$2_EnclosingMethodInfo_,
	_Policy$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.security.Policy"
};

$Object* allocate$Policy$2($Class* clazz) {
	return $of($alloc(Policy$2));
}

void Policy$2::init$($String* val$policyProvider) {
	$set(this, val$policyProvider, val$policyProvider);
}

$Object* Policy$2::run() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	try {
		$var($ClassLoader, scl, $ClassLoader::getSystemClassLoader());
		$var($Object, o, $Class::forName(this->val$policyProvider, true, scl)->newInstance());
		return $of($cast($Policy, o));
	} catch ($Exception& e) {
		$init($Policy);
		if ($Policy::debug != nullptr) {
			$nc($Policy::debug)->println($$str({"policy provider "_s, this->val$policyProvider, " not available"_s}));
			e->printStackTrace();
		}
		return $of(nullptr);
	}
	$shouldNotReachHere();
}

Policy$2::Policy$2() {
}

$Class* Policy$2::load$($String* name, bool initialize) {
	$loadClass(Policy$2, name, initialize, &_Policy$2_ClassInfo_, allocate$Policy$2);
	return class$;
}

$Class* Policy$2::class$ = nullptr;

	} // security
} // java