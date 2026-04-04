#include <sun/net/sdp/SdpSupport.h>
#include <java/io/FileDescriptor.h>
#include <java/lang/UnsupportedOperationException.h>
#include <jdk/internal/access/JavaIOFileDescriptorAccess.h>
#include <jdk/internal/access/SharedSecrets.h>
#include <jdk/internal/loader/BootLoader.h>
#include <sun/security/action/GetPropertyAction.h>
#include <jcpp.h>

using $FileDescriptor = ::java::io::FileDescriptor;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $JavaIOFileDescriptorAccess = ::jdk::internal::access::JavaIOFileDescriptorAccess;
using $SharedSecrets = ::jdk::internal::access::SharedSecrets;
using $BootLoader = ::jdk::internal::loader::BootLoader;
using $GetPropertyAction = ::sun::security::action::GetPropertyAction;

namespace sun {
	namespace net {
		namespace sdp {

$String* SdpSupport::os = nullptr;
bool SdpSupport::isSupported = false;
$JavaIOFileDescriptorAccess* SdpSupport::fdAccess = nullptr;

void SdpSupport::init$() {
}

$FileDescriptor* SdpSupport::createSocket() {
	$init(SdpSupport);
	if (!SdpSupport::isSupported) {
		$throwNew($UnsupportedOperationException, "SDP not supported on this platform"_s);
	}
	int32_t fdVal = create0();
	$var($FileDescriptor, fd, $new($FileDescriptor));
	$nc(SdpSupport::fdAccess)->set(fd, fdVal);
	return fd;
}

void SdpSupport::convertSocket($FileDescriptor* fd) {
	$init(SdpSupport);
	if (!SdpSupport::isSupported) {
		$throwNew($UnsupportedOperationException, "SDP not supported on this platform"_s);
	}
	int32_t fdVal = $nc(SdpSupport::fdAccess)->get(fd);
	convert0(fdVal);
}

int32_t SdpSupport::create0() {
	$init(SdpSupport);
	$prepareNativeStatic(create0, int32_t);
	int32_t $ret = $invokeNativeStatic();
	$finishNativeStatic();
	return $ret;
}

void SdpSupport::convert0(int32_t fd) {
	$init(SdpSupport);
	$prepareNativeStatic(convert0, void, int32_t fd);
	$invokeNativeStatic(fd);
	$finishNativeStatic();
}

void SdpSupport::clinit$($Class* clazz) {
	$assignStatic(SdpSupport::os, $GetPropertyAction::privilegedGetProperty("os.name"_s));
	SdpSupport::isSupported = $nc(SdpSupport::os)->equals("Linux"_s);
	$assignStatic(SdpSupport::fdAccess, $SharedSecrets::getJavaIOFileDescriptorAccess());
	{
		$BootLoader::loadLibrary("net"_s);
	}
}

SdpSupport::SdpSupport() {
}

$Class* SdpSupport::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"os", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SdpSupport, os)},
		{"isSupported", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SdpSupport, isSupported)},
		{"fdAccess", "Ljdk/internal/access/JavaIOFileDescriptorAccess;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SdpSupport, fdAccess)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(SdpSupport, init$, void)},
		{"convert0", "(I)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(SdpSupport, convert0, void, int32_t), "java.io.IOException"},
		{"convertSocket", "(Ljava/io/FileDescriptor;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(SdpSupport, convertSocket, void, $FileDescriptor*), "java.io.IOException"},
		{"create0", "()I", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(SdpSupport, create0, int32_t), "java.io.IOException"},
		{"createSocket", "()Ljava/io/FileDescriptor;", nullptr, $PUBLIC | $STATIC, $staticMethod(SdpSupport, createSocket, $FileDescriptor*), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.net.sdp.SdpSupport",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SdpSupport, name, initialize, &classInfo$$, SdpSupport::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(SdpSupport);
	});
	return class$;
}

$Class* SdpSupport::class$ = nullptr;

		} // sdp
	} // net
} // sun