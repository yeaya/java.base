#include <java/nio/file/NotDirectoryException.h>

#include <java/nio/file/FileSystemException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FileSystemException = ::java::nio::file::FileSystemException;

namespace java {
	namespace nio {
		namespace file {

$FieldInfo _NotDirectoryException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NotDirectoryException, serialVersionUID)},
	{}
};

$MethodInfo _NotDirectoryException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(NotDirectoryException, init$, void, $String*)},
	{}
};

$ClassInfo _NotDirectoryException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.nio.file.NotDirectoryException",
	"java.nio.file.FileSystemException",
	nullptr,
	_NotDirectoryException_FieldInfo_,
	_NotDirectoryException_MethodInfo_
};

$Object* allocate$NotDirectoryException($Class* clazz) {
	return $of($alloc(NotDirectoryException));
}

void NotDirectoryException::init$($String* file) {
	$FileSystemException::init$(file);
}

NotDirectoryException::NotDirectoryException() {
}

NotDirectoryException::NotDirectoryException(const NotDirectoryException& e) : $FileSystemException(e) {
}

void NotDirectoryException::throw$() {
	throw *this;
}

$Class* NotDirectoryException::load$($String* name, bool initialize) {
	$loadClass(NotDirectoryException, name, initialize, &_NotDirectoryException_ClassInfo_, allocate$NotDirectoryException);
	return class$;
}

$Class* NotDirectoryException::class$ = nullptr;

		} // file
	} // nio
} // java