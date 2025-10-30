#include <java/util/IllegalFormatCodePointException.h>

#include <java/util/IllegalFormatException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $IllegalFormatException = ::java::util::IllegalFormatException;

namespace java {
	namespace util {

$FieldInfo _IllegalFormatCodePointException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IllegalFormatCodePointException, serialVersionUID)},
	{"c", "I", nullptr, $PRIVATE, $field(IllegalFormatCodePointException, c)},
	{}
};

$MethodInfo _IllegalFormatCodePointException_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(IllegalFormatCodePointException::*)(int32_t)>(&IllegalFormatCodePointException::init$))},
	{"getCodePoint", "()I", nullptr, $PUBLIC},
	{"getMessage", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _IllegalFormatCodePointException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.util.IllegalFormatCodePointException",
	"java.util.IllegalFormatException",
	nullptr,
	_IllegalFormatCodePointException_FieldInfo_,
	_IllegalFormatCodePointException_MethodInfo_
};

$Object* allocate$IllegalFormatCodePointException($Class* clazz) {
	return $of($alloc(IllegalFormatCodePointException));
}

void IllegalFormatCodePointException::init$(int32_t c) {
	$IllegalFormatException::init$();
	this->c = c;
}

int32_t IllegalFormatCodePointException::getCodePoint() {
	return this->c;
}

$String* IllegalFormatCodePointException::getMessage() {
	$useLocalCurrentObjectStackCache();
	return $String::format("Code point = %#x"_s, $$new($ObjectArray, {$($of($Integer::valueOf(this->c)))}));
}

IllegalFormatCodePointException::IllegalFormatCodePointException() {
}

IllegalFormatCodePointException::IllegalFormatCodePointException(const IllegalFormatCodePointException& e) : $IllegalFormatException(e) {
}

void IllegalFormatCodePointException::throw$() {
	throw *this;
}

$Class* IllegalFormatCodePointException::load$($String* name, bool initialize) {
	$loadClass(IllegalFormatCodePointException, name, initialize, &_IllegalFormatCodePointException_ClassInfo_, allocate$IllegalFormatCodePointException);
	return class$;
}

$Class* IllegalFormatCodePointException::class$ = nullptr;

	} // util
} // java