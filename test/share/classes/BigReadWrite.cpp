#include <BigReadWrite.h>

#include <java/io/FileOutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/channels/FileChannel.h>
#include <jcpp.h>

using $FileOutputStream = ::java::io::FileOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $FileChannel = ::java::nio::channels::FileChannel;
using $AbstractInterruptibleChannel = ::java::nio::channels::spi::AbstractInterruptibleChannel;

$FieldInfo _BigReadWrite_FieldInfo_[] = {
	{"testSize", "I", nullptr, $STATIC, $staticField(BigReadWrite, testSize)},
	{}
};

$MethodInfo _BigReadWrite_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BigReadWrite::*)()>(&BigReadWrite::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&BigReadWrite::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _BigReadWrite_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"BigReadWrite",
	"java.lang.Object",
	nullptr,
	_BigReadWrite_FieldInfo_,
	_BigReadWrite_MethodInfo_
};

$Object* allocate$BigReadWrite($Class* clazz) {
	return $of($alloc(BigReadWrite));
}

int32_t BigReadWrite::testSize = 0;

void BigReadWrite::init$() {
}

void BigReadWrite::main($StringArray* args) {
	$init(BigReadWrite);
	$var($FileOutputStream, fos, $new($FileOutputStream, "/dev/zero"_s));
	$var($FileChannel, fc, fos->getChannel());
	$var($ByteBuffer, buf, $ByteBuffer::allocate(900));
	$nc(fc)->write(buf);
	$assign(buf, $ByteBuffer::allocate(950));
	fc->write(buf);
	$assign(buf, $ByteBuffer::allocate(975));
	fc->write(buf);
	$assign(buf, $ByteBuffer::allocate(0x00436DB8));
	int64_t iterations = 0;
	while (iterations < 50) {
		fc->write(buf);
		$nc(buf)->rewind();
		++iterations;
	}
	fc->close();
}

void clinit$BigReadWrite($Class* class$) {
	BigReadWrite::testSize = 15;
}

BigReadWrite::BigReadWrite() {
}

$Class* BigReadWrite::load$($String* name, bool initialize) {
	$loadClass(BigReadWrite, name, initialize, &_BigReadWrite_ClassInfo_, clinit$BigReadWrite, allocate$BigReadWrite);
	return class$;
}

$Class* BigReadWrite::class$ = nullptr;