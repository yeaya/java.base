#include <sun/security/provider/PolicyFile$5.h>
#include <java/net/SocketPermission.h>
#include <java/net/URL.h>
#include <java/security/CodeSource.h>
#include <java/security/Permission.h>
#include <java/security/cert/Certificate.h>
#include <java/util/List.h>
#include <java/util/PropertyPermission.h>
#include <sun/security/provider/PolicyFile$PolicyEntry.h>
#include <sun/security/provider/PolicyFile$PolicyInfo.h>
#include <sun/security/provider/PolicyFile.h>
#include <sun/security/util/SecurityConstants.h>
#include <jcpp.h>

#undef LOCAL_LISTEN_PERMISSION
#undef PROPERTY_READ_ACTION

using $CertificateArray = $Array<::java::security::cert::Certificate>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;
using $CodeSource = ::java::security::CodeSource;
using $PropertyPermission = ::java::util::PropertyPermission;
using $PolicyFile = ::sun::security::provider::PolicyFile;
using $PolicyFile$PolicyEntry = ::sun::security::provider::PolicyFile$PolicyEntry;
using $PolicyFile$PolicyInfo = ::sun::security::provider::PolicyFile$PolicyInfo;
using $SecurityConstants = ::sun::security::util::SecurityConstants;

namespace sun {
	namespace security {
		namespace provider {

void PolicyFile$5::init$($PolicyFile* this$0, $PolicyFile$PolicyInfo* val$newInfo) {
	$set(this, this$0, this$0);
	$set(this, val$newInfo, val$newInfo);
}

$Object* PolicyFile$5::run() {
	$useLocalObjectStack();
	$var($PolicyFile$PolicyEntry, pe, $new($PolicyFile$PolicyEntry, $$new($CodeSource, nullptr, ($CertificateArray*)nullptr)));
	$init($SecurityConstants);
	pe->add($SecurityConstants::LOCAL_LISTEN_PERMISSION);
	pe->add($$new($PropertyPermission, "java.version"_s, $SecurityConstants::PROPERTY_READ_ACTION));
	pe->add($$new($PropertyPermission, "java.vendor"_s, $SecurityConstants::PROPERTY_READ_ACTION));
	pe->add($$new($PropertyPermission, "java.vendor.url"_s, $SecurityConstants::PROPERTY_READ_ACTION));
	pe->add($$new($PropertyPermission, "java.class.version"_s, $SecurityConstants::PROPERTY_READ_ACTION));
	pe->add($$new($PropertyPermission, "os.name"_s, $SecurityConstants::PROPERTY_READ_ACTION));
	pe->add($$new($PropertyPermission, "os.version"_s, $SecurityConstants::PROPERTY_READ_ACTION));
	pe->add($$new($PropertyPermission, "os.arch"_s, $SecurityConstants::PROPERTY_READ_ACTION));
	pe->add($$new($PropertyPermission, "file.separator"_s, $SecurityConstants::PROPERTY_READ_ACTION));
	pe->add($$new($PropertyPermission, "path.separator"_s, $SecurityConstants::PROPERTY_READ_ACTION));
	pe->add($$new($PropertyPermission, "line.separator"_s, $SecurityConstants::PROPERTY_READ_ACTION));
	pe->add($$new($PropertyPermission, "java.specification.version"_s, $SecurityConstants::PROPERTY_READ_ACTION));
	pe->add($$new($PropertyPermission, "java.specification.vendor"_s, $SecurityConstants::PROPERTY_READ_ACTION));
	pe->add($$new($PropertyPermission, "java.specification.name"_s, $SecurityConstants::PROPERTY_READ_ACTION));
	pe->add($$new($PropertyPermission, "java.vm.specification.version"_s, $SecurityConstants::PROPERTY_READ_ACTION));
	pe->add($$new($PropertyPermission, "java.vm.specification.vendor"_s, $SecurityConstants::PROPERTY_READ_ACTION));
	pe->add($$new($PropertyPermission, "java.vm.specification.name"_s, $SecurityConstants::PROPERTY_READ_ACTION));
	pe->add($$new($PropertyPermission, "java.vm.version"_s, $SecurityConstants::PROPERTY_READ_ACTION));
	pe->add($$new($PropertyPermission, "java.vm.vendor"_s, $SecurityConstants::PROPERTY_READ_ACTION));
	pe->add($$new($PropertyPermission, "java.vm.name"_s, $SecurityConstants::PROPERTY_READ_ACTION));
	$nc($nc(this->val$newInfo)->policyEntries)->add(pe);
	return nullptr;
}

PolicyFile$5::PolicyFile$5() {
}

$Class* PolicyFile$5::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/security/provider/PolicyFile;", nullptr, $FINAL | $SYNTHETIC, $field(PolicyFile$5, this$0)},
		{"val$newInfo", "Lsun/security/provider/PolicyFile$PolicyInfo;", nullptr, $FINAL | $SYNTHETIC, $field(PolicyFile$5, val$newInfo)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/security/provider/PolicyFile;Lsun/security/provider/PolicyFile$PolicyInfo;)V", nullptr, 0, $method(PolicyFile$5, init$, void, $PolicyFile*, $PolicyFile$PolicyInfo*)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(PolicyFile$5, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.security.provider.PolicyFile",
		"initStaticPolicy",
		"(Lsun/security/provider/PolicyFile$PolicyInfo;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.provider.PolicyFile$5", nullptr, nullptr, 0},
		{"sun.security.provider.PolicyFile$PolicyInfo", "sun.security.provider.PolicyFile", "PolicyInfo", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.provider.PolicyFile$5",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.provider.PolicyFile"
	};
	$loadClass(PolicyFile$5, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PolicyFile$5);
	});
	return class$;
}

$Class* PolicyFile$5::class$ = nullptr;

		} // provider
	} // security
} // sun