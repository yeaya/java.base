#include <ReadWritePrimitives.h>

#include <java/io/File.h>
#include <java/io/IOException.h>
#include <java/io/RandomAccessFile.h>
#include <jcpp.h>

#undef MAX_VALUE

using $File = ::java::io::File;
using $IOException = ::java::io::IOException;
using $PrintStream = ::java::io::PrintStream;
using $RandomAccessFile = ::java::io::RandomAccessFile;
using $ClassInfo = ::java::lang::ClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;

$MethodInfo _ReadWritePrimitives_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(ReadWritePrimitives, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ReadWritePrimitives, main, void, $StringArray*), "java.io.IOException"},
	{"testChar", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(ReadWritePrimitives, testChar, void), "java.io.IOException"},
	{"testInt", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(ReadWritePrimitives, testInt, void), "java.io.IOException"},
	{"testLong", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(ReadWritePrimitives, testLong, void), "java.io.IOException"},
	{"testShort", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(ReadWritePrimitives, testShort, void), "java.io.IOException"},
	{}
};

$ClassInfo _ReadWritePrimitives_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"ReadWritePrimitives",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ReadWritePrimitives_MethodInfo_
};

$Object* allocate$ReadWritePrimitives($Class* clazz) {
	return $of($alloc(ReadWritePrimitives));
}

void ReadWritePrimitives::init$() {
}

void ReadWritePrimitives::main($StringArray* args) {
	int64_t start = 0;
	int64_t finish = 0;
	start = $System::currentTimeMillis();
	testShort();
	finish = $System::currentTimeMillis();
	start = $System::currentTimeMillis();
	testChar();
	finish = $System::currentTimeMillis();
	start = $System::currentTimeMillis();
	testInt();
	finish = $System::currentTimeMillis();
	start = $System::currentTimeMillis();
	testLong();
	finish = $System::currentTimeMillis();
}

void ReadWritePrimitives::testShort() {
	$useLocalCurrentObjectStackCache();
	$var($File, fh, $new($File, $($System::getProperty("test.dir"_s, "."_s)), "x.ReadWriteGenerated"_s));
	$var($RandomAccessFile, f, $new($RandomAccessFile, fh, "rw"_s));
	for (int32_t i = 0; i < 10000; ++i) {
		f->writeShort((int16_t)i);
	}
	f->writeShort((int16_t)0x0000FFFF);
	f->close();
	$assign(f, $new($RandomAccessFile, fh, "r"_s));
	for (int32_t i = 0; i < 10000; ++i) {
		int16_t r = f->readShort();
		if (r != ((int16_t)i)) {
			$nc($System::err)->println($$str({"An error occurred. Read:"_s, $$str(r), " i:"_s, $$str(((int16_t)i))}));
			$throwNew($IOException, "Bad read from a writeShort"_s);
		}
	}
	int16_t rmax = f->readShort();
	if (rmax != ((int16_t)0x0000FFFF)) {
		$nc($System::err)->println($$str({"An error occurred. Read:"_s, $$str(rmax)}));
		$throwNew($IOException, "Bad read from a writeShort"_s);
	}
	f->close();
}

void ReadWritePrimitives::testChar() {
	$useLocalCurrentObjectStackCache();
	$var($File, fh, $new($File, $($System::getProperty("test.dir"_s, "."_s)), "x.ReadWriteGenerated"_s));
	$var($RandomAccessFile, f, $new($RandomAccessFile, fh, "rw"_s));
	for (int32_t i = 0; i < 10000; ++i) {
		f->writeChar((char16_t)i);
	}
	f->close();
	$assign(f, $new($RandomAccessFile, fh, "r"_s));
	for (int32_t i = 0; i < 10000; ++i) {
		char16_t r = f->readChar();
		if (r != ((char16_t)i)) {
			$nc($System::err)->println($$str({"An error occurred. Read:"_s, $$str(r), " i:"_s, $$str(((char16_t)i))}));
			$throwNew($IOException, "Bad read from a writeChar"_s);
		}
	}
	f->close();
}

void ReadWritePrimitives::testInt() {
	$useLocalCurrentObjectStackCache();
	$var($File, fh, $new($File, $($System::getProperty("test.dir"_s, "."_s)), "x.ReadWriteGenerated"_s));
	$var($RandomAccessFile, f, $new($RandomAccessFile, fh, "rw"_s));
	for (int32_t i = 0; i < 10000; ++i) {
		f->writeInt((int16_t)i);
	}
	f->writeInt($Integer::MAX_VALUE);
	f->close();
	$assign(f, $new($RandomAccessFile, fh, "r"_s));
	for (int32_t i = 0; i < 10000; ++i) {
		int32_t r = f->readInt();
		if (r != i) {
			$nc($System::err)->println($$str({"An error occurred. Read:"_s, $$str(r), " i:"_s, $$str(i)}));
			$throwNew($IOException, "Bad read from a writeInt"_s);
		}
	}
	int32_t rmax = f->readInt();
	if (rmax != $Integer::MAX_VALUE) {
		$nc($System::err)->println($$str({"An error occurred. Read:"_s, $$str(rmax)}));
		$throwNew($IOException, "Bad read from a writeInt"_s);
	}
	f->close();
}

void ReadWritePrimitives::testLong() {
	$useLocalCurrentObjectStackCache();
	$var($File, fh, $new($File, $($System::getProperty("test.dir"_s, "."_s)), "x.ReadWriteGenerated"_s));
	$var($RandomAccessFile, f, $new($RandomAccessFile, fh, "rw"_s));
	for (int32_t i = 0; i < 10000; ++i) {
		f->writeLong((int64_t)123456789 * (int64_t)i);
	}
	f->close();
	$assign(f, $new($RandomAccessFile, fh, "r"_s));
	for (int32_t i = 0; i < 10000; ++i) {
		int64_t r = f->readLong();
		if (r != (((int64_t)i) * (int64_t)123456789)) {
			$nc($System::err)->println($$str({"An error occurred. Read:"_s, $$str(r), " i"_s, $$str(((int64_t)i))}));
			$throwNew($IOException, "Bad read from a writeInt"_s);
		}
	}
	f->close();
}

ReadWritePrimitives::ReadWritePrimitives() {
}

$Class* ReadWritePrimitives::load$($String* name, bool initialize) {
	$loadClass(ReadWritePrimitives, name, initialize, &_ReadWritePrimitives_ClassInfo_, allocate$ReadWritePrimitives);
	return class$;
}

$Class* ReadWritePrimitives::class$ = nullptr;