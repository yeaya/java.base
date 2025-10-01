#include <ReadFull.h>

#include <java/io/File.h>
#include <java/io/FileInputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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
using $AbstractInterruptibleChannel = ::java::nio::channels::spi::AbstractInterruptibleChannel;

$MethodInfo _ReadFull_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ReadFull::*)()>(&ReadFull::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&ReadFull::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _ReadFull_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ReadFull",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ReadFull_MethodInfo_
};

$Object* allocate$ReadFull($Class* clazz) {
	return $of($alloc(ReadFull));
}

void ReadFull::init$() {
}

void ReadFull::main($StringArray* args) {
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
	$loadClass(ReadFull, name, initialize, &_ReadFull_ClassInfo_, allocate$ReadFull);
	return class$;
}

$Class* ReadFull::class$ = nullptr;