#include <java/nio/file/FileSystemAlreadyExistsException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace java {
	namespace nio {
		namespace file {

void FileSystemAlreadyExistsException::init$() {
	$RuntimeException::init$();
}

void FileSystemAlreadyExistsException::init$($String* msg) {
	$RuntimeException::init$(msg);
}

FileSystemAlreadyExistsException::FileSystemAlreadyExistsException() {
}

FileSystemAlreadyExistsException::FileSystemAlreadyExistsException(const FileSystemAlreadyExistsException& e) : $RuntimeException(e) {
}

void FileSystemAlreadyExistsException::throw$() {
	throw *this;
}

$Class* FileSystemAlreadyExistsException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(FileSystemAlreadyExistsException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FileSystemAlreadyExistsException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(FileSystemAlreadyExistsException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.nio.file.FileSystemAlreadyExistsException",
		"java.lang.RuntimeException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(FileSystemAlreadyExistsException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FileSystemAlreadyExistsException);
	});
	return class$;
}

$Class* FileSystemAlreadyExistsException::class$ = nullptr;

		} // file
	} // nio
} // java