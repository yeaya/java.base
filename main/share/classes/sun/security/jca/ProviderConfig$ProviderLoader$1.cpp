#include <sun/security/jca/ProviderConfig$ProviderLoader$1.h>
#include <java/security/Provider.h>
#include <sun/security/jca/ProviderConfig$ProviderLoader.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Provider = ::java::security::Provider;
using $ProviderConfig$ProviderLoader = ::sun::security::jca::ProviderConfig$ProviderLoader;

namespace sun {
	namespace security {
		namespace jca {

void ProviderConfig$ProviderLoader$1::init$($ProviderConfig$ProviderLoader* this$0, $Class* val$provClass) {
	$set(this, this$0, this$0);
	$set(this, val$provClass, val$provClass);
}

$Object* ProviderConfig$ProviderLoader$1::run() {
	$beforeCallerSensitive();
	return $of($cast($Provider, $nc(this->val$provClass)->newInstance()));
}

ProviderConfig$ProviderLoader$1::ProviderConfig$ProviderLoader$1() {
}

$Class* ProviderConfig$ProviderLoader$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/security/jca/ProviderConfig$ProviderLoader;", nullptr, $FINAL | $SYNTHETIC, $field(ProviderConfig$ProviderLoader$1, this$0)},
		{"val$provClass", "Ljava/lang/Class;", nullptr, $FINAL | $SYNTHETIC, $field(ProviderConfig$ProviderLoader$1, val$provClass)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/security/jca/ProviderConfig$ProviderLoader;Ljava/lang/Class;)V", "()V", 0, $method(ProviderConfig$ProviderLoader$1, init$, void, $ProviderConfig$ProviderLoader*, $Class*)},
		{"run", "()Ljava/security/Provider;", nullptr, $PUBLIC, $virtualMethod(ProviderConfig$ProviderLoader$1, run, $Object*), "java.lang.Exception"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.security.jca.ProviderConfig$ProviderLoader",
		"legacyLoad",
		"(Ljava/lang/String;)Ljava/security/Provider;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.jca.ProviderConfig$ProviderLoader", "sun.security.jca.ProviderConfig", "ProviderLoader", $PRIVATE | $STATIC | $FINAL},
		{"sun.security.jca.ProviderConfig$ProviderLoader$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.jca.ProviderConfig$ProviderLoader$1",
		"java.lang.Object",
		"java.security.PrivilegedExceptionAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljava/security/Provider;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.jca.ProviderConfig"
	};
	$loadClass(ProviderConfig$ProviderLoader$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ProviderConfig$ProviderLoader$1);
	});
	return class$;
}

$Class* ProviderConfig$ProviderLoader$1::class$ = nullptr;

		} // jca
	} // security
} // sun