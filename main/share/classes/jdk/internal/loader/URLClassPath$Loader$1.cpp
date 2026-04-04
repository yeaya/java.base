#include <jdk/internal/loader/URLClassPath$Loader$1.h>
#include <java/io/InputStream.h>
#include <java/net/URL.h>
#include <java/net/URLConnection.h>
#include <jdk/internal/loader/Resource.h>
#include <jdk/internal/loader/URLClassPath$Loader.h>
#include <jcpp.h>

using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;
using $URLConnection = ::java::net::URLConnection;
using $Resource = ::jdk::internal::loader::Resource;
using $URLClassPath$Loader = ::jdk::internal::loader::URLClassPath$Loader;

namespace jdk {
	namespace internal {
		namespace loader {

void URLClassPath$Loader$1::init$($URLClassPath$Loader* this$0, $String* val$name, $URL* val$url, $URLConnection* val$uc) {
	$set(this, this$0, this$0);
	$set(this, val$name, val$name);
	$set(this, val$url, val$url);
	$set(this, val$uc, val$uc);
	$Resource::init$();
}

$String* URLClassPath$Loader$1::getName() {
	return this->val$name;
}

$URL* URLClassPath$Loader$1::getURL() {
	return this->val$url;
}

$URL* URLClassPath$Loader$1::getCodeSourceURL() {
	return this->this$0->base;
}

$InputStream* URLClassPath$Loader$1::getInputStream() {
	return $nc(this->val$uc)->getInputStream();
}

int32_t URLClassPath$Loader$1::getContentLength() {
	return $nc(this->val$uc)->getContentLength();
}

URLClassPath$Loader$1::URLClassPath$Loader$1() {
}

$Class* URLClassPath$Loader$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljdk/internal/loader/URLClassPath$Loader;", nullptr, $FINAL | $SYNTHETIC, $field(URLClassPath$Loader$1, this$0)},
		{"val$uc", "Ljava/net/URLConnection;", nullptr, $FINAL | $SYNTHETIC, $field(URLClassPath$Loader$1, val$uc)},
		{"val$url", "Ljava/net/URL;", nullptr, $FINAL | $SYNTHETIC, $field(URLClassPath$Loader$1, val$url)},
		{"val$name", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(URLClassPath$Loader$1, val$name)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/loader/URLClassPath$Loader;Ljava/lang/String;Ljava/net/URL;Ljava/net/URLConnection;)V", nullptr, 0, $method(URLClassPath$Loader$1, init$, void, $URLClassPath$Loader*, $String*, $URL*, $URLConnection*)},
		{"getCodeSourceURL", "()Ljava/net/URL;", nullptr, $PUBLIC, $virtualMethod(URLClassPath$Loader$1, getCodeSourceURL, $URL*)},
		{"getContentLength", "()I", nullptr, $PUBLIC, $virtualMethod(URLClassPath$Loader$1, getContentLength, int32_t), "java.io.IOException"},
		{"getInputStream", "()Ljava/io/InputStream;", nullptr, $PUBLIC, $virtualMethod(URLClassPath$Loader$1, getInputStream, $InputStream*), "java.io.IOException"},
		{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(URLClassPath$Loader$1, getName, $String*)},
		{"getURL", "()Ljava/net/URL;", nullptr, $PUBLIC, $virtualMethod(URLClassPath$Loader$1, getURL, $URL*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"jdk.internal.loader.URLClassPath$Loader",
		"getResource",
		"(Ljava/lang/String;Z)Ljdk/internal/loader/Resource;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.loader.URLClassPath$Loader", "jdk.internal.loader.URLClassPath", "Loader", $PRIVATE | $STATIC},
		{"jdk.internal.loader.URLClassPath$Loader$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.loader.URLClassPath$Loader$1",
		"jdk.internal.loader.Resource",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.loader.URLClassPath"
	};
	$loadClass(URLClassPath$Loader$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(URLClassPath$Loader$1);
	});
	return class$;
}

$Class* URLClassPath$Loader$1::class$ = nullptr;

		} // loader
	} // internal
} // jdk