#include <jdk/internal/reflect/ClassDefiner$1.h>
#include <java/lang/ClassLoader.h>
#include <jdk/internal/reflect/ClassDefiner.h>
#include <jdk/internal/reflect/DelegatingClassLoader.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DelegatingClassLoader = ::jdk::internal::reflect::DelegatingClassLoader;

namespace jdk {
	namespace internal {
		namespace reflect {

void ClassDefiner$1::init$($ClassLoader* val$parentClassLoader) {
	$set(this, val$parentClassLoader, val$parentClassLoader);
}

$Object* ClassDefiner$1::run() {
	return $new($DelegatingClassLoader, this->val$parentClassLoader);
}

ClassDefiner$1::ClassDefiner$1() {
}

$Class* ClassDefiner$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$parentClassLoader", "Ljava/lang/ClassLoader;", nullptr, $FINAL | $SYNTHETIC, $field(ClassDefiner$1, val$parentClassLoader)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/ClassLoader;)V", "()V", 0, $method(ClassDefiner$1, init$, void, $ClassLoader*)},
		{"run", "()Ljava/lang/ClassLoader;", nullptr, $PUBLIC, $virtualMethod(ClassDefiner$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"jdk.internal.reflect.ClassDefiner",
		"defineClass",
		"(Ljava/lang/String;[BIILjava/lang/ClassLoader;)Ljava/lang/Class;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.reflect.ClassDefiner$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.reflect.ClassDefiner$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/ClassLoader;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.reflect.ClassDefiner"
	};
	$loadClass(ClassDefiner$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ClassDefiner$1);
	});
	return class$;
}

$Class* ClassDefiner$1::class$ = nullptr;

		} // reflect
	} // internal
} // jdk