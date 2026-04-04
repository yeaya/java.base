#include <sun/security/provider/MD4$1.h>
#include <java/security/Provider.h>
#include <sun/security/provider/MD4.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Provider = ::java::security::Provider;

namespace sun {
	namespace security {
		namespace provider {

void MD4$1::init$($String* name, $String* versionStr, $String* info) {
	$Provider::init$(name, versionStr, info);
}

MD4$1::MD4$1() {
}

$Class* MD4$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MD4$1, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, 0, $method(MD4$1, init$, void, $String*, $String*, $String*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.security.provider.MD4",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.provider.MD4$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.provider.MD4$1",
		"java.security.Provider",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.provider.MD4"
	};
	$loadClass(MD4$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(MD4$1));
	});
	return class$;
}

$Class* MD4$1::class$ = nullptr;

		} // provider
	} // security
} // sun