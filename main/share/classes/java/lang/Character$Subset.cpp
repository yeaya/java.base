#include <java/lang/Character$Subset.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;

namespace java {
	namespace lang {

void Character$Subset::init$($String* name) {
	if (name == nullptr) {
		$throwNew($NullPointerException, "name"_s);
	}
	$set(this, name, name);
}

bool Character$Subset::equals(Object$* obj) {
	return ($equals(this, obj));
}

int32_t Character$Subset::hashCode() {
	return $Object::hashCode();
}

$String* Character$Subset::toString() {
	return this->name;
}

Character$Subset::Character$Subset() {
}

$Class* Character$Subset::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"name", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Character$Subset, name)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PROTECTED, $method(Character$Subset, init$, void, $String*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL, $virtualMethod(Character$Subset, equals, bool, Object$*)},
		{"hashCode", "()I", nullptr, $PUBLIC | $FINAL, $virtualMethod(Character$Subset, hashCode, int32_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $virtualMethod(Character$Subset, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.Character$Subset", "java.lang.Character", "Subset", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.lang.Character$Subset",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.Character"
	};
	$loadClass(Character$Subset, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Character$Subset);
	});
	return class$;
}

$Class* Character$Subset::class$ = nullptr;

	} // lang
} // java