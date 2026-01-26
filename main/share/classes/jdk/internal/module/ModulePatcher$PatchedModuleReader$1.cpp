#include <jdk/internal/module/ModulePatcher$PatchedModuleReader$1.h>

#include <java/io/InputStream.h>
#include <java/lang/InternalError.h>
#include <java/net/URL.h>
#include <java/nio/ByteBuffer.h>
#include <jdk/internal/loader/Resource.h>
#include <jdk/internal/module/ModulePatcher$PatchedModuleReader.h>
#include <jcpp.h>

#undef TYPE

using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Resource = ::jdk::internal::loader::Resource;
using $ModulePatcher$PatchedModuleReader = ::jdk::internal::module::ModulePatcher$PatchedModuleReader;

namespace jdk {
	namespace internal {
		namespace module {

$FieldInfo _ModulePatcher$PatchedModuleReader$1_FieldInfo_[] = {
	{"this$0", "Ljdk/internal/module/ModulePatcher$PatchedModuleReader;", nullptr, $FINAL | $SYNTHETIC, $field(ModulePatcher$PatchedModuleReader$1, this$0)},
	{"val$bb", "Ljava/nio/ByteBuffer;", nullptr, $FINAL | $SYNTHETIC, $field(ModulePatcher$PatchedModuleReader$1, val$bb)},
	{}
};

$MethodInfo _ModulePatcher$PatchedModuleReader$1_MethodInfo_[] = {
	{"<init>", "(Ljdk/internal/module/ModulePatcher$PatchedModuleReader;Ljava/nio/ByteBuffer;)V", nullptr, 0, $method(ModulePatcher$PatchedModuleReader$1, init$, void, $ModulePatcher$PatchedModuleReader*, $ByteBuffer*)},
	{"getByteBuffer", "()Ljava/nio/ByteBuffer;", nullptr, $PUBLIC, $virtualMethod(ModulePatcher$PatchedModuleReader$1, getByteBuffer, $ByteBuffer*), "java.io.IOException"},
	{"getCodeSourceURL", "()Ljava/net/URL;", nullptr, $PUBLIC, $virtualMethod(ModulePatcher$PatchedModuleReader$1, getCodeSourceURL, $URL*)},
	{"getContentLength", "()I", nullptr, $PUBLIC, $virtualMethod(ModulePatcher$PatchedModuleReader$1, getContentLength, int32_t), "java.io.IOException"},
	{"getInputStream", "()Ljava/io/InputStream;", nullptr, $PUBLIC, $virtualMethod(ModulePatcher$PatchedModuleReader$1, getInputStream, $InputStream*), "java.io.IOException"},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ModulePatcher$PatchedModuleReader$1, getName, $String*)},
	{"getURL", "()Ljava/net/URL;", nullptr, $PUBLIC, $virtualMethod(ModulePatcher$PatchedModuleReader$1, getURL, $URL*)},
	{"shouldNotGetHere", "(Ljava/lang/Class;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/lang/Class<TT;>;)TT;", $PRIVATE, $method(ModulePatcher$PatchedModuleReader$1, shouldNotGetHere, $Object*, $Class*)},
	{}
};

$EnclosingMethodInfo _ModulePatcher$PatchedModuleReader$1_EnclosingMethodInfo_ = {
	"jdk.internal.module.ModulePatcher$PatchedModuleReader",
	"findResource",
	"(Ljava/lang/String;)Ljdk/internal/loader/Resource;"
};

$InnerClassInfo _ModulePatcher$PatchedModuleReader$1_InnerClassesInfo_[] = {
	{"jdk.internal.module.ModulePatcher$PatchedModuleReader", "jdk.internal.module.ModulePatcher", "PatchedModuleReader", $PUBLIC | $STATIC},
	{"jdk.internal.module.ModulePatcher$PatchedModuleReader$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ModulePatcher$PatchedModuleReader$1_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.module.ModulePatcher$PatchedModuleReader$1",
	"jdk.internal.loader.Resource",
	nullptr,
	_ModulePatcher$PatchedModuleReader$1_FieldInfo_,
	_ModulePatcher$PatchedModuleReader$1_MethodInfo_,
	nullptr,
	&_ModulePatcher$PatchedModuleReader$1_EnclosingMethodInfo_,
	_ModulePatcher$PatchedModuleReader$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.module.ModulePatcher"
};

$Object* allocate$ModulePatcher$PatchedModuleReader$1($Class* clazz) {
	return $of($alloc(ModulePatcher$PatchedModuleReader$1));
}

void ModulePatcher$PatchedModuleReader$1::init$($ModulePatcher$PatchedModuleReader* this$0, $ByteBuffer* val$bb) {
	$set(this, this$0, this$0);
	$set(this, val$bb, val$bb);
	$Resource::init$();
}

$Object* ModulePatcher$PatchedModuleReader$1::shouldNotGetHere($Class* type) {
	$throwNew($InternalError, "should not get here"_s);
	$shouldNotReachHere();
}

$String* ModulePatcher$PatchedModuleReader$1::getName() {
	return $cast($String, shouldNotGetHere($String::class$));
}

$URL* ModulePatcher$PatchedModuleReader$1::getURL() {
	$load($URL);
	return $cast($URL, shouldNotGetHere($URL::class$));
}

$URL* ModulePatcher$PatchedModuleReader$1::getCodeSourceURL() {
	return this->this$0->delegateCodeSourceURL;
}

$ByteBuffer* ModulePatcher$PatchedModuleReader$1::getByteBuffer() {
	return this->val$bb;
}

$InputStream* ModulePatcher$PatchedModuleReader$1::getInputStream() {
	$load($InputStream);
	return $cast($InputStream, shouldNotGetHere($InputStream::class$));
}

int32_t ModulePatcher$PatchedModuleReader$1::getContentLength() {
	$init($Integer);
	return $nc(($cast($Integer, $(shouldNotGetHere($Integer::TYPE)))))->intValue();
}

ModulePatcher$PatchedModuleReader$1::ModulePatcher$PatchedModuleReader$1() {
}

$Class* ModulePatcher$PatchedModuleReader$1::load$($String* name, bool initialize) {
	$loadClass(ModulePatcher$PatchedModuleReader$1, name, initialize, &_ModulePatcher$PatchedModuleReader$1_ClassInfo_, allocate$ModulePatcher$PatchedModuleReader$1);
	return class$;
}

$Class* ModulePatcher$PatchedModuleReader$1::class$ = nullptr;

		} // module
	} // internal
} // jdk