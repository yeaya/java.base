#include <java/util/IllegalFormatArgumentIndexException.h>

#include <java/lang/Array.h>
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

#undef MIN_VALUE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $IllegalFormatException = ::java::util::IllegalFormatException;

namespace java {
	namespace util {

$FieldInfo _IllegalFormatArgumentIndexException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IllegalFormatArgumentIndexException, serialVersionUID)},
	{"illegalIndex", "I", nullptr, $PRIVATE | $FINAL, $field(IllegalFormatArgumentIndexException, illegalIndex)},
	{}
};

$MethodInfo _IllegalFormatArgumentIndexException_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, 0, $method(static_cast<void(IllegalFormatArgumentIndexException::*)(int32_t)>(&IllegalFormatArgumentIndexException::init$))},
	{"getIndex", "()I", nullptr, 0},
	{"getMessage", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _IllegalFormatArgumentIndexException_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.IllegalFormatArgumentIndexException",
	"java.util.IllegalFormatException",
	nullptr,
	_IllegalFormatArgumentIndexException_FieldInfo_,
	_IllegalFormatArgumentIndexException_MethodInfo_
};

$Object* allocate$IllegalFormatArgumentIndexException($Class* clazz) {
	return $of($alloc(IllegalFormatArgumentIndexException));
}

void IllegalFormatArgumentIndexException::init$(int32_t index) {
	$IllegalFormatException::init$();
	this->illegalIndex = index;
}

int32_t IllegalFormatArgumentIndexException::getIndex() {
	return this->illegalIndex;
}

$String* IllegalFormatArgumentIndexException::getMessage() {
	int32_t index = getIndex();
	if (index == $Integer::MIN_VALUE) {
		return "Format argument index: (not representable as int)"_s;
	}
	return $String::format("Illegal format argument index = %d"_s, $$new($ObjectArray, {$($of($Integer::valueOf(getIndex())))}));
}

IllegalFormatArgumentIndexException::IllegalFormatArgumentIndexException() {
}

IllegalFormatArgumentIndexException::IllegalFormatArgumentIndexException(const IllegalFormatArgumentIndexException& e) {
}

IllegalFormatArgumentIndexException IllegalFormatArgumentIndexException::wrapper$() {
	$pendingException(this);
	return *this;
}

void IllegalFormatArgumentIndexException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* IllegalFormatArgumentIndexException::load$($String* name, bool initialize) {
	$loadClass(IllegalFormatArgumentIndexException, name, initialize, &_IllegalFormatArgumentIndexException_ClassInfo_, allocate$IllegalFormatArgumentIndexException);
	return class$;
}

$Class* IllegalFormatArgumentIndexException::class$ = nullptr;

	} // util
} // java