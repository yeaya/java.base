#include <java/io/OptionalDataException.h>

#include <java/io/ObjectStreamException.h>
#include <jcpp.h>

using $ObjectStreamException = ::java::io::ObjectStreamException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace io {

$FieldInfo _OptionalDataException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(OptionalDataException, serialVersionUID)},
	{"length", "I", nullptr, $PUBLIC, $field(OptionalDataException, length)},
	{"eof", "Z", nullptr, $PUBLIC, $field(OptionalDataException, eof)},
	{}
};

$MethodInfo _OptionalDataException_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, 0, $method(OptionalDataException, init$, void, int32_t)},
	{"<init>", "(Z)V", nullptr, 0, $method(OptionalDataException, init$, void, bool)},
	{}
};

$ClassInfo _OptionalDataException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.io.OptionalDataException",
	"java.io.ObjectStreamException",
	nullptr,
	_OptionalDataException_FieldInfo_,
	_OptionalDataException_MethodInfo_
};

$Object* allocate$OptionalDataException($Class* clazz) {
	return $of($alloc(OptionalDataException));
}

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
	$loadClass(OptionalDataException, name, initialize, &_OptionalDataException_ClassInfo_, allocate$OptionalDataException);
	return class$;
}

$Class* OptionalDataException::class$ = nullptr;

	} // io
} // java