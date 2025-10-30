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

$FieldInfo _UnknownFormatConversionException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UnknownFormatConversionException, serialVersionUID)},
	{"s", "Ljava/lang/String;", nullptr, $PRIVATE, $field(UnknownFormatConversionException, s)},
	{}
};

$MethodInfo _UnknownFormatConversionException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(UnknownFormatConversionException::*)($String*)>(&UnknownFormatConversionException::init$))},
	{"getConversion", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getMessage", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _UnknownFormatConversionException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.util.UnknownFormatConversionException",
	"java.util.IllegalFormatException",
	nullptr,
	_UnknownFormatConversionException_FieldInfo_,
	_UnknownFormatConversionException_MethodInfo_
};

$Object* allocate$UnknownFormatConversionException($Class* clazz) {
	return $of($alloc(UnknownFormatConversionException));
}

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
	return $String::format("Conversion = \'%s\'"_s, $$new($ObjectArray, {$of(this->s)}));
}

UnknownFormatConversionException::UnknownFormatConversionException() {
}

UnknownFormatConversionException::UnknownFormatConversionException(const UnknownFormatConversionException& e) : $IllegalFormatException(e) {
}

void UnknownFormatConversionException::throw$() {
	throw *this;
}

$Class* UnknownFormatConversionException::load$($String* name, bool initialize) {
	$loadClass(UnknownFormatConversionException, name, initialize, &_UnknownFormatConversionException_ClassInfo_, allocate$UnknownFormatConversionException);
	return class$;
}

$Class* UnknownFormatConversionException::class$ = nullptr;

	} // util
} // java