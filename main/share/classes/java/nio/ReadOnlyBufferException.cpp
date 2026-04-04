#include <java/nio/ReadOnlyBufferException.h>
#include <java/lang/UnsupportedOperationException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;

namespace java {
	namespace nio {

void ReadOnlyBufferException::init$() {
	$UnsupportedOperationException::init$();
}

ReadOnlyBufferException::ReadOnlyBufferException() {
}

ReadOnlyBufferException::ReadOnlyBufferException(const ReadOnlyBufferException& e) : $UnsupportedOperationException(e) {
}

void ReadOnlyBufferException::throw$() {
	throw *this;
}

$Class* ReadOnlyBufferException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ReadOnlyBufferException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ReadOnlyBufferException, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.nio.ReadOnlyBufferException",
		"java.lang.UnsupportedOperationException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ReadOnlyBufferException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ReadOnlyBufferException);
	});
	return class$;
}

$Class* ReadOnlyBufferException::class$ = nullptr;

	} // nio
} // java