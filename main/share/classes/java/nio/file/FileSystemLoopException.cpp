#include <java/nio/file/FileSystemLoopException.h>
#include <java/nio/file/FileSystemException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FileSystemException = ::java::nio::file::FileSystemException;

namespace java {
	namespace nio {
		namespace file {

void FileSystemLoopException::init$($String* file) {
	$FileSystemException::init$(file);
}

FileSystemLoopException::FileSystemLoopException() {
}

FileSystemLoopException::FileSystemLoopException(const FileSystemLoopException& e) : $FileSystemException(e) {
}

void FileSystemLoopException::throw$() {
	throw *this;
}

$Class* FileSystemLoopException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FileSystemLoopException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(FileSystemLoopException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.nio.file.FileSystemLoopException",
		"java.nio.file.FileSystemException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(FileSystemLoopException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FileSystemLoopException);
	});
	return class$;
}

$Class* FileSystemLoopException::class$ = nullptr;

		} // file
	} // nio
} // java