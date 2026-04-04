#include <jdk/internal/loader/BuiltinClassLoader$5.h>
#include <java/io/IOException.h>
#include <java/lang/module/ModuleReader.h>
#include <java/lang/module/ModuleReference.h>
#include <jdk/internal/loader/BuiltinClassLoader$NullModuleReader.h>
#include <jdk/internal/loader/BuiltinClassLoader.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ModuleReader = ::java::lang::module::ModuleReader;
using $ModuleReference = ::java::lang::module::ModuleReference;
using $BuiltinClassLoader = ::jdk::internal::loader::BuiltinClassLoader;
using $BuiltinClassLoader$NullModuleReader = ::jdk::internal::loader::BuiltinClassLoader$NullModuleReader;

namespace jdk {
	namespace internal {
		namespace loader {

void BuiltinClassLoader$5::init$($BuiltinClassLoader* this$0, $ModuleReference* val$mref) {
	$set(this, this$0, this$0);
	$set(this, val$mref, val$mref);
}

$ModuleReader* BuiltinClassLoader$5::apply($ModuleReference* moduleReference) {
	try {
		return $nc(this->val$mref)->open();
	} catch ($IOException& e) {
		return $new($BuiltinClassLoader$NullModuleReader);
	}
	$shouldNotReachHere();
}

$Object* BuiltinClassLoader$5::apply(Object$* moduleReference) {
	return this->apply($cast($ModuleReference, moduleReference));
}

BuiltinClassLoader$5::BuiltinClassLoader$5() {
}

$Class* BuiltinClassLoader$5::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljdk/internal/loader/BuiltinClassLoader;", nullptr, $FINAL | $SYNTHETIC, $field(BuiltinClassLoader$5, this$0)},
		{"val$mref", "Ljava/lang/module/ModuleReference;", nullptr, $FINAL | $SYNTHETIC, $field(BuiltinClassLoader$5, val$mref)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/loader/BuiltinClassLoader;Ljava/lang/module/ModuleReference;)V", nullptr, 0, $method(BuiltinClassLoader$5, init$, void, $BuiltinClassLoader*, $ModuleReference*)},
		{"apply", "(Ljava/lang/module/ModuleReference;)Ljava/lang/module/ModuleReader;", nullptr, $PUBLIC, $virtualMethod(BuiltinClassLoader$5, apply, $ModuleReader*, $ModuleReference*)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(BuiltinClassLoader$5, apply, $Object*, Object$*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"jdk.internal.loader.BuiltinClassLoader",
		"moduleReaderFor",
		"(Ljava/lang/module/ModuleReference;)Ljava/lang/module/ModuleReader;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.loader.BuiltinClassLoader$5", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.loader.BuiltinClassLoader$5",
		"java.lang.Object",
		"java.util.function.Function",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/function/Function<Ljava/lang/module/ModuleReference;Ljava/lang/module/ModuleReader;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.loader.BuiltinClassLoader"
	};
	$loadClass(BuiltinClassLoader$5, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BuiltinClassLoader$5);
	});
	return class$;
}

$Class* BuiltinClassLoader$5::class$ = nullptr;

		} // loader
	} // internal
} // jdk