#include <jdk/internal/loader/URLClassPath$3.h>
#include <java/net/URL.h>
#include <java/net/URLStreamHandler.h>
#include <java/security/AccessControlContext.h>
#include <java/util/HashMap.h>
#include <jdk/internal/loader/URLClassPath$FileLoader.h>
#include <jdk/internal/loader/URLClassPath$JarLoader.h>
#include <jdk/internal/loader/URLClassPath$Loader.h>
#include <jdk/internal/loader/URLClassPath.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;
using $URLClassPath = ::jdk::internal::loader::URLClassPath;
using $URLClassPath$FileLoader = ::jdk::internal::loader::URLClassPath$FileLoader;
using $URLClassPath$JarLoader = ::jdk::internal::loader::URLClassPath$JarLoader;
using $URLClassPath$Loader = ::jdk::internal::loader::URLClassPath$Loader;

namespace jdk {
	namespace internal {
		namespace loader {

void URLClassPath$3::init$($URLClassPath* this$0, $URL* val$url) {
	$set(this, this$0, this$0);
	$set(this, val$url, val$url);
}

$Object* URLClassPath$3::run() {
	$useLocalObjectStack();
	$var($String, protocol, $nc(this->val$url)->getProtocol());
	$var($String, file, this->val$url->getFile());
	if (file != nullptr && file->endsWith("/"_s)) {
		if ("file"_s->equals(protocol)) {
			return $new($URLClassPath$FileLoader, this->val$url);
		} else {
			bool var$1 = "jar"_s->equals(protocol);
			bool var$0 = var$1 && $URLClassPath::isDefaultJarHandler(this->val$url);
			if (var$0 && file->endsWith("!/"_s)) {
				$var($URL, nestedUrl, $new($URL, $(file->substring(0, file->length() - 2))));
				return $new($URLClassPath$JarLoader, nestedUrl, this->this$0->jarHandler, this->this$0->lmap, this->this$0->acc);
			} else {
				return $new($URLClassPath$Loader, this->val$url);
			}
		}
	} else {
		return $new($URLClassPath$JarLoader, this->val$url, this->this$0->jarHandler, this->this$0->lmap, this->this$0->acc);
	}
}

URLClassPath$3::URLClassPath$3() {
}

$Class* URLClassPath$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljdk/internal/loader/URLClassPath;", nullptr, $FINAL | $SYNTHETIC, $field(URLClassPath$3, this$0)},
		{"val$url", "Ljava/net/URL;", nullptr, $FINAL | $SYNTHETIC, $field(URLClassPath$3, val$url)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/loader/URLClassPath;Ljava/net/URL;)V", nullptr, 0, $method(URLClassPath$3, init$, void, $URLClassPath*, $URL*)},
		{"run", "()Ljdk/internal/loader/URLClassPath$Loader;", nullptr, $PUBLIC, $virtualMethod(URLClassPath$3, run, $Object*), "java.io.IOException"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"jdk.internal.loader.URLClassPath",
		"getLoader",
		"(Ljava/net/URL;)Ljdk/internal/loader/URLClassPath$Loader;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.loader.URLClassPath$3", nullptr, nullptr, 0},
		{"jdk.internal.loader.URLClassPath$Loader", "jdk.internal.loader.URLClassPath", "Loader", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.loader.URLClassPath$3",
		"java.lang.Object",
		"java.security.PrivilegedExceptionAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljdk/internal/loader/URLClassPath$Loader;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.loader.URLClassPath"
	};
	$loadClass(URLClassPath$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(URLClassPath$3);
	});
	return class$;
}

$Class* URLClassPath$3::class$ = nullptr;

		} // loader
	} // internal
} // jdk