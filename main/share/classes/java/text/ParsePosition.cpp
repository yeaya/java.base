#include <java/text/ParsePosition.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace text {

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
	$useLocalObjectStack();
	return $str({$($of(this)->getClass()->getName()), "[index="_s, $$str(this->index), ",errorIndex="_s, $$str(this->errorIndex), $$str(u']')});
}

ParsePosition::ParsePosition() {
}

$Class* ParsePosition::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"index", "I", nullptr, 0, $field(ParsePosition, index)},
		{"errorIndex", "I", nullptr, 0, $field(ParsePosition, errorIndex)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
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
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.text.ParsePosition",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ParsePosition, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ParsePosition);
	});
	return class$;
}

$Class* ParsePosition::class$ = nullptr;

	} // text
} // java