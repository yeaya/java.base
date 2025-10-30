#include <ReadToLimit.h>

#include <java/io/BufferedWriter.h>
#include <java/io/File.h>
#include <java/io/FileInputStream.h>
#include <java/io/FileOutputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/OutputStreamWriter.h>
#include <java/io/Writer.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/channels/FileChannel.h>
#include <jcpp.h>

using $ByteBufferArray = $Array<::java::nio::ByteBuffer>;
using $BufferedWriter = ::java::io::BufferedWriter;
using $File = ::java::io::File;
using $FileInputStream = ::java::io::FileInputStream;
using $FileOutputStream = ::java::io::FileOutputStream;
using $OutputStream = ::java::io::OutputStream;
using $OutputStreamWriter = ::java::io::OutputStreamWriter;
using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $FileChannel = ::java::nio::channels::FileChannel;
using $AbstractInterruptibleChannel = ::java::nio::channels::spi::AbstractInterruptibleChannel;

$MethodInfo _ReadToLimit_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ReadToLimit::*)()>(&ReadToLimit::init$))},
	{"initTestFile", "(Ljava/io/File;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($File*)>(&ReadToLimit::initTestFile)), "java.lang.Exception"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&ReadToLimit::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _ReadToLimit_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ReadToLimit",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ReadToLimit_MethodInfo_
};

$Object* allocate$ReadToLimit($Class* clazz) {
	return $of($alloc(ReadToLimit));
}

void ReadToLimit::init$() {
}

void ReadToLimit::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($File, blah, $File::createTempFile("blah"_s, nullptr));
	$nc(blah)->deleteOnExit();
	initTestFile(blah);
	$var($ByteBufferArray, dstBuffers, $new($ByteBufferArray, 2));
	for (int32_t i = 0; i < 2; ++i) {
		dstBuffers->set(i, $($ByteBuffer::allocateDirect(10)));
		$nc(dstBuffers->get(i))->limit(5);
	}
	$var($FileInputStream, fis, $new($FileInputStream, blah));
	$var($FileChannel, fc, fis->getChannel());
	int64_t bytesRead = $nc(fc)->read(dstBuffers);
	for (int32_t i = 0; i < 2; ++i) {
		if ($nc(dstBuffers->get(i))->position() != 5) {
			$throwNew($Exception, "Test failed"_s);
		}
	}
	fc->close();
	fis->close();
	blah->delete$();
}

void ReadToLimit::initTestFile($File* blah) {
	$useLocalCurrentObjectStackCache();
	$var($FileOutputStream, fos, $new($FileOutputStream, blah));
	$var($BufferedWriter, awriter, $new($BufferedWriter, $$new($OutputStreamWriter, static_cast<$OutputStream*>(fos), "8859_1"_s)));
	for (int32_t i = 0; i < 4; ++i) {
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

ReadToLimit::ReadToLimit() {
}

$Class* ReadToLimit::load$($String* name, bool initialize) {
	$loadClass(ReadToLimit, name, initialize, &_ReadToLimit_ClassInfo_, allocate$ReadToLimit);
	return class$;
}

$Class* ReadToLimit::class$ = nullptr;