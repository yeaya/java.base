#include <java/util/IllegalFormatWidthException.h>
#include <java/util/IllegalFormatException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $IllegalFormatException = ::java::util::IllegalFormatException;

namespace java {
	namespace util {

void IllegalFormatWidthException::init$(int32_t w) {
	$IllegalFormatException::init$();
	this->w = w;
}

int32_t IllegalFormatWidthException::getWidth() {
	return this->w;
}

$String* IllegalFormatWidthException::getMessage() {
	return $Integer::toString(this->w);
}

IllegalFormatWidthException::IllegalFormatWidthException() {
}

IllegalFormatWidthException::IllegalFormatWidthException(const IllegalFormatWidthException& e) : $IllegalFormatException(e) {
}

void IllegalFormatWidthException::throw$() {
	throw *this;
}

$Class* IllegalFormatWidthException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IllegalFormatWidthException, serialVersionUID)},
		{"w", "I", nullptr, $PRIVATE, $field(IllegalFormatWidthException, w)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, $PUBLIC, $method(IllegalFormatWidthException, init$, void, int32_t)},
		{"getMessage", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(IllegalFormatWidthException, getMessage, $String*)},
		{"getWidth", "()I", nullptr, $PUBLIC, $virtualMethod(IllegalFormatWidthException, getWidth, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.util.IllegalFormatWidthException",
		"java.util.IllegalFormatException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(IllegalFormatWidthException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(IllegalFormatWidthException);
	});
	return class$;
}

$Class* IllegalFormatWidthException::class$ = nullptr;

	} // util
} // java