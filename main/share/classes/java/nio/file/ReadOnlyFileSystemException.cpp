#include <java/nio/file/ReadOnlyFileSystemException.h>
#include <java/lang/UnsupportedOperationException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;

namespace java {
	namespace nio {
		namespace file {

void ReadOnlyFileSystemException::init$() {
	$UnsupportedOperationException::init$();
}

ReadOnlyFileSystemException::ReadOnlyFileSystemException() {
}

ReadOnlyFileSystemException::ReadOnlyFileSystemException(const ReadOnlyFileSystemException& e) : $UnsupportedOperationException(e) {
}

void ReadOnlyFileSystemException::throw$() {
	throw *this;
}

$Class* ReadOnlyFileSystemException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(ReadOnlyFileSystemException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ReadOnlyFileSystemException, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.nio.file.ReadOnlyFileSystemException",
		"java.lang.UnsupportedOperationException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ReadOnlyFileSystemException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ReadOnlyFileSystemException);
	});
	return class$;
}

$Class* ReadOnlyFileSystemException::class$ = nullptr;

		} // file
	} // nio
} // java