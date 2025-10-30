#include <java/lang/Class$1.h>

#include <java/lang/reflect/Constructor.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Constructor = ::java::lang::reflect::Constructor;
using $PrivilegedAction = ::java::security::PrivilegedAction;

namespace java {
	namespace lang {

$FieldInfo _Class$1_FieldInfo_[] = {
	{"this$0", "Ljava/lang/Class;", nullptr, $FINAL | $SYNTHETIC, $field(Class$1, this$0)},
	{"val$c", "Ljava/lang/reflect/Constructor;", nullptr, $FINAL | $SYNTHETIC, $field(Class$1, val$c)},
	{}
};

$MethodInfo _Class$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Class;Ljava/lang/reflect/Constructor;)V", nullptr, 0, $method(static_cast<void(Class$1::*)($Class*,$Constructor*)>(&Class$1::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Class$1_EnclosingMethodInfo_ = {
	"java.lang.Class",
	"newInstance",
	"()Ljava/lang/Object;"
};

$InnerClassInfo _Class$1_InnerClassesInfo_[] = {
	{"java.lang.Class$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Class$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.Class$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_Class$1_FieldInfo_,
	_Class$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
	&_Class$1_EnclosingMethodInfo_,
	_Class$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.Class"
};

$Object* allocate$Class$1($Class* clazz) {
	return $of($alloc(Class$1));
}

void Class$1::init$($Class* this$0, $Constructor* val$c) {
	$set(this, this$0, this$0);
	$set(this, val$c, val$c);
}

$Object* Class$1::run() {
	$beforeCallerSensitive();
	$nc(this->val$c)->setAccessible(true);
	return $of(nullptr);
}

Class$1::Class$1() {
}

$Class* Class$1::load$($String* name, bool initialize) {
	$loadClass(Class$1, name, initialize, &_Class$1_ClassInfo_, allocate$Class$1);
	return class$;
}

$Class* Class$1::class$ = nullptr;

	} // lang
} // java