#include <jdk/internal/loader/URLClassPath$FileLoader$1.h>

#include <java/io/File.h>
#include <java/io/FileInputStream.h>
#include <java/io/InputStream.h>
#include <java/net/URL.h>
#include <jdk/internal/loader/Resource.h>
#include <jdk/internal/loader/URLClassPath$FileLoader.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $FileInputStream = ::java::io::FileInputStream;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;
using $Resource = ::jdk::internal::loader::Resource;
using $URLClassPath$FileLoader = ::jdk::internal::loader::URLClassPath$FileLoader;

namespace jdk {
	namespace internal {
		namespace loader {

$FieldInfo _URLClassPath$FileLoader$1_FieldInfo_[] = {
	{"this$0", "Ljdk/internal/loader/URLClassPath$FileLoader;", nullptr, $FINAL | $SYNTHETIC, $field(URLClassPath$FileLoader$1, this$0)},
	{"val$file", "Ljava/io/File;", nullptr, $FINAL | $SYNTHETIC, $field(URLClassPath$FileLoader$1, val$file)},
	{"val$url", "Ljava/net/URL;", nullptr, $FINAL | $SYNTHETIC, $field(URLClassPath$FileLoader$1, val$url)},
	{"val$name", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(URLClassPath$FileLoader$1, val$name)},
	{}
};

$MethodInfo _URLClassPath$FileLoader$1_MethodInfo_[] = {
	{"<init>", "(Ljdk/internal/loader/URLClassPath$FileLoader;Ljava/lang/String;Ljava/net/URL;Ljava/io/File;)V", nullptr, 0, $method(static_cast<void(URLClassPath$FileLoader$1::*)($URLClassPath$FileLoader*,$String*,$URL*,$File*)>(&URLClassPath$FileLoader$1::init$))},
	{"getCodeSourceURL", "()Ljava/net/URL;", nullptr, $PUBLIC},
	{"getContentLength", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getInputStream", "()Ljava/io/InputStream;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getURL", "()Ljava/net/URL;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _URLClassPath$FileLoader$1_EnclosingMethodInfo_ = {
	"jdk.internal.loader.URLClassPath$FileLoader",
	"getResource",
	"(Ljava/lang/String;Z)Ljdk/internal/loader/Resource;"
};

$InnerClassInfo _URLClassPath$FileLoader$1_InnerClassesInfo_[] = {
	{"jdk.internal.loader.URLClassPath$FileLoader", "jdk.internal.loader.URLClassPath", "FileLoader", $PRIVATE | $STATIC},
	{"jdk.internal.loader.URLClassPath$FileLoader$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _URLClassPath$FileLoader$1_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.loader.URLClassPath$FileLoader$1",
	"jdk.internal.loader.Resource",
	nullptr,
	_URLClassPath$FileLoader$1_FieldInfo_,
	_URLClassPath$FileLoader$1_MethodInfo_,
	nullptr,
	&_URLClassPath$FileLoader$1_EnclosingMethodInfo_,
	_URLClassPath$FileLoader$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.loader.URLClassPath"
};

$Object* allocate$URLClassPath$FileLoader$1($Class* clazz) {
	return $of($alloc(URLClassPath$FileLoader$1));
}

void URLClassPath$FileLoader$1::init$($URLClassPath$FileLoader* this$0, $String* val$name, $URL* val$url, $File* val$file) {
	$set(this, this$0, this$0);
	$set(this, val$name, val$name);
	$set(this, val$url, val$url);
	$set(this, val$file, val$file);
	$Resource::init$();
}

$String* URLClassPath$FileLoader$1::getName() {
	return this->val$name;
}

$URL* URLClassPath$FileLoader$1::getURL() {
	return this->val$url;
}

$URL* URLClassPath$FileLoader$1::getCodeSourceURL() {
	return this->this$0->getBaseURL();
}

$InputStream* URLClassPath$FileLoader$1::getInputStream() {
	return $new($FileInputStream, this->val$file);
}

int32_t URLClassPath$FileLoader$1::getContentLength() {
	return (int32_t)$nc(this->val$file)->length();
}

URLClassPath$FileLoader$1::URLClassPath$FileLoader$1() {
}

$Class* URLClassPath$FileLoader$1::load$($String* name, bool initialize) {
	$loadClass(URLClassPath$FileLoader$1, name, initialize, &_URLClassPath$FileLoader$1_ClassInfo_, allocate$URLClassPath$FileLoader$1);
	return class$;
}

$Class* URLClassPath$FileLoader$1::class$ = nullptr;

		} // loader
	} // internal
} // jdk