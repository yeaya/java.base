#include <jdk/internal/loader/URLClassPath$JarLoader$2.h>

#include <java/io/InputStream.h>
#include <java/lang/Array.h>
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
#include <java/security/CodeSigner.h>
#include <java/security/cert/Certificate.h>
#include <java/util/jar/JarEntry.h>
#include <java/util/jar/JarFile.h>
#include <java/util/jar/Manifest.h>
#include <java/util/zip/ZipEntry.h>
#include <jdk/internal/access/JavaUtilJarAccess.h>
#include <jdk/internal/access/SharedSecrets.h>
#include <jdk/internal/loader/Resource.h>
#include <jdk/internal/loader/URLClassPath$JarLoader.h>
#include <jcpp.h>

using $CodeSignerArray = $Array<::java::security::CodeSigner>;
using $CertificateArray = $Array<::java::security::cert::Certificate>;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;
using $JarEntry = ::java::util::jar::JarEntry;
using $JarFile = ::java::util::jar::JarFile;
using $Manifest = ::java::util::jar::Manifest;
using $ZipEntry = ::java::util::zip::ZipEntry;
using $JavaUtilJarAccess = ::jdk::internal::access::JavaUtilJarAccess;
using $SharedSecrets = ::jdk::internal::access::SharedSecrets;
using $Resource = ::jdk::internal::loader::Resource;
using $URLClassPath$JarLoader = ::jdk::internal::loader::URLClassPath$JarLoader;

namespace jdk {
	namespace internal {
		namespace loader {

$FieldInfo _URLClassPath$JarLoader$2_FieldInfo_[] = {
	{"this$0", "Ljdk/internal/loader/URLClassPath$JarLoader;", nullptr, $FINAL | $SYNTHETIC, $field(URLClassPath$JarLoader$2, this$0)},
	{"val$entry", "Ljava/util/jar/JarEntry;", nullptr, $FINAL | $SYNTHETIC, $field(URLClassPath$JarLoader$2, val$entry)},
	{"val$url", "Ljava/net/URL;", nullptr, $FINAL | $SYNTHETIC, $field(URLClassPath$JarLoader$2, val$url)},
	{"val$name", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(URLClassPath$JarLoader$2, val$name)},
	{}
};

$MethodInfo _URLClassPath$JarLoader$2_MethodInfo_[] = {
	{"<init>", "(Ljdk/internal/loader/URLClassPath$JarLoader;Ljava/lang/String;Ljava/net/URL;Ljava/util/jar/JarEntry;)V", nullptr, 0, $method(static_cast<void(URLClassPath$JarLoader$2::*)($URLClassPath$JarLoader*,$String*,$URL*,$JarEntry*)>(&URLClassPath$JarLoader$2::init$))},
	{"getCertificates", "()[Ljava/security/cert/Certificate;", nullptr, $PUBLIC},
	{"getCodeSigners", "()[Ljava/security/CodeSigner;", nullptr, $PUBLIC},
	{"getCodeSourceURL", "()Ljava/net/URL;", nullptr, $PUBLIC},
	{"getContentLength", "()I", nullptr, $PUBLIC},
	{"getInputStream", "()Ljava/io/InputStream;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getManifest", "()Ljava/util/jar/Manifest;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getURL", "()Ljava/net/URL;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _URLClassPath$JarLoader$2_EnclosingMethodInfo_ = {
	"jdk.internal.loader.URLClassPath$JarLoader",
	"checkResource",
	"(Ljava/lang/String;ZLjava/util/jar/JarEntry;)Ljdk/internal/loader/Resource;"
};

$InnerClassInfo _URLClassPath$JarLoader$2_InnerClassesInfo_[] = {
	{"jdk.internal.loader.URLClassPath$JarLoader", "jdk.internal.loader.URLClassPath", "JarLoader", $PRIVATE | $STATIC},
	{"jdk.internal.loader.URLClassPath$JarLoader$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _URLClassPath$JarLoader$2_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.loader.URLClassPath$JarLoader$2",
	"jdk.internal.loader.Resource",
	nullptr,
	_URLClassPath$JarLoader$2_FieldInfo_,
	_URLClassPath$JarLoader$2_MethodInfo_,
	nullptr,
	&_URLClassPath$JarLoader$2_EnclosingMethodInfo_,
	_URLClassPath$JarLoader$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.loader.URLClassPath"
};

$Object* allocate$URLClassPath$JarLoader$2($Class* clazz) {
	return $of($alloc(URLClassPath$JarLoader$2));
}

void URLClassPath$JarLoader$2::init$($URLClassPath$JarLoader* this$0, $String* val$name, $URL* val$url, $JarEntry* val$entry) {
	$set(this, this$0, this$0);
	$set(this, val$name, val$name);
	$set(this, val$url, val$url);
	$set(this, val$entry, val$entry);
	$Resource::init$();
}

$String* URLClassPath$JarLoader$2::getName() {
	return this->val$name;
}

$URL* URLClassPath$JarLoader$2::getURL() {
	return this->val$url;
}

$URL* URLClassPath$JarLoader$2::getCodeSourceURL() {
	return this->this$0->csu;
}

$InputStream* URLClassPath$JarLoader$2::getInputStream() {
	return $nc(this->this$0->jar)->getInputStream(this->val$entry);
}

int32_t URLClassPath$JarLoader$2::getContentLength() {
	return (int32_t)$nc(this->val$entry)->getSize();
}

$Manifest* URLClassPath$JarLoader$2::getManifest() {
	$nc($($SharedSecrets::javaUtilJarAccess()))->ensureInitialization(this->this$0->jar);
	return $nc(this->this$0->jar)->getManifest();
}

$CertificateArray* URLClassPath$JarLoader$2::getCertificates() {
	return $nc(this->val$entry)->getCertificates();
}

$CodeSignerArray* URLClassPath$JarLoader$2::getCodeSigners() {
	return $nc(this->val$entry)->getCodeSigners();
}

URLClassPath$JarLoader$2::URLClassPath$JarLoader$2() {
}

$Class* URLClassPath$JarLoader$2::load$($String* name, bool initialize) {
	$loadClass(URLClassPath$JarLoader$2, name, initialize, &_URLClassPath$JarLoader$2_ClassInfo_, allocate$URLClassPath$JarLoader$2);
	return class$;
}

$Class* URLClassPath$JarLoader$2::class$ = nullptr;

		} // loader
	} // internal
} // jdk