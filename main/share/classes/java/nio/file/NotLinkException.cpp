#include <java/nio/file/NotLinkException.h>
#include <java/nio/file/FileSystemException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FileSystemException = ::java::nio::file::FileSystemException;

namespace java {
	namespace nio {
		namespace file {

void NotLinkException::init$($String* file) {
	$FileSystemException::init$(file);
}

void NotLinkException::init$($String* file, $String* other, $String* reason) {
	$FileSystemException::init$(file, other, reason);
}

NotLinkException::NotLinkException() {
}

NotLinkException::NotLinkException(const NotLinkException& e) : $FileSystemException(e) {
}

void NotLinkException::throw$() {
	throw *this;
}

$Class* NotLinkException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(NotLinkException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(NotLinkException, init$, void, $String*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(NotLinkException, init$, void, $String*, $String*, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.nio.file.NotLinkException",
		"java.nio.file.FileSystemException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(NotLinkException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NotLinkException);
	});
	return class$;
}

$Class* NotLinkException::class$ = nullptr;

		} // file
	} // nio
} // java