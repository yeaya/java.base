#include <java/util/IllegalFormatFlagsException.h>

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

$FieldInfo _IllegalFormatFlagsException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IllegalFormatFlagsException, serialVersionUID)},
	{"flags", "Ljava/lang/String;", nullptr, $PRIVATE, $field(IllegalFormatFlagsException, flags)},
	{}
};

$MethodInfo _IllegalFormatFlagsException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(IllegalFormatFlagsException::*)($String*)>(&IllegalFormatFlagsException::init$))},
	{"getFlags", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getMessage", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _IllegalFormatFlagsException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.util.IllegalFormatFlagsException",
	"java.util.IllegalFormatException",
	nullptr,
	_IllegalFormatFlagsException_FieldInfo_,
	_IllegalFormatFlagsException_MethodInfo_
};

$Object* allocate$IllegalFormatFlagsException($Class* clazz) {
	return $of($alloc(IllegalFormatFlagsException));
}

void IllegalFormatFlagsException::init$($String* f) {
	$IllegalFormatException::init$();
	if (f == nullptr) {
		$throwNew($NullPointerException);
	}
	$set(this, flags, f);
}

$String* IllegalFormatFlagsException::getFlags() {
	return this->flags;
}

$String* IllegalFormatFlagsException::getMessage() {
	return $str({"Flags = \'"_s, this->flags, "\'"_s});
}

IllegalFormatFlagsException::IllegalFormatFlagsException() {
}

IllegalFormatFlagsException::IllegalFormatFlagsException(const IllegalFormatFlagsException& e) {
}

IllegalFormatFlagsException IllegalFormatFlagsException::wrapper$() {
	$pendingException(this);
	return *this;
}

void IllegalFormatFlagsException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* IllegalFormatFlagsException::load$($String* name, bool initialize) {
	$loadClass(IllegalFormatFlagsException, name, initialize, &_IllegalFormatFlagsException_ClassInfo_, allocate$IllegalFormatFlagsException);
	return class$;
}

$Class* IllegalFormatFlagsException::class$ = nullptr;

	} // util
} // java