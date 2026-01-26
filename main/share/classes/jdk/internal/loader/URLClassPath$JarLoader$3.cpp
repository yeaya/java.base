#include <jdk/internal/loader/URLClassPath$JarLoader$3.h>

#include <java/net/URL.h>
#include <java/net/URLStreamHandler.h>
#include <java/security/AccessControlContext.h>
#include <java/util/HashMap.h>
#include <jdk/internal/loader/URLClassPath$JarLoader.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;
using $URLClassPath$JarLoader = ::jdk::internal::loader::URLClassPath$JarLoader;

namespace jdk {
	namespace internal {
		namespace loader {

$FieldInfo _URLClassPath$JarLoader$3_FieldInfo_[] = {
	{"this$0", "Ljdk/internal/loader/URLClassPath$JarLoader;", nullptr, $FINAL | $SYNTHETIC, $field(URLClassPath$JarLoader$3, this$0)},
	{"val$url", "Ljava/net/URL;", nullptr, $FINAL | $SYNTHETIC, $field(URLClassPath$JarLoader$3, val$url)},
	{}
};

$MethodInfo _URLClassPath$JarLoader$3_MethodInfo_[] = {
	{"<init>", "(Ljdk/internal/loader/URLClassPath$JarLoader;Ljava/net/URL;)V", nullptr, 0, $method(URLClassPath$JarLoader$3, init$, void, $URLClassPath$JarLoader*, $URL*)},
	{"run", "()Ljdk/internal/loader/URLClassPath$JarLoader;", nullptr, $PUBLIC, $virtualMethod(URLClassPath$JarLoader$3, run, $Object*), "java.io.IOException"},
	{}
};

$EnclosingMethodInfo _URLClassPath$JarLoader$3_EnclosingMethodInfo_ = {
	"jdk.internal.loader.URLClassPath$JarLoader",
	"getResource",
	"(Ljava/lang/String;ZLjava/util/Set;)Ljdk/internal/loader/Resource;"
};

$InnerClassInfo _URLClassPath$JarLoader$3_InnerClassesInfo_[] = {
	{"jdk.internal.loader.URLClassPath$JarLoader", "jdk.internal.loader.URLClassPath", "JarLoader", $PRIVATE | $STATIC},
	{"jdk.internal.loader.URLClassPath$JarLoader$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _URLClassPath$JarLoader$3_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.loader.URLClassPath$JarLoader$3",
	"java.lang.Object",
	"java.security.PrivilegedExceptionAction",
	_URLClassPath$JarLoader$3_FieldInfo_,
	_URLClassPath$JarLoader$3_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljdk/internal/loader/URLClassPath$JarLoader;>;",
	&_URLClassPath$JarLoader$3_EnclosingMethodInfo_,
	_URLClassPath$JarLoader$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.loader.URLClassPath"
};

$Object* allocate$URLClassPath$JarLoader$3($Class* clazz) {
	return $of($alloc(URLClassPath$JarLoader$3));
}

void URLClassPath$JarLoader$3::init$($URLClassPath$JarLoader* this$0, $URL* val$url) {
	$set(this, this$0, this$0);
	$set(this, val$url, val$url);
}

$Object* URLClassPath$JarLoader$3::run() {
	return $of($new($URLClassPath$JarLoader, this->val$url, this->this$0->handler, this->this$0->lmap, this->this$0->acc));
}

URLClassPath$JarLoader$3::URLClassPath$JarLoader$3() {
}

$Class* URLClassPath$JarLoader$3::load$($String* name, bool initialize) {
	$loadClass(URLClassPath$JarLoader$3, name, initialize, &_URLClassPath$JarLoader$3_ClassInfo_, allocate$URLClassPath$JarLoader$3);
	return class$;
}

$Class* URLClassPath$JarLoader$3::class$ = nullptr;

		} // loader
	} // internal
} // jdk