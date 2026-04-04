#include <jdk/internal/logger/DefaultLoggerFinder$1.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/Module.h>
#include <jdk/internal/logger/DefaultLoggerFinder.h>
#include <jdk/internal/misc/VM.h>
#include <jcpp.h>

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Module = ::java::lang::Module;
using $VM = ::jdk::internal::misc::VM;

namespace jdk {
	namespace internal {
		namespace logger {

void DefaultLoggerFinder$1::init$($Module* val$m) {
	$set(this, val$m, val$m);
}

$Object* DefaultLoggerFinder$1::run() {
	return $of($Boolean::valueOf($VM::isSystemDomainLoader($($nc(this->val$m)->getClassLoader()))));
}

DefaultLoggerFinder$1::DefaultLoggerFinder$1() {
}

$Class* DefaultLoggerFinder$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$m", "Ljava/lang/Module;", nullptr, $FINAL | $SYNTHETIC, $field(DefaultLoggerFinder$1, val$m)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Module;)V", nullptr, 0, $method(DefaultLoggerFinder$1, init$, void, $Module*)},
		{"run", "()Ljava/lang/Boolean;", nullptr, $PUBLIC, $virtualMethod(DefaultLoggerFinder$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"jdk.internal.logger.DefaultLoggerFinder",
		"isSystem",
		"(Ljava/lang/Module;)Z"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.logger.DefaultLoggerFinder$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.logger.DefaultLoggerFinder$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Boolean;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.logger.DefaultLoggerFinder"
	};
	$loadClass(DefaultLoggerFinder$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DefaultLoggerFinder$1);
	});
	return class$;
}

$Class* DefaultLoggerFinder$1::class$ = nullptr;

		} // logger
	} // internal
} // jdk