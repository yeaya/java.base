#include <java/nio/file/DirectoryNotEmptyException.h>
#include <java/nio/file/FileSystemException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FileSystemException = ::java::nio::file::FileSystemException;

namespace java {
	namespace nio {
		namespace file {

void DirectoryNotEmptyException::init$($String* dir) {
	$FileSystemException::init$(dir);
}

DirectoryNotEmptyException::DirectoryNotEmptyException() {
}

DirectoryNotEmptyException::DirectoryNotEmptyException(const DirectoryNotEmptyException& e) : $FileSystemException(e) {
}

void DirectoryNotEmptyException::throw$() {
	throw *this;
}

$Class* DirectoryNotEmptyException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(DirectoryNotEmptyException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(DirectoryNotEmptyException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.nio.file.DirectoryNotEmptyException",
		"java.nio.file.FileSystemException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DirectoryNotEmptyException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DirectoryNotEmptyException);
	});
	return class$;
}

$Class* DirectoryNotEmptyException::class$ = nullptr;

		} // file
	} // nio
} // java