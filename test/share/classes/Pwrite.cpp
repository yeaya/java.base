#include <Pwrite.h>

#include <java/io/BufferedWriter.h>
#include <java/io/File.h>
#include <java/io/FileInputStream.h>
#include <java/io/FileOutputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/OutputStreamWriter.h>
#include <java/io/RandomAccessFile.h>
#include <java/io/Writer.h>
#include <java/lang/StringBuffer.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/channels/FileChannel.h>
#include <java/nio/channels/NonWritableChannelException.h>
#include <java/util/Random.h>
#include <jcpp.h>

using $BufferedWriter = ::java::io::BufferedWriter;
using $File = ::java::io::File;
using $FileInputStream = ::java::io::FileInputStream;
using $FileOutputStream = ::java::io::FileOutputStream;
using $OutputStream = ::java::io::OutputStream;
using $OutputStreamWriter = ::java::io::OutputStreamWriter;
using $RandomAccessFile = ::java::io::RandomAccessFile;
using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $StringBuffer = ::java::lang::StringBuffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $FileChannel = ::java::nio::channels::FileChannel;
using $NonWritableChannelException = ::java::nio::channels::NonWritableChannelException;
using $AbstractInterruptibleChannel = ::java::nio::channels::spi::AbstractInterruptibleChannel;
using $Random = ::java::util::Random;

$FieldInfo _Pwrite_FieldInfo_[] = {
	{"generator", "Ljava/util/Random;", nullptr, $PRIVATE | $STATIC, $staticField(Pwrite, generator)},
	{"blah", "Ljava/io/File;", nullptr, $PRIVATE | $STATIC, $staticField(Pwrite, blah)},
	{}
};

$MethodInfo _Pwrite_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Pwrite::*)()>(&Pwrite::init$))},
	{"genericTest", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&Pwrite::genericTest)), "java.lang.Exception"},
	{"initTestFile", "(Ljava/io/File;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($File*)>(&Pwrite::initTestFile)), "java.lang.Exception"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Pwrite::main)), "java.lang.Exception"},
	{"testUnwritableChannel", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&Pwrite::testUnwritableChannel)), "java.lang.Exception"},
	{}
};

$ClassInfo _Pwrite_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Pwrite",
	"java.lang.Object",
	nullptr,
	_Pwrite_FieldInfo_,
	_Pwrite_MethodInfo_
};

$Object* allocate$Pwrite($Class* clazz) {
	return $of($alloc(Pwrite));
}

$Random* Pwrite::generator = nullptr;
$File* Pwrite::blah = nullptr;

void Pwrite::init$() {
}

void Pwrite::main($StringArray* args) {
	$init(Pwrite);
	genericTest();
	testUnwritableChannel();
}

void Pwrite::testUnwritableChannel() {
	$init(Pwrite);
	$useLocalCurrentObjectStackCache();
	$var($File, blah, $File::createTempFile("blah2"_s, nullptr));
	$nc(blah)->deleteOnExit();
	$var($FileOutputStream, fos, $new($FileOutputStream, blah));
	fos->write($$new($bytes, 128));
	fos->close();
	$var($FileInputStream, fis, $new($FileInputStream, blah));
	$var($FileChannel, fc, fis->getChannel());
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				$nc(fc)->write($($ByteBuffer::allocate(256)), 1);
				$throwNew($RuntimeException, "Expected exception not thrown"_s);
			} catch ($NonWritableChannelException& e) {
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc(fc)->close();
			blah->delete$();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void Pwrite::genericTest() {
	$init(Pwrite);
	$useLocalCurrentObjectStackCache();
	$var($StringBuffer, sb, $new($StringBuffer));
	sb->setLength(4);
	$assignStatic(Pwrite::blah, $File::createTempFile("blah"_s, nullptr));
	$nc(Pwrite::blah)->deleteOnExit();
	initTestFile(Pwrite::blah);
	$var($RandomAccessFile, raf, $new($RandomAccessFile, Pwrite::blah, "rw"_s));
	$var($FileChannel, c, raf->getChannel());
	for (int32_t x = 0; x < 100; ++x) {
		int64_t offset = $nc(Pwrite::generator)->nextInt(1000);
		$var($ByteBuffer, bleck, $ByteBuffer::allocateDirect(4));
		for (int8_t i = (int8_t)0; i < 4; ++i) {
			$nc(bleck)->put(i);
		}
		$nc(bleck)->flip();
		int64_t originalPosition = $nc(c)->position();
		int32_t totalWritten = 0;
		while (totalWritten < 4) {
			int32_t written = c->write(bleck, offset);
			if (written < 0) {
				$throwNew($Exception, "Read failed"_s);
			}
			totalWritten += written;
		}
		int64_t newPosition = c->position();
		if (originalPosition != newPosition) {
			$throwNew($Exception, "File position modified"_s);
		}
		$assign(bleck, $ByteBuffer::allocateDirect(4));
		originalPosition = c->position();
		int32_t totalRead = 0;
		while (totalRead < 4) {
			int32_t read = c->read(bleck, offset);
			if (read < 0) {
				$throwNew($Exception, "Read failed"_s);
			}
			totalRead += read;
		}
		newPosition = c->position();
		if (originalPosition != newPosition) {
			$throwNew($Exception, "File position modified"_s);
		}
		for (int8_t i = (int8_t)0; i < 4; ++i) {
			if (bleck->get((int32_t)i) != i) {
				$throwNew($Exception, "Write test failed"_s);
			}
		}
	}
	$nc(c)->close();
	raf->close();
	$nc(Pwrite::blah)->delete$();
}

void Pwrite::initTestFile($File* blah) {
	$init(Pwrite);
	$useLocalCurrentObjectStackCache();
	$var($FileOutputStream, fos, $new($FileOutputStream, blah));
	$var($BufferedWriter, awriter, $new($BufferedWriter, $$new($OutputStreamWriter, static_cast<$OutputStream*>(fos), "8859_1"_s)));
	for (int32_t i = 0; i < 4000; ++i) {
		$var($String, number, $$new($Integer, i)->toString());
		for (int32_t h = 0; h < 4 - $nc(number)->length(); ++h) {
			awriter->write("0"_s);
		}
		awriter->write($$str({""_s, $$str(i)}));
		awriter->newLine();
	}
	awriter->flush();
	awriter->close();
}

void clinit$Pwrite($Class* class$) {
	$assignStatic(Pwrite::generator, $new($Random));
}

Pwrite::Pwrite() {
}

$Class* Pwrite::load$($String* name, bool initialize) {
	$loadClass(Pwrite, name, initialize, &_Pwrite_ClassInfo_, clinit$Pwrite, allocate$Pwrite);
	return class$;
}

$Class* Pwrite::class$ = nullptr;