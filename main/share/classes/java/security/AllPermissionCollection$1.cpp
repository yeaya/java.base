#include <java/security/AllPermissionCollection$1.h>
#include <java/security/AllPermission.h>
#include <java/security/AllPermissionCollection.h>
#include <sun/security/util/SecurityConstants.h>
#include <jcpp.h>

#undef ALL_PERMISSION

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AllPermissionCollection = ::java::security::AllPermissionCollection;
using $SecurityConstants = ::sun::security::util::SecurityConstants;

namespace java {
	namespace security {

void AllPermissionCollection$1::init$($AllPermissionCollection* this$0) {
	$set(this, this$0, this$0);
	this->hasMore = this->this$0->all_allowed;
}

bool AllPermissionCollection$1::hasMoreElements() {
	return this->hasMore;
}

$Object* AllPermissionCollection$1::nextElement() {
	this->hasMore = false;
	$init($SecurityConstants);
	return $of($SecurityConstants::ALL_PERMISSION);
}

AllPermissionCollection$1::AllPermissionCollection$1() {
}

$Class* AllPermissionCollection$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/security/AllPermissionCollection;", nullptr, $FINAL | $SYNTHETIC, $field(AllPermissionCollection$1, this$0)},
		{"hasMore", "Z", nullptr, $PRIVATE, $field(AllPermissionCollection$1, hasMore)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/security/AllPermissionCollection;)V", nullptr, 0, $method(AllPermissionCollection$1, init$, void, $AllPermissionCollection*)},
		{"hasMoreElements", "()Z", nullptr, $PUBLIC, $virtualMethod(AllPermissionCollection$1, hasMoreElements, bool)},
		{"nextElement", "()Ljava/security/Permission;", nullptr, $PUBLIC, $virtualMethod(AllPermissionCollection$1, nextElement, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.security.AllPermissionCollection",
		"elements",
		"()Ljava/util/Enumeration;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.security.AllPermissionCollection$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.security.AllPermissionCollection$1",
		"java.lang.Object",
		"java.util.Enumeration",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/Enumeration<Ljava/security/Permission;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.security.AllPermissionCollection"
	};
	$loadClass(AllPermissionCollection$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AllPermissionCollection$1);
	});
	return class$;
}

$Class* AllPermissionCollection$1::class$ = nullptr;

	} // security
} // java