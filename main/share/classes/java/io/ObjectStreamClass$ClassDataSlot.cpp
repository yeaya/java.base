#include <java/io/ObjectStreamClass$ClassDataSlot.h>
#include <java/io/ObjectStreamClass.h>
#include <jcpp.h>

using $ObjectStreamClass = ::java::io::ObjectStreamClass;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace io {

void ObjectStreamClass$ClassDataSlot::init$($ObjectStreamClass* desc, bool hasData) {
	$set(this, desc, desc);
	this->hasData = hasData;
}

ObjectStreamClass$ClassDataSlot::ObjectStreamClass$ClassDataSlot() {
}

$Class* ObjectStreamClass$ClassDataSlot::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"desc", "Ljava/io/ObjectStreamClass;", nullptr, $FINAL, $field(ObjectStreamClass$ClassDataSlot, desc)},
		{"hasData", "Z", nullptr, $FINAL, $field(ObjectStreamClass$ClassDataSlot, hasData)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/io/ObjectStreamClass;Z)V", nullptr, 0, $method(ObjectStreamClass$ClassDataSlot, init$, void, $ObjectStreamClass*, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.io.ObjectStreamClass$ClassDataSlot", "java.io.ObjectStreamClass", "ClassDataSlot", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.io.ObjectStreamClass$ClassDataSlot",
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
		"java.io.ObjectStreamClass"
	};
	$loadClass(ObjectStreamClass$ClassDataSlot, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ObjectStreamClass$ClassDataSlot);
	});
	return class$;
}

$Class* ObjectStreamClass$ClassDataSlot::class$ = nullptr;

	} // io
} // java