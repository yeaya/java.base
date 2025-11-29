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

$FieldInfo _URLClassPath$3_FieldInfo_[] = {
	{"this$0", "Ljdk/internal/loader/URLClassPath;", nullptr, $FINAL | $SYNTHETIC, $field(URLClassPath$3, this$0)},
	{"val$url", "Ljava/net/URL;", nullptr, $FINAL | $SYNTHETIC, $field(URLClassPath$3, val$url)},
	{}
};

$MethodInfo _URLClassPath$3_MethodInfo_[] = {
	{"<init>", "(Ljdk/internal/loader/URLClassPath;Ljava/net/URL;)V", nullptr, 0, $method(static_cast<void(URLClassPath$3::*)($URLClassPath*,$URL*)>(&URLClassPath$3::init$))},
	{"run", "()Ljdk/internal/loader/URLClassPath$Loader;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$EnclosingMethodInfo _URLClassPath$3_EnclosingMethodInfo_ = {
	"jdk.internal.loader.URLClassPath",
	"getLoader",
	"(Ljava/net/URL;)Ljdk/internal/loader/URLClassPath$Loader;"
};

$InnerClassInfo _URLClassPath$3_InnerClassesInfo_[] = {
	{"jdk.internal.loader.URLClassPath$3", nullptr, nullptr, 0},
	{"jdk.internal.loader.URLClassPath$Loader", "jdk.internal.loader.URLClassPath", "Loader", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _URLClassPath$3_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.loader.URLClassPath$3",
	"java.lang.Object",
	"java.security.PrivilegedExceptionAction",
	_URLClassPath$3_FieldInfo_,
	_URLClassPath$3_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljdk/internal/loader/URLClassPath$Loader;>;",
	&_URLClassPath$3_EnclosingMethodInfo_,
	_URLClassPath$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.loader.URLClassPath"
};

$Object* allocate$URLClassPath$3($Class* clazz) {
	return $of($alloc(URLClassPath$3));
}

void URLClassPath$3::init$($URLClassPath* this$0, $URL* val$url) {
	$set(this, this$0, this$0);
	$set(this, val$url, val$url);
}

$Object* URLClassPath$3::run() {
	$useLocalCurrentObjectStackCache();
	$var($String, protocol, $nc(this->val$url)->getProtocol());
	$var($String, file, $nc(this->val$url)->getFile());
	if (file != nullptr && file->endsWith("/"_s)) {
		if ("file"_s->equals(protocol)) {
			return $of($new($URLClassPath$FileLoader, this->val$url));
		} else {
			bool var$3 = "jar"_s->equals(protocol);
			bool var$2 = var$3 && $URLClassPath::isDefaultJarHandler(this->val$url);
			if (var$2 && file->endsWith("!/"_s)) {
				$var($URL, nestedUrl, $new($URL, $(file->substring(0, file->length() - 2))));
				return $of($new($URLClassPath$JarLoader, nestedUrl, this->this$0->jarHandler, this->this$0->lmap, this->this$0->acc));
			} else {
				return $of($new($URLClassPath$Loader, this->val$url));
			}
		}
	} else {
		return $of($new($URLClassPath$JarLoader, this->val$url, this->this$0->jarHandler, this->this$0->lmap, this->this$0->acc));
	}
}

URLClassPath$3::URLClassPath$3() {
}

$Class* URLClassPath$3::load$($String* name, bool initialize) {
	$loadClass(URLClassPath$3, name, initialize, &_URLClassPath$3_ClassInfo_, allocate$URLClassPath$3);
	return class$;
}

$Class* URLClassPath$3::class$ = nullptr;

		} // loader
	} // internal
} // jdk