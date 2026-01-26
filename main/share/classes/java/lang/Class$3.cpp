#include <java/lang/Class$3.h>

#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Method = ::java::lang::reflect::Method;

namespace java {
	namespace lang {

$FieldInfo _Class$3_FieldInfo_[] = {
	{"this$0", "Ljava/lang/Class;", nullptr, $FINAL | $SYNTHETIC, $field(Class$3, this$0)},
	{"val$values", "Ljava/lang/reflect/Method;", nullptr, $FINAL | $SYNTHETIC, $field(Class$3, val$values)},
	{}
};

$MethodInfo _Class$3_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Class;Ljava/lang/reflect/Method;)V", nullptr, 0, $method(Class$3, init$, void, $Class*, $Method*)},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(Class$3, run, $Object*)},
	{}
};

$EnclosingMethodInfo _Class$3_EnclosingMethodInfo_ = {
	"java.lang.Class",
	"getEnumConstantsShared",
	"()[Ljava/lang/Object;"
};

$InnerClassInfo _Class$3_InnerClassesInfo_[] = {
	{"java.lang.Class$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Class$3_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.Class$3",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_Class$3_FieldInfo_,
	_Class$3_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
	&_Class$3_EnclosingMethodInfo_,
	_Class$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.Class"
};

$Object* allocate$Class$3($Class* clazz) {
	return $of($alloc(Class$3));
}

void Class$3::init$($Class* this$0, $Method* val$values) {
	$set(this, this$0, this$0);
	$set(this, val$values, val$values);
}

$Object* Class$3::run() {
	$beforeCallerSensitive();
	$nc(this->val$values)->setAccessible(true);
	return $of(nullptr);
}

Class$3::Class$3() {
}

$Class* Class$3::load$($String* name, bool initialize) {
	$loadClass(Class$3, name, initialize, &_Class$3_ClassInfo_, allocate$Class$3);
	return class$;
}

$Class* Class$3::class$ = nullptr;

	} // lang
} // java