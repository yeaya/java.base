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

$FieldInfo _IllegalFormatPrecisionException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IllegalFormatPrecisionException, serialVersionUID)},
	{"p", "I", nullptr, $PRIVATE, $field(IllegalFormatPrecisionException, p)},
	{}
};

$MethodInfo _IllegalFormatPrecisionException_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(IllegalFormatPrecisionException::*)(int32_t)>(&IllegalFormatPrecisionException::init$))},
	{"getMessage", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getPrecision", "()I", nullptr, $PUBLIC},
	{}
};

$ClassInfo _IllegalFormatPrecisionException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.util.IllegalFormatPrecisionException",
	"java.util.IllegalFormatException",
	nullptr,
	_IllegalFormatPrecisionException_FieldInfo_,
	_IllegalFormatPrecisionException_MethodInfo_
};

$Object* allocate$IllegalFormatPrecisionException($Class* clazz) {
	return $of($alloc(IllegalFormatPrecisionException));
}

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
	$loadClass(IllegalFormatPrecisionException, name, initialize, &_IllegalFormatPrecisionException_ClassInfo_, allocate$IllegalFormatPrecisionException);
	return class$;
}

$Class* IllegalFormatPrecisionException::class$ = nullptr;

	} // util
} // java