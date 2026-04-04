#include <ShortWrite4Channels.h>
#include <ShortWrite4Channels$1.h>
#include <java/io/OutputStream.h>
#include <java/nio/channels/Channels.h>
#include <java/nio/channels/WritableByteChannel.h>
#include <java/util/Random.h>
#include <jcpp.h>

using $ShortWrite4Channels$1 = ::ShortWrite4Channels$1;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Channels = ::java::nio::channels::Channels;
using $WritableByteChannel = ::java::nio::channels::WritableByteChannel;
using $Random = ::java::util::Random;

$Random* ShortWrite4Channels::rand = nullptr;
int32_t ShortWrite4Channels::bytesWritten = 0;

void ShortWrite4Channels::init$() {
}

void ShortWrite4Channels::main($StringArray* args) {
	$init(ShortWrite4Channels);
	$useLocalObjectStack();
	$var($WritableByteChannel, wbc, $new($ShortWrite4Channels$1));
	$var($OutputStream, out, $Channels::newOutputStream(wbc));
	int32_t expected = 0;
	$var($bytes, buf, $new($bytes, 100));
	for (int32_t i = 0; i < buf->length; ++i) {
		int32_t len = buf->length - i;
		$nc(out)->write(buf, i, len);
		expected += len;
	}
	$nc($System::out)->format("Bytes written: %d, expected: %d\n"_s, $$new($ObjectArray, {
		$($Integer::valueOf(ShortWrite4Channels::bytesWritten)),
		$($Integer::valueOf(expected))
	}));
	if (ShortWrite4Channels::bytesWritten != expected) {
		$throwNew($RuntimeException, "incorrect number of bytes written"_s);
	}
}

void ShortWrite4Channels::clinit$($Class* clazz) {
	$assignStatic(ShortWrite4Channels::rand, $new($Random));
	ShortWrite4Channels::bytesWritten = 0;
}

ShortWrite4Channels::ShortWrite4Channels() {
}

$Class* ShortWrite4Channels::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"rand", "Ljava/util/Random;", nullptr, $STATIC, $staticField(ShortWrite4Channels, rand)},
		{"bytesWritten", "I", nullptr, $STATIC, $staticField(ShortWrite4Channels, bytesWritten)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ShortWrite4Channels, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ShortWrite4Channels, main, void, $StringArray*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ShortWrite4Channels$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"ShortWrite4Channels",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"ShortWrite4Channels$1"
	};
	$loadClass(ShortWrite4Channels, name, initialize, &classInfo$$, ShortWrite4Channels::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ShortWrite4Channels);
	});
	return class$;
}

$Class* ShortWrite4Channels::class$ = nullptr;