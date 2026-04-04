#include <java/io/OptionalDataException.h>
#include <java/io/ObjectStreamException.h>
#include <jcpp.h>

using $ObjectStreamException = ::java::io::ObjectStreamException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace io {

void OptionalDataException::init$(int32_t len) {
	$ObjectStreamException::init$();
	this->eof = false;
	this->length = len;
}

void OptionalDataException::init$(bool end) {
	$ObjectStreamException::init$();
	this->length = 0;
	this->eof = end;
}

OptionalDataException::OptionalDataException() {
}

OptionalDataException::OptionalDataException(const OptionalDataException& e) : $ObjectStreamException(e) {
}

void OptionalDataException::throw$() {
	throw *this;
}

$Class* OptionalDataException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(OptionalDataException, serialVersionUID)},
		{"length", "I", nullptr, $PUBLIC, $field(OptionalDataException, length)},
		{"eof", "Z", nullptr, $PUBLIC, $field(OptionalDataException, eof)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, 0, $method(OptionalDataException, init$, void, int32_t)},
		{"<init>", "(Z)V", nullptr, 0, $method(OptionalDataException, init$, void, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.io.OptionalDataException",
		"java.io.ObjectStreamException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(OptionalDataException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(OptionalDataException);
	});
	return class$;
}

$Class* OptionalDataException::class$ = nullptr;

	} // io
} // java