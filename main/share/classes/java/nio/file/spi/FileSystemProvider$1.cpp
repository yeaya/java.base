#include <java/nio/file/spi/FileSystemProvider$1.h>

#include <java/nio/file/spi/FileSystemProvider.h>
#include <java/util/List.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FileSystemProvider = ::java::nio::file::spi::FileSystemProvider;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $List = ::java::util::List;

namespace java {
	namespace nio {
		namespace file {
			namespace spi {

$MethodInfo _FileSystemProvider$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(FileSystemProvider$1::*)()>(&FileSystemProvider$1::init$))},
	{"run", "()Ljava/util/List;", "()Ljava/util/List<Ljava/nio/file/spi/FileSystemProvider;>;", $PUBLIC},
	{}
};

$EnclosingMethodInfo _FileSystemProvider$1_EnclosingMethodInfo_ = {
	"java.nio.file.spi.FileSystemProvider",
	"installedProviders",
	"()Ljava/util/List;"
};

$InnerClassInfo _FileSystemProvider$1_InnerClassesInfo_[] = {
	{"java.nio.file.spi.FileSystemProvider$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _FileSystemProvider$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.nio.file.spi.FileSystemProvider$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_FileSystemProvider$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/util/List<Ljava/nio/file/spi/FileSystemProvider;>;>;",
	&_FileSystemProvider$1_EnclosingMethodInfo_,
	_FileSystemProvider$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.nio.file.spi.FileSystemProvider"
};

$Object* allocate$FileSystemProvider$1($Class* clazz) {
	return $of($alloc(FileSystemProvider$1));
}

void FileSystemProvider$1::init$() {
}

$Object* FileSystemProvider$1::run() {
	return $of($FileSystemProvider::loadInstalledProviders());
}

FileSystemProvider$1::FileSystemProvider$1() {
}

$Class* FileSystemProvider$1::load$($String* name, bool initialize) {
	$loadClass(FileSystemProvider$1, name, initialize, &_FileSystemProvider$1_ClassInfo_, allocate$FileSystemProvider$1);
	return class$;
}

$Class* FileSystemProvider$1::class$ = nullptr;

			} // spi
		} // file
	} // nio
} // java