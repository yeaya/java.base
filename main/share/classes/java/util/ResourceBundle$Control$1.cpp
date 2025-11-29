#include <java/util/ResourceBundle$Control$1.h>

#include <java/lang/reflect/Constructor.h>
#include <java/util/ResourceBundle$Control.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ResourceBundle$Control = ::java::util::ResourceBundle$Control;

namespace java {
	namespace util {

$FieldInfo _ResourceBundle$Control$1_FieldInfo_[] = {
	{"this$0", "Ljava/util/ResourceBundle$Control;", nullptr, $FINAL | $SYNTHETIC, $field(ResourceBundle$Control$1, this$0)},
	{"val$bundleClass", "Ljava/lang/Class;", nullptr, $FINAL | $SYNTHETIC, $field(ResourceBundle$Control$1, val$bundleClass)},
	{}
};

$MethodInfo _ResourceBundle$Control$1_MethodInfo_[] = {
	{"<init>", "(Ljava/util/ResourceBundle$Control;Ljava/lang/Class;)V", nullptr, 0, $method(static_cast<void(ResourceBundle$Control$1::*)($ResourceBundle$Control*,$Class*)>(&ResourceBundle$Control$1::init$))},
	{"run", "()Ljava/lang/reflect/Constructor;", "()Ljava/lang/reflect/Constructor<Ljava/util/ResourceBundle;>;", $PUBLIC, nullptr, "java.lang.NoSuchMethodException"},
	{}
};

$EnclosingMethodInfo _ResourceBundle$Control$1_EnclosingMethodInfo_ = {
	"java.util.ResourceBundle$Control",
	"newBundle0",
	"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/ClassLoader;Z)Ljava/util/ResourceBundle;"
};

$InnerClassInfo _ResourceBundle$Control$1_InnerClassesInfo_[] = {
	{"java.util.ResourceBundle$Control", "java.util.ResourceBundle", "Control", $PUBLIC | $STATIC},
	{"java.util.ResourceBundle$Control$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ResourceBundle$Control$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.util.ResourceBundle$Control$1",
	"java.lang.Object",
	"java.security.PrivilegedExceptionAction",
	_ResourceBundle$Control$1_FieldInfo_,
	_ResourceBundle$Control$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljava/lang/reflect/Constructor<Ljava/util/ResourceBundle;>;>;",
	&_ResourceBundle$Control$1_EnclosingMethodInfo_,
	_ResourceBundle$Control$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.util.ResourceBundle"
};

$Object* allocate$ResourceBundle$Control$1($Class* clazz) {
	return $of($alloc(ResourceBundle$Control$1));
}

void ResourceBundle$Control$1::init$($ResourceBundle$Control* this$0, $Class* val$bundleClass) {
	$set(this, this$0, this$0);
	$set(this, val$bundleClass, val$bundleClass);
}

$Object* ResourceBundle$Control$1::run() {
	$beforeCallerSensitive();
	return $of($nc(this->val$bundleClass)->getDeclaredConstructor($$new($ClassArray, 0)));
}

ResourceBundle$Control$1::ResourceBundle$Control$1() {
}

$Class* ResourceBundle$Control$1::load$($String* name, bool initialize) {
	$loadClass(ResourceBundle$Control$1, name, initialize, &_ResourceBundle$Control$1_ClassInfo_, allocate$ResourceBundle$Control$1);
	return class$;
}

$Class* ResourceBundle$Control$1::class$ = nullptr;

	} // util
} // java