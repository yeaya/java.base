#include <jdk/internal/loader/URLClassPath$Loader$1.h>

#include <java/io/InputStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$FieldInfo _URLClassPath$Loader$1_FieldInfo_[] = {
	{"this$0", "Ljdk/internal/loader/URLClassPath$Loader;", nullptr, $FINAL | $SYNTHETIC, $field(URLClassPath$Loader$1, this$0)},
	{"val$uc", "Ljava/net/URLConnection;", nullptr, $FINAL | $SYNTHETIC, $field(URLClassPath$Loader$1, val$uc)},
	{"val$url", "Ljava/net/URL;", nullptr, $FINAL | $SYNTHETIC, $field(URLClassPath$Loader$1, val$url)},
	{"val$name", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(URLClassPath$Loader$1, val$name)},
	{}
};

$MethodInfo _URLClassPath$Loader$1_MethodInfo_[] = {
	{"<init>", "(Ljdk/internal/loader/URLClassPath$Loader;Ljava/lang/String;Ljava/net/URL;Ljava/net/URLConnection;)V", nullptr, 0, $method(static_cast<void(URLClassPath$Loader$1::*)($URLClassPath$Loader*,$String*,$URL*,$URLConnection*)>(&URLClassPath$Loader$1::init$))},
	{"getCodeSourceURL", "()Ljava/net/URL;", nullptr, $PUBLIC},
	{"getContentLength", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getInputStream", "()Ljava/io/InputStream;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getURL", "()Ljava/net/URL;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _URLClassPath$Loader$1_EnclosingMethodInfo_ = {
	"jdk.internal.loader.URLClassPath$Loader",
	"getResource",
	"(Ljava/lang/String;Z)Ljdk/internal/loader/Resource;"
};

$InnerClassInfo _URLClassPath$Loader$1_InnerClassesInfo_[] = {
	{"jdk.internal.loader.URLClassPath$Loader", "jdk.internal.loader.URLClassPath", "Loader", $PRIVATE | $STATIC},
	{"jdk.internal.loader.URLClassPath$Loader$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _URLClassPath$Loader$1_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.loader.URLClassPath$Loader$1",
	"jdk.internal.loader.Resource",
	nullptr,
	_URLClassPath$Loader$1_FieldInfo_,
	_URLClassPath$Loader$1_MethodInfo_,
	nullptr,
	&_URLClassPath$Loader$1_EnclosingMethodInfo_,
	_URLClassPath$Loader$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.loader.URLClassPath"
};

$Object* allocate$URLClassPath$Loader$1($Class* clazz) {
	return $of($alloc(URLClassPath$Loader$1));
}

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
	$loadClass(URLClassPath$Loader$1, name, initialize, &_URLClassPath$Loader$1_ClassInfo_, allocate$URLClassPath$Loader$1);
	return class$;
}

$Class* URLClassPath$Loader$1::class$ = nullptr;

		} // loader
	} // internal
} // jdk