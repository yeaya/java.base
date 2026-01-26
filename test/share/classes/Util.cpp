#include <Util.h>

#include <java/io/File.h>
#include <java/io/FileDescriptor.h>
#include <java/lang/InternalError.h>
#include <java/lang/reflect/Field.h>
#include <java/nio/channels/DatagramChannel.h>
#include <java/nio/channels/ServerSocketChannel.h>
#include <java/nio/channels/SocketChannel.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $FileDescriptor = ::java::io::FileDescriptor;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $Integer = ::java::lang::Integer;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $Field = ::java::lang::reflect::Field;
using $DatagramChannel = ::java::nio::channels::DatagramChannel;
using $ServerSocketChannel = ::java::nio::channels::ServerSocketChannel;
using $SocketChannel = ::java::nio::channels::SocketChannel;

$MethodInfo _Util_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Util, init$, void)},
	{"fdVal", "(Ljava/io/FileDescriptor;)I", nullptr, $PRIVATE | $STATIC, $staticMethod(Util, fdVal, int32_t, $FileDescriptor*), "java.lang.Exception"},
	{"get", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC, $staticMethod(Util, get, $Object*, $String*, $String*, Object$*), "java.lang.Exception"},
	{"getFD", "(Ljava/nio/channels/SocketChannel;)I", nullptr, $PUBLIC | $STATIC, $staticMethod(Util, getFD, int32_t, $SocketChannel*)},
	{"getFD", "(Ljava/nio/channels/ServerSocketChannel;)I", nullptr, $PUBLIC | $STATIC, $staticMethod(Util, getFD, int32_t, $ServerSocketChannel*)},
	{"getFD", "(Ljava/nio/channels/DatagramChannel;)I", nullptr, $PUBLIC | $STATIC, $staticMethod(Util, getFD, int32_t, $DatagramChannel*)},
	{"javaCommand", "()Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(Util, javaCommand, $String*)},
	{}
};

$ClassInfo _Util_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Util",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Util_MethodInfo_
};

$Object* allocate$Util($Class* clazz) {
	return $of($alloc(Util));
}

void Util::init$() {
}

$Object* Util::get($String* className, $String* fieldName, Object$* o) {
	$load(Util);
	$beforeCallerSensitive();
	$Class* cl = $Class::forName(className);
	$var($Field, fld, $nc(cl)->getDeclaredField(fieldName));
	$nc(fld)->setAccessible(true);
	return $of(fld->get(o));
}

int32_t Util::fdVal($FileDescriptor* fdObj) {
	$var($Object, fdVal, get("java.io.FileDescriptor"_s, "fd"_s, fdObj));
	return $nc(($cast($Integer, fdVal)))->intValue();
}

int32_t Util::getFD($SocketChannel* sc) {
	$useLocalCurrentObjectStackCache();
	try {
		$var($Object, fdObj, get("sun.nio.ch.SocketChannelImpl"_s, "fd"_s, sc));
		return fdVal($cast($FileDescriptor, fdObj));
	} catch ($Exception& x) {
		x->printStackTrace();
		$throwNew($InternalError, $(x->getMessage()));
	}
	$shouldNotReachHere();
}

int32_t Util::getFD($ServerSocketChannel* ssc) {
	$useLocalCurrentObjectStackCache();
	try {
		$var($Object, fdObj, get("sun.nio.ch.ServerSocketChannelImpl"_s, "fd"_s, ssc));
		return fdVal($cast($FileDescriptor, fdObj));
	} catch ($Exception& x) {
		x->printStackTrace();
		$throwNew($InternalError, $(x->getMessage()));
	}
	$shouldNotReachHere();
}

int32_t Util::getFD($DatagramChannel* dc) {
	$useLocalCurrentObjectStackCache();
	try {
		$var($Object, fdObj, get("sun.nio.ch.DatagramChannelImpl"_s, "fd"_s, dc));
		return fdVal($cast($FileDescriptor, fdObj));
	} catch ($Exception& x) {
		x->printStackTrace();
		$throwNew($InternalError, $(x->getMessage()));
	}
	$shouldNotReachHere();
}

$String* Util::javaCommand() {
	$init($File);
	return $str({$($System::getProperty("java.home"_s)), $File::separator, "bin"_s, $File::separator, "java"_s});
}

Util::Util() {
}

$Class* Util::load$($String* name, bool initialize) {
	$loadClass(Util, name, initialize, &_Util_ClassInfo_, allocate$Util);
	return class$;
}

$Class* Util::class$ = nullptr;