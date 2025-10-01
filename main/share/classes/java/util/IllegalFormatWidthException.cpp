#include <java/util/IllegalFormatWidthException.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/IllegalFormatException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $IllegalFormatException = ::java::util::IllegalFormatException;

namespace java {
	namespace util {

$FieldInfo _IllegalFormatWidthException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IllegalFormatWidthException, serialVersionUID)},
	{"w", "I", nullptr, $PRIVATE, $field(IllegalFormatWidthException, w)},
	{}
};

$MethodInfo _IllegalFormatWidthException_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(IllegalFormatWidthException::*)(int32_t)>(&IllegalFormatWidthException::init$))},
	{"getMessage", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getWidth", "()I", nullptr, $PUBLIC},
	{}
};

$ClassInfo _IllegalFormatWidthException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.util.IllegalFormatWidthException",
	"java.util.IllegalFormatException",
	nullptr,
	_IllegalFormatWidthException_FieldInfo_,
	_IllegalFormatWidthException_MethodInfo_
};

$Object* allocate$IllegalFormatWidthException($Class* clazz) {
	return $of($alloc(IllegalFormatWidthException));
}

void IllegalFormatWidthException::init$(int32_t w) {
	$IllegalFormatException::init$();
	this->w = w;
}

int32_t IllegalFormatWidthException::getWidth() {
	return this->w;
}

$String* IllegalFormatWidthException::getMessage() {
	return $Integer::toString(this->w);
}

IllegalFormatWidthException::IllegalFormatWidthException() {
}

IllegalFormatWidthException::IllegalFormatWidthException(const IllegalFormatWidthException& e) {
}

IllegalFormatWidthException IllegalFormatWidthException::wrapper$() {
	$pendingException(this);
	return *this;
}

void IllegalFormatWidthException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* IllegalFormatWidthException::load$($String* name, bool initialize) {
	$loadClass(IllegalFormatWidthException, name, initialize, &_IllegalFormatWidthException_ClassInfo_, allocate$IllegalFormatWidthException);
	return class$;
}

$Class* IllegalFormatWidthException::class$ = nullptr;

	} // util
} // java