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

$FieldInfo _SdpSupport_FieldInfo_[] = {
	{"os", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SdpSupport, os)},
	{"isSupported", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SdpSupport, isSupported)},
	{"fdAccess", "Ljdk/internal/access/JavaIOFileDescriptorAccess;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SdpSupport, fdAccess)},
	{}
};

$MethodInfo _SdpSupport_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(SdpSupport::*)()>(&SdpSupport::init$))},
	{"convert0", "(I)V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)(int32_t)>(&SdpSupport::convert0)), "java.io.IOException"},
	{"convertSocket", "(Ljava/io/FileDescriptor;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($FileDescriptor*)>(&SdpSupport::convertSocket)), "java.io.IOException"},
	{"create0", "()I", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<int32_t(*)()>(&SdpSupport::create0)), "java.io.IOException"},
	{"createSocket", "()Ljava/io/FileDescriptor;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$FileDescriptor*(*)()>(&SdpSupport::createSocket)), "java.io.IOException"},
	{}
};

#define _METHOD_INDEX_convert0 1
#define _METHOD_INDEX_create0 3

$ClassInfo _SdpSupport_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.net.sdp.SdpSupport",
	"java.lang.Object",
	nullptr,
	_SdpSupport_FieldInfo_,
	_SdpSupport_MethodInfo_
};

$Object* allocate$SdpSupport($Class* clazz) {
	return $of($alloc(SdpSupport));
}

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
	int32_t $ret = 0;
	$prepareNativeStatic(SdpSupport, create0, int32_t);
	$ret = $invokeNativeStatic(SdpSupport, create0);
	$finishNativeStatic();
	return $ret;
}

void SdpSupport::convert0(int32_t fd) {
	$init(SdpSupport);
	$prepareNativeStatic(SdpSupport, convert0, void, int32_t fd);
	$invokeNativeStatic(SdpSupport, convert0, fd);
	$finishNativeStatic();
}

void clinit$SdpSupport($Class* class$) {
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
	$loadClass(SdpSupport, name, initialize, &_SdpSupport_ClassInfo_, clinit$SdpSupport, allocate$SdpSupport);
	return class$;
}

$Class* SdpSupport::class$ = nullptr;

		} // sdp
	} // net
} // sun