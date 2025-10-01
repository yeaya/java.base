#include <jdk/internal/loader/BuiltinClassLoader$5.h>

#include <java/io/IOException.h>
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
#include <jdk/internal/loader/BuiltinClassLoader$NullModuleReader.h>
#include <jdk/internal/loader/BuiltinClassLoader.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ModuleReader = ::java::lang::module::ModuleReader;
using $ModuleReference = ::java::lang::module::ModuleReference;
using $Function = ::java::util::function::Function;
using $BuiltinClassLoader = ::jdk::internal::loader::BuiltinClassLoader;
using $BuiltinClassLoader$NullModuleReader = ::jdk::internal::loader::BuiltinClassLoader$NullModuleReader;

namespace jdk {
	namespace internal {
		namespace loader {

$FieldInfo _BuiltinClassLoader$5_FieldInfo_[] = {
	{"this$0", "Ljdk/internal/loader/BuiltinClassLoader;", nullptr, $FINAL | $SYNTHETIC, $field(BuiltinClassLoader$5, this$0)},
	{"val$mref", "Ljava/lang/module/ModuleReference;", nullptr, $FINAL | $SYNTHETIC, $field(BuiltinClassLoader$5, val$mref)},
	{}
};

$MethodInfo _BuiltinClassLoader$5_MethodInfo_[] = {
	{"<init>", "(Ljdk/internal/loader/BuiltinClassLoader;Ljava/lang/module/ModuleReference;)V", nullptr, 0, $method(static_cast<void(BuiltinClassLoader$5::*)($BuiltinClassLoader*,$ModuleReference*)>(&BuiltinClassLoader$5::init$))},
	{"apply", "(Ljava/lang/module/ModuleReference;)Ljava/lang/module/ModuleReader;", nullptr, $PUBLIC},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$EnclosingMethodInfo _BuiltinClassLoader$5_EnclosingMethodInfo_ = {
	"jdk.internal.loader.BuiltinClassLoader",
	"moduleReaderFor",
	"(Ljava/lang/module/ModuleReference;)Ljava/lang/module/ModuleReader;"
};

$InnerClassInfo _BuiltinClassLoader$5_InnerClassesInfo_[] = {
	{"jdk.internal.loader.BuiltinClassLoader$5", nullptr, nullptr, 0},
	{}
};

$ClassInfo _BuiltinClassLoader$5_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.loader.BuiltinClassLoader$5",
	"java.lang.Object",
	"java.util.function.Function",
	_BuiltinClassLoader$5_FieldInfo_,
	_BuiltinClassLoader$5_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/function/Function<Ljava/lang/module/ModuleReference;Ljava/lang/module/ModuleReader;>;",
	&_BuiltinClassLoader$5_EnclosingMethodInfo_,
	_BuiltinClassLoader$5_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.loader.BuiltinClassLoader"
};

$Object* allocate$BuiltinClassLoader$5($Class* clazz) {
	return $of($alloc(BuiltinClassLoader$5));
}

void BuiltinClassLoader$5::init$($BuiltinClassLoader* this$0, $ModuleReference* val$mref) {
	$set(this, this$0, this$0);
	$set(this, val$mref, val$mref);
}

$ModuleReader* BuiltinClassLoader$5::apply($ModuleReference* moduleReference) {
	try {
		return $nc(this->val$mref)->open();
	} catch ($IOException&) {
		$var($IOException, e, $catch());
		return $new($BuiltinClassLoader$NullModuleReader);
	}
	$shouldNotReachHere();
}

$Object* BuiltinClassLoader$5::apply(Object$* moduleReference) {
	return $of(this->apply($cast($ModuleReference, moduleReference)));
}

BuiltinClassLoader$5::BuiltinClassLoader$5() {
}

$Class* BuiltinClassLoader$5::load$($String* name, bool initialize) {
	$loadClass(BuiltinClassLoader$5, name, initialize, &_BuiltinClassLoader$5_ClassInfo_, allocate$BuiltinClassLoader$5);
	return class$;
}

$Class* BuiltinClassLoader$5::class$ = nullptr;

		} // loader
	} // internal
} // jdk