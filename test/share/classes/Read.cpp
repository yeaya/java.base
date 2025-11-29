#include <Read.h>

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
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $FileChannel = ::java::nio::channels::FileChannel;
using $Random = ::java::util::Random;

$FieldInfo _Read_FieldInfo_[] = {
	{"err", "Ljava/io/PrintStream;", nullptr, $PRIVATE | $STATIC, $staticField(Read, err)},
	{"generator", "Ljava/util/Random;", nullptr, $PRIVATE | $STATIC, $staticField(Read, generator)},
	{"CHARS_PER_LINE", "I", nullptr, $PRIVATE | $STATIC, $staticField(Read, CHARS_PER_LINE)},
	{"blah", "Ljava/io/File;", nullptr, $PRIVATE | $STATIC, $staticField(Read, blah)},
	{}
};

$MethodInfo _Read_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Read::*)()>(&Read::init$))},
	{"initTestFile", "(Ljava/io/File;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($File*)>(&Read::initTestFile)), "java.lang.Exception"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Read::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _Read_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Read",
	"java.lang.Object",
	nullptr,
	_Read_FieldInfo_,
	_Read_MethodInfo_
};

$Object* allocate$Read($Class* clazz) {
	return $of($alloc(Read));
}

$PrintStream* Read::err = nullptr;
$Random* Read::generator = nullptr;
int32_t Read::CHARS_PER_LINE = 0;
$File* Read::blah = nullptr;

void Read::init$() {
}

void Read::main($StringArray* args) {
	$init(Read);
	$useLocalCurrentObjectStackCache();
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
			$nc(Read::err)->println($$str({"I got "_s, $$str(result)}));
			$throwNew($Exception, "Read test failed"_s);
		}
	}
	$nc(c)->close();
	fis->close();
	$nc(Read::blah)->delete$();
}

void Read::initTestFile($File* blah) {
	$init(Read);
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

void clinit$Read($Class* class$) {
	$assignStatic(Read::err, $System::err);
	$assignStatic(Read::generator, $new($Random));
	$init($File);
	Read::CHARS_PER_LINE = $File::separatorChar == u'/' ? 5 : 6;
}

Read::Read() {
}

$Class* Read::load$($String* name, bool initialize) {
	$loadClass(Read, name, initialize, &_Read_ClassInfo_, clinit$Read, allocate$Read);
	return class$;
}

$Class* Read::class$ = nullptr;