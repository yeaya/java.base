#include <java/util/MissingFormatArgumentException.h>

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

$FieldInfo _MissingFormatArgumentException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MissingFormatArgumentException, serialVersionUID)},
	{"s", "Ljava/lang/String;", nullptr, $PRIVATE, $field(MissingFormatArgumentException, s)},
	{}
};

$MethodInfo _MissingFormatArgumentException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(MissingFormatArgumentException::*)($String*)>(&MissingFormatArgumentException::init$))},
	{"getFormatSpecifier", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getMessage", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _MissingFormatArgumentException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.util.MissingFormatArgumentException",
	"java.util.IllegalFormatException",
	nullptr,
	_MissingFormatArgumentException_FieldInfo_,
	_MissingFormatArgumentException_MethodInfo_
};

$Object* allocate$MissingFormatArgumentException($Class* clazz) {
	return $of($alloc(MissingFormatArgumentException));
}

void MissingFormatArgumentException::init$($String* s) {
	$IllegalFormatException::init$();
	if (s == nullptr) {
		$throwNew($NullPointerException);
	}
	$set(this, s, s);
}

$String* MissingFormatArgumentException::getFormatSpecifier() {
	return this->s;
}

$String* MissingFormatArgumentException::getMessage() {
	return $str({"Format specifier \'"_s, this->s, "\'"_s});
}

MissingFormatArgumentException::MissingFormatArgumentException() {
}

MissingFormatArgumentException::MissingFormatArgumentException(const MissingFormatArgumentException& e) {
}

MissingFormatArgumentException MissingFormatArgumentException::wrapper$() {
	$pendingException(this);
	return *this;
}

void MissingFormatArgumentException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* MissingFormatArgumentException::load$($String* name, bool initialize) {
	$loadClass(MissingFormatArgumentException, name, initialize, &_MissingFormatArgumentException_ClassInfo_, allocate$MissingFormatArgumentException);
	return class$;
}

$Class* MissingFormatArgumentException::class$ = nullptr;

	} // util
} // java