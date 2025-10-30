#include <Pread.h>

#include <java/io/BufferedWriter.h>
#include <java/io/File.h>
#include <java/io/FileInputStream.h>
#include <java/io/FileOutputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/OutputStreamWriter.h>
#include <java/io/Writer.h>
#include <java/lang/StringBuffer.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/channels/FileChannel.h>
#include <java/nio/channels/NonReadableChannelException.h>
#include <java/util/Random.h>
#include <jcpp.h>

#undef CHARS_PER_LINE

using $BufferedWriter = ::java::io::BufferedWriter;
using $File = ::java::io::File;
using $FileInputStream = ::java::io::FileInputStream;
using $FileOutputStream = ::java::io::FileOutputStream;
using $OutputStream = ::java::io::OutputStream;
using $OutputStreamWriter = ::java::io::OutputStreamWriter;
using $PrintStream = ::java::io::PrintStream;
using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $StringBuffer = ::java::lang::StringBuffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $FileChannel = ::java::nio::channels::FileChannel;
using $NonReadableChannelException = ::java::nio::channels::NonReadableChannelException;
using $AbstractInterruptibleChannel = ::java::nio::channels::spi::AbstractInterruptibleChannel;
using $Random = ::java::util::Random;

$FieldInfo _Pread_FieldInfo_[] = {
	{"err", "Ljava/io/PrintStream;", nullptr, $PRIVATE | $STATIC, $staticField(Pread, err)},
	{"generator", "Ljava/util/Random;", nullptr, $PRIVATE | $STATIC, $staticField(Pread, generator)},
	{"CHARS_PER_LINE", "I", nullptr, $PRIVATE | $STATIC, $staticField(Pread, CHARS_PER_LINE)},
	{}
};

$MethodInfo _Pread_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Pread::*)()>(&Pread::init$))},
	{"genericTest", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&Pread::genericTest)), "java.lang.Exception"},
	{"initTestFile", "(Ljava/io/File;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($File*)>(&Pread::initTestFile)), "java.lang.Exception"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Pread::main)), "java.lang.Exception"},
	{"testNegativePosition", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&Pread::testNegativePosition)), "java.lang.Exception"},
	{"testUnreadableChannel", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&Pread::testUnreadableChannel)), "java.lang.Exception"},
	{}
};

$ClassInfo _Pread_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Pread",
	"java.lang.Object",
	nullptr,
	_Pread_FieldInfo_,
	_Pread_MethodInfo_
};

$Object* allocate$Pread($Class* clazz) {
	return $of($alloc(Pread));
}

$PrintStream* Pread::err = nullptr;
$Random* Pread::generator = nullptr;
int32_t Pread::CHARS_PER_LINE = 0;

void Pread::init$() {
}

void Pread::main($StringArray* args) {
	$init(Pread);
	genericTest();
	testNegativePosition();
	testUnreadableChannel();
}

void Pread::testNegativePosition() {
	$init(Pread);
	$useLocalCurrentObjectStackCache();
	$var($File, blah, $File::createTempFile("blah1"_s, nullptr));
	$nc(blah)->deleteOnExit();
	$var($FileOutputStream, fos, $new($FileOutputStream, blah));
	fos->write($$new($bytes, 128));
	fos->close();
	$var($FileChannel, fc, ($$new($FileInputStream, blah))->getChannel());
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				$nc(fc)->read($($ByteBuffer::allocate(256)), -1);
				$throwNew($RuntimeException, "Expected exception not thrown"_s);
			} catch ($IllegalArgumentException& e) {
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

void Pread::testUnreadableChannel() {
	$init(Pread);
	$useLocalCurrentObjectStackCache();
	$var($File, blah, $File::createTempFile("blah2"_s, nullptr));
	$nc(blah)->deleteOnExit();
	$var($FileOutputStream, fos, $new($FileOutputStream, blah));
	{
		$var($Throwable, var$0, nullptr);
		try {
			fos->write($$new($bytes, 128));
			$var($FileChannel, fc, fos->getChannel());
			try {
				$nc(fc)->read($($ByteBuffer::allocate(256)), 1);
				$throwNew($RuntimeException, "Expected exception not thrown"_s);
			} catch ($NonReadableChannelException& e) {
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			fos->close();
			blah->delete$();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void Pread::genericTest() {
	$init(Pread);
	$useLocalCurrentObjectStackCache();
	$var($StringBuffer, sb, $new($StringBuffer));
	sb->setLength(4);
	$var($File, blah, $File::createTempFile("blah3"_s, nullptr));
	$nc(blah)->deleteOnExit();
	initTestFile(blah);
	$var($FileInputStream, fis, $new($FileInputStream, blah));
	$var($FileChannel, c, fis->getChannel());
	for (int32_t x = 0; x < 100; ++x) {
		int64_t offset = $nc(Pread::generator)->nextInt(1000);
		int64_t expectedResult = $div(offset, Pread::CHARS_PER_LINE);
		offset = expectedResult * Pread::CHARS_PER_LINE;
		$var($ByteBuffer, bleck, $ByteBuffer::allocateDirect(4));
		int64_t originalPosition = $nc(c)->position();
		int32_t totalRead = 0;
		while (totalRead < 4) {
			int32_t read = c->read(bleck, offset);
			if (read < 0) {
				$throwNew($Exception, "Read failed"_s);
			}
			totalRead += read;
		}
		int64_t newPosition = c->position();
		for (int32_t i = 0; i < 4; ++i) {
			int8_t aByte = $nc(bleck)->get(i);
			sb->setCharAt(i, (char16_t)aByte);
		}
		int32_t result = $Integer::parseInt($(sb->toString()));
		if (result != expectedResult) {
			$nc(Pread::err)->println($$str({"I expected "_s, $$str(expectedResult)}));
			$nc(Pread::err)->println($$str({"I got "_s, $$str(result)}));
			$throwNew($Exception, "Read test failed"_s);
		}
		if (originalPosition != newPosition) {
			$throwNew($Exception, "File position modified"_s);
		}
	}
	$nc(c)->close();
	fis->close();
	blah->delete$();
}

void Pread::initTestFile($File* blah) {
	$init(Pread);
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

void clinit$Pread($Class* class$) {
	$assignStatic(Pread::err, $System::err);
	$assignStatic(Pread::generator, $new($Random));
	$init($File);
	Pread::CHARS_PER_LINE = $File::separatorChar == u'/' ? 5 : 6;
}

Pread::Pread() {
}

$Class* Pread::load$($String* name, bool initialize) {
	$loadClass(Pread, name, initialize, &_Pread_ClassInfo_, clinit$Pread, allocate$Pread);
	return class$;
}

$Class* Pread::class$ = nullptr;