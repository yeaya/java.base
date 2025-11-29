#include <jdk/internal/module/ModulePatcher$ExplodedResourceFinder$1.h>

#include <java/io/IOError.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/net/URI.h>
#include <java/net/URL.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/OpenOption.h>
#include <java/nio/file/Path.h>
#include <jdk/internal/loader/Resource.h>
#include <jdk/internal/module/ModulePatcher$ExplodedResourceFinder.h>
#include <jcpp.h>

#undef MAX_VALUE

using $OpenOptionArray = $Array<::java::nio::file::OpenOption>;
using $IOError = ::java::io::IOError;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $URI = ::java::net::URI;
using $URL = ::java::net::URL;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Files = ::java::nio::file::Files;
using $Path = ::java::nio::file::Path;
using $Resource = ::jdk::internal::loader::Resource;
using $ModulePatcher$ExplodedResourceFinder = ::jdk::internal::module::ModulePatcher$ExplodedResourceFinder;

namespace jdk {
	namespace internal {
		namespace module {

$FieldInfo _ModulePatcher$ExplodedResourceFinder$1_FieldInfo_[] = {
	{"this$0", "Ljdk/internal/module/ModulePatcher$ExplodedResourceFinder;", nullptr, $FINAL | $SYNTHETIC, $field(ModulePatcher$ExplodedResourceFinder$1, this$0)},
	{"val$top", "Ljava/nio/file/Path;", nullptr, $FINAL | $SYNTHETIC, $field(ModulePatcher$ExplodedResourceFinder$1, val$top)},
	{"val$file", "Ljava/nio/file/Path;", nullptr, $FINAL | $SYNTHETIC, $field(ModulePatcher$ExplodedResourceFinder$1, val$file)},
	{"val$name", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(ModulePatcher$ExplodedResourceFinder$1, val$name)},
	{}
};

$MethodInfo _ModulePatcher$ExplodedResourceFinder$1_MethodInfo_[] = {
	{"<init>", "(Ljdk/internal/module/ModulePatcher$ExplodedResourceFinder;Ljava/lang/String;Ljava/nio/file/Path;Ljava/nio/file/Path;)V", nullptr, 0, $method(static_cast<void(ModulePatcher$ExplodedResourceFinder$1::*)($ModulePatcher$ExplodedResourceFinder*,$String*,$Path*,$Path*)>(&ModulePatcher$ExplodedResourceFinder$1::init$))},
	{"getByteBuffer", "()Ljava/nio/ByteBuffer;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getCodeSourceURL", "()Ljava/net/URL;", nullptr, $PUBLIC},
	{"getContentLength", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getInputStream", "()Ljava/io/InputStream;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getURL", "()Ljava/net/URL;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ModulePatcher$ExplodedResourceFinder$1_EnclosingMethodInfo_ = {
	"jdk.internal.module.ModulePatcher$ExplodedResourceFinder",
	"newResource",
	"(Ljava/lang/String;Ljava/nio/file/Path;Ljava/nio/file/Path;)Ljdk/internal/loader/Resource;"
};

$InnerClassInfo _ModulePatcher$ExplodedResourceFinder$1_InnerClassesInfo_[] = {
	{"jdk.internal.module.ModulePatcher$ExplodedResourceFinder", "jdk.internal.module.ModulePatcher", "ExplodedResourceFinder", $PRIVATE | $STATIC},
	{"jdk.internal.module.ModulePatcher$ExplodedResourceFinder$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ModulePatcher$ExplodedResourceFinder$1_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.module.ModulePatcher$ExplodedResourceFinder$1",
	"jdk.internal.loader.Resource",
	nullptr,
	_ModulePatcher$ExplodedResourceFinder$1_FieldInfo_,
	_ModulePatcher$ExplodedResourceFinder$1_MethodInfo_,
	nullptr,
	&_ModulePatcher$ExplodedResourceFinder$1_EnclosingMethodInfo_,
	_ModulePatcher$ExplodedResourceFinder$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.module.ModulePatcher"
};

$Object* allocate$ModulePatcher$ExplodedResourceFinder$1($Class* clazz) {
	return $of($alloc(ModulePatcher$ExplodedResourceFinder$1));
}

void ModulePatcher$ExplodedResourceFinder$1::init$($ModulePatcher$ExplodedResourceFinder* this$0, $String* val$name, $Path* val$file, $Path* val$top) {
	$set(this, this$0, this$0);
	$set(this, val$name, val$name);
	$set(this, val$file, val$file);
	$set(this, val$top, val$top);
	$Resource::init$();
}

$String* ModulePatcher$ExplodedResourceFinder$1::getName() {
	return this->val$name;
}

$URL* ModulePatcher$ExplodedResourceFinder$1::getURL() {
	try {
		return $nc($($nc(this->val$file)->toUri()))->toURL();
	} catch ($IOException& e) {
		return nullptr;
	} catch ($IOError& e) {
		return nullptr;
	}
	$shouldNotReachHere();
}

$URL* ModulePatcher$ExplodedResourceFinder$1::getCodeSourceURL() {
	try {
		return $nc($($nc(this->val$top)->toUri()))->toURL();
	} catch ($IOException& e) {
		return nullptr;
	} catch ($IOError& e) {
		return nullptr;
	}
	$shouldNotReachHere();
}

$ByteBuffer* ModulePatcher$ExplodedResourceFinder$1::getByteBuffer() {
	return $ByteBuffer::wrap($($Files::readAllBytes(this->val$file)));
}

$InputStream* ModulePatcher$ExplodedResourceFinder$1::getInputStream() {
	return $Files::newInputStream(this->val$file, $$new($OpenOptionArray, 0));
}

int32_t ModulePatcher$ExplodedResourceFinder$1::getContentLength() {
	int64_t size = $Files::size(this->val$file);
	return (size > $Integer::MAX_VALUE) ? -1 : (int32_t)size;
}

ModulePatcher$ExplodedResourceFinder$1::ModulePatcher$ExplodedResourceFinder$1() {
}

$Class* ModulePatcher$ExplodedResourceFinder$1::load$($String* name, bool initialize) {
	$loadClass(ModulePatcher$ExplodedResourceFinder$1, name, initialize, &_ModulePatcher$ExplodedResourceFinder$1_ClassInfo_, allocate$ModulePatcher$ExplodedResourceFinder$1);
	return class$;
}

$Class* ModulePatcher$ExplodedResourceFinder$1::class$ = nullptr;

		} // module
	} // internal
} // jdk