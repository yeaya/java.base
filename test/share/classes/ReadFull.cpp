#include <ReadFull.h>
#include <java/io/File.h>
#include <java/io/FileInputStream.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/channels/FileChannel.h>
#include <jcpp.h>

using $ByteBufferArray = $Array<::java::nio::ByteBuffer>;
using $File = ::java::io::File;
using $FileInputStream = ::java::io::FileInputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $FileChannel = ::java::nio::channels::FileChannel;

void ReadFull::init$() {
}

void ReadFull::main($StringArray* args) {
	$useLocalObjectStack();
	$var($File, blah, $File::createTempFile("blah"_s, nullptr));
	$nc(blah)->deleteOnExit();
	$var($ByteBufferArray, dstBuffers, $new($ByteBufferArray, 10));
	for (int32_t i = 0; i < 10; ++i) {
		dstBuffers->set(i, $($ByteBuffer::allocateDirect(10)));
		$nc(dstBuffers->get(i))->position(10);
	}
	$var($FileInputStream, fis, $new($FileInputStream, blah));
	$var($FileChannel, fc, fis->getChannel());
	int64_t bytesRead = $nc(fc)->read(dstBuffers);
	if (bytesRead != 0) {
		$throwNew($RuntimeException, "Nonzero return from read"_s);
	}
	fc->close();
	fis->close();
	blah->delete$();
}

ReadFull::ReadFull() {
}

$Class* ReadFull::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ReadFull, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ReadFull, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"ReadFull",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ReadFull, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ReadFull);
	});
	return class$;
}

$Class* ReadFull::class$ = nullptr;