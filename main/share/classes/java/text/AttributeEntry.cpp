#include <java/text/AttributeEntry.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/text/AttributedCharacterIterator$Attribute.h>
#include <java/util/Objects.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $AttributedCharacterIterator$Attribute = ::java::text::AttributedCharacterIterator$Attribute;
using $Objects = ::java::util::Objects;

namespace java {
	namespace text {

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
	return this->key;
}

$Object* AttributeEntry::getValue() {
	return this->value;
}

$Object* AttributeEntry::setValue(Object$* newValue) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

int32_t AttributeEntry::hashCode() {
	int32_t var$0 = $nc(this->key)->hashCode();
	return var$0 ^ (this->value == nullptr ? 0 : this->value->hashCode());
}

$String* AttributeEntry::toString() {
	$useLocalObjectStack();
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append($($nc(this->key)->toString()));
	var$0->append("="_s);
	var$0->append($($nc(this->value)->toString()));
	return $str(var$0);
}

AttributeEntry::AttributeEntry() {
}

$Class* AttributeEntry::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"key", "Ljava/text/AttributedCharacterIterator$Attribute;", nullptr, $PRIVATE, $field(AttributeEntry, key)},
		{"value", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(AttributeEntry, value)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/text/AttributedCharacterIterator$Attribute;Ljava/lang/Object;)V", nullptr, 0, $method(AttributeEntry, init$, void, $AttributedCharacterIterator$Attribute*, Object$*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(AttributeEntry, equals, bool, Object$*)},
		{"getKey", "()Ljava/text/AttributedCharacterIterator$Attribute;", nullptr, $PUBLIC, $virtualMethod(AttributeEntry, getKey, $Object*)},
		{"getValue", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(AttributeEntry, getValue, $Object*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(AttributeEntry, hashCode, int32_t)},
		{"setValue", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(AttributeEntry, setValue, $Object*, Object$*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AttributeEntry, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.Map$Entry", "java.util.Map", "Entry", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"java.text.AttributedCharacterIterator$Attribute", "java.text.AttributedCharacterIterator", "Attribute", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.text.AttributeEntry",
		"java.lang.Object",
		"java.util.Map$Entry",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/Map$Entry<Ljava/text/AttributedCharacterIterator$Attribute;Ljava/lang/Object;>;",
		nullptr,
		innerClassesInfo$$
	};
	$loadClass(AttributeEntry, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AttributeEntry);
	});
	return class$;
}

$Class* AttributeEntry::class$ = nullptr;

	} // text
} // java