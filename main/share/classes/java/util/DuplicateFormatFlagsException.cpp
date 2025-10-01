#include <java/util/DuplicateFormatFlagsException.h>

#include <java/lang/Array.h>
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

$FieldInfo _DuplicateFormatFlagsException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DuplicateFormatFlagsException, serialVersionUID)},
	{"flags", "Ljava/lang/String;", nullptr, $PRIVATE, $field(DuplicateFormatFlagsException, flags)},
	{}
};

$MethodInfo _DuplicateFormatFlagsException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(DuplicateFormatFlagsException::*)($String*)>(&DuplicateFormatFlagsException::init$))},
	{"getFlags", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getMessage", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DuplicateFormatFlagsException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.util.DuplicateFormatFlagsException",
	"java.util.IllegalFormatException",
	nullptr,
	_DuplicateFormatFlagsException_FieldInfo_,
	_DuplicateFormatFlagsException_MethodInfo_
};

$Object* allocate$DuplicateFormatFlagsException($Class* clazz) {
	return $of($alloc(DuplicateFormatFlagsException));
}

void DuplicateFormatFlagsException::init$($String* f) {
	$IllegalFormatException::init$();
	if (f == nullptr) {
		$throwNew($NullPointerException);
	}
	$set(this, flags, f);
}

$String* DuplicateFormatFlagsException::getFlags() {
	return this->flags;
}

$String* DuplicateFormatFlagsException::getMessage() {
	return $String::format("Flags = \'%s\'"_s, $$new($ObjectArray, {$of(this->flags)}));
}

DuplicateFormatFlagsException::DuplicateFormatFlagsException() {
}

DuplicateFormatFlagsException::DuplicateFormatFlagsException(const DuplicateFormatFlagsException& e) {
}

DuplicateFormatFlagsException DuplicateFormatFlagsException::wrapper$() {
	$pendingException(this);
	return *this;
}

void DuplicateFormatFlagsException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* DuplicateFormatFlagsException::load$($String* name, bool initialize) {
	$loadClass(DuplicateFormatFlagsException, name, initialize, &_DuplicateFormatFlagsException_ClassInfo_, allocate$DuplicateFormatFlagsException);
	return class$;
}

$Class* DuplicateFormatFlagsException::class$ = nullptr;

	} // util
} // java