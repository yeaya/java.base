#include <java/nio/file/attribute/UserPrincipalLookupService.h>

#include <java/nio/file/attribute/GroupPrincipal.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GroupPrincipal = ::java::nio::file::attribute::GroupPrincipal;
using $UserPrincipal = ::java::nio::file::attribute::UserPrincipal;

namespace java {
	namespace nio {
		namespace file {
			namespace attribute {

$MethodInfo _UserPrincipalLookupService_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(UserPrincipalLookupService::*)()>(&UserPrincipalLookupService::init$))},
	{"lookupPrincipalByGroupName", "(Ljava/lang/String;)Ljava/nio/file/attribute/GroupPrincipal;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{"lookupPrincipalByName", "(Ljava/lang/String;)Ljava/nio/file/attribute/UserPrincipal;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _UserPrincipalLookupService_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"java.nio.file.attribute.UserPrincipalLookupService",
	"java.lang.Object",
	nullptr,
	nullptr,
	_UserPrincipalLookupService_MethodInfo_
};

$Object* allocate$UserPrincipalLookupService($Class* clazz) {
	return $of($alloc(UserPrincipalLookupService));
}

void UserPrincipalLookupService::init$() {
}

UserPrincipalLookupService::UserPrincipalLookupService() {
}

$Class* UserPrincipalLookupService::load$($String* name, bool initialize) {
	$loadClass(UserPrincipalLookupService, name, initialize, &_UserPrincipalLookupService_ClassInfo_, allocate$UserPrincipalLookupService);
	return class$;
}

$Class* UserPrincipalLookupService::class$ = nullptr;

			} // attribute
		} // file
	} // nio
} // java