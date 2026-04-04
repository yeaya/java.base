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
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NotDirectoryException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(NotDirectoryException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.nio.file.NotDirectoryException",
		"java.nio.file.FileSystemException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(NotDirectoryException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NotDirectoryException);
	});
	return class$;
}

$Class* NotDirectoryException::class$ = nullptr;

		} // file
	} // nio
} // java