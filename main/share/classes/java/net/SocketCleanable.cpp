#include <java/net/SocketCleanable.h>

#include <java/io/FileDescriptor.h>
#include <java/io/IOException.h>
#include <java/io/UncheckedIOException.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/ref/Cleaner.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$FieldInfo _SocketCleanable_FieldInfo_[] = {
	{"fdAccess", "Ljdk/internal/access/JavaIOFileDescriptorAccess;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SocketCleanable, fdAccess)},
	{"fd", "I", nullptr, $PRIVATE | $FINAL, $field(SocketCleanable, fd)},
	{"stream", "Z", nullptr, $PRIVATE | $FINAL, $field(SocketCleanable, stream)},
	{}
};

$MethodInfo _SocketCleanable_MethodInfo_[] = {
	{"<init>", "(Ljava/io/FileDescriptor;Ljava/lang/ref/Cleaner;IZ)V", nullptr, $PRIVATE, $method(static_cast<void(SocketCleanable::*)($FileDescriptor*,$Cleaner*,int32_t,bool)>(&SocketCleanable::init$))},
	{"cleanupClose0", "(I)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int32_t)>(&SocketCleanable::cleanupClose0)), "java.io.IOException"},
	{"performCleanup", "()V", nullptr, $PROTECTED},
	{"register", "(Ljava/io/FileDescriptor;Z)V", nullptr, $STATIC, $method(static_cast<void(*)($FileDescriptor*,bool)>(&SocketCleanable::register$))},
	{"unregister", "(Ljava/io/FileDescriptor;)V", nullptr, $STATIC, $method(static_cast<void(*)($FileDescriptor*)>(&SocketCleanable::unregister))},
	{}
};

#define _METHOD_INDEX_cleanupClose0 1

$ClassInfo _SocketCleanable_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"java.net.SocketCleanable",
	"jdk.internal.ref.PhantomCleanable",
	nullptr,
	_SocketCleanable_FieldInfo_,
	_SocketCleanable_MethodInfo_,
	"Ljdk/internal/ref/PhantomCleanable<Ljava/io/FileDescriptor;>;"
};

$Object* allocate$SocketCleanable($Class* clazz) {
	return $of($alloc(SocketCleanable));
}

$JavaIOFileDescriptorAccess* SocketCleanable::fdAccess = nullptr;

void SocketCleanable::cleanupClose0(int32_t fd) {
	$init(SocketCleanable);
	$prepareNativeStatic(SocketCleanable, cleanupClose0, void, int32_t fd);
	$invokeNativeStatic(SocketCleanable, cleanupClose0, fd);
	$finishNativeStatic();
}

void SocketCleanable::register$($FileDescriptor* fdo, bool stream) {
	$init(SocketCleanable);
	if (fdo != nullptr && fdo->valid()) {
		int32_t fd = $nc(SocketCleanable::fdAccess)->get(fdo);
		$nc(SocketCleanable::fdAccess)->registerCleanup(fdo, $$new(SocketCleanable, fdo, $($CleanerFactory::cleaner()), fd, stream));
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
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				cleanupClose0(this->fd);
			} catch ($IOException&) {
				$var($IOException, ioe, $catch());
				$throwNew($UncheckedIOException, "close"_s, ioe);
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			if (!this->stream) {
				$ResourceManager::afterUdpClose();
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void clinit$SocketCleanable($Class* class$) {
	$assignStatic(SocketCleanable::fdAccess, $SharedSecrets::getJavaIOFileDescriptorAccess());
}

SocketCleanable::SocketCleanable() {
}

$Class* SocketCleanable::load$($String* name, bool initialize) {
	$loadClass(SocketCleanable, name, initialize, &_SocketCleanable_ClassInfo_, clinit$SocketCleanable, allocate$SocketCleanable);
	return class$;
}

$Class* SocketCleanable::class$ = nullptr;

	} // net
} // java