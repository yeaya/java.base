#include <jdk/internal/loader/Loader$1.h>
#include <java/lang/module/ModuleReader.h>
#include <java/lang/module/ModuleReference.h>
#include <java/net/MalformedURLException.h>
#include <java/net/URI.h>
#include <java/net/URL.h>
#include <java/util/Optional.h>
#include <jdk/internal/loader/Loader.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ModuleReference = ::java::lang::module::ModuleReference;
using $MalformedURLException = ::java::net::MalformedURLException;
using $URI = ::java::net::URI;
using $Optional = ::java::util::Optional;
using $Loader = ::jdk::internal::loader::Loader;

namespace jdk {
	namespace internal {
		namespace loader {

void Loader$1::init$($Loader* this$0, $ModuleReference* val$mref, $String* val$name) {
	$set(this, this$0, this$0);
	$set(this, val$mref, val$mref);
	$set(this, val$name, val$name);
}

$Object* Loader$1::run() {
	$useLocalObjectStack();
	$var($Optional, ouri, $$nc(this->this$0->moduleReaderFor(this->val$mref))->find(this->val$name));
	if ($nc(ouri)->isPresent()) {
		try {
			return $$sure($URI, ouri->get())->toURL();
		} catch ($MalformedURLException& e) {
		} catch ($IllegalArgumentException& e) {
		}
	}
	return nullptr;
}

Loader$1::Loader$1() {
}

$Class* Loader$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljdk/internal/loader/Loader;", nullptr, $FINAL | $SYNTHETIC, $field(Loader$1, this$0)},
		{"val$name", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(Loader$1, val$name)},
		{"val$mref", "Ljava/lang/module/ModuleReference;", nullptr, $FINAL | $SYNTHETIC, $field(Loader$1, val$mref)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/loader/Loader;Ljava/lang/module/ModuleReference;Ljava/lang/String;)V", "()V", 0, $method(Loader$1, init$, void, $Loader*, $ModuleReference*, $String*)},
		{"run", "()Ljava/net/URL;", nullptr, $PUBLIC, $virtualMethod(Loader$1, run, $Object*), "java.io.IOException"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"jdk.internal.loader.Loader",
		"findResource",
		"(Ljava/lang/String;Ljava/lang/String;)Ljava/net/URL;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.loader.Loader$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.loader.Loader$1",
		"java.lang.Object",
		"java.security.PrivilegedExceptionAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljava/net/URL;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.loader.Loader"
	};
	$loadClass(Loader$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Loader$1);
	});
	return class$;
}

$Class* Loader$1::class$ = nullptr;

		} // loader
	} // internal
} // jdk