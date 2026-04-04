#include <java/util/MissingFormatWidthException.h>
#include <java/util/IllegalFormatException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $IllegalFormatException = ::java::util::IllegalFormatException;

namespace java {
	namespace util {

void MissingFormatWidthException::init$($String* s) {
	$IllegalFormatException::init$();
	if (s == nullptr) {
		$throwNew($NullPointerException);
	}
	$set(this, s, s);
}

$String* MissingFormatWidthException::getFormatSpecifier() {
	return this->s;
}

$String* MissingFormatWidthException::getMessage() {
	return this->s;
}

MissingFormatWidthException::MissingFormatWidthException() {
}

MissingFormatWidthException::MissingFormatWidthException(const MissingFormatWidthException& e) : $IllegalFormatException(e) {
}

void MissingFormatWidthException::throw$() {
	throw *this;
}

$Class* MissingFormatWidthException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MissingFormatWidthException, serialVersionUID)},
		{"s", "Ljava/lang/String;", nullptr, $PRIVATE, $field(MissingFormatWidthException, s)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(MissingFormatWidthException, init$, void, $String*)},
		{"getFormatSpecifier", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(MissingFormatWidthException, getFormatSpecifier, $String*)},
		{"getMessage", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(MissingFormatWidthException, getMessage, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.util.MissingFormatWidthException",
		"java.util.IllegalFormatException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(MissingFormatWidthException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MissingFormatWidthException);
	});
	return class$;
}

$Class* MissingFormatWidthException::class$ = nullptr;

	} // util
} // java