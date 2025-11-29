#include <jdk/internal/reflect/ClassDefiner$1.h>

#include <java/lang/ClassLoader.h>
#include <jdk/internal/reflect/ClassDefiner.h>
#include <jdk/internal/reflect/DelegatingClassLoader.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DelegatingClassLoader = ::jdk::internal::reflect::DelegatingClassLoader;

namespace jdk {
	namespace internal {
		namespace reflect {

$FieldInfo _ClassDefiner$1_FieldInfo_[] = {
	{"val$parentClassLoader", "Ljava/lang/ClassLoader;", nullptr, $FINAL | $SYNTHETIC, $field(ClassDefiner$1, val$parentClassLoader)},
	{}
};

$MethodInfo _ClassDefiner$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/ClassLoader;)V", "()V", 0, $method(static_cast<void(ClassDefiner$1::*)($ClassLoader*)>(&ClassDefiner$1::init$))},
	{"run", "()Ljava/lang/ClassLoader;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ClassDefiner$1_EnclosingMethodInfo_ = {
	"jdk.internal.reflect.ClassDefiner",
	"defineClass",
	"(Ljava/lang/String;[BIILjava/lang/ClassLoader;)Ljava/lang/Class;"
};

$InnerClassInfo _ClassDefiner$1_InnerClassesInfo_[] = {
	{"jdk.internal.reflect.ClassDefiner$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ClassDefiner$1_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.reflect.ClassDefiner$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_ClassDefiner$1_FieldInfo_,
	_ClassDefiner$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/ClassLoader;>;",
	&_ClassDefiner$1_EnclosingMethodInfo_,
	_ClassDefiner$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.reflect.ClassDefiner"
};

$Object* allocate$ClassDefiner$1($Class* clazz) {
	return $of($alloc(ClassDefiner$1));
}

void ClassDefiner$1::init$($ClassLoader* val$parentClassLoader) {
	$set(this, val$parentClassLoader, val$parentClassLoader);
}

$Object* ClassDefiner$1::run() {
	return $of($new($DelegatingClassLoader, this->val$parentClassLoader));
}

ClassDefiner$1::ClassDefiner$1() {
}

$Class* ClassDefiner$1::load$($String* name, bool initialize) {
	$loadClass(ClassDefiner$1, name, initialize, &_ClassDefiner$1_ClassInfo_, allocate$ClassDefiner$1);
	return class$;
}

$Class* ClassDefiner$1::class$ = nullptr;

		} // reflect
	} // internal
} // jdk