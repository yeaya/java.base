#include <java/nio/file/FileSystems$DefaultFileSystemHolder$1.h>

#include <java/nio/file/FileSystems$DefaultFileSystemHolder.h>
#include <java/nio/file/spi/FileSystemProvider.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FileSystems$DefaultFileSystemHolder = ::java::nio::file::FileSystems$DefaultFileSystemHolder;

namespace java {
	namespace nio {
		namespace file {

$MethodInfo _FileSystems$DefaultFileSystemHolder$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(FileSystems$DefaultFileSystemHolder$1, init$, void)},
	{"run", "()Ljava/nio/file/spi/FileSystemProvider;", nullptr, $PUBLIC, $virtualMethod(FileSystems$DefaultFileSystemHolder$1, run, $Object*)},
	{}
};

$EnclosingMethodInfo _FileSystems$DefaultFileSystemHolder$1_EnclosingMethodInfo_ = {
	"java.nio.file.FileSystems$DefaultFileSystemHolder",
	"defaultFileSystem",
	"()Ljava/nio/file/FileSystem;"
};

$InnerClassInfo _FileSystems$DefaultFileSystemHolder$1_InnerClassesInfo_[] = {
	{"java.nio.file.FileSystems$DefaultFileSystemHolder", "java.nio.file.FileSystems", "DefaultFileSystemHolder", $PRIVATE | $STATIC},
	{"java.nio.file.FileSystems$DefaultFileSystemHolder$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _FileSystems$DefaultFileSystemHolder$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.nio.file.FileSystems$DefaultFileSystemHolder$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_FileSystems$DefaultFileSystemHolder$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/nio/file/spi/FileSystemProvider;>;",
	&_FileSystems$DefaultFileSystemHolder$1_EnclosingMethodInfo_,
	_FileSystems$DefaultFileSystemHolder$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.nio.file.FileSystems"
};

$Object* allocate$FileSystems$DefaultFileSystemHolder$1($Class* clazz) {
	return $of($alloc(FileSystems$DefaultFileSystemHolder$1));
}

void FileSystems$DefaultFileSystemHolder$1::init$() {
}

$Object* FileSystems$DefaultFileSystemHolder$1::run() {
	return $of($FileSystems$DefaultFileSystemHolder::getDefaultProvider());
}

FileSystems$DefaultFileSystemHolder$1::FileSystems$DefaultFileSystemHolder$1() {
}

$Class* FileSystems$DefaultFileSystemHolder$1::load$($String* name, bool initialize) {
	$loadClass(FileSystems$DefaultFileSystemHolder$1, name, initialize, &_FileSystems$DefaultFileSystemHolder$1_ClassInfo_, allocate$FileSystems$DefaultFileSystemHolder$1);
	return class$;
}

$Class* FileSystems$DefaultFileSystemHolder$1::class$ = nullptr;

		} // file
	} // nio
} // java