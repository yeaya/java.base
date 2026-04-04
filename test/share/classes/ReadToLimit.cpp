#include <ReadToLimit.h>
#include <java/io/BufferedWriter.h>
#include <java/io/File.h>
#include <java/io/FileInputStream.h>
#include <java/io/FileOutputStream.h>
#include <java/io/OutputStreamWriter.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/channels/FileChannel.h>
#include <jcpp.h>

using $ByteBufferArray = $Array<::java::nio::ByteBuffer>;
using $BufferedWriter = ::java::io::BufferedWriter;
using $File = ::java::io::File;
using $FileInputStream = ::java::io::FileInputStream;
using $FileOutputStream = ::java::io::FileOutputStream;
using $OutputStreamWriter = ::java::io::OutputStreamWriter;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $FileChannel = ::java::nio::channels::FileChannel;

void ReadToLimit::init$() {
}

void ReadToLimit::main($StringArray* args) {
	$useLocalObjectStack();
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
	$useLocalObjectStack();
	$var($FileOutputStream, fos, $new($FileOutputStream, blah));
	$var($BufferedWriter, awriter, $new($BufferedWriter, $$new($OutputStreamWriter, fos, "8859_1"_s)));
	for (int32_t i = 0; i < 4; ++i) {
		$var($String, number, $$new($Integer, i)->toString());
		for (int32_t h = 0; h < 4 - number->length(); ++h) {
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
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ReadToLimit, init$, void)},
		{"initTestFile", "(Ljava/io/File;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(ReadToLimit, initTestFile, void, $File*), "java.lang.Exception"},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ReadToLimit, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"ReadToLimit",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ReadToLimit, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ReadToLimit);
	});
	return class$;
}

$Class* ReadToLimit::class$ = nullptr;