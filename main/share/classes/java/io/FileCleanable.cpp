#include <java/io/FileCleanable.h>

#include <java/io/FileDescriptor.h>
#include <java/io/IOException.h>
#include <java/io/UncheckedIOException.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/ref/Cleaner.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jdk/internal/access/JavaIOFileDescriptorAccess.h>
#include <jdk/internal/access/SharedSecrets.h>
#include <jdk/internal/ref/CleanerFactory.h>
#include <jdk/internal/ref/PhantomCleanable.h>
#include <jcpp.h>

using $FileDescriptor = ::java::io::FileDescriptor;
using $IOException = ::java::io::IOException;
using $UncheckedIOException = ::java::io::UncheckedIOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Cleaner = ::java::lang::ref::Cleaner;
using $JavaIOFileDescriptorAccess = ::jdk::internal::access::JavaIOFileDescriptorAccess;
using $SharedSecrets = ::jdk::internal::access::SharedSecrets;
using $CleanerFactory = ::jdk::internal::ref::CleanerFactory;
using $PhantomCleanable = ::jdk::internal::ref::PhantomCleanable;

namespace java {
	namespace io {

$FieldInfo _FileCleanable_FieldInfo_[] = {
	{"fdAccess", "Ljdk/internal/access/JavaIOFileDescriptorAccess;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(FileCleanable, fdAccess)},
	{"fd", "I", nullptr, $PRIVATE | $FINAL, $field(FileCleanable, fd)},
	{"handle", "J", nullptr, $PRIVATE | $FINAL, $field(FileCleanable, handle)},
	{}
};

$MethodInfo _FileCleanable_MethodInfo_[] = {
	{"<init>", "(Ljava/io/FileDescriptor;Ljava/lang/ref/Cleaner;IJ)V", nullptr, $PRIVATE, $method(static_cast<void(FileCleanable::*)($FileDescriptor*,$Cleaner*,int32_t,int64_t)>(&FileCleanable::init$))},
	{"cleanupClose0", "(IJ)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int32_t,int64_t)>(&FileCleanable::cleanupClose0)), "java.io.IOException"},
	{"performCleanup", "()V", nullptr, $PROTECTED},
	{"register", "(Ljava/io/FileDescriptor;)V", nullptr, $STATIC, $method(static_cast<void(*)($FileDescriptor*)>(&FileCleanable::register$))},
	{"unregister", "(Ljava/io/FileDescriptor;)V", nullptr, $STATIC, $method(static_cast<void(*)($FileDescriptor*)>(&FileCleanable::unregister))},
	{}
};

#define _METHOD_INDEX_cleanupClose0 1

$ClassInfo _FileCleanable_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.io.FileCleanable",
	"jdk.internal.ref.PhantomCleanable",
	nullptr,
	_FileCleanable_FieldInfo_,
	_FileCleanable_MethodInfo_,
	"Ljdk/internal/ref/PhantomCleanable<Ljava/io/FileDescriptor;>;"
};

$Object* allocate$FileCleanable($Class* clazz) {
	return $of($alloc(FileCleanable));
}

$JavaIOFileDescriptorAccess* FileCleanable::fdAccess = nullptr;

void FileCleanable::cleanupClose0(int32_t fd, int64_t handle) {
	$init(FileCleanable);
	$prepareNativeStatic(FileCleanable, cleanupClose0, void, int32_t fd, int64_t handle);
	$invokeNativeStatic(FileCleanable, cleanupClose0, fd, handle);
	$finishNativeStatic();
}

void FileCleanable::register$($FileDescriptor* fdo) {
	$init(FileCleanable);
	$useLocalCurrentObjectStackCache();
	if (fdo != nullptr && fdo->valid()) {
		int32_t fd = $nc(FileCleanable::fdAccess)->get(fdo);
		int64_t handle = $nc(FileCleanable::fdAccess)->getHandle(fdo);
		fdo->registerCleanup($$new(FileCleanable, fdo, $($CleanerFactory::cleaner()), fd, handle));
	}
}

void FileCleanable::unregister($FileDescriptor* fdo) {
	$init(FileCleanable);
	if (fdo != nullptr) {
		fdo->unregisterCleanup();
	}
}

void FileCleanable::init$($FileDescriptor* obj, $Cleaner* cleaner, int32_t fd, int64_t handle) {
	$PhantomCleanable::init$(obj, cleaner);
	this->fd = fd;
	this->handle = handle;
}

void FileCleanable::performCleanup() {
	try {
		cleanupClose0(this->fd, this->handle);
	} catch ($IOException&) {
		$var($IOException, ioe, $catch());
		$throwNew($UncheckedIOException, "close"_s, ioe);
	}
}

void clinit$FileCleanable($Class* class$) {
	$assignStatic(FileCleanable::fdAccess, $SharedSecrets::getJavaIOFileDescriptorAccess());
}

FileCleanable::FileCleanable() {
}

$Class* FileCleanable::load$($String* name, bool initialize) {
	$loadClass(FileCleanable, name, initialize, &_FileCleanable_ClassInfo_, clinit$FileCleanable, allocate$FileCleanable);
	return class$;
}

$Class* FileCleanable::class$ = nullptr;

	} // io
} // java