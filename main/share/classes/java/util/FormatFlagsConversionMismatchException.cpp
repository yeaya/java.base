#include <java/util/FormatFlagsConversionMismatchException.h>
#include <java/util/IllegalFormatException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $IllegalFormatException = ::java::util::IllegalFormatException;

namespace java {
	namespace util {

void FormatFlagsConversionMismatchException::init$($String* f, char16_t c) {
	$IllegalFormatException::init$();
	if (f == nullptr) {
		$throwNew($NullPointerException);
	}
	$set(this, f, f);
	this->c = c;
}

$String* FormatFlagsConversionMismatchException::getFlags() {
	return this->f;
}

char16_t FormatFlagsConversionMismatchException::getConversion() {
	return this->c;
}

$String* FormatFlagsConversionMismatchException::getMessage() {
	return $str({"Conversion = "_s, $$str(this->c), ", Flags = "_s, this->f});
}

FormatFlagsConversionMismatchException::FormatFlagsConversionMismatchException() {
}

FormatFlagsConversionMismatchException::FormatFlagsConversionMismatchException(const FormatFlagsConversionMismatchException& e) : $IllegalFormatException(e) {
}

void FormatFlagsConversionMismatchException::throw$() {
	throw *this;
}

$Class* FormatFlagsConversionMismatchException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FormatFlagsConversionMismatchException, serialVersionUID)},
		{"f", "Ljava/lang/String;", nullptr, $PRIVATE, $field(FormatFlagsConversionMismatchException, f)},
		{"c", "C", nullptr, $PRIVATE, $field(FormatFlagsConversionMismatchException, c)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;C)V", nullptr, $PUBLIC, $method(FormatFlagsConversionMismatchException, init$, void, $String*, char16_t)},
		{"getConversion", "()C", nullptr, $PUBLIC, $virtualMethod(FormatFlagsConversionMismatchException, getConversion, char16_t)},
		{"getFlags", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(FormatFlagsConversionMismatchException, getFlags, $String*)},
		{"getMessage", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(FormatFlagsConversionMismatchException, getMessage, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.util.FormatFlagsConversionMismatchException",
		"java.util.IllegalFormatException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(FormatFlagsConversionMismatchException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FormatFlagsConversionMismatchException);
	});
	return class$;
}

$Class* FormatFlagsConversionMismatchException::class$ = nullptr;

	} // util
} // java