#include <java/nio/file/ClosedDirectoryStreamException.h>
#include <java/lang/IllegalStateException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace nio {
		namespace file {

void ClosedDirectoryStreamException::init$() {
	$IllegalStateException::init$();
}

ClosedDirectoryStreamException::ClosedDirectoryStreamException() {
}

ClosedDirectoryStreamException::ClosedDirectoryStreamException(const ClosedDirectoryStreamException& e) : $IllegalStateException(e) {
}

void ClosedDirectoryStreamException::throw$() {
	throw *this;
}

$Class* ClosedDirectoryStreamException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(ClosedDirectoryStreamException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ClosedDirectoryStreamException, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.nio.file.ClosedDirectoryStreamException",
		"java.lang.IllegalStateException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ClosedDirectoryStreamException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ClosedDirectoryStreamException);
	});
	return class$;
}

$Class* ClosedDirectoryStreamException::class$ = nullptr;

		} // file
	} // nio
} // java