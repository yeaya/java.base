#include <java/nio/file/attribute/UserPrincipalLookupService.h>
#include <java/nio/file/attribute/GroupPrincipal.h>
#include <java/nio/file/attribute/UserPrincipal.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GroupPrincipal = ::java::nio::file::attribute::GroupPrincipal;
using $UserPrincipal = ::java::nio::file::attribute::UserPrincipal;

namespace java {
	namespace nio {
		namespace file {
			namespace attribute {

void UserPrincipalLookupService::init$() {
}

UserPrincipalLookupService::UserPrincipalLookupService() {
}

$Class* UserPrincipalLookupService::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(UserPrincipalLookupService, init$, void)},
		{"lookupPrincipalByGroupName", "(Ljava/lang/String;)Ljava/nio/file/attribute/GroupPrincipal;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(UserPrincipalLookupService, lookupPrincipalByGroupName, $GroupPrincipal*, $String*), "java.io.IOException"},
		{"lookupPrincipalByName", "(Ljava/lang/String;)Ljava/nio/file/attribute/UserPrincipal;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(UserPrincipalLookupService, lookupPrincipalByName, $UserPrincipal*, $String*), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"java.nio.file.attribute.UserPrincipalLookupService",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(UserPrincipalLookupService, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UserPrincipalLookupService);
	});
	return class$;
}

$Class* UserPrincipalLookupService::class$ = nullptr;

			} // attribute
		} // file
	} // nio
} // java