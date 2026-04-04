#include <BigReadWrite.h>
#include <java/io/FileOutputStream.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/channels/FileChannel.h>
#include <jcpp.h>

using $FileOutputStream = ::java::io::FileOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $FileChannel = ::java::nio::channels::FileChannel;

int32_t BigReadWrite::testSize = 0;

void BigReadWrite::init$() {
}

void BigReadWrite::main($StringArray* args) {
	$init(BigReadWrite);
	$useLocalObjectStack();
	$var($FileOutputStream, fos, $new($FileOutputStream, "/dev/zero"_s));
	$var($FileChannel, fc, fos->getChannel());
	$var($ByteBuffer, buf, $ByteBuffer::allocate(900));
	$nc(fc)->write(buf);
	$assign(buf, $ByteBuffer::allocate(950));
	fc->write(buf);
	$assign(buf, $ByteBuffer::allocate(975));
	fc->write(buf);
	$assign(buf, $ByteBuffer::allocate(4419000));
	int64_t iterations = 0;
	while (iterations < 50) {
		fc->write(buf);
		$nc(buf)->rewind();
		++iterations;
	}
	fc->close();
}

void BigReadWrite::clinit$($Class* clazz) {
	BigReadWrite::testSize = 15;
}

BigReadWrite::BigReadWrite() {
}

$Class* BigReadWrite::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"testSize", "I", nullptr, $STATIC, $staticField(BigReadWrite, testSize)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BigReadWrite, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(BigReadWrite, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"BigReadWrite",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(BigReadWrite, name, initialize, &classInfo$$, BigReadWrite::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(BigReadWrite);
	});
	return class$;
}

$Class* BigReadWrite::class$ = nullptr;