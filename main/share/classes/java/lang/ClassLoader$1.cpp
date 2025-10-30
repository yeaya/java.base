#include <java/lang/ClassLoader$1.h>

#include <java/lang/ClassLoader.h>
#include <java/lang/SecurityManager.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityManager = ::java::lang::SecurityManager;
using $PrivilegedAction = ::java::security::PrivilegedAction;

namespace java {
	namespace lang {

$FieldInfo _ClassLoader$1_FieldInfo_[] = {
	{"this$0", "Ljava/lang/ClassLoader;", nullptr, $FINAL | $SYNTHETIC, $field(ClassLoader$1, this$0)},
	{"val$packageName", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(ClassLoader$1, val$packageName)},
	{"val$sm", "Ljava/lang/SecurityManager;", nullptr, $FINAL | $SYNTHETIC, $field(ClassLoader$1, val$sm)},
	{}
};

$MethodInfo _ClassLoader$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/ClassLoader;Ljava/lang/SecurityManager;Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(ClassLoader$1::*)($ClassLoader*,$SecurityManager*,$String*)>(&ClassLoader$1::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ClassLoader$1_EnclosingMethodInfo_ = {
	"java.lang.ClassLoader",
	"checkPackageAccess",
	"(Ljava/lang/Class;Ljava/security/ProtectionDomain;)V"
};

$InnerClassInfo _ClassLoader$1_InnerClassesInfo_[] = {
	{"java.lang.ClassLoader$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ClassLoader$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.ClassLoader$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_ClassLoader$1_FieldInfo_,
	_ClassLoader$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
	&_ClassLoader$1_EnclosingMethodInfo_,
	_ClassLoader$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.ClassLoader"
};

$Object* allocate$ClassLoader$1($Class* clazz) {
	return $of($alloc(ClassLoader$1));
}

void ClassLoader$1::init$($ClassLoader* this$0, $SecurityManager* val$sm, $String* val$packageName) {
	$set(this, this$0, this$0);
	$set(this, val$sm, val$sm);
	$set(this, val$packageName, val$packageName);
}

$Object* ClassLoader$1::run() {
	$nc(this->val$sm)->checkPackageAccess(this->val$packageName);
	return $of(nullptr);
}

ClassLoader$1::ClassLoader$1() {
}

$Class* ClassLoader$1::load$($String* name, bool initialize) {
	$loadClass(ClassLoader$1, name, initialize, &_ClassLoader$1_ClassInfo_, allocate$ClassLoader$1);
	return class$;
}

$Class* ClassLoader$1::class$ = nullptr;

	} // lang
} // java