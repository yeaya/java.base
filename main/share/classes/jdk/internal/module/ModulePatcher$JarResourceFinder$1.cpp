#include <jdk/internal/module/ModulePatcher$JarResourceFinder$1.h>

#include <java/io/InputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/MalformedURLException.h>
#include <java/net/URL.h>
#include <java/nio/ByteBuffer.h>
#include <java/util/jar/JarEntry.h>
#include <java/util/jar/JarFile.h>
#include <java/util/zip/ZipEntry.h>
#include <jdk/internal/loader/Resource.h>
#include <jdk/internal/module/ModulePatcher$JarResourceFinder.h>
#include <sun/net/www/ParseUtil.h>
#include <jcpp.h>

#undef MAX_VALUE

using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $MalformedURLException = ::java::net::MalformedURLException;
using $URL = ::java::net::URL;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $JarEntry = ::java::util::jar::JarEntry;
using $JarFile = ::java::util::jar::JarFile;
using $ZipEntry = ::java::util::zip::ZipEntry;
using $Resource = ::jdk::internal::loader::Resource;
using $ModulePatcher$JarResourceFinder = ::jdk::internal::module::ModulePatcher$JarResourceFinder;
using $ParseUtil = ::sun::net::www::ParseUtil;

namespace jdk {
	namespace internal {
		namespace module {

$FieldInfo _ModulePatcher$JarResourceFinder$1_FieldInfo_[] = {
	{"this$0", "Ljdk/internal/module/ModulePatcher$JarResourceFinder;", nullptr, $FINAL | $SYNTHETIC, $field(ModulePatcher$JarResourceFinder$1, this$0)},
	{"val$entry", "Ljava/util/jar/JarEntry;", nullptr, $FINAL | $SYNTHETIC, $field(ModulePatcher$JarResourceFinder$1, val$entry)},
	{"val$name", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(ModulePatcher$JarResourceFinder$1, val$name)},
	{}
};

$MethodInfo _ModulePatcher$JarResourceFinder$1_MethodInfo_[] = {
	{"<init>", "(Ljdk/internal/module/ModulePatcher$JarResourceFinder;Ljava/lang/String;Ljava/util/jar/JarEntry;)V", nullptr, 0, $method(static_cast<void(ModulePatcher$JarResourceFinder$1::*)($ModulePatcher$JarResourceFinder*,$String*,$JarEntry*)>(&ModulePatcher$JarResourceFinder$1::init$))},
	{"getByteBuffer", "()Ljava/nio/ByteBuffer;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getCodeSourceURL", "()Ljava/net/URL;", nullptr, $PUBLIC},
	{"getContentLength", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getInputStream", "()Ljava/io/InputStream;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getURL", "()Ljava/net/URL;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ModulePatcher$JarResourceFinder$1_EnclosingMethodInfo_ = {
	"jdk.internal.module.ModulePatcher$JarResourceFinder",
	"find",
	"(Ljava/lang/String;)Ljdk/internal/loader/Resource;"
};

$InnerClassInfo _ModulePatcher$JarResourceFinder$1_InnerClassesInfo_[] = {
	{"jdk.internal.module.ModulePatcher$JarResourceFinder", "jdk.internal.module.ModulePatcher", "JarResourceFinder", $PRIVATE | $STATIC},
	{"jdk.internal.module.ModulePatcher$JarResourceFinder$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ModulePatcher$JarResourceFinder$1_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.module.ModulePatcher$JarResourceFinder$1",
	"jdk.internal.loader.Resource",
	nullptr,
	_ModulePatcher$JarResourceFinder$1_FieldInfo_,
	_ModulePatcher$JarResourceFinder$1_MethodInfo_,
	nullptr,
	&_ModulePatcher$JarResourceFinder$1_EnclosingMethodInfo_,
	_ModulePatcher$JarResourceFinder$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.module.ModulePatcher"
};

$Object* allocate$ModulePatcher$JarResourceFinder$1($Class* clazz) {
	return $of($alloc(ModulePatcher$JarResourceFinder$1));
}

void ModulePatcher$JarResourceFinder$1::init$($ModulePatcher$JarResourceFinder* this$0, $String* val$name, $JarEntry* val$entry) {
	$set(this, this$0, this$0);
	$set(this, val$name, val$name);
	$set(this, val$entry, val$entry);
	$Resource::init$();
}

$String* ModulePatcher$JarResourceFinder$1::getName() {
	return this->val$name;
}

$URL* ModulePatcher$JarResourceFinder$1::getURL() {
	$useLocalCurrentObjectStackCache();
	$var($String, encodedPath, $ParseUtil::encodePath(this->val$name, false));
	try {
		return $new($URL, $$str({"jar:"_s, this->this$0->csURL, "!/"_s, encodedPath}));
	} catch ($MalformedURLException&) {
		$var($MalformedURLException, e, $catch());
		return nullptr;
	}
	$shouldNotReachHere();
}

$URL* ModulePatcher$JarResourceFinder$1::getCodeSourceURL() {
	return this->this$0->csURL;
}

$ByteBuffer* ModulePatcher$JarResourceFinder$1::getByteBuffer() {
	$useLocalCurrentObjectStackCache();
	$var($bytes, bytes, $nc($(getInputStream()))->readAllBytes());
	return $ByteBuffer::wrap(bytes);
}

$InputStream* ModulePatcher$JarResourceFinder$1::getInputStream() {
	return $nc(this->this$0->jf)->getInputStream(this->val$entry);
}

int32_t ModulePatcher$JarResourceFinder$1::getContentLength() {
	int64_t size = $nc(this->val$entry)->getSize();
	return (size > $Integer::MAX_VALUE) ? -1 : (int32_t)size;
}

ModulePatcher$JarResourceFinder$1::ModulePatcher$JarResourceFinder$1() {
}

$Class* ModulePatcher$JarResourceFinder$1::load$($String* name, bool initialize) {
	$loadClass(ModulePatcher$JarResourceFinder$1, name, initialize, &_ModulePatcher$JarResourceFinder$1_ClassInfo_, allocate$ModulePatcher$JarResourceFinder$1);
	return class$;
}

$Class* ModulePatcher$JarResourceFinder$1::class$ = nullptr;

		} // module
	} // internal
} // jdk