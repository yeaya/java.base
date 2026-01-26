#include <java/text/ParsePosition.h>

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
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(ParsePosition, init$, void, int32_t)},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(ParsePosition, equals, bool, Object$*)},
	{"getErrorIndex", "()I", nullptr, $PUBLIC, $virtualMethod(ParsePosition, getErrorIndex, int32_t)},
	{"getIndex", "()I", nullptr, $PUBLIC, $virtualMethod(ParsePosition, getIndex, int32_t)},
	{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(ParsePosition, hashCode, int32_t)},
	{"setErrorIndex", "(I)V", nullptr, $PUBLIC, $virtualMethod(ParsePosition, setErrorIndex, void, int32_t)},
	{"setIndex", "(I)V", nullptr, $PUBLIC, $virtualMethod(ParsePosition, setIndex, void, int32_t)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ParsePosition, toString, $String*)},
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