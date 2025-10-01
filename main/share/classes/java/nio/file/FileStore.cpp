#include <java/nio/file/FileStore.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(FileStore::*)()>(&FileStore::init$))},
	{"getAttribute", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"getBlockSize", "()J", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getFileStoreAttributeView", "(Ljava/lang/Class;)Ljava/nio/file/attribute/FileStoreAttributeView;", "<V::Ljava/nio/file/attribute/FileStoreAttributeView;>(Ljava/lang/Class<TV;>;)TV;", $PUBLIC | $ABSTRACT},
	{"getTotalSpace", "()J", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"getUnallocatedSpace", "()J", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"getUsableSpace", "()J", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"isReadOnly", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"name", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"supportsFileAttributeView", "(Ljava/lang/Class;)Z", "(Ljava/lang/Class<+Ljava/nio/file/attribute/FileAttributeView;>;)Z", $PUBLIC | $ABSTRACT},
	{"supportsFileAttributeView", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"type", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
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