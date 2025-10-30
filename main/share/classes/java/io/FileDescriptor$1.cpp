#include <java/io/FileDescriptor$1.h>

#include <java/io/FileCleanable.h>
#include <java/io/FileDescriptor.h>
#include <jdk/internal/ref/PhantomCleanable.h>
#include <jcpp.h>

using $FileCleanable = ::java::io::FileCleanable;
using $FileDescriptor = ::java::io::FileDescriptor;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JavaIOFileDescriptorAccess = ::jdk::internal::access::JavaIOFileDescriptorAccess;
using $PhantomCleanable = ::jdk::internal::ref::PhantomCleanable;

namespace java {
	namespace io {

$MethodInfo _FileDescriptor$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(FileDescriptor$1::*)()>(&FileDescriptor$1::init$))},
	{"close", "(Ljava/io/FileDescriptor;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"get", "(Ljava/io/FileDescriptor;)I", nullptr, $PUBLIC},
	{"getAppend", "(Ljava/io/FileDescriptor;)Z", nullptr, $PUBLIC},
	{"getHandle", "(Ljava/io/FileDescriptor;)J", nullptr, $PUBLIC},
	{"registerCleanup", "(Ljava/io/FileDescriptor;)V", nullptr, $PUBLIC},
	{"registerCleanup", "(Ljava/io/FileDescriptor;Ljdk/internal/ref/PhantomCleanable;)V", "(Ljava/io/FileDescriptor;Ljdk/internal/ref/PhantomCleanable<Ljava/io/FileDescriptor;>;)V", $PUBLIC},
	{"set", "(Ljava/io/FileDescriptor;I)V", nullptr, $PUBLIC},
	{"setAppend", "(Ljava/io/FileDescriptor;Z)V", nullptr, $PUBLIC},
	{"setHandle", "(Ljava/io/FileDescriptor;J)V", nullptr, $PUBLIC},
	{"unregisterCleanup", "(Ljava/io/FileDescriptor;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _FileDescriptor$1_EnclosingMethodInfo_ = {
	"java.io.FileDescriptor",
	nullptr,
	nullptr
};

$InnerClassInfo _FileDescriptor$1_InnerClassesInfo_[] = {
	{"java.io.FileDescriptor$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _FileDescriptor$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.io.FileDescriptor$1",
	"java.lang.Object",
	"jdk.internal.access.JavaIOFileDescriptorAccess",
	nullptr,
	_FileDescriptor$1_MethodInfo_,
	nullptr,
	&_FileDescriptor$1_EnclosingMethodInfo_,
	_FileDescriptor$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.io.FileDescriptor"
};

$Object* allocate$FileDescriptor$1($Class* clazz) {
	return $of($alloc(FileDescriptor$1));
}

void FileDescriptor$1::init$() {
}

void FileDescriptor$1::set($FileDescriptor* fdo, int32_t fd) {
	$nc(fdo)->set(fd);
}

int32_t FileDescriptor$1::get($FileDescriptor* fdo) {
	return $nc(fdo)->fd;
}

void FileDescriptor$1::setAppend($FileDescriptor* fdo, bool append) {
	$nc(fdo)->append = append;
}

bool FileDescriptor$1::getAppend($FileDescriptor* fdo) {
	return $nc(fdo)->append;
}

void FileDescriptor$1::close($FileDescriptor* fdo) {
	$nc(fdo)->close();
}

void FileDescriptor$1::registerCleanup($FileDescriptor* fdo) {
	$FileCleanable::register$(fdo);
}

void FileDescriptor$1::registerCleanup($FileDescriptor* fdo, $PhantomCleanable* cleanup) {
	$nc(fdo)->registerCleanup(cleanup);
}

void FileDescriptor$1::unregisterCleanup($FileDescriptor* fdo) {
	$nc(fdo)->unregisterCleanup();
}

void FileDescriptor$1::setHandle($FileDescriptor* fdo, int64_t handle) {
	$nc(fdo)->setHandle(handle);
}

int64_t FileDescriptor$1::getHandle($FileDescriptor* fdo) {
	return $nc(fdo)->handle;
}

FileDescriptor$1::FileDescriptor$1() {
}

$Class* FileDescriptor$1::load$($String* name, bool initialize) {
	$loadClass(FileDescriptor$1, name, initialize, &_FileDescriptor$1_ClassInfo_, allocate$FileDescriptor$1);
	return class$;
}

$Class* FileDescriptor$1::class$ = nullptr;

	} // io
} // java