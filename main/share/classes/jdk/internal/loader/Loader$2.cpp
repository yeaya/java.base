#include <jdk/internal/loader/Loader$2.h>
#include <java/net/URL.h>
#include <jdk/internal/loader/Loader.h>
#include <jdk/internal/loader/URLClassPath.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;
using $Loader = ::jdk::internal::loader::Loader;
using $URLClassPath = ::jdk::internal::loader::URLClassPath;

namespace jdk {
	namespace internal {
		namespace loader {

void Loader$2::init$($Loader* this$0, $URL* val$urlToCheck) {
	$set(this, this$0, this$0);
	$set(this, val$urlToCheck, val$urlToCheck);
}

$Object* Loader$2::run() {
	return $URLClassPath::checkURL(this->val$urlToCheck);
}

Loader$2::Loader$2() {
}

$Class* Loader$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljdk/internal/loader/Loader;", nullptr, $FINAL | $SYNTHETIC, $field(Loader$2, this$0)},
		{"val$urlToCheck", "Ljava/net/URL;", nullptr, $FINAL | $SYNTHETIC, $field(Loader$2, val$urlToCheck)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/loader/Loader;Ljava/net/URL;)V", "()V", 0, $method(Loader$2, init$, void, $Loader*, $URL*)},
		{"run", "()Ljava/net/URL;", nullptr, $PUBLIC, $virtualMethod(Loader$2, run, $Object*), "java.io.IOException"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"jdk.internal.loader.Loader",
		"findResource",
		"(Ljava/lang/String;Ljava/lang/String;)Ljava/net/URL;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.loader.Loader$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.loader.Loader$2",
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
	$loadClass(Loader$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Loader$2);
	});
	return class$;
}

$Class* Loader$2::class$ = nullptr;

		} // loader
	} // internal
} // jdk