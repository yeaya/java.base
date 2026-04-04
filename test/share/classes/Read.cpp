#include <Read.h>
#include <java/io/BufferedWriter.h>
#include <java/io/File.h>
#include <java/io/FileInputStream.h>
#include <java/io/FileOutputStream.h>
#include <java/io/OutputStreamWriter.h>
#include <java/lang/StringBuffer.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/channels/FileChannel.h>
#include <java/util/Random.h>
#include <jcpp.h>

#undef CHARS_PER_LINE

using $BufferedWriter = ::java::io::BufferedWriter;
using $File = ::java::io::File;
using $FileInputStream = ::java::io::FileInputStream;
using $FileOutputStream = ::java::io::FileOutputStream;
using $OutputStreamWriter = ::java::io::OutputStreamWriter;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $FileChannel = ::java::nio::channels::FileChannel;
using $Random = ::java::util::Random;

$PrintStream* Read::err = nullptr;
$Random* Read::generator = nullptr;
int32_t Read::CHARS_PER_LINE = 0;
$File* Read::blah = nullptr;

void Read::init$() {
}

void Read::main($StringArray* args) {
	$init(Read);
	$useLocalObjectStack();
	$var($StringBuffer, sb, $new($StringBuffer));
	sb->setLength(4);
	$assignStatic(Read::blah, $File::createTempFile("blah"_s, nullptr));
	$nc(Read::blah)->deleteOnExit();
	initTestFile(Read::blah);
	$var($FileInputStream, fis, $new($FileInputStream, Read::blah));
	$var($FileChannel, c, fis->getChannel());
	for (int32_t x = 0; x < 1000; ++x) {
		int64_t offset = x * Read::CHARS_PER_LINE;
		int64_t expectedResult = $div(offset, Read::CHARS_PER_LINE);
		offset = expectedResult * Read::CHARS_PER_LINE;
		$var($ByteBuffer, bleck, $ByteBuffer::allocateDirect(Read::CHARS_PER_LINE));
		$nc(c)->read(bleck);
		for (int32_t i = 0; i < 4; ++i) {
			int8_t aByte = $nc(bleck)->get(i);
			sb->setCharAt(i, (char16_t)aByte);
		}
		int32_t result = $Integer::parseInt($(sb->toString()));
		if (result != expectedResult) {
			$nc(Read::err)->println($$str({"I expected "_s, $$str(expectedResult)}));
			Read::err->println($$str({"I got "_s, $$str(result)}));
			$throwNew($Exception, "Read test failed"_s);
		}
	}
	$nc(c)->close();
	fis->close();
	$nc(Read::blah)->delete$();
}

void Read::initTestFile($File* blah) {
	$init(Read);
	$useLocalObjectStack();
	$var($FileOutputStream, fos, $new($FileOutputStream, blah));
	$var($BufferedWriter, awriter, $new($BufferedWriter, $$new($OutputStreamWriter, fos, "8859_1"_s)));
	for (int32_t i = 0; i < 4000; ++i) {
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

void Read::clinit$($Class* clazz) {
	$assignStatic(Read::err, $System::err);
	$assignStatic(Read::generator, $new($Random));
	$init($File);
	Read::CHARS_PER_LINE = $File::separatorChar == u'/' ? 5 : 6;
}

Read::Read() {
}

$Class* Read::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"err", "Ljava/io/PrintStream;", nullptr, $PRIVATE | $STATIC, $staticField(Read, err)},
		{"generator", "Ljava/util/Random;", nullptr, $PRIVATE | $STATIC, $staticField(Read, generator)},
		{"CHARS_PER_LINE", "I", nullptr, $PRIVATE | $STATIC, $staticField(Read, CHARS_PER_LINE)},
		{"blah", "Ljava/io/File;", nullptr, $PRIVATE | $STATIC, $staticField(Read, blah)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Read, init$, void)},
		{"initTestFile", "(Ljava/io/File;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(Read, initTestFile, void, $File*), "java.lang.Exception"},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Read, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Read",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Read, name, initialize, &classInfo$$, Read::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Read);
	});
	return class$;
}

$Class* Read::class$ = nullptr;