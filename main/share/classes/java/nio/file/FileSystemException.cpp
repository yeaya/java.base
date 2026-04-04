#include <java/nio/file/FileSystemException.h>
#include <java/io/IOException.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace nio {
		namespace file {

void FileSystemException::init$($String* file) {
	$IOException::init$(($String*)nullptr);
	$set(this, file, file);
	$set(this, other, nullptr);
}

void FileSystemException::init$($String* file, $String* other, $String* reason) {
	$IOException::init$(reason);
	$set(this, file, file);
	$set(this, other, other);
}

$String* FileSystemException::getFile() {
	return this->file;
}

$String* FileSystemException::getOtherFile() {
	return this->other;
}

$String* FileSystemException::getReason() {
	return $IOException::getMessage();
}

$String* FileSystemException::getMessage() {
	$useLocalObjectStack();
	if (this->file == nullptr && this->other == nullptr) {
		return getReason();
	}
	$var($StringBuilder, sb, $new($StringBuilder));
	if (this->file != nullptr) {
		sb->append(this->file);
	}
	if (this->other != nullptr) {
		sb->append(" -> "_s);
		sb->append(this->other);
	}
	if (getReason() != nullptr) {
		sb->append(": "_s);
		sb->append($(getReason()));
	}
	return sb->toString();
}

FileSystemException::FileSystemException() {
}

FileSystemException::FileSystemException(const FileSystemException& e) : $IOException(e) {
}

void FileSystemException::throw$() {
	throw *this;
}

$Class* FileSystemException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(FileSystemException, serialVersionUID)},
		{"file", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(FileSystemException, file)},
		{"other", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(FileSystemException, other)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(FileSystemException, init$, void, $String*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(FileSystemException, init$, void, $String*, $String*, $String*)},
		{"getFile", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(FileSystemException, getFile, $String*)},
		{"getMessage", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(FileSystemException, getMessage, $String*)},
		{"getOtherFile", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(FileSystemException, getOtherFile, $String*)},
		{"getReason", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(FileSystemException, getReason, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.nio.file.FileSystemException",
		"java.io.IOException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(FileSystemException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FileSystemException);
	});
	return class$;
}

$Class* FileSystemException::class$ = nullptr;

		} // file
	} // nio
} // java