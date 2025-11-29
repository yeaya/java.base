#include <java/io/ObjectStreamClass$1.h>

#include <java/io/ObjectStreamClass.h>
#include <jcpp.h>

using $ObjectStreamClass = ::java::io::ObjectStreamClass;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace io {

$FieldInfo _ObjectStreamClass$1_FieldInfo_[] = {
	{"this$0", "Ljava/io/ObjectStreamClass;", nullptr, $FINAL | $SYNTHETIC, $field(ObjectStreamClass$1, this$0)},
	{}
};

$MethodInfo _ObjectStreamClass$1_MethodInfo_[] = {
	{"<init>", "(Ljava/io/ObjectStreamClass;)V", nullptr, 0, $method(static_cast<void(ObjectStreamClass$1::*)($ObjectStreamClass*)>(&ObjectStreamClass$1::init$))},
	{"run", "()Ljava/lang/Long;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ObjectStreamClass$1_EnclosingMethodInfo_ = {
	"java.io.ObjectStreamClass",
	"getSerialVersionUID",
	"()J"
};

$InnerClassInfo _ObjectStreamClass$1_InnerClassesInfo_[] = {
	{"java.io.ObjectStreamClass$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ObjectStreamClass$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.io.ObjectStreamClass$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_ObjectStreamClass$1_FieldInfo_,
	_ObjectStreamClass$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Long;>;",
	&_ObjectStreamClass$1_EnclosingMethodInfo_,
	_ObjectStreamClass$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.io.ObjectStreamClass"
};

$Object* allocate$ObjectStreamClass$1($Class* clazz) {
	return $of($alloc(ObjectStreamClass$1));
}

void ObjectStreamClass$1::init$($ObjectStreamClass* this$0) {
	$set(this, this$0, this$0);
}

$Object* ObjectStreamClass$1::run() {
	return $of($Long::valueOf($ObjectStreamClass::computeDefaultSUID(this->this$0->cl)));
}

ObjectStreamClass$1::ObjectStreamClass$1() {
}

$Class* ObjectStreamClass$1::load$($String* name, bool initialize) {
	$loadClass(ObjectStreamClass$1, name, initialize, &_ObjectStreamClass$1_ClassInfo_, allocate$ObjectStreamClass$1);
	return class$;
}

$Class* ObjectStreamClass$1::class$ = nullptr;

	} // io
} // java