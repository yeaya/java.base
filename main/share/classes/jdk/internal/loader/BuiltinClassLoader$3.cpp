#include <jdk/internal/loader/BuiltinClassLoader$3.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/module/ModuleReader.h>
#include <java/lang/module/ModuleReference.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/URI.h>
#include <java/util/Optional.h>
#include <jdk/internal/loader/BuiltinClassLoader.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ModuleReader = ::java::lang::module::ModuleReader;
using $ModuleReference = ::java::lang::module::ModuleReference;
using $URI = ::java::net::URI;
using $PrivilegedExceptionAction = ::java::security::PrivilegedExceptionAction;
using $Optional = ::java::util::Optional;
using $BuiltinClassLoader = ::jdk::internal::loader::BuiltinClassLoader;

namespace jdk {
	namespace internal {
		namespace loader {

$FieldInfo _BuiltinClassLoader$3_FieldInfo_[] = {
	{"this$0", "Ljdk/internal/loader/BuiltinClassLoader;", nullptr, $FINAL | $SYNTHETIC, $field(BuiltinClassLoader$3, this$0)},
	{"val$name", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(BuiltinClassLoader$3, val$name)},
	{"val$mref", "Ljava/lang/module/ModuleReference;", nullptr, $FINAL | $SYNTHETIC, $field(BuiltinClassLoader$3, val$mref)},
	{}
};

$MethodInfo _BuiltinClassLoader$3_MethodInfo_[] = {
	{"<init>", "(Ljdk/internal/loader/BuiltinClassLoader;Ljava/lang/module/ModuleReference;Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(BuiltinClassLoader$3::*)($BuiltinClassLoader*,$ModuleReference*,$String*)>(&BuiltinClassLoader$3::init$))},
	{"run", "()Ljava/net/URI;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$EnclosingMethodInfo _BuiltinClassLoader$3_EnclosingMethodInfo_ = {
	"jdk.internal.loader.BuiltinClassLoader",
	"findResource",
	"(Ljava/lang/module/ModuleReference;Ljava/lang/String;)Ljava/net/URL;"
};

$InnerClassInfo _BuiltinClassLoader$3_InnerClassesInfo_[] = {
	{"jdk.internal.loader.BuiltinClassLoader$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _BuiltinClassLoader$3_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.loader.BuiltinClassLoader$3",
	"java.lang.Object",
	"java.security.PrivilegedExceptionAction",
	_BuiltinClassLoader$3_FieldInfo_,
	_BuiltinClassLoader$3_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljava/net/URI;>;",
	&_BuiltinClassLoader$3_EnclosingMethodInfo_,
	_BuiltinClassLoader$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.loader.BuiltinClassLoader"
};

$Object* allocate$BuiltinClassLoader$3($Class* clazz) {
	return $of($alloc(BuiltinClassLoader$3));
}

void BuiltinClassLoader$3::init$($BuiltinClassLoader* this$0, $ModuleReference* val$mref, $String* val$name) {
	$set(this, this$0, this$0);
	$set(this, val$mref, val$mref);
	$set(this, val$name, val$name);
}

$Object* BuiltinClassLoader$3::run() {
	return $of($cast($URI, $nc($($nc($(this->this$0->moduleReaderFor(this->val$mref)))->find(this->val$name)))->orElse(nullptr)));
}

BuiltinClassLoader$3::BuiltinClassLoader$3() {
}

$Class* BuiltinClassLoader$3::load$($String* name, bool initialize) {
	$loadClass(BuiltinClassLoader$3, name, initialize, &_BuiltinClassLoader$3_ClassInfo_, allocate$BuiltinClassLoader$3);
	return class$;
}

$Class* BuiltinClassLoader$3::class$ = nullptr;

		} // loader
	} // internal
} // jdk