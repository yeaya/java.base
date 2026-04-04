#include <java/io/FileCleanable.h>
#include <java/io/FileDescriptor.h>
#include <java/io/IOException.h>
#include <java/io/UncheckedIOException.h>
#include <java/lang/ref/Cleaner.h>
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

$JavaIOFileDescriptorAccess* FileCleanable::fdAccess = nullptr;

void FileCleanable::cleanupClose0(int32_t fd, int64_t handle) {
	$init(FileCleanable);
	$prepareNativeStatic(cleanupClose0, void, int32_t fd, int64_t handle);
	$invokeNativeStatic(fd, handle);
	$finishNativeStatic();
}

void FileCleanable::register$($FileDescriptor* fdo) {
	$init(FileCleanable);
	$useLocalObjectStack();
	if (fdo != nullptr && fdo->valid()) {
		int32_t fd = $nc(FileCleanable::fdAccess)->get(fdo);
		int64_t handle = FileCleanable::fdAccess->getHandle(fdo);
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
	} catch ($IOException& ioe) {
		$throwNew($UncheckedIOException, "close"_s, ioe);
	}
}

void FileCleanable::clinit$($Class* clazz) {
	$assignStatic(FileCleanable::fdAccess, $SharedSecrets::getJavaIOFileDescriptorAccess());
}

FileCleanable::FileCleanable() {
}

$Class* FileCleanable::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"fdAccess", "Ljdk/internal/access/JavaIOFileDescriptorAccess;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(FileCleanable, fdAccess)},
		{"fd", "I", nullptr, $PRIVATE | $FINAL, $field(FileCleanable, fd)},
		{"handle", "J", nullptr, $PRIVATE | $FINAL, $field(FileCleanable, handle)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/io/FileDescriptor;Ljava/lang/ref/Cleaner;IJ)V", nullptr, $PRIVATE, $method(FileCleanable, init$, void, $FileDescriptor*, $Cleaner*, int32_t, int64_t)},
		{"cleanupClose0", "(IJ)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(FileCleanable, cleanupClose0, void, int32_t, int64_t), "java.io.IOException"},
		{"performCleanup", "()V", nullptr, $PROTECTED, $virtualMethod(FileCleanable, performCleanup, void)},
		{"register", "(Ljava/io/FileDescriptor;)V", nullptr, $STATIC, $staticMethod(FileCleanable, register$, void, $FileDescriptor*)},
		{"unregister", "(Ljava/io/FileDescriptor;)V", nullptr, $STATIC, $staticMethod(FileCleanable, unregister, void, $FileDescriptor*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.io.FileCleanable",
		"jdk.internal.ref.PhantomCleanable",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljdk/internal/ref/PhantomCleanable<Ljava/io/FileDescriptor;>;"
	};
	$loadClass(FileCleanable, name, initialize, &classInfo$$, FileCleanable::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(FileCleanable));
	});
	return class$;
}

$Class* FileCleanable::class$ = nullptr;

	} // io
} // java