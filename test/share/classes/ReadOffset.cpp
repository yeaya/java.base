#include <ReadOffset.h>
#include <ReadOffset$1.h>
#include <java/io/InputStream.h>
#include <java/nio/channels/Channels.h>
#include <java/nio/channels/ReadableByteChannel.h>
#include <jcpp.h>

using $ReadOffset$1 = ::ReadOffset$1;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Channels = ::java::nio::channels::Channels;
using $ReadableByteChannel = ::java::nio::channels::ReadableByteChannel;

void ReadOffset::init$() {
}

void ReadOffset::main($StringArray* args) {
	$useLocalObjectStack();
	$var($ReadableByteChannel, rbc, $new($ReadOffset$1));
	$var($InputStream, in, $Channels::newInputStream(rbc));
	$var($bytes, b, $new($bytes, 3));
	$nc(in)->read(b, 0, 1);
	in->read(b, 2, 1);
}

ReadOffset::ReadOffset() {
}

$Class* ReadOffset::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ReadOffset, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ReadOffset, main, void, $StringArray*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ReadOffset$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"ReadOffset",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"ReadOffset$1"
	};
	$loadClass(ReadOffset, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ReadOffset);
	});
	return class$;
}

$Class* ReadOffset::class$ = nullptr;