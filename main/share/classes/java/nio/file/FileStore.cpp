#include <java/nio/file/FileStore.h>

#include <java/lang/UnsupportedOperationException.h>
#include <java/nio/file/attribute/FileStoreAttributeView.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $FileStoreAttributeView = ::java::nio::file::attribute::FileStoreAttributeView;

namespace java {
	namespace nio {
		namespace file {

$MethodInfo _FileStore_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(FileStore, init$, void)},
	{"getAttribute", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FileStore, getAttribute, $Object*, $String*), "java.io.IOException"},
	{"getBlockSize", "()J", nullptr, $PUBLIC, $virtualMethod(FileStore, getBlockSize, int64_t), "java.io.IOException"},
	{"getFileStoreAttributeView", "(Ljava/lang/Class;)Ljava/nio/file/attribute/FileStoreAttributeView;", "<V::Ljava/nio/file/attribute/FileStoreAttributeView;>(Ljava/lang/Class<TV;>;)TV;", $PUBLIC | $ABSTRACT, $virtualMethod(FileStore, getFileStoreAttributeView, $FileStoreAttributeView*, $Class*)},
	{"getTotalSpace", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FileStore, getTotalSpace, int64_t), "java.io.IOException"},
	{"getUnallocatedSpace", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FileStore, getUnallocatedSpace, int64_t), "java.io.IOException"},
	{"getUsableSpace", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FileStore, getUsableSpace, int64_t), "java.io.IOException"},
	{"isReadOnly", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FileStore, isReadOnly, bool)},
	{"name", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FileStore, name, $String*)},
	{"supportsFileAttributeView", "(Ljava/lang/Class;)Z", "(Ljava/lang/Class<+Ljava/nio/file/attribute/FileAttributeView;>;)Z", $PUBLIC | $ABSTRACT, $virtualMethod(FileStore, supportsFileAttributeView, bool, $Class*)},
	{"supportsFileAttributeView", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FileStore, supportsFileAttributeView, bool, $String*)},
	{"type", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FileStore, type, $String*)},
	{}
};

$ClassInfo _FileStore_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.nio.file.FileStore",
	"java.lang.Object",
	nullptr,
	nullptr,
	_FileStore_MethodInfo_
};

$Object* allocate$FileStore($Class* clazz) {
	return $of($alloc(FileStore));
}

void FileStore::init$() {
}

int64_t FileStore::getBlockSize() {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

FileStore::FileStore() {
}

$Class* FileStore::load$($String* name, bool initialize) {
	$loadClass(FileStore, name, initialize, &_FileStore_ClassInfo_, allocate$FileStore);
	return class$;
}

$Class* FileStore::class$ = nullptr;

		} // file
	} // nio
} // java