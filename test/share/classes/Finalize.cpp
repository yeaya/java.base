#include <Finalize.h>

#include <java/io/File.h>
#include <java/io/FileDescriptor.h>
#include <java/io/FileInputStream.h>
#include <java/io/FileOutputStream.h>
#include <java/io/RandomAccessFile.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/channels/FileChannel.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $FileDescriptor = ::java::io::FileDescriptor;
using $FileInputStream = ::java::io::FileInputStream;
using $FileOutputStream = ::java::io::FileOutputStream;
using $PrintStream = ::java::io::PrintStream;
using $RandomAccessFile = ::java::io::RandomAccessFile;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $FileChannel = ::java::nio::channels::FileChannel;

$FieldInfo _Finalize_FieldInfo_[] = {
	{"data", "[B", nullptr, $STATIC, $staticField(Finalize, data)},
	{"inFileName", "Ljava/lang/String;", nullptr, $STATIC, $staticField(Finalize, inFileName)},
	{"outFileName", "Ljava/lang/String;", nullptr, $STATIC, $staticField(Finalize, outFileName)},
	{"inFile", "Ljava/io/File;", nullptr, $STATIC, $staticField(Finalize, inFile)},
	{"outFile", "Ljava/io/File;", nullptr, $STATIC, $staticField(Finalize, outFile)},
	{}
};

$MethodInfo _Finalize_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Finalize, init$, void)},
	{"doFileChannel", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(Finalize, doFileChannel, void), "java.lang.Exception"},
	{"doFileInputStream", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(Finalize, doFileInputStream, void), "java.lang.Exception"},
	{"doFileOutputStream", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(Finalize, doFileOutputStream, void), "java.lang.Exception"},
	{"doRandomAccessFile", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(Finalize, doRandomAccessFile, void), "java.lang.Exception"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Finalize, main, void, $StringArray*), "java.lang.Exception"},
	{"writeToInFile", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(Finalize, writeToInFile, void), "java.io.IOException"},
	{}
};

$ClassInfo _Finalize_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Finalize",
	"java.lang.Object",
	nullptr,
	_Finalize_FieldInfo_,
	_Finalize_MethodInfo_
};

$Object* allocate$Finalize($Class* clazz) {
	return $of($alloc(Finalize));
}

$bytes* Finalize::data = nullptr;
$String* Finalize::inFileName = nullptr;
$String* Finalize::outFileName = nullptr;
$File* Finalize::inFile = nullptr;
$File* Finalize::outFile = nullptr;

void Finalize::init$() {
}

void Finalize::main($StringArray* args) {
	$init(Finalize);
	$useLocalCurrentObjectStackCache();
	$Thread::sleep(5000);
	$assignStatic(Finalize::inFile, $new($File, $($System::getProperty("test.dir"_s, "."_s)), Finalize::inFileName));
	$nc(Finalize::inFile)->createNewFile();
	$nc(Finalize::inFile)->deleteOnExit();
	writeToInFile();
	doFileInputStream();
	$assignStatic(Finalize::outFile, $new($File, $($System::getProperty("test.dir"_s, "."_s)), Finalize::outFileName));
	$nc(Finalize::outFile)->createNewFile();
	$nc(Finalize::outFile)->deleteOnExit();
	doFileOutputStream();
	doRandomAccessFile();
	doFileChannel();
}

void Finalize::doFileInputStream() {
	$init(Finalize);
	$useLocalCurrentObjectStackCache();
	$var($FileInputStream, fis1, $new($FileInputStream, Finalize::inFile));
	$var($FileDescriptor, fd, fis1->getFD());
	$var($FileInputStream, fis2, $new($FileInputStream, fd));
	$assign(fis1, nullptr);
	int32_t ret = 0;
	$System::gc();
	$Thread::sleep(200);
	while ((ret = fis2->read()) != -1) {
		$nc($System::out)->println($$str({"read from fis2:"_s, $$str(ret)}));
	}
	fis2->close();
}

void Finalize::writeToInFile() {
	$init(Finalize);
	$var($FileOutputStream, out, $new($FileOutputStream, Finalize::inFile));
	out->write(Finalize::data);
	out->close();
}

void Finalize::doFileOutputStream() {
	$init(Finalize);
	$useLocalCurrentObjectStackCache();
	$nc($System::out)->println("--------FileOutputStream Test Started----------"_s);
	$var($FileOutputStream, fos1, $new($FileOutputStream, Finalize::outFile));
	$var($FileDescriptor, fd, fos1->getFD());
	$var($FileOutputStream, fos2, $new($FileOutputStream, fd));
	$assign(fos1, nullptr);
	$System::gc();
	$Thread::sleep(200);
	fos2->write(Finalize::data);
	$nc($System::out)->println($$str({"wrote:"_s, $$str($nc(Finalize::data)->length), " bytes to fos2"_s}));
	fos2->close();
	$nc($System::out)->println("--------FileOutputStream Test Over----------"_s);
	$nc($System::out)->println();
}

