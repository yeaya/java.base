#include <jdk/internal/loader/BuiltinClassLoader$4.h>

#include <java/io/IOException.h>
#include <jdk/internal/loader/BuiltinClassLoader.h>
#include <jdk/internal/loader/Resource.h>
#include <jdk/internal/loader/URLClassPath.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $BuiltinClassLoader = ::jdk::internal::loader::BuiltinClassLoader;
using $Resource = ::jdk::internal::loader::Resource;
using $URLClassPath = ::jdk::internal::loader::URLClassPath;

namespace jdk {
	namespace internal {
		namespace loader {

$FieldInfo _BuiltinClassLoader$4_FieldInfo_[] = {
	{"this$0", "Ljdk/internal/loader/BuiltinClassLoader;", nullptr, $FINAL | $SYNTHETIC, $field(BuiltinClassLoader$4, this$0)},
	{"val$cn", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(BuiltinClassLoader$4, val$cn)},
	{"val$path", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(BuiltinClassLoader$4, val$path)},
	{}
};

$MethodInfo _BuiltinClassLoader$4_MethodInfo_[] = {
	{"<init>", "(Ljdk/internal/loader/BuiltinClassLoader;Ljava/lang/String;Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(BuiltinClassLoader$4::*)($BuiltinClassLoader*,$String*,$String*)>(&BuiltinClassLoader$4::init$))},
	{"run", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", $PUBLIC},
	{}
};

$EnclosingMethodInfo _BuiltinClassLoader$4_EnclosingMethodInfo_ = {
	"jdk.internal.loader.BuiltinClassLoader",
	"findClassOnClassPathOrNull",
	"(Ljava/lang/String;)Ljava/lang/Class;"
};

$InnerClassInfo _BuiltinClassLoader$4_InnerClassesInfo_[] = {
	{"jdk.internal.loader.BuiltinClassLoader$4", nullptr, nullptr, 0},
	{}
};

$ClassInfo _BuiltinClassLoader$4_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.loader.BuiltinClassLoader$4",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_BuiltinClassLoader$4_FieldInfo_,
	_BuiltinClassLoader$4_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Class<*>;>;",
	&_BuiltinClassLoader$4_EnclosingMethodInfo_,
	_BuiltinClassLoader$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.loader.BuiltinClassLoader"
};

$Object* allocate$BuiltinClassLoader$4($Class* clazz) {
	return $of($alloc(BuiltinClassLoader$4));
}

void BuiltinClassLoader$4::init$($BuiltinClassLoader* this$0, $String* val$path, $String* val$cn) {
	$set(this, this$0, this$0);
	$set(this, val$path, val$path);
	$set(this, val$cn, val$cn);
}

$Object* BuiltinClassLoader$4::run() {
	$var($Resource, res, $nc(this->this$0->ucp)->getResource(this->val$path, false));
	if (res != nullptr) {
		try {
			return $of(this->this$0->defineClass(this->val$cn, res));
		} catch ($IOException& ioe) {
		}
	}
	return $of(nullptr);
}

BuiltinClassLoader$4::BuiltinClassLoader$4() {
}

$Class* BuiltinClassLoader$4::load$($String* name, bool initialize) {
	$loadClass(BuiltinClassLoader$4, name, initialize, &_BuiltinClassLoader$4_ClassInfo_, allocate$BuiltinClassLoader$4);
	return class$;
}

$Class* BuiltinClassLoader$4::class$ = nullptr;

		} // loader
	} // internal
} // jdk