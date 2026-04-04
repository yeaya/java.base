#include <sun/security/ssl/NamedGroup$ExceptionSupplier.h>
#include <sun/security/ssl/NamedGroup.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace security {
		namespace ssl {

$Class* NamedGroup$ExceptionSupplier::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"apply", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(NamedGroup$ExceptionSupplier, apply, void, $String*), "javax.net.ssl.SSLException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.NamedGroup$ExceptionSupplier", "sun.security.ssl.NamedGroup", "ExceptionSupplier", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"sun.security.ssl.NamedGroup$ExceptionSupplier",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.ssl.NamedGroup"
	};
	$loadClass(NamedGroup$ExceptionSupplier, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NamedGroup$ExceptionSupplier);
	});
	return class$;
}

$Class* NamedGroup$ExceptionSupplier::class$ = nullptr;

		} // ssl
	} // security
} // sun