#include <java/io/FileWriter.h>

#include <java/io/File.h>
#include <java/io/FileDescriptor.h>
#include <java/io/FileOutputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/OutputStreamWriter.h>
#include <java/nio/charset/Charset.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $FileDescriptor = ::java::io::FileDescriptor;
using $FileOutputStream = ::java::io::FileOutputStream;
using $OutputStream = ::java::io::OutputStream;
using $OutputStreamWriter = ::java::io::OutputStreamWriter;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;

namespace java {
	namespace io {

$MethodInfo _FileWriter_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(FileWriter, init$, void, $String*), "java.io.IOException"},
	{"<init>", "(Ljava/lang/String;Z)V", nullptr, $PUBLIC, $method(FileWriter, init$, void, $String*, bool), "java.io.IOException"},
	{"<init>", "(Ljava/io/File;)V", nullptr, $PUBLIC, $method(FileWriter, init$, void, $File*), "java.io.IOException"},
	{"<init>", "(Ljava/io/File;Z)V", nullptr, $PUBLIC, $method(FileWriter, init$, void, $File*, bool), "java.io.IOException"},
	{"<init>", "(Ljava/io/FileDescriptor;)V", nullptr, $PUBLIC, $method(FileWriter, init$, void, $FileDescriptor*)},
	{"<init>", "(Ljava/lang/String;Ljava/nio/charset/Charset;)V", nullptr, $PUBLIC, $method(FileWriter, init$, void, $String*, $Charset*), "java.io.IOException"},
	{"<init>", "(Ljava/lang/String;Ljava/nio/charset/Charset;Z)V", nullptr, $PUBLIC, $method(FileWriter, init$, void, $String*, $Charset*, bool), "java.io.IOException"},
	{"<init>", "(Ljava/io/File;Ljava/nio/charset/Charset;)V", nullptr, $PUBLIC, $method(FileWriter, init$, void, $File*, $Charset*), "java.io.IOException"},
	{"<init>", "(Ljava/io/File;Ljava/nio/charset/Charset;Z)V", nullptr, $PUBLIC, $method(FileWriter, init$, void, $File*, $Charset*, bool), "java.io.IOException"},
	{}
};

$ClassInfo _FileWriter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.io.FileWriter",
	"java.io.OutputStreamWriter",
	nullptr,
	nullptr,
	_FileWriter_MethodInfo_
};

$Object* allocate$FileWriter($Class* clazz) {
	return $of($alloc(FileWriter));
}

void FileWriter::init$($String* fileName) {
	$OutputStreamWriter::init$($$new($FileOutputStream, fileName));
}

void FileWriter::init$($String* fileName, bool append) {
	$OutputStreamWriter::init$($$new($FileOutputStream, fileName, append));
}

void FileWriter::init$($File* file) {
	$OutputStreamWriter::init$($$new($FileOutputStream, file));
}

void FileWriter::init$($File* file, bool append) {
	$OutputStreamWriter::init$($$new($FileOutputStream, file, append));
}

void FileWriter::init$($FileDescriptor* fd) {
	$OutputStreamWriter::init$($$new($FileOutputStream, fd));
}

void FileWriter::init$($String* fileName, $Charset* charset) {
	$OutputStreamWriter::init$(static_cast<$OutputStream*>($$new($FileOutputStream, fileName)), charset);
}

void FileWriter::init$($String* fileName, $Charset* charset, bool append) {
	$OutputStreamWriter::init$(static_cast<$OutputStream*>($$new($FileOutputStream, fileName, append)), charset);
}

void FileWriter::init$($File* file, $Charset* charset) {
	$OutputStreamWriter::init$(static_cast<$OutputStream*>($$new($FileOutputStream, file)), charset);
}

void FileWriter::init$($File* file, $Charset* charset, bool append) {
	$OutputStreamWriter::init$(static_cast<$OutputStream*>($$new($FileOutputStream, file, append)), charset);
}

FileWriter::FileWriter() {
}

$Class* FileWriter::load$($String* name, bool initialize) {
	$loadClass(FileWriter, name, initialize, &_FileWriter_ClassInfo_, allocate$FileWriter);
	return class$;
}

$Class* FileWriter::class$ = nullptr;

	} // io
} // java