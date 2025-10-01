#include <java/util/UnknownFormatFlagsException.h>

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

$FieldInfo _UnknownFormatFlagsException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UnknownFormatFlagsException, serialVersionUID)},
	{"flags", "Ljava/lang/String;", nullptr, $PRIVATE, $field(UnknownFormatFlagsException, flags)},
	{}
};

$MethodInfo _UnknownFormatFlagsException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(UnknownFormatFlagsException::*)($String*)>(&UnknownFormatFlagsException::init$))},
	{"getFlags", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getMessage", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _UnknownFormatFlagsException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.util.UnknownFormatFlagsException",
	"java.util.IllegalFormatException",
	nullptr,
	_UnknownFormatFlagsException_FieldInfo_,
	_UnknownFormatFlagsException_MethodInfo_
};

$Object* allocate$UnknownFormatFlagsException($Class* clazz) {
	return $of($alloc(UnknownFormatFlagsException));
}

void UnknownFormatFlagsException::init$($String* f) {
	$IllegalFormatException::init$();
	if (f == nullptr) {
		$throwNew($NullPointerException);
	}
	$set(this, flags, f);
}

$String* UnknownFormatFlagsException::getFlags() {
	return this->flags;
}

$String* UnknownFormatFlagsException::getMessage() {
	return $str({"Flags = "_s, this->flags});
}

UnknownFormatFlagsException::UnknownFormatFlagsException() {
}

UnknownFormatFlagsException::UnknownFormatFlagsException(const UnknownFormatFlagsException& e) {
}

UnknownFormatFlagsException UnknownFormatFlagsException::wrapper$() {
	$pendingException(this);
	return *this;
}

void UnknownFormatFlagsException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* UnknownFormatFlagsException::load$($String* name, bool initialize) {
	$loadClass(UnknownFormatFlagsException, name, initialize, &_UnknownFormatFlagsException_ClassInfo_, allocate$UnknownFormatFlagsException);
	return class$;
}

$Class* UnknownFormatFlagsException::class$ = nullptr;

	} // util
} // java