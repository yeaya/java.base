#include <java/util/IllegalFormatPrecisionException.h>
#include <java/util/IllegalFormatException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $IllegalFormatException = ::java::util::IllegalFormatException;

namespace java {
	namespace util {

void IllegalFormatPrecisionException::init$(int32_t p) {
	$IllegalFormatException::init$();
	this->p = p;
}

int32_t IllegalFormatPrecisionException::getPrecision() {
	return this->p;
}

$String* IllegalFormatPrecisionException::getMessage() {
	return $Integer::toString(this->p);
}

IllegalFormatPrecisionException::IllegalFormatPrecisionException() {
}

IllegalFormatPrecisionException::IllegalFormatPrecisionException(const IllegalFormatPrecisionException& e) : $IllegalFormatException(e) {
}

void IllegalFormatPrecisionException::throw$() {
	throw *this;
}

$Class* IllegalFormatPrecisionException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IllegalFormatPrecisionException, serialVersionUID)},
		{"p", "I", nullptr, $PRIVATE, $field(IllegalFormatPrecisionException, p)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, $PUBLIC, $method(IllegalFormatPrecisionException, init$, void, int32_t)},
		{"getMessage", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(IllegalFormatPrecisionException, getMessage, $String*)},
		{"getPrecision", "()I", nullptr, $PUBLIC, $virtualMethod(IllegalFormatPrecisionException, getPrecision, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.util.IllegalFormatPrecisionException",
		"java.util.IllegalFormatException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(IllegalFormatPrecisionException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(IllegalFormatPrecisionException);
	});
	return class$;
}

$Class* IllegalFormatPrecisionException::class$ = nullptr;

	} // util
} // java