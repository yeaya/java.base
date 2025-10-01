#include <java/nio/charset/UnsupportedCharsetException.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace nio {
		namespace charset {

$FieldInfo _UnsupportedCharsetException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UnsupportedCharsetException, serialVersionUID)},
	{"charsetName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(UnsupportedCharsetException, charsetName)},
	{}
};

$MethodInfo _UnsupportedCharsetException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(UnsupportedCharsetException::*)($String*)>(&UnsupportedCharsetException::init$))},
	{"getCharsetName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _UnsupportedCharsetException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.nio.charset.UnsupportedCharsetException",
	"java.lang.IllegalArgumentException",
	nullptr,
	_UnsupportedCharsetException_FieldInfo_,
	_UnsupportedCharsetException_MethodInfo_
};

$Object* allocate$UnsupportedCharsetException($Class* clazz) {
	return $of($alloc(UnsupportedCharsetException));
}

void UnsupportedCharsetException::init$($String* charsetName) {
	$IllegalArgumentException::init$($($String::valueOf($of(charsetName))));
	$set(this, charsetName, charsetName);
}

$String* UnsupportedCharsetException::getCharsetName() {
	return this->charsetName;
}

UnsupportedCharsetException::UnsupportedCharsetException() {
}

UnsupportedCharsetException::UnsupportedCharsetException(const UnsupportedCharsetException& e) {
}

UnsupportedCharsetException UnsupportedCharsetException::wrapper$() {
	$pendingException(this);
	return *this;
}

void UnsupportedCharsetException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* UnsupportedCharsetException::load$($String* name, bool initialize) {
	$loadClass(UnsupportedCharsetException, name, initialize, &_UnsupportedCharsetException_ClassInfo_, allocate$UnsupportedCharsetException);
	return class$;
}

$Class* UnsupportedCharsetException::class$ = nullptr;

		} // charset
	} // nio
} // java