void Finalize::doRandomAccessFile() {
	$init(Finalize);
	$useLocalCurrentObjectStackCache();
	$nc($System::out)->println("--------RandomAccessFile Read Test Started----------"_s);
	$var($RandomAccessFile, raf, $new($RandomAccessFile, Finalize::inFile, "r"_s));
	$var($FileDescriptor, fd, raf->getFD());
	$var($FileInputStream, fis, $new($FileInputStream, fd));
	$assign(fis, nullptr);
	int32_t ret = 0;
	$System::gc();
	$Thread::sleep(50);
	while ((ret = raf->read()) != -1) {
		$nc($System::out)->println($$str({"read from raf:"_s, $$str(ret)}));
	}
	raf->close();
	$Thread::sleep(200);
	$nc($System::out)->println("--------RandomAccessFile Write Test Started----------"_s);
	$nc($System::out)->println();
	$assign(raf, $new($RandomAccessFile, Finalize::outFile, "rw"_s));
	$assign(fd, raf->getFD());
	$var($FileOutputStream, fos, $new($FileOutputStream, fd));
	$assign(fos, nullptr);
	$System::gc();
	$Thread::sleep(200);
	raf->write(Finalize::data);
	$nc($System::out)->println($$str({"wrote:"_s, $$str($nc(Finalize::data)->length), " bytes to raf"_s}));
	raf->close();
	$nc($System::out)->println("--------RandomAccessFile Write Test Over----------"_s);
	$nc($System::out)->println();
}

void Finalize::doFileChannel() {
	$init(Finalize);
	$useLocalCurrentObjectStackCache();
	$nc($System::out)->println("--------FileChannel Read Test Started----------"_s);
	$nc($System::out)->println();
	$var($FileInputStream, fis1, $new($FileInputStream, Finalize::inFile));
	$var($FileDescriptor, fd, fis1->getFD());
	$var($FileInputStream, fis2, $new($FileInputStream, fd));
	$var($FileChannel, fc2, fis2->getChannel());
	$assign(fis1, nullptr);
	$System::gc();
	$Thread::sleep(200);
	int32_t ret = 1;
	$var($ByteBuffer, bb, $ByteBuffer::allocateDirect(1));
	ret = $nc(fc2)->read(bb);
	$nc($System::out)->println($$str({"read "_s, $$str(ret), " bytes from fc2:"_s}));
	fc2->close();
	$nc($System::out)->println("--------FileChannel Read Test Over----------"_s);
	$nc($System::out)->println();
	$nc($System::out)->println("--------FileChannel Write Test Started----------"_s);
	$var($FileOutputStream, fos1, $new($FileOutputStream, Finalize::outFile));
	$assign(fd, fos1->getFD());
	$var($FileOutputStream, fos2, $new($FileOutputStream, fd));
	$assign(fc2, fos2->getChannel());
	$assign(fos1, nullptr);
	$System::gc();
	$Thread::sleep(200);
	$assign(bb, $nc($($nc($($ByteBuffer::allocateDirect($nc(Finalize::data)->length)))->put(Finalize::data)))->flip());
	ret = fc2->write(bb);
	$nc($System::out)->println($$str({"Wrote:"_s, $$str(ret), " bytes to fc2"_s}));
	fc2->close();
	$nc($System::out)->println("--------Channel Write Test Over----------"_s);
}

void clinit$Finalize($Class* class$) {
	$assignStatic(Finalize::data, $new($bytes, {
		(int8_t)48,
		(int8_t)49,
		(int8_t)50,
		(int8_t)51,
		(int8_t)52,
		(int8_t)53,
		(int8_t)54,
		(int8_t)55,
		(int8_t)56,
		(int8_t)57
	}));
	$assignStatic(Finalize::inFileName, "fd-in-test.txt"_s);
	$assignStatic(Finalize::outFileName, "fd-out-test.txt"_s);
}

Finalize::Finalize() {
}

$Class* Finalize::load$($String* name, bool initialize) {
	$loadClass(Finalize, name, initialize, &_Finalize_ClassInfo_, clinit$Finalize, allocate$Finalize);
	return class$;
}

$Class* Finalize::class$ = nullptr;