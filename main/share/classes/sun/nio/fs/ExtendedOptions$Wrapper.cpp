#include <sun/nio/fs/ExtendedOptions$Wrapper.h>
#include <sun/nio/fs/ExtendedOptions.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace nio {
		namespace fs {

void ExtendedOptions$Wrapper::init$(Object$* option, Object$* param) {
	$set(this, option, option);
	$set(this, param, param);
}

$Object* ExtendedOptions$Wrapper::parameter() {
	return this->param;
}

ExtendedOptions$Wrapper::ExtendedOptions$Wrapper() {
}

$Class* ExtendedOptions$Wrapper::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"option", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(ExtendedOptions$Wrapper, option)},
		{"param", "Ljava/lang/Object;", "TT;", $PRIVATE | $FINAL, $field(ExtendedOptions$Wrapper, param)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Object;Ljava/lang/Object;)V", "(Ljava/lang/Object;TT;)V", 0, $method(ExtendedOptions$Wrapper, init$, void, Object$*, Object$*)},
		{"parameter", "()Ljava/lang/Object;", "()TT;", 0, $method(ExtendedOptions$Wrapper, parameter, $Object*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.fs.ExtendedOptions$Wrapper", "sun.nio.fs.ExtendedOptions", "Wrapper", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.nio.fs.ExtendedOptions$Wrapper",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/lang/Object;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.nio.fs.ExtendedOptions"
	};
	$loadClass(ExtendedOptions$Wrapper, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ExtendedOptions$Wrapper);
	});
	return class$;
}

$Class* ExtendedOptions$Wrapper::class$ = nullptr;

		} // fs
	} // nio
} // sun