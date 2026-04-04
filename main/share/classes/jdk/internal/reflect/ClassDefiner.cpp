#include <jdk/internal/reflect/ClassDefiner.h>
#include <java/lang/ClassLoader.h>
#include <java/security/AccessController.h>
#include <java/security/ProtectionDomain.h>
#include <jdk/internal/access/JavaLangAccess.h>
#include <jdk/internal/access/SharedSecrets.h>
#include <jdk/internal/reflect/ClassDefiner$1.h>
#include <jcpp.h>

#undef JLA

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $ProtectionDomain = ::java::security::ProtectionDomain;
using $JavaLangAccess = ::jdk::internal::access::JavaLangAccess;
using $SharedSecrets = ::jdk::internal::access::SharedSecrets;
using $ClassDefiner$1 = ::jdk::internal::reflect::ClassDefiner$1;

namespace jdk {
	namespace internal {
		namespace reflect {

$JavaLangAccess* ClassDefiner::JLA = nullptr;

void ClassDefiner::init$() {
}

$Class* ClassDefiner::defineClass($String* name, $bytes* bytes, int32_t off, int32_t len, $ClassLoader* parentClassLoader) {
	$init(ClassDefiner);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($ClassLoader, newLoader, $cast($ClassLoader, $AccessController::doPrivileged($$new($ClassDefiner$1, parentClassLoader))));
	return $nc(ClassDefiner::JLA)->defineClass(newLoader, name, bytes, nullptr, "__ClassDefiner__"_s);
}

void ClassDefiner::clinit$($Class* clazz) {
	$assignStatic(ClassDefiner::JLA, $SharedSecrets::getJavaLangAccess());
}

ClassDefiner::ClassDefiner() {
}

$Class* ClassDefiner::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"JLA", "Ljdk/internal/access/JavaLangAccess;", nullptr, $STATIC | $FINAL, $staticField(ClassDefiner, JLA)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ClassDefiner, init$, void)},
		{"defineClass", "(Ljava/lang/String;[BIILjava/lang/ClassLoader;)Ljava/lang/Class;", "(Ljava/lang/String;[BIILjava/lang/ClassLoader;)Ljava/lang/Class<*>;", $STATIC, $staticMethod(ClassDefiner, defineClass, $Class*, $String*, $bytes*, int32_t, int32_t, $ClassLoader*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.reflect.ClassDefiner$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.reflect.ClassDefiner",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"jdk.internal.reflect.ClassDefiner$1"
	};
	$loadClass(ClassDefiner, name, initialize, &classInfo$$, ClassDefiner::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ClassDefiner);
	});
	return class$;
}

$Class* ClassDefiner::class$ = nullptr;

		} // reflect
	} // internal
} // jdk