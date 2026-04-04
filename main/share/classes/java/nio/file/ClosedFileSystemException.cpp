#include <java/nio/file/ClosedFileSystemException.h>
#include <java/lang/IllegalStateException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace nio {
		namespace file {

void ClosedFileSystemException::init$() {
	$IllegalStateException::init$();
}

ClosedFileSystemException::ClosedFileSystemException() {
}

ClosedFileSystemException::ClosedFileSystemException(const ClosedFileSystemException& e) : $IllegalStateException(e) {
}

void ClosedFileSystemException::throw$() {
	throw *this;
}

$Class* ClosedFileSystemException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(ClosedFileSystemException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ClosedFileSystemException, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.nio.file.ClosedFileSystemException",
		"java.lang.IllegalStateException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ClosedFileSystemException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ClosedFileSystemException);
	});
	return class$;
}

$Class* ClosedFileSystemException::class$ = nullptr;

		} // file
	} // nio
} // java