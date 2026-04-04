#include <java/io/FileReader.h>
#include <java/io/File.h>
#include <java/io/FileDescriptor.h>
#include <java/io/FileInputStream.h>
#include <java/io/InputStreamReader.h>
#include <java/nio/charset/Charset.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $FileDescriptor = ::java::io::FileDescriptor;
using $FileInputStream = ::java::io::FileInputStream;
using $InputStreamReader = ::java::io::InputStreamReader;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;

namespace java {
	namespace io {

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
	$InputStreamReader::init$($$new($FileInputStream, fileName), charset);
}

void FileReader::init$($File* file, $Charset* charset) {
	$InputStreamReader::init$($$new($FileInputStream, file), charset);
}

FileReader::FileReader() {
}

$Class* FileReader::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(FileReader, init$, void, $String*), "java.io.FileNotFoundException"},
		{"<init>", "(Ljava/io/File;)V", nullptr, $PUBLIC, $method(FileReader, init$, void, $File*), "java.io.FileNotFoundException"},
		{"<init>", "(Ljava/io/FileDescriptor;)V", nullptr, $PUBLIC, $method(FileReader, init$, void, $FileDescriptor*)},
		{"<init>", "(Ljava/lang/String;Ljava/nio/charset/Charset;)V", nullptr, $PUBLIC, $method(FileReader, init$, void, $String*, $Charset*), "java.io.IOException"},
		{"<init>", "(Ljava/io/File;Ljava/nio/charset/Charset;)V", nullptr, $PUBLIC, $method(FileReader, init$, void, $File*, $Charset*), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.io.FileReader",
		"java.io.InputStreamReader",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(FileReader, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(FileReader));
	});
	return class$;
}

$Class* FileReader::class$ = nullptr;

	} // io
} // java