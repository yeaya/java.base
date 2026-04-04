#include <java/util/UnknownFormatConversionException.h>
#include <java/util/IllegalFormatException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $IllegalFormatException = ::java::util::IllegalFormatException;

namespace java {
	namespace util {

void UnknownFormatConversionException::init$($String* s) {
	$IllegalFormatException::init$();
	if (s == nullptr) {
		$throwNew($NullPointerException);
	}
	$set(this, s, s);
}

$String* UnknownFormatConversionException::getConversion() {
	return this->s;
}

$String* UnknownFormatConversionException::getMessage() {
	return $String::format("Conversion = \'%s\'"_s, $$new($ObjectArray, {this->s}));
}

UnknownFormatConversionException::UnknownFormatConversionException() {
}

UnknownFormatConversionException::UnknownFormatConversionException(const UnknownFormatConversionException& e) : $IllegalFormatException(e) {
}

void UnknownFormatConversionException::throw$() {
	throw *this;
}

$Class* UnknownFormatConversionException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UnknownFormatConversionException, serialVersionUID)},
		{"s", "Ljava/lang/String;", nullptr, $PRIVATE, $field(UnknownFormatConversionException, s)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(UnknownFormatConversionException, init$, void, $String*)},
		{"getConversion", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(UnknownFormatConversionException, getConversion, $String*)},
		{"getMessage", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(UnknownFormatConversionException, getMessage, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.util.UnknownFormatConversionException",
		"java.util.IllegalFormatException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(UnknownFormatConversionException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UnknownFormatConversionException);
	});
	return class$;
}

$Class* UnknownFormatConversionException::class$ = nullptr;

	} // util
} // java