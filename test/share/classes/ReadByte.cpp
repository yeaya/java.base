#include <ReadByte.h>
#include <ReadByte$1.h>
#include <java/io/InputStream.h>
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

void ReadByte::init$() {
}

void ReadByte::main($StringArray* args) {
	$useLocalObjectStack();
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
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ReadByte, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ReadByte, main, void, $StringArray*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ReadByte$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"ReadByte",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"ReadByte$1"
	};
	$loadClass(ReadByte, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ReadByte);
	});
	return class$;
}

$Class* ReadByte::class$ = nullptr;