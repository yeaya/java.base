#include <java/nio/file/NoSuchFileException.h>
#include <java/nio/file/FileSystemException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FileSystemException = ::java::nio::file::FileSystemException;

namespace java {
	namespace nio {
		namespace file {

void NoSuchFileException::init$($String* file) {
	$FileSystemException::init$(file);
}

void NoSuchFileException::init$($String* file, $String* other, $String* reason) {
	$FileSystemException::init$(file, other, reason);
}

NoSuchFileException::NoSuchFileException() {
}

NoSuchFileException::NoSuchFileException(const NoSuchFileException& e) : $FileSystemException(e) {
}

void NoSuchFileException::throw$() {
	throw *this;
}

$Class* NoSuchFileException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(NoSuchFileException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(NoSuchFileException, init$, void, $String*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(NoSuchFileException, init$, void, $String*, $String*, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.nio.file.NoSuchFileException",
		"java.nio.file.FileSystemException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(NoSuchFileException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NoSuchFileException);
	});
	return class$;
}

$Class* NoSuchFileException::class$ = nullptr;

		} // file
	} // nio
} // java