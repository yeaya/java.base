#include <java/net/SocketCleanable.h>
#include <java/io/FileDescriptor.h>
#include <java/io/IOException.h>
#include <java/io/UncheckedIOException.h>
#include <java/lang/ref/Cleaner.h>
#include <jdk/internal/access/JavaIOFileDescriptorAccess.h>
#include <jdk/internal/access/SharedSecrets.h>
#include <jdk/internal/ref/CleanerFactory.h>
#include <jdk/internal/ref/PhantomCleanable.h>
#include <sun/net/ResourceManager.h>
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
using $ResourceManager = ::sun::net::ResourceManager;

namespace java {
	namespace net {

$JavaIOFileDescriptorAccess* SocketCleanable::fdAccess = nullptr;

void SocketCleanable::cleanupClose0(int32_t fd) {
	$init(SocketCleanable);
	$prepareNativeStatic(cleanupClose0, void, int32_t fd);
	$invokeNativeStatic(fd);
	$finishNativeStatic();
}

void SocketCleanable::register$($FileDescriptor* fdo, bool stream) {
	$init(SocketCleanable);
	$useLocalObjectStack();
	if (fdo != nullptr && fdo->valid()) {
		int32_t fd = $nc(SocketCleanable::fdAccess)->get(fdo);
		SocketCleanable::fdAccess->registerCleanup(fdo, $$new(SocketCleanable, fdo, $($CleanerFactory::cleaner()), fd, stream));
	}
}

void SocketCleanable::unregister($FileDescriptor* fdo) {
	$init(SocketCleanable);
	if (fdo != nullptr) {
		$nc(SocketCleanable::fdAccess)->unregisterCleanup(fdo);
	}
}

void SocketCleanable::init$($FileDescriptor* obj, $Cleaner* cleaner, int32_t fd, bool stream) {
	$PhantomCleanable::init$(obj, cleaner);
	this->fd = fd;
	this->stream = stream;
}

void SocketCleanable::performCleanup() {
	$var($Throwable, var$0, nullptr);
	try {
		try {
			cleanupClose0(this->fd);
		} catch ($IOException& ioe) {
			$throwNew($UncheckedIOException, "close"_s, ioe);
		}
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		if (!this->stream) {
			$ResourceManager::afterUdpClose();
		}
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void SocketCleanable::clinit$($Class* clazz) {
	$assignStatic(SocketCleanable::fdAccess, $SharedSecrets::getJavaIOFileDescriptorAccess());
}

SocketCleanable::SocketCleanable() {
}

$Class* SocketCleanable::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"fdAccess", "Ljdk/internal/access/JavaIOFileDescriptorAccess;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SocketCleanable, fdAccess)},
		{"fd", "I", nullptr, $PRIVATE | $FINAL, $field(SocketCleanable, fd)},
		{"stream", "Z", nullptr, $PRIVATE | $FINAL, $field(SocketCleanable, stream)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/io/FileDescriptor;Ljava/lang/ref/Cleaner;IZ)V", nullptr, $PRIVATE, $method(SocketCleanable, init$, void, $FileDescriptor*, $Cleaner*, int32_t, bool)},
		{"cleanupClose0", "(I)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(SocketCleanable, cleanupClose0, void, int32_t), "java.io.IOException"},
		{"performCleanup", "()V", nullptr, $PROTECTED, $virtualMethod(SocketCleanable, performCleanup, void)},
		{"register", "(Ljava/io/FileDescriptor;Z)V", nullptr, $STATIC, $staticMethod(SocketCleanable, register$, void, $FileDescriptor*, bool)},
		{"unregister", "(Ljava/io/FileDescriptor;)V", nullptr, $STATIC, $staticMethod(SocketCleanable, unregister, void, $FileDescriptor*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.net.SocketCleanable",
		"jdk.internal.ref.PhantomCleanable",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljdk/internal/ref/PhantomCleanable<Ljava/io/FileDescriptor;>;"
	};
	$loadClass(SocketCleanable, name, initialize, &classInfo$$, SocketCleanable::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(SocketCleanable));
	});
	return class$;
}

$Class* SocketCleanable::class$ = nullptr;

	} // net
} // java