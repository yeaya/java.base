#include <java/nio/channels/WritePendingException.h>
#include <java/lang/IllegalStateException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace nio {
		namespace channels {

void WritePendingException::init$() {
	$IllegalStateException::init$();
}

WritePendingException::WritePendingException() {
}

WritePendingException::WritePendingException(const WritePendingException& e) : $IllegalStateException(e) {
}

void WritePendingException::throw$() {
	throw *this;
}

$Class* WritePendingException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(WritePendingException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(WritePendingException, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.nio.channels.WritePendingException",
		"java.lang.IllegalStateException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(WritePendingException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WritePendingException);
	});
	return class$;
}

$Class* WritePendingException::class$ = nullptr;

		} // channels
	} // nio
} // java