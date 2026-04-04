#include <sun/invoke/util/VerifyAccess$1.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/LinkageError.h>
#include <sun/invoke/util/VerifyAccess.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $LinkageError = ::java::lang::LinkageError;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace invoke {
		namespace util {

void VerifyAccess$1::init$($String* val$name, $ClassLoader* val$refcLoader) {
	$set(this, val$name, val$name);
	$set(this, val$refcLoader, val$refcLoader);
}

$Object* VerifyAccess$1::run() {
	$beforeCallerSensitive();
	try {
		return $of($Class::forName(this->val$name, false, this->val$refcLoader));
	} catch ($ClassNotFoundException& e) {
		return nullptr;
	} catch ($LinkageError& e) {
		return nullptr;
	}
	$shouldNotReachHere();
}

VerifyAccess$1::VerifyAccess$1() {
}

$Class* VerifyAccess$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$refcLoader", "Ljava/lang/ClassLoader;", nullptr, $FINAL | $SYNTHETIC, $field(VerifyAccess$1, val$refcLoader)},
		{"val$name", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(VerifyAccess$1, val$name)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljava/lang/ClassLoader;)V", nullptr, 0, $method(VerifyAccess$1, init$, void, $String*, $ClassLoader*)},
		{"run", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", $PUBLIC, $virtualMethod(VerifyAccess$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.invoke.util.VerifyAccess",
		"isTypeVisible",
		"(Ljava/lang/Class;Ljava/lang/Class;)Z"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.invoke.util.VerifyAccess$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.invoke.util.VerifyAccess$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Class<*>;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.invoke.util.VerifyAccess"
	};
	$loadClass(VerifyAccess$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(VerifyAccess$1);
	});
	return class$;
}

$Class* VerifyAccess$1::class$ = nullptr;

		} // util
	} // invoke
} // sun