#include <sun/security/ssl/OutputRecord$T13PaddingHolder.h>
#include <sun/security/ssl/OutputRecord.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace security {
		namespace ssl {

$bytes* OutputRecord$T13PaddingHolder::zeros = nullptr;

void OutputRecord$T13PaddingHolder::init$() {
}

void OutputRecord$T13PaddingHolder::clinit$($Class* clazz) {
	$assignStatic(OutputRecord$T13PaddingHolder::zeros, $new($bytes, 16));
}

OutputRecord$T13PaddingHolder::OutputRecord$T13PaddingHolder() {
}

$Class* OutputRecord$T13PaddingHolder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"zeros", "[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(OutputRecord$T13PaddingHolder, zeros)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(OutputRecord$T13PaddingHolder, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.OutputRecord$T13PaddingHolder", "sun.security.ssl.OutputRecord", "T13PaddingHolder", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.OutputRecord$T13PaddingHolder",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.ssl.OutputRecord"
	};
	$loadClass(OutputRecord$T13PaddingHolder, name, initialize, &classInfo$$, OutputRecord$T13PaddingHolder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(OutputRecord$T13PaddingHolder);
	});
	return class$;
}

$Class* OutputRecord$T13PaddingHolder::class$ = nullptr;

		} // ssl
	} // security
} // sun