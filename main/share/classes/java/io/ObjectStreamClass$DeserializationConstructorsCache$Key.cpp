#include <java/io/ObjectStreamClass$DeserializationConstructorsCache$Key.h>

#include <java/io/ObjectStreamClass$DeserializationConstructorsCache.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace io {

$MethodInfo _ObjectStreamClass$DeserializationConstructorsCache$Key_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(ObjectStreamClass$DeserializationConstructorsCache$Key, init$, void)},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL, $virtualMethod(ObjectStreamClass$DeserializationConstructorsCache$Key, equals, bool, Object$*)},
	{"fieldName", "(I)Ljava/lang/String;", nullptr, $ABSTRACT, $virtualMethod(ObjectStreamClass$DeserializationConstructorsCache$Key, fieldName, $String*, int32_t)},
	{"fieldType", "(I)Ljava/lang/Class;", "(I)Ljava/lang/Class<*>;", $ABSTRACT, $virtualMethod(ObjectStreamClass$DeserializationConstructorsCache$Key, fieldType, $Class*, int32_t)},
	{"hashCode", "()I", nullptr, $PUBLIC | $FINAL, $virtualMethod(ObjectStreamClass$DeserializationConstructorsCache$Key, hashCode, int32_t)},
	{"length", "()I", nullptr, $ABSTRACT, $virtualMethod(ObjectStreamClass$DeserializationConstructorsCache$Key, length, int32_t)},
	{}
};

$InnerClassInfo _ObjectStreamClass$DeserializationConstructorsCache$Key_InnerClassesInfo_[] = {
	{"java.io.ObjectStreamClass$DeserializationConstructorsCache", "java.io.ObjectStreamClass", "DeserializationConstructorsCache", $PRIVATE | $STATIC | $FINAL},
	{"java.io.ObjectStreamClass$DeserializationConstructorsCache$Key", "java.io.ObjectStreamClass$DeserializationConstructorsCache", "Key", $STATIC | $ABSTRACT},
	{"java.io.ObjectStreamClass$DeserializationConstructorsCache$Key$Impl", "java.io.ObjectStreamClass$DeserializationConstructorsCache$Key", "Impl", $STATIC | $FINAL},
	{"java.io.ObjectStreamClass$DeserializationConstructorsCache$Key$Lookup", "java.io.ObjectStreamClass$DeserializationConstructorsCache$Key", "Lookup", $STATIC | $FINAL},
	{}
};

$ClassInfo _ObjectStreamClass$DeserializationConstructorsCache$Key_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"java.io.ObjectStreamClass$DeserializationConstructorsCache$Key",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ObjectStreamClass$DeserializationConstructorsCache$Key_MethodInfo_,
	nullptr,
	nullptr,
	_ObjectStreamClass$DeserializationConstructorsCache$Key_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.io.ObjectStreamClass"
};

$Object* allocate$ObjectStreamClass$DeserializationConstructorsCache$Key($Class* clazz) {
	return $of($alloc(ObjectStreamClass$DeserializationConstructorsCache$Key));
}

void ObjectStreamClass$DeserializationConstructorsCache$Key::init$() {
}

int32_t ObjectStreamClass$DeserializationConstructorsCache$Key::hashCode() {
	$useLocalCurrentObjectStackCache();
	int32_t n = length();
	int32_t h = 0;
	for (int32_t i = 0; i < n; ++i) {
		h = h * 31 + $nc($of(fieldType(i)))->hashCode();
	}
	for (int32_t i = 0; i < n; ++i) {
		h = h * 31 + $nc($(fieldName(i)))->hashCode();
	}
	return h;
}

bool ObjectStreamClass$DeserializationConstructorsCache$Key::equals(Object$* obj) {
	$useLocalCurrentObjectStackCache();
	$var(ObjectStreamClass$DeserializationConstructorsCache$Key, other, nullptr);
	bool var$0 = $instanceOf(ObjectStreamClass$DeserializationConstructorsCache$Key, obj);
	if (var$0) {
		$assign(other, $cast(ObjectStreamClass$DeserializationConstructorsCache$Key, obj));
		var$0 = true;
	}
	if (!(var$0)) {
		return false;
	}
	int32_t n = length();
	if (n != $nc(other)->length()) {
		return false;
	}
	for (int32_t i = 0; i < n; ++i) {
		if (fieldType(i) != $nc(other)->fieldType(i)) {
			return false;
		}
	}
	for (int32_t i = 0; i < n; ++i) {
		if (!$nc($(fieldName(i)))->equals($($nc(other)->fieldName(i)))) {
			return false;
		}
	}
	return true;
}

ObjectStreamClass$DeserializationConstructorsCache$Key::ObjectStreamClass$DeserializationConstructorsCache$Key() {
}

$Class* ObjectStreamClass$DeserializationConstructorsCache$Key::load$($String* name, bool initialize) {
	$loadClass(ObjectStreamClass$DeserializationConstructorsCache$Key, name, initialize, &_ObjectStreamClass$DeserializationConstructorsCache$Key_ClassInfo_, allocate$ObjectStreamClass$DeserializationConstructorsCache$Key);
	return class$;
}

$Class* ObjectStreamClass$DeserializationConstructorsCache$Key::class$ = nullptr;

	} // io
} // java