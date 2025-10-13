#include <java/lang/invoke/StringConcatFactory$1.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Long.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/invoke/BoundMethodHandle.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/invoke/StringConcatFactory.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jdk/internal/access/JavaLangAccess.h>
#include <sun/invoke/util/Wrapper.h>
#include <jcpp.h>

#undef JLA
#undef TYPE

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $BoundMethodHandle = ::java::lang::invoke::BoundMethodHandle;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodType = ::java::lang::invoke::MethodType;
using $StringConcatFactory = ::java::lang::invoke::StringConcatFactory;
using $Function = ::java::util::function::Function;
using $JavaLangAccess = ::jdk::internal::access::JavaLangAccess;
using $Wrapper = ::sun::invoke::util::Wrapper;

namespace java {
	namespace lang {
		namespace invoke {

$MethodInfo _StringConcatFactory$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(StringConcatFactory$1::*)()>(&StringConcatFactory$1::init$))},
	{"apply", "(Ljava/lang/Class;)Ljava/lang/invoke/MethodHandle;", "(Ljava/lang/Class<*>;)Ljava/lang/invoke/MethodHandle;", $PUBLIC},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$EnclosingMethodInfo _StringConcatFactory$1_EnclosingMethodInfo_ = {
	"java.lang.invoke.StringConcatFactory",
	nullptr,
	nullptr
};

$InnerClassInfo _StringConcatFactory$1_InnerClassesInfo_[] = {
	{"java.lang.invoke.StringConcatFactory$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _StringConcatFactory$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.invoke.StringConcatFactory$1",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	_StringConcatFactory$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/function/Function<Ljava/lang/Class<*>;Ljava/lang/invoke/MethodHandle;>;",
	&_StringConcatFactory$1_EnclosingMethodInfo_,
	_StringConcatFactory$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.StringConcatFactory"
};

$Object* allocate$StringConcatFactory$1($Class* clazz) {
	return $of($alloc(StringConcatFactory$1));
}

void StringConcatFactory$1::init$() {
}

$MethodHandle* StringConcatFactory$1::apply($Class* c) {
	$init($StringConcatFactory);
	$init($Long);
		$load($bytes);
		$load($String);
	$var($MethodHandle, prepend, $nc($StringConcatFactory::JLA)->stringConcatHelper("prepend"_s, $($MethodType::methodType($Long::TYPE, $Long::TYPE, $$new($ClassArray, {
		$getClass($bytes),
		$Wrapper::asPrimitiveType(c),
		$String::class$
	})))));
	return $nc(prepend)->rebind();
}

$Object* StringConcatFactory$1::apply(Object$* c) {
	return $of(this->apply($cast($Class, c)));
}

StringConcatFactory$1::StringConcatFactory$1() {
}

$Class* StringConcatFactory$1::load$($String* name, bool initialize) {
	$loadClass(StringConcatFactory$1, name, initialize, &_StringConcatFactory$1_ClassInfo_, allocate$StringConcatFactory$1);
	return class$;
}

$Class* StringConcatFactory$1::class$ = nullptr;

		} // invoke
	} // lang
} // java