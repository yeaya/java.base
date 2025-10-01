#include <java/util/FormatFlagsConversionMismatchException.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/IllegalFormatException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $IllegalFormatException = ::java::util::IllegalFormatException;

namespace java {
	namespace util {

$FieldInfo _FormatFlagsConversionMismatchException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FormatFlagsConversionMismatchException, serialVersionUID)},
	{"f", "Ljava/lang/String;", nullptr, $PRIVATE, $field(FormatFlagsConversionMismatchException, f)},
	{"c", "C", nullptr, $PRIVATE, $field(FormatFlagsConversionMismatchException, c)},
	{}
};

$MethodInfo _FormatFlagsConversionMismatchException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;C)V", nullptr, $PUBLIC, $method(static_cast<void(FormatFlagsConversionMismatchException::*)($String*,char16_t)>(&FormatFlagsConversionMismatchException::init$))},
	{"getConversion", "()C", nullptr, $PUBLIC},
	{"getFlags", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getMessage", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _FormatFlagsConversionMismatchException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.util.FormatFlagsConversionMismatchException",
	"java.util.IllegalFormatException",
	nullptr,
	_FormatFlagsConversionMismatchException_FieldInfo_,
	_FormatFlagsConversionMismatchException_MethodInfo_
};

$Object* allocate$FormatFlagsConversionMismatchException($Class* clazz) {
	return $of($alloc(FormatFlagsConversionMismatchException));
}

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

FormatFlagsConversionMismatchException::FormatFlagsConversionMismatchException(const FormatFlagsConversionMismatchException& e) {
}

FormatFlagsConversionMismatchException FormatFlagsConversionMismatchException::wrapper$() {
	$pendingException(this);
	return *this;
}

void FormatFlagsConversionMismatchException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* FormatFlagsConversionMismatchException::load$($String* name, bool initialize) {
	$loadClass(FormatFlagsConversionMismatchException, name, initialize, &_FormatFlagsConversionMismatchException_ClassInfo_, allocate$FormatFlagsConversionMismatchException);
	return class$;
}

$Class* FormatFlagsConversionMismatchException::class$ = nullptr;

	} // util
} // java