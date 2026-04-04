#include <java/io/ObjectStreamClass$DeserializationConstructorsCache$Key$Lookup.h>
#include <java/io/ObjectStreamClass$DeserializationConstructorsCache$Key.h>
#include <java/io/ObjectStreamField.h>
#include <jcpp.h>

using $ObjectStreamFieldArray = $Array<::java::io::ObjectStreamField>;
using $ObjectStreamClass$DeserializationConstructorsCache$Key = ::java::io::ObjectStreamClass$DeserializationConstructorsCache$Key;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace io {

void ObjectStreamClass$DeserializationConstructorsCache$Key$Lookup::init$($ObjectStreamFieldArray* fields) {
	$ObjectStreamClass$DeserializationConstructorsCache$Key::init$();
	$set(this, fields, fields);
}

int32_t ObjectStreamClass$DeserializationConstructorsCache$Key$Lookup::length() {
	return $nc(this->fields)->length;
}

$String* ObjectStreamClass$DeserializationConstructorsCache$Key$Lookup::fieldName(int32_t i) {
	return $nc($nc(this->fields)->get(i))->getName();
}

$Class* ObjectStreamClass$DeserializationConstructorsCache$Key$Lookup::fieldType(int32_t i) {
	$beforeCallerSensitive();
	return $nc($nc(this->fields)->get(i))->getType();
}

ObjectStreamClass$DeserializationConstructorsCache$Key$Lookup::ObjectStreamClass$DeserializationConstructorsCache$Key$Lookup() {
}

$Class* ObjectStreamClass$DeserializationConstructorsCache$Key$Lookup::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"fields", "[Ljava/io/ObjectStreamField;", nullptr, $FINAL, $field(ObjectStreamClass$DeserializationConstructorsCache$Key$Lookup, fields)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([Ljava/io/ObjectStreamField;)V", nullptr, 0, $method(ObjectStreamClass$DeserializationConstructorsCache$Key$Lookup, init$, void, $ObjectStreamFieldArray*)},
		{"fieldName", "(I)Ljava/lang/String;", nullptr, 0, $virtualMethod(ObjectStreamClass$DeserializationConstructorsCache$Key$Lookup, fieldName, $String*, int32_t)},
		{"fieldType", "(I)Ljava/lang/Class;", "(I)Ljava/lang/Class<*>;", 0, $virtualMethod(ObjectStreamClass$DeserializationConstructorsCache$Key$Lookup, fieldType, $Class*, int32_t)},
		{"length", "()I", nullptr, 0, $virtualMethod(ObjectStreamClass$DeserializationConstructorsCache$Key$Lookup, length, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.io.ObjectStreamClass$DeserializationConstructorsCache", "java.io.ObjectStreamClass", "DeserializationConstructorsCache", $PRIVATE | $STATIC | $FINAL},
		{"java.io.ObjectStreamClass$DeserializationConstructorsCache$Key", "java.io.ObjectStreamClass$DeserializationConstructorsCache", "Key", $STATIC | $ABSTRACT},
		{"java.io.ObjectStreamClass$DeserializationConstructorsCache$Key$Lookup", "java.io.ObjectStreamClass$DeserializationConstructorsCache$Key", "Lookup", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.io.ObjectStreamClass$DeserializationConstructorsCache$Key$Lookup",
		"java.io.ObjectStreamClass$DeserializationConstructorsCache$Key",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.io.ObjectStreamClass"
	};
	$loadClass(ObjectStreamClass$DeserializationConstructorsCache$Key$Lookup, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ObjectStreamClass$DeserializationConstructorsCache$Key$Lookup);
	});
	return class$;
}

$Class* ObjectStreamClass$DeserializationConstructorsCache$Key$Lookup::class$ = nullptr;

	} // io
} // java