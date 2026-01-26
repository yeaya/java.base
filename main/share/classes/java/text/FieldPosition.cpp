#include <java/text/FieldPosition.h>

#include <java/text/FieldPosition$Delegate.h>
#include <java/text/Format$Field.h>
#include <java/text/Format$FieldDelegate.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FieldPosition$Delegate = ::java::text::FieldPosition$Delegate;
using $Format$Field = ::java::text::Format$Field;
using $Format$FieldDelegate = ::java::text::Format$FieldDelegate;

namespace java {
	namespace text {

$FieldInfo _FieldPosition_FieldInfo_[] = {
	{"field", "I", nullptr, 0, $field(FieldPosition, field)},
	{"endIndex", "I", nullptr, 0, $field(FieldPosition, endIndex)},
	{"beginIndex", "I", nullptr, 0, $field(FieldPosition, beginIndex)},
	{"attribute", "Ljava/text/Format$Field;", nullptr, $PRIVATE, $field(FieldPosition, attribute)},
	{}
};

$MethodInfo _FieldPosition_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(FieldPosition, init$, void, int32_t)},
	{"<init>", "(Ljava/text/Format$Field;)V", nullptr, $PUBLIC, $method(FieldPosition, init$, void, $Format$Field*)},
	{"<init>", "(Ljava/text/Format$Field;I)V", nullptr, $PUBLIC, $method(FieldPosition, init$, void, $Format$Field*, int32_t)},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(FieldPosition, equals, bool, Object$*)},
	{"getBeginIndex", "()I", nullptr, $PUBLIC, $virtualMethod(FieldPosition, getBeginIndex, int32_t)},
	{"getEndIndex", "()I", nullptr, $PUBLIC, $virtualMethod(FieldPosition, getEndIndex, int32_t)},
	{"getField", "()I", nullptr, $PUBLIC, $virtualMethod(FieldPosition, getField, int32_t)},
	{"getFieldAttribute", "()Ljava/text/Format$Field;", nullptr, $PUBLIC, $virtualMethod(FieldPosition, getFieldAttribute, $Format$Field*)},
	{"getFieldDelegate", "()Ljava/text/Format$FieldDelegate;", nullptr, 0, $virtualMethod(FieldPosition, getFieldDelegate, $Format$FieldDelegate*)},
	{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(FieldPosition, hashCode, int32_t)},
	{"matchesField", "(Ljava/text/Format$Field;)Z", nullptr, $PRIVATE, $method(FieldPosition, matchesField, bool, $Format$Field*)},
	{"matchesField", "(Ljava/text/Format$Field;I)Z", nullptr, $PRIVATE, $method(FieldPosition, matchesField, bool, $Format$Field*, int32_t)},
	{"setBeginIndex", "(I)V", nullptr, $PUBLIC, $virtualMethod(FieldPosition, setBeginIndex, void, int32_t)},
	{"setEndIndex", "(I)V", nullptr, $PUBLIC, $virtualMethod(FieldPosition, setEndIndex, void, int32_t)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(FieldPosition, toString, $String*)},
	{}
};

$InnerClassInfo _FieldPosition_InnerClassesInfo_[] = {
	{"java.text.FieldPosition$Delegate", "java.text.FieldPosition", "Delegate", $PRIVATE},
	{}
};

$ClassInfo _FieldPosition_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.text.FieldPosition",
	"java.lang.Object",
	nullptr,
	_FieldPosition_FieldInfo_,
	_FieldPosition_MethodInfo_,
	nullptr,
	nullptr,
	_FieldPosition_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.text.FieldPosition$Delegate"
};

$Object* allocate$FieldPosition($Class* clazz) {
	return $of($alloc(FieldPosition));
}

void FieldPosition::init$(int32_t field) {
	this->field = 0;
	this->endIndex = 0;
	this->beginIndex = 0;
	this->field = field;
}

void FieldPosition::init$($Format$Field* attribute) {
	FieldPosition::init$(attribute, -1);
}

void FieldPosition::init$($Format$Field* attribute, int32_t fieldID) {
	this->field = 0;
	this->endIndex = 0;
	this->beginIndex = 0;
	$set(this, attribute, attribute);
	this->field = fieldID;
}

$Format$Field* FieldPosition::getFieldAttribute() {
	return this->attribute;
}

int32_t FieldPosition::getField() {
	return this->field;
}

int32_t FieldPosition::getBeginIndex() {
	return this->beginIndex;
}

int32_t FieldPosition::getEndIndex() {
	return this->endIndex;
}

void FieldPosition::setBeginIndex(int32_t bi) {
	this->beginIndex = bi;
}

void FieldPosition::setEndIndex(int32_t ei) {
	this->endIndex = ei;
}

$Format$FieldDelegate* FieldPosition::getFieldDelegate() {
	return $new($FieldPosition$Delegate, this);
}

bool FieldPosition::equals(Object$* obj) {
	if (obj == nullptr) {
		return false;
	}
	$var(FieldPosition, other, nullptr);
	bool var$0 = $instanceOf(FieldPosition, obj);
	if (var$0) {
		$assign(other, $cast(FieldPosition, obj));
		var$0 = true;
	}
	if (!(var$0)) {
		return false;
	}
	if (this->attribute == nullptr) {
		if ($nc(other)->attribute != nullptr) {
			return false;
		}
	} else if (!$nc(this->attribute)->equals($nc(other)->attribute)) {
		return false;
	}
	return (this->beginIndex == $nc(other)->beginIndex && this->endIndex == other->endIndex && this->field == other->field);
}

int32_t FieldPosition::hashCode() {
	return ((this->field << 24) | (this->beginIndex << 16)) | this->endIndex;
}

$String* FieldPosition::toString() {
	$useLocalCurrentObjectStackCache();
	return $str({$($of(this)->getClass()->getName()), "[field="_s, $$str(this->field), ",attribute="_s, this->attribute, ",beginIndex="_s, $$str(this->beginIndex), ",endIndex="_s, $$str(this->endIndex), $$str(u']')});
}

bool FieldPosition::matchesField($Format$Field* attribute) {
	if (this->attribute != nullptr) {
		return $nc(this->attribute)->equals(attribute);
	}
	return false;
}

bool FieldPosition::matchesField($Format$Field* attribute, int32_t field) {
	if (this->attribute != nullptr) {
		return $nc(this->attribute)->equals(attribute);
	}
	return (field == this->field);
}

FieldPosition::FieldPosition() {
}

$Class* FieldPosition::load$($String* name, bool initialize) {
	$loadClass(FieldPosition, name, initialize, &_FieldPosition_ClassInfo_, allocate$FieldPosition);
	return class$;
}

$Class* FieldPosition::class$ = nullptr;

	} // text
} // java