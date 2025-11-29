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

$FieldInfo _AllPermissionCollection$1_FieldInfo_[] = {
	{"this$0", "Ljava/security/AllPermissionCollection;", nullptr, $FINAL | $SYNTHETIC, $field(AllPermissionCollection$1, this$0)},
	{"hasMore", "Z", nullptr, $PRIVATE, $field(AllPermissionCollection$1, hasMore)},
	{}
};

$MethodInfo _AllPermissionCollection$1_MethodInfo_[] = {
	{"<init>", "(Ljava/security/AllPermissionCollection;)V", nullptr, 0, $method(static_cast<void(AllPermissionCollection$1::*)($AllPermissionCollection*)>(&AllPermissionCollection$1::init$))},
	{"hasMoreElements", "()Z", nullptr, $PUBLIC},
	{"nextElement", "()Ljava/security/Permission;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _AllPermissionCollection$1_EnclosingMethodInfo_ = {
	"java.security.AllPermissionCollection",
	"elements",
	"()Ljava/util/Enumeration;"
};

$InnerClassInfo _AllPermissionCollection$1_InnerClassesInfo_[] = {
	{"java.security.AllPermissionCollection$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AllPermissionCollection$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.security.AllPermissionCollection$1",
	"java.lang.Object",
	"java.util.Enumeration",
	_AllPermissionCollection$1_FieldInfo_,
	_AllPermissionCollection$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Enumeration<Ljava/security/Permission;>;",
	&_AllPermissionCollection$1_EnclosingMethodInfo_,
	_AllPermissionCollection$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.security.AllPermissionCollection"
};

$Object* allocate$AllPermissionCollection$1($Class* clazz) {
	return $of($alloc(AllPermissionCollection$1));
}

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
	$loadClass(AllPermissionCollection$1, name, initialize, &_AllPermissionCollection$1_ClassInfo_, allocate$AllPermissionCollection$1);
	return class$;
}

$Class* AllPermissionCollection$1::class$ = nullptr;

	} // security
} // java