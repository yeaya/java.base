#include <java/util/MissingFormatArgumentException.h>
#include <java/util/IllegalFormatException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $IllegalFormatException = ::java::util::IllegalFormatException;

namespace java {
	namespace util {

void MissingFormatArgumentException::init$($String* s) {
	$IllegalFormatException::init$();
	if (s == nullptr) {
		$throwNew($NullPointerException);
	}
	$set(this, s, s);
}

$String* MissingFormatArgumentException::getFormatSpecifier() {
	return this->s;
}

$String* MissingFormatArgumentException::getMessage() {
	return $str({"Format specifier \'"_s, this->s, "\'"_s});
}

MissingFormatArgumentException::MissingFormatArgumentException() {
}

MissingFormatArgumentException::MissingFormatArgumentException(const MissingFormatArgumentException& e) : $IllegalFormatException(e) {
}

void MissingFormatArgumentException::throw$() {
	throw *this;
}

$Class* MissingFormatArgumentException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MissingFormatArgumentException, serialVersionUID)},
		{"s", "Ljava/lang/String;", nullptr, $PRIVATE, $field(MissingFormatArgumentException, s)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(MissingFormatArgumentException, init$, void, $String*)},
		{"getFormatSpecifier", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(MissingFormatArgumentException, getFormatSpecifier, $String*)},
		{"getMessage", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(MissingFormatArgumentException, getMessage, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.util.MissingFormatArgumentException",
		"java.util.IllegalFormatException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(MissingFormatArgumentException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MissingFormatArgumentException);
	});
	return class$;
}

$Class* MissingFormatArgumentException::class$ = nullptr;

	} // util
} // java