#include <java/nio/file/FileSystemNotFoundException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace java {
	namespace nio {
		namespace file {

void FileSystemNotFoundException::init$() {
	$RuntimeException::init$();
}

void FileSystemNotFoundException::init$($String* msg) {
	$RuntimeException::init$(msg);
}

FileSystemNotFoundException::FileSystemNotFoundException() {
}

FileSystemNotFoundException::FileSystemNotFoundException(const FileSystemNotFoundException& e) : $RuntimeException(e) {
}

void FileSystemNotFoundException::throw$() {
	throw *this;
}

$Class* FileSystemNotFoundException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(FileSystemNotFoundException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FileSystemNotFoundException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(FileSystemNotFoundException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.nio.file.FileSystemNotFoundException",
		"java.lang.RuntimeException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(FileSystemNotFoundException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FileSystemNotFoundException);
	});
	return class$;
}

$Class* FileSystemNotFoundException::class$ = nullptr;

		} // file
	} // nio
} // java