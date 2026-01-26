#include <StringConcatFactoryRepeatedConstants.h>

#include <java/lang/IllegalStateException.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodHandles.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/invoke/StringConcatFactory.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Float = ::java::lang::Float;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $CallSite = ::java::lang::invoke::CallSite;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles = ::java::lang::invoke::MethodHandles;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $StringConcatFactory = ::java::lang::invoke::StringConcatFactory;

$MethodInfo _StringConcatFactoryRepeatedConstants_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(StringConcatFactoryRepeatedConstants, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(StringConcatFactoryRepeatedConstants, main, void, $StringArray*), "java.lang.Throwable"},
	{}
};

$ClassInfo _StringConcatFactoryRepeatedConstants_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"StringConcatFactoryRepeatedConstants",
	"java.lang.Object",
	nullptr,
	nullptr,
	_StringConcatFactoryRepeatedConstants_MethodInfo_
};

$Object* allocate$StringConcatFactoryRepeatedConstants($Class* clazz) {
	return $of($alloc(StringConcatFactoryRepeatedConstants));
}

void StringConcatFactoryRepeatedConstants::init$() {
}

void StringConcatFactoryRepeatedConstants::main($StringArray* args) {
	$load(StringConcatFactoryRepeatedConstants);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($MethodHandles$Lookup, var$0, $MethodHandles::lookup());
	$var($String, var$1, "foo"_s);
	$var($CallSite, site, $StringConcatFactory::makeConcatWithConstants(var$0, var$1, $($MethodType::methodType($String::class$)), "\u0002\u0002"_s, $$new($ObjectArray, {
		$of("foo"_s),
		$of("bar"_s)
	})));
	$var($String, string, $cast($String, $nc($($nc(site)->dynamicInvoker()))->invoke($$new($ObjectArray, 0))));
	if (!"foobar"_s->equals(string)) {
		$throwNew($IllegalStateException, $$str({"Expected: foobar, got: "_s, string}));
	}
	$var($MethodHandles$Lookup, var$2, $MethodHandles::lookup());
	$var($String, var$3, "foo"_s);
	$var($MethodType, var$4, $MethodType::methodType($String::class$));
	$var($String, var$5, "\u0002\u0002test\u0002\u0002"_s);
	$assign(site, $StringConcatFactory::makeConcatWithConstants(var$2, var$3, var$4, var$5, $$new($ObjectArray, {
		$of("foo"_s),
		$($of($Float::valueOf(17.0f))),
		$($of($Long::valueOf((int64_t)4711))),
		$of("bar"_s)
	})));
	$assign(string, $cast($String, $nc($(site->dynamicInvoker()))->invoke($$new($ObjectArray, 0))));
	$var($StringBuilder, sb, $new($StringBuilder));
	sb->append("foo"_s)->append(17.0f)->append("test"_s)->append((int64_t)4711)->append("bar"_s);
	if (!$nc($(sb->toString()))->equals(string)) {
		$throwNew($IllegalStateException, $$str({"Expected: "_s, $(sb->toString()), ", got: "_s, string}));
	}
}

StringConcatFactoryRepeatedConstants::StringConcatFactoryRepeatedConstants() {
}

$Class* StringConcatFactoryRepeatedConstants::load$($String* name, bool initialize) {
	$loadClass(StringConcatFactoryRepeatedConstants, name, initialize, &_StringConcatFactoryRepeatedConstants_ClassInfo_, allocate$StringConcatFactoryRepeatedConstants);
	return class$;
}

$Class* StringConcatFactoryRepeatedConstants::class$ = nullptr;