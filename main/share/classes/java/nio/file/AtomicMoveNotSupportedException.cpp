#include <java/nio/file/AtomicMoveNotSupportedException.h>
#include <java/nio/file/FileSystemException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FileSystemException = ::java::nio::file::FileSystemException;

namespace java {
	namespace nio {
		namespace file {

void AtomicMoveNotSupportedException::init$($String* source, $String* target, $String* reason) {
	$FileSystemException::init$(source, target, reason);
}

AtomicMoveNotSupportedException::AtomicMoveNotSupportedException() {
}

AtomicMoveNotSupportedException::AtomicMoveNotSupportedException(const AtomicMoveNotSupportedException& e) : $FileSystemException(e) {
}

void AtomicMoveNotSupportedException::throw$() {
	throw *this;
}

$Class* AtomicMoveNotSupportedException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(AtomicMoveNotSupportedException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(AtomicMoveNotSupportedException, init$, void, $String*, $String*, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.nio.file.AtomicMoveNotSupportedException",
		"java.nio.file.FileSystemException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(AtomicMoveNotSupportedException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AtomicMoveNotSupportedException);
	});
	return class$;
}

$Class* AtomicMoveNotSupportedException::class$ = nullptr;

		} // file
	} // nio
} // java