#include <java/text/ParsePosition.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace text {

$FieldInfo _ParsePosition_FieldInfo_[] = {
	{"index", "I", nullptr, 0, $field(ParsePosition, index)},
	{"errorIndex", "I", nullptr, 0, $field(ParsePosition, errorIndex)},
	{}
};

$MethodInfo _ParsePosition_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(ParsePosition::*)(int32_t)>(&ParsePosition::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getErrorIndex", "()I", nullptr, $PUBLIC},
	{"getIndex", "()I", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"setErrorIndex", "(I)V", nullptr, $PUBLIC},
	{"setIndex", "(I)V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ParsePosition_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.text.ParsePosition",
	"java.lang.Object",
	nullptr,
	_ParsePosition_FieldInfo_,
	_ParsePosition_MethodInfo_
};

$Object* allocate$ParsePosition($Class* clazz) {
	return $of($alloc(ParsePosition));
}

int32_t ParsePosition::getIndex() {
	return this->index;
}

void ParsePosition::setIndex(int32_t index) {
	this->index = index;
}

void ParsePosition::init$(int32_t index) {
	this->index = 0;
	this->errorIndex = -1;
	this->index = index;
}

void ParsePosition::setErrorIndex(int32_t ei) {
	this->errorIndex = ei;
}

int32_t ParsePosition::getErrorIndex() {
	return this->errorIndex;
}

bool ParsePosition::equals(Object$* obj) {
	if (obj == nullptr) {
		return false;
	}
	$var(ParsePosition, other, nullptr);
	bool var$0 = $instanceOf(ParsePosition, obj);
	if (var$0) {
		$assign(other, $cast(ParsePosition, obj));
		var$0 = true;
	}
	if (!(var$0)) {
		return false;
	}
	return (this->index == $nc(other)->index && this->errorIndex == other->errorIndex);
}

int32_t ParsePosition::hashCode() {
	return (this->errorIndex << 16) | this->index;
}

$String* ParsePosition::toString() {
	$useLocalCurrentObjectStackCache();
	return $str({$($of(this)->getClass()->getName()), "[index="_s, $$str(this->index), ",errorIndex="_s, $$str(this->errorIndex), $$str(u']')});
}

ParsePosition::ParsePosition() {
}

$Class* ParsePosition::load$($String* name, bool initialize) {
	$loadClass(ParsePosition, name, initialize, &_ParsePosition_ClassInfo_, allocate$ParsePosition);
	return class$;
}

$Class* ParsePosition::class$ = nullptr;

	} // text
} // java