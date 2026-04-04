#include <java/util/FormatterClosedException.h>
#include <java/lang/IllegalStateException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {

void FormatterClosedException::init$() {
	$IllegalStateException::init$();
}

FormatterClosedException::FormatterClosedException() {
}

FormatterClosedException::FormatterClosedException(const FormatterClosedException& e) : $IllegalStateException(e) {
}

void FormatterClosedException::throw$() {
	throw *this;
}

$Class* FormatterClosedException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FormatterClosedException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FormatterClosedException, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.util.FormatterClosedException",
		"java.lang.IllegalStateException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(FormatterClosedException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FormatterClosedException);
	});
	return class$;
}

$Class* FormatterClosedException::class$ = nullptr;

	} // util
} // java