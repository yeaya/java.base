#include <sun/security/jca/ProviderConfig$3.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/ExceptionInInitializerError.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/Provider.h>
#include <java/security/ProviderException.h>
#include <sun/security/jca/ProviderConfig$ProviderLoader.h>
#include <sun/security/jca/ProviderConfig.h>
#include <sun/security/util/Debug.h>
#include <jcpp.h>

#undef INSTANCE

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $ExceptionInInitializerError = ::java::lang::ExceptionInInitializerError;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Provider = ::java::security::Provider;
using $ProviderException = ::java::security::ProviderException;
using $ProviderConfig = ::sun::security::jca::ProviderConfig;
using $ProviderConfig$ProviderLoader = ::sun::security::jca::ProviderConfig$ProviderLoader;
using $Debug = ::sun::security::util::Debug;

namespace sun {
	namespace security {
		namespace jca {

$FieldInfo _ProviderConfig$3_FieldInfo_[] = {
	{"this$0", "Lsun/security/jca/ProviderConfig;", nullptr, $FINAL | $SYNTHETIC, $field(ProviderConfig$3, this$0)},
	{}
};

$MethodInfo _ProviderConfig$3_MethodInfo_[] = {
	{"<init>", "(Lsun/security/jca/ProviderConfig;)V", nullptr, 0, $method(static_cast<void(ProviderConfig$3::*)($ProviderConfig*)>(&ProviderConfig$3::init$))},
	{"run", "()Ljava/security/Provider;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ProviderConfig$3_EnclosingMethodInfo_ = {
	"sun.security.jca.ProviderConfig",
	"doLoadProvider",
	"()Ljava/security/Provider;"
};

$InnerClassInfo _ProviderConfig$3_InnerClassesInfo_[] = {
	{"sun.security.jca.ProviderConfig$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ProviderConfig$3_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.jca.ProviderConfig$3",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_ProviderConfig$3_FieldInfo_,
	_ProviderConfig$3_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/security/Provider;>;",
	&_ProviderConfig$3_EnclosingMethodInfo_,
	_ProviderConfig$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.jca.ProviderConfig"
};

$Object* allocate$ProviderConfig$3($Class* clazz) {
	return $of($alloc(ProviderConfig$3));
}

void ProviderConfig$3::init$($ProviderConfig* this$0) {
	$set(this, this$0, this$0);
}

$Object* ProviderConfig$3::run() {
	$init($ProviderConfig);
	if ($ProviderConfig::debug != nullptr) {
		$nc($ProviderConfig::debug)->println($$str({"Loading provider "_s, this->this$0}));
	}
	try {
		$init($ProviderConfig$ProviderLoader);
		$var($Provider, p, $nc($ProviderConfig$ProviderLoader::INSTANCE)->load(this->this$0->provName));
		if (p != nullptr) {
			if (this->this$0->hasArgument()) {
				$assign(p, p->configure(this->this$0->argument));
			}
			if ($ProviderConfig::debug != nullptr) {
				$nc($ProviderConfig::debug)->println($$str({"Loaded provider "_s, $(p->getName())}));
			}
		} else {
			if ($ProviderConfig::debug != nullptr) {
				$nc($ProviderConfig::debug)->println($$str({"Error loading provider "_s, this->this$0}));
			}
			this->this$0->disableLoad();
		}
		return $of(p);
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		if ($instanceOf($ProviderException, e)) {
			$throw(e);
		} else {
			if ($ProviderConfig::debug != nullptr) {
				$nc($ProviderConfig::debug)->println($$str({"Error loading provider "_s, this->this$0}));
				e->printStackTrace();
			}
			this->this$0->disableLoad();
			return $of(nullptr);
		}
	} catch ($ExceptionInInitializerError&) {
		$var($ExceptionInInitializerError, err, $catch());
		if ($ProviderConfig::debug != nullptr) {
			$nc($ProviderConfig::debug)->println($$str({"Error loading provider "_s, this->this$0}));
			err->printStackTrace();
		}
		this->this$0->disableLoad();
		return $of(nullptr);
	}
	$shouldNotReachHere();
}

ProviderConfig$3::ProviderConfig$3() {
}

$Class* ProviderConfig$3::load$($String* name, bool initialize) {
	$loadClass(ProviderConfig$3, name, initialize, &_ProviderConfig$3_ClassInfo_, allocate$ProviderConfig$3);
	return class$;
}

$Class* ProviderConfig$3::class$ = nullptr;

		} // jca
	} // security
} // sun