#include <java/nio/file/FileSystemException.h>

#include <java/io/IOException.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace nio {
		namespace file {

$FieldInfo _FileSystemException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(FileSystemException, serialVersionUID)},
	{"file", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(FileSystemException, file)},
	{"other", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(FileSystemException, other)},
	{}
};

$MethodInfo _FileSystemException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(FileSystemException::*)($String*)>(&FileSystemException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(FileSystemException::*)($String*,$String*,$String*)>(&FileSystemException::init$))},
	{"getFile", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getMessage", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getOtherFile", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getReason", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _FileSystemException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.nio.file.FileSystemException",
	"java.io.IOException",
	nullptr,
	_FileSystemException_FieldInfo_,
	_FileSystemException_MethodInfo_
};

$Object* allocate$FileSystemException($Class* clazz) {
	return $of($alloc(FileSystemException));
}

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
	$useLocalCurrentObjectStackCache();
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

FileSystemException::FileSystemException(const FileSystemException& e) {
}

FileSystemException FileSystemException::wrapper$() {
	$pendingException(this);
	return *this;
}

void FileSystemException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* FileSystemException::load$($String* name, bool initialize) {
	$loadClass(FileSystemException, name, initialize, &_FileSystemException_ClassInfo_, allocate$FileSystemException);
	return class$;
}

$Class* FileSystemException::class$ = nullptr;

		} // file
	} // nio
} // java