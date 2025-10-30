#include <Write.h>

#include <java/io/File.h>
#include <java/io/FileInputStream.h>
#include <java/io/FileOutputStream.h>
#include <java/nio/BufferUnderflowException.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/channels/FileChannel.h>
#include <jcpp.h>

using $ByteBufferArray = $Array<::java::nio::ByteBuffer>;
using $File = ::java::io::File;
using $FileInputStream = ::java::io::FileInputStream;
using $FileOutputStream = ::java::io::FileOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $BufferUnderflowException = ::java::nio::BufferUnderflowException;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $FileChannel = ::java::nio::channels::FileChannel;
using $AbstractInterruptibleChannel = ::java::nio::channels::spi::AbstractInterruptibleChannel;

$MethodInfo _Write_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Write::*)()>(&Write::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Write::main)), "java.lang.Exception"},
	{"test1", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&Write::test1)), "java.lang.Exception"},
	{"test2", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&Write::test2)), "java.lang.Exception"},
	{"test3", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&Write::test3)), "java.lang.Exception"},
	{}
};

$ClassInfo _Write_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Write",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Write_MethodInfo_
};

$Object* allocate$Write($Class* clazz) {
	return $of($alloc(Write));
}

void Write::init$() {
}

void Write::main($StringArray* args) {
	test1();
	test2();
	test3();
}

void Write::test1() {
	$useLocalCurrentObjectStackCache();
	$var($ByteBufferArray, dsts, $new($ByteBufferArray, 4));
	for (int32_t i = 0; i < 4; ++i) {
		dsts->set(i, $($ByteBuffer::allocateDirect(10)));
	}
	$var($File, testFile, $File::createTempFile("test1"_s, nullptr));
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($FileOutputStream, fos, $new($FileOutputStream, testFile));
			$var($FileChannel, fc, fos->getChannel());
			$nc(fc)->write(dsts, 2, 1);
			fos->close();
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc(testFile)->delete$();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void Write::test2() {
	$useLocalCurrentObjectStackCache();
	$var($File, testFile, $File::createTempFile("test2"_s, nullptr));
	$nc(testFile)->delete$();
	$var($ByteBufferArray, srcs, $new($ByteBufferArray, 4));
	for (int32_t i = 0; i < 4; ++i) {
		srcs->set(i, $($ByteBuffer::allocateDirect(10)));
	}
	$nc(srcs->get(0))->put((int8_t)1);
	$nc(srcs->get(0))->flip();
	$nc(srcs->get(1))->put((int8_t)2);
	$nc(srcs->get(1))->flip();
	$nc(srcs->get(2))->put((int8_t)3);
	$nc(srcs->get(2))->flip();
	$nc(srcs->get(3))->put((int8_t)4);
	$nc(srcs->get(3))->flip();
	$var($FileOutputStream, fos, $new($FileOutputStream, testFile));
	$var($FileChannel, fc, fos->getChannel());
	{
		$var($Throwable, var$0, nullptr);
		try {
			$nc(fc)->write(srcs, 1, 2);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc(fc)->close();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	$var($FileInputStream, fis, $new($FileInputStream, testFile));
	$assign(fc, fis->getChannel());
	{
		$var($Throwable, var$2, nullptr);
		try {
			$var($ByteBuffer, bb, $ByteBuffer::allocateDirect(10));
			fc->read(bb);
			$nc(bb)->flip();
			if (bb->get() != 2) {
				$throwNew($RuntimeException, "Write failure"_s);
			}
			if (bb->get() != 3) {
				$throwNew($RuntimeException, "Write failure"_s);
			}
			try {
				bb->get();
				$throwNew($RuntimeException, "Write failure"_s);
			} catch ($BufferUnderflowException& bufe) {
			}
		} catch ($Throwable& var$3) {
			$assign(var$2, var$3);
		} /*finally*/ {
			fc->close();
		}
		if (var$2 != nullptr) {
			$throw(var$2);
		}
	}
	testFile->delete$();
}

void Write::test3() {
	$useLocalCurrentObjectStackCache();
	$var($File, testFile, $File::createTempFile("test1"_s, nullptr));
	$nc(testFile)->deleteOnExit();
	$var($ByteBuffer, dst, $ByteBuffer::allocate(10));
	$var($FileOutputStream, fos, $new($FileOutputStream, testFile));
	$var($FileChannel, fc, fos->getChannel());
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				$nc(fc)->write(dst, -1);
				$throwNew($RuntimeException, "Expected IAE not thrown"_s);
			} catch ($IllegalArgumentException& iae) {
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			fos->close();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

Write::Write() {
}

$Class* Write::load$($String* name, bool initialize) {
	$loadClass(Write, name, initialize, &_Write_ClassInfo_, allocate$Write);
	return class$;
}

$Class* Write::class$ = nullptr;