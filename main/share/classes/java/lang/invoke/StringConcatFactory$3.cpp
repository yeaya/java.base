#include <java/lang/invoke/StringConcatFactory$3.h>

#include <java/lang/invoke/BoundMethodHandle.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/invoke/StringConcatFactory.h>
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
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodType = ::java::lang::invoke::MethodType;
using $StringConcatFactory = ::java::lang::invoke::StringConcatFactory;
using $JavaLangAccess = ::jdk::internal::access::JavaLangAccess;
using $Wrapper = ::sun::invoke::util::Wrapper;

namespace java {
	namespace lang {
		namespace invoke {

$MethodInfo _StringConcatFactory$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(StringConcatFactory$3::*)()>(&StringConcatFactory$3::init$))},
	{"apply", "(Ljava/lang/Class;)Ljava/lang/invoke/MethodHandle;", "(Ljava/lang/Class<*>;)Ljava/lang/invoke/MethodHandle;", $PUBLIC},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$EnclosingMethodInfo _StringConcatFactory$3_EnclosingMethodInfo_ = {
	"java.lang.invoke.StringConcatFactory",
	nullptr,
	nullptr
};

$InnerClassInfo _StringConcatFactory$3_InnerClassesInfo_[] = {
	{"java.lang.invoke.StringConcatFactory$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _StringConcatFactory$3_ClassInfo_ = {
	$ACC_SUPER,
	"java.lang.invoke.StringConcatFactory$3",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	_StringConcatFactory$3_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/function/Function<Ljava/lang/Class<*>;Ljava/lang/invoke/MethodHandle;>;",
	&_StringConcatFactory$3_EnclosingMethodInfo_,
	_StringConcatFactory$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.lang.invoke.StringConcatFactory"
};

$Object* allocate$StringConcatFactory$3($Class* clazz) {
	return $of($alloc(StringConcatFactory$3));
}

void StringConcatFactory$3::init$() {
}

$MethodHandle* StringConcatFactory$3::apply($Class* c) {
	$useLocalCurrentObjectStackCache();
	$init($StringConcatFactory);
	$init($Long);
	$var($MethodHandle, mix, $nc($StringConcatFactory::JLA)->stringConcatHelper("mix"_s, $($MethodType::methodType($Long::TYPE, $Long::TYPE, $$new($ClassArray, {$Wrapper::asPrimitiveType(c)})))));
	return $nc(mix)->rebind();
}

$Object* StringConcatFactory$3::apply(Object$* c) {
	return $of(this->apply($cast($Class, c)));
}

StringConcatFactory$3::StringConcatFactory$3() {
}

$Class* StringConcatFactory$3::load$($String* name, bool initialize) {
	$loadClass(StringConcatFactory$3, name, initialize, &_StringConcatFactory$3_ClassInfo_, allocate$StringConcatFactory$3);
	return class$;
}

$Class* StringConcatFactory$3::class$ = nullptr;

		} // invoke
	} // lang
} // java