#include <java/io/FileReader.h>

#include <java/io/File.h>
#include <java/io/FileDescriptor.h>
#include <java/io/FileInputStream.h>
#include <java/io/InputStream.h>
#include <java/io/InputStreamReader.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/charset/Charset.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $FileDescriptor = ::java::io::FileDescriptor;
using $FileInputStream = ::java::io::FileInputStream;
using $InputStream = ::java::io::InputStream;
using $InputStreamReader = ::java::io::InputStreamReader;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;

namespace java {
	namespace io {

$MethodInfo _FileReader_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(FileReader::*)($String*)>(&FileReader::init$)), "java.io.FileNotFoundException"},
	{"<init>", "(Ljava/io/File;)V", nullptr, $PUBLIC, $method(static_cast<void(FileReader::*)($File*)>(&FileReader::init$)), "java.io.FileNotFoundException"},
	{"<init>", "(Ljava/io/FileDescriptor;)V", nullptr, $PUBLIC, $method(static_cast<void(FileReader::*)($FileDescriptor*)>(&FileReader::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/nio/charset/Charset;)V", nullptr, $PUBLIC, $method(static_cast<void(FileReader::*)($String*,$Charset*)>(&FileReader::init$)), "java.io.IOException"},
	{"<init>", "(Ljava/io/File;Ljava/nio/charset/Charset;)V", nullptr, $PUBLIC, $method(static_cast<void(FileReader::*)($File*,$Charset*)>(&FileReader::init$)), "java.io.IOException"},
	{}
};

$ClassInfo _FileReader_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.io.FileReader",
	"java.io.InputStreamReader",
	nullptr,
	nullptr,
	_FileReader_MethodInfo_
};

$Object* allocate$FileReader($Class* clazz) {
	return $of($alloc(FileReader));
}

void FileReader::init$($String* fileName) {
	$InputStreamReader::init$($$new($FileInputStream, fileName));
}

void FileReader::init$($File* file) {
	$InputStreamReader::init$($$new($FileInputStream, file));
}

void FileReader::init$($FileDescriptor* fd) {
	$InputStreamReader::init$($$new($FileInputStream, fd));
}

void FileReader::init$($String* fileName, $Charset* charset) {
	$InputStreamReader::init$(static_cast<$InputStream*>($$new($FileInputStream, fileName)), charset);
}

void FileReader::init$($File* file, $Charset* charset) {
	$InputStreamReader::init$(static_cast<$InputStream*>($$new($FileInputStream, file)), charset);
}

FileReader::FileReader() {
}

$Class* FileReader::load$($String* name, bool initialize) {
	$loadClass(FileReader, name, initialize, &_FileReader_ClassInfo_, allocate$FileReader);
	return class$;
}

$Class* FileReader::class$ = nullptr;

	} // io
} // java