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

$FieldInfo _ObjectStreamClass$ClassDataSlot_FieldInfo_[] = {
	{"desc", "Ljava/io/ObjectStreamClass;", nullptr, $FINAL, $field(ObjectStreamClass$ClassDataSlot, desc)},
	{"hasData", "Z", nullptr, $FINAL, $field(ObjectStreamClass$ClassDataSlot, hasData)},
	{}
};

$MethodInfo _ObjectStreamClass$ClassDataSlot_MethodInfo_[] = {
	{"<init>", "(Ljava/io/ObjectStreamClass;Z)V", nullptr, 0, $method(static_cast<void(ObjectStreamClass$ClassDataSlot::*)($ObjectStreamClass*,bool)>(&ObjectStreamClass$ClassDataSlot::init$))},
	{}
};

$InnerClassInfo _ObjectStreamClass$ClassDataSlot_InnerClassesInfo_[] = {
	{"java.io.ObjectStreamClass$ClassDataSlot", "java.io.ObjectStreamClass", "ClassDataSlot", $STATIC},
	{}
};

$ClassInfo _ObjectStreamClass$ClassDataSlot_ClassInfo_ = {
	$ACC_SUPER,
	"java.io.ObjectStreamClass$ClassDataSlot",
	"java.lang.Object",
	nullptr,
	_ObjectStreamClass$ClassDataSlot_FieldInfo_,
	_ObjectStreamClass$ClassDataSlot_MethodInfo_,
	nullptr,
	nullptr,
	_ObjectStreamClass$ClassDataSlot_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.io.ObjectStreamClass"
};

$Object* allocate$ObjectStreamClass$ClassDataSlot($Class* clazz) {
	return $of($alloc(ObjectStreamClass$ClassDataSlot));
}

void ObjectStreamClass$ClassDataSlot::init$($ObjectStreamClass* desc, bool hasData) {
	$set(this, desc, desc);
	this->hasData = hasData;
}

ObjectStreamClass$ClassDataSlot::ObjectStreamClass$ClassDataSlot() {
}

$Class* ObjectStreamClass$ClassDataSlot::load$($String* name, bool initialize) {
	$loadClass(ObjectStreamClass$ClassDataSlot, name, initialize, &_ObjectStreamClass$ClassDataSlot_ClassInfo_, allocate$ObjectStreamClass$ClassDataSlot);
	return class$;
}

$Class* ObjectStreamClass$ClassDataSlot::class$ = nullptr;

	} // io
} // java