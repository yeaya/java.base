#include <jdk/internal/loader/BuiltinClassLoader$3.h>
#include <java/lang/module/ModuleReader.h>
#include <java/lang/module/ModuleReference.h>
#include <java/net/URI.h>
#include <java/util/Optional.h>
#include <jdk/internal/loader/BuiltinClassLoader.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ModuleReference = ::java::lang::module::ModuleReference;
using $URI = ::java::net::URI;
using $BuiltinClassLoader = ::jdk::internal::loader::BuiltinClassLoader;

namespace jdk {
	namespace internal {
		namespace loader {

void BuiltinClassLoader$3::init$($BuiltinClassLoader* this$0, $ModuleReference* val$mref, $String* val$name) {
	$set(this, this$0, this$0);
	$set(this, val$mref, val$mref);
	$set(this, val$name, val$name);
}

$Object* BuiltinClassLoader$3::run() {
	$useLocalObjectStack();
	return $of($cast($URI, $$nc($$nc(this->this$0->moduleReaderFor(this->val$mref))->find(this->val$name))->orElse(nullptr)));
}

BuiltinClassLoader$3::BuiltinClassLoader$3() {
}

$Class* BuiltinClassLoader$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljdk/internal/loader/BuiltinClassLoader;", nullptr, $FINAL | $SYNTHETIC, $field(BuiltinClassLoader$3, this$0)},
		{"val$name", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(BuiltinClassLoader$3, val$name)},
		{"val$mref", "Ljava/lang/module/ModuleReference;", nullptr, $FINAL | $SYNTHETIC, $field(BuiltinClassLoader$3, val$mref)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/loader/BuiltinClassLoader;Ljava/lang/module/ModuleReference;Ljava/lang/String;)V", nullptr, 0, $method(BuiltinClassLoader$3, init$, void, $BuiltinClassLoader*, $ModuleReference*, $String*)},
		{"run", "()Ljava/net/URI;", nullptr, $PUBLIC, $virtualMethod(BuiltinClassLoader$3, run, $Object*), "java.io.IOException"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"jdk.internal.loader.BuiltinClassLoader",
		"findResource",
		"(Ljava/lang/module/ModuleReference;Ljava/lang/String;)Ljava/net/URL;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.loader.BuiltinClassLoader$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.loader.BuiltinClassLoader$3",
		"java.lang.Object",
		"java.security.PrivilegedExceptionAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljava/net/URI;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.loader.BuiltinClassLoader"
	};
	$loadClass(BuiltinClassLoader$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BuiltinClassLoader$3);
	});
	return class$;
}

$Class* BuiltinClassLoader$3::class$ = nullptr;

		} // loader
	} // internal
} // jdk