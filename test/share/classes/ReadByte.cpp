#include <ReadByte.h>

#include <ReadByte$1.h>
#include <java/io/InputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/channels/Channels.h>
#include <java/nio/channels/ReadableByteChannel.h>
#include <jcpp.h>

using $ReadByte$1 = ::ReadByte$1;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Channels = ::java::nio::channels::Channels;
using $ReadableByteChannel = ::java::nio::channels::ReadableByteChannel;

$MethodInfo _ReadByte_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ReadByte::*)()>(&ReadByte::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&ReadByte::main)), "java.io.IOException"},
	{}
};

$InnerClassInfo _ReadByte_InnerClassesInfo_[] = {
	{"ReadByte$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ReadByte_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ReadByte",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ReadByte_MethodInfo_,
	nullptr,
	nullptr,
	_ReadByte_InnerClassesInfo_,
	nullptr,
	nullptr,
	"ReadByte$1"
};

$Object* allocate$ReadByte($Class* clazz) {
	return $of($alloc(ReadByte));
}

void ReadByte::init$() {
}

void ReadByte::main($StringArray* args) {
	$var($ReadableByteChannel, channel, $new($ReadByte$1));
	$var($InputStream, in, $Channels::newInputStream(channel));
	int32_t data = $nc(in)->read();
	if (data < 0) {
		$throwNew($RuntimeException, "InputStream.read() spec\'d to return 0-255"_s);
	}
}

ReadByte::ReadByte() {
}

$Class* ReadByte::load$($String* name, bool initialize) {
	$loadClass(ReadByte, name, initialize, &_ReadByte_ClassInfo_, allocate$ReadByte);
	return class$;
}

$Class* ReadByte::class$ = nullptr;