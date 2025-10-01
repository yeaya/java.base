#include <java/text/AttributeEntry.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/text/AttributedCharacterIterator$Attribute.h>
#include <java/util/Objects.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $AttributedCharacterIterator$Attribute = ::java::text::AttributedCharacterIterator$Attribute;
using $Map$Entry = ::java::util::Map$Entry;
using $Objects = ::java::util::Objects;

namespace java {
	namespace text {

$FieldInfo _AttributeEntry_FieldInfo_[] = {
	{"key", "Ljava/text/AttributedCharacterIterator$Attribute;", nullptr, $PRIVATE, $field(AttributeEntry, key)},
	{"value", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(AttributeEntry, value)},
	{}
};

$MethodInfo _AttributeEntry_MethodInfo_[] = {
	{"<init>", "(Ljava/text/AttributedCharacterIterator$Attribute;Ljava/lang/Object;)V", nullptr, 0, $method(static_cast<void(AttributeEntry::*)($AttributedCharacterIterator$Attribute*,Object$*)>(&AttributeEntry::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getKey", "()Ljava/text/AttributedCharacterIterator$Attribute;", nullptr, $PUBLIC},
	{"getValue", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"setValue", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AttributeEntry_InnerClassesInfo_[] = {
	{"java.util.Map$Entry", "java.util.Map", "Entry", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{"java.text.AttributedCharacterIterator$Attribute", "java.text.AttributedCharacterIterator", "Attribute", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _AttributeEntry_ClassInfo_ = {
	$ACC_SUPER,
	"java.text.AttributeEntry",
	"java.lang.Object",
	"java.util.Map$Entry",
	_AttributeEntry_FieldInfo_,
	_AttributeEntry_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Map$Entry<Ljava/text/AttributedCharacterIterator$Attribute;Ljava/lang/Object;>;",
	nullptr,
	_AttributeEntry_InnerClassesInfo_
};

$Object* allocate$AttributeEntry($Class* clazz) {
	return $of($alloc(AttributeEntry));
}

void AttributeEntry::init$($AttributedCharacterIterator$Attribute* key, Object$* value) {
	$set(this, key, key);
	$set(this, value, value);
}

bool AttributeEntry::equals(Object$* o) {
	$var(AttributeEntry, other, nullptr);
	bool var$0 = $instanceOf(AttributeEntry, o);
	if (var$0) {
		$assign(other, $cast(AttributeEntry, o));
		var$0 = true;
	}
	if (!(var$0)) {
		return false;
	}
	bool var$1 = $nc($nc(other)->key)->equals(this->key);
	return var$1 && $Objects::equals(other->value, this->value);
}

$Object* AttributeEntry::getKey() {
	return $of(this->key);
}

$Object* AttributeEntry::getValue() {
	return $of(this->value);
}

$Object* AttributeEntry::setValue(Object$* newValue) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

int32_t AttributeEntry::hashCode() {
	int32_t var$0 = $nc(this->key)->hashCode();
	return var$0 ^ (this->value == nullptr ? 0 : $nc($of(this->value))->hashCode());
}

$String* AttributeEntry::toString() {
	$var($String, var$0, $$str({$($nc(this->key)->toString()), "="_s}));
	return $concat(var$0, $($nc($of(this->value))->toString()));
}

AttributeEntry::AttributeEntry() {
}

$Class* AttributeEntry::load$($String* name, bool initialize) {
	$loadClass(AttributeEntry, name, initialize, &_AttributeEntry_ClassInfo_, allocate$AttributeEntry);
	return class$;
}

$Class* AttributeEntry::class$ = nullptr;

	} // text
} // java