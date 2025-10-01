#include <java/util/MissingFormatWidthException.h>

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

$FieldInfo _MissingFormatWidthException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MissingFormatWidthException, serialVersionUID)},
	{"s", "Ljava/lang/String;", nullptr, $PRIVATE, $field(MissingFormatWidthException, s)},
	{}
};

$MethodInfo _MissingFormatWidthException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(MissingFormatWidthException::*)($String*)>(&MissingFormatWidthException::init$))},
	{"getFormatSpecifier", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getMessage", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _MissingFormatWidthException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.util.MissingFormatWidthException",
	"java.util.IllegalFormatException",
	nullptr,
	_MissingFormatWidthException_FieldInfo_,
	_MissingFormatWidthException_MethodInfo_
};

$Object* allocate$MissingFormatWidthException($Class* clazz) {
	return $of($alloc(MissingFormatWidthException));
}

void MissingFormatWidthException::init$($String* s) {
	$IllegalFormatException::init$();
	if (s == nullptr) {
		$throwNew($NullPointerException);
	}
	$set(this, s, s);
}

$String* MissingFormatWidthException::getFormatSpecifier() {
	return this->s;
}

$String* MissingFormatWidthException::getMessage() {
	return this->s;
}

MissingFormatWidthException::MissingFormatWidthException() {
}

MissingFormatWidthException::MissingFormatWidthException(const MissingFormatWidthException& e) {
}

MissingFormatWidthException MissingFormatWidthException::wrapper$() {
	$pendingException(this);
	return *this;
}

void MissingFormatWidthException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* MissingFormatWidthException::load$($String* name, bool initialize) {
	$loadClass(MissingFormatWidthException, name, initialize, &_MissingFormatWidthException_ClassInfo_, allocate$MissingFormatWidthException);
	return class$;
}

$Class* MissingFormatWidthException::class$ = nullptr;

	} // util
} // java