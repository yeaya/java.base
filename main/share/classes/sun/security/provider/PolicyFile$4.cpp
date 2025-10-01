#include <sun/security/provider/PolicyFile$4.h>

#include <java/io/File.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/URI.h>
#include <java/net/URL.h>
#include <java/security/Security.h>
#include <sun/net/www/ParseUtil.h>
#include <sun/security/provider/PolicyFile$PolicyInfo.h>
#include <sun/security/provider/PolicyFile.h>
#include <sun/security/util/Debug.h>
#include <sun/security/util/PropertyExpander.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URI = ::java::net::URI;
using $URL = ::java::net::URL;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Security = ::java::security::Security;
using $ParseUtil = ::sun::net::www::ParseUtil;
using $PolicyFile = ::sun::security::provider::PolicyFile;
using $PolicyFile$PolicyInfo = ::sun::security::provider::PolicyFile$PolicyInfo;
using $Debug = ::sun::security::util::Debug;
using $PropertyExpander = ::sun::security::util::PropertyExpander;

namespace sun {
	namespace security {
		namespace provider {

$FieldInfo _PolicyFile$4_FieldInfo_[] = {
	{"this$0", "Lsun/security/provider/PolicyFile;", nullptr, $FINAL | $SYNTHETIC, $field(PolicyFile$4, this$0)},
	{"val$urlname", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(PolicyFile$4, val$urlname)},
	{"val$newInfo", "Lsun/security/provider/PolicyFile$PolicyInfo;", nullptr, $FINAL | $SYNTHETIC, $field(PolicyFile$4, val$newInfo)},
	{"val$propname", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(PolicyFile$4, val$propname)},
	{}
};

$MethodInfo _PolicyFile$4_MethodInfo_[] = {
	{"<init>", "(Lsun/security/provider/PolicyFile;Ljava/lang/String;Lsun/security/provider/PolicyFile$PolicyInfo;Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(PolicyFile$4::*)($PolicyFile*,$String*,$PolicyFile$PolicyInfo*,$String*)>(&PolicyFile$4::init$))},
	{"run", "()Ljava/lang/Boolean;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _PolicyFile$4_EnclosingMethodInfo_ = {
	"sun.security.provider.PolicyFile",
	"initPolicyFile",
	"(Ljava/lang/String;Ljava/lang/String;Lsun/security/provider/PolicyFile$PolicyInfo;)Z"
};

$InnerClassInfo _PolicyFile$4_InnerClassesInfo_[] = {
	{"sun.security.provider.PolicyFile$4", nullptr, nullptr, 0},
	{"sun.security.provider.PolicyFile$PolicyInfo", "sun.security.provider.PolicyFile", "PolicyInfo", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _PolicyFile$4_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.provider.PolicyFile$4",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_PolicyFile$4_FieldInfo_,
	_PolicyFile$4_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Boolean;>;",
	&_PolicyFile$4_EnclosingMethodInfo_,
	_PolicyFile$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.provider.PolicyFile"
};

$Object* allocate$PolicyFile$4($Class* clazz) {
	return $of($alloc(PolicyFile$4));
}

void PolicyFile$4::init$($PolicyFile* this$0, $String* val$propname, $PolicyFile$PolicyInfo* val$newInfo, $String* val$urlname) {
	$set(this, this$0, this$0);
	$set(this, val$propname, val$propname);
	$set(this, val$newInfo, val$newInfo);
	$set(this, val$urlname, val$urlname);
}

$Object* PolicyFile$4::run() {
	bool loaded_policy = false;
	if (this->this$0->allowSystemProperties) {
		$var($String, extra_policy, $System::getProperty(this->val$propname));
		if (extra_policy != nullptr) {
			bool overrideAll = false;
			if (extra_policy->startsWith("="_s)) {
				overrideAll = true;
				$assign(extra_policy, extra_policy->substring(1));
			}
			try {
				$assign(extra_policy, $PropertyExpander::expand(extra_policy));
				$var($URL, policyURL, nullptr);
				$var($File, policyFile, $new($File, extra_policy));
				if (policyFile->exists()) {
					$assign(policyURL, $ParseUtil::fileToEncodedURL($$new($File, $(policyFile->getCanonicalPath()))));
				} else {
					$assign(policyURL, $new($URL, extra_policy));
				}
				$init($PolicyFile);
				if ($PolicyFile::debug != nullptr) {
					$nc($PolicyFile::debug)->println($$str({"reading "_s, policyURL}));
				}
				if (this->this$0->init(policyURL, this->val$newInfo)) {
					loaded_policy = true;
				}
			} catch ($Exception&) {
				$var($Exception, e, $catch());
				$init($PolicyFile);
				if ($PolicyFile::debug != nullptr) {
					$nc($PolicyFile::debug)->println($$str({"caught exception: "_s, e}));
				}
			}
			if (overrideAll) {
				$init($PolicyFile);
				if ($PolicyFile::debug != nullptr) {
					$nc($PolicyFile::debug)->println("overriding other policies!"_s);
				}
				return $of($Boolean::valueOf(loaded_policy));
			}
		}
	}
	int32_t n = 1;
	$var($String, policy_uri, nullptr);
	while (($assign(policy_uri, $Security::getProperty($$str({this->val$urlname, $$str(n)})))) != nullptr) {
		try {
			$var($URL, policy_url, nullptr);
			$init($File);
			$var($String, expanded_uri, $nc($($PropertyExpander::expand(policy_uri)))->replace($File::separatorChar, u'/'));
			bool var$0 = $nc(policy_uri)->startsWith("file:${java.home}/"_s);
			if (var$0 || $nc(policy_uri)->startsWith("file:${user.home}/"_s)) {
				$assign(policy_url, $nc($($$new($File, $(expanded_uri->substring(5)))->toURI()))->toURL());
			} else {
				$assign(policy_url, $$new($URI, expanded_uri)->toURL());
			}
			$init($PolicyFile);
			if ($PolicyFile::debug != nullptr) {
				$nc($PolicyFile::debug)->println($$str({"reading "_s, policy_url}));
			}
			if (this->this$0->init(policy_url, this->val$newInfo)) {
				loaded_policy = true;
			}
		} catch ($Exception&) {
			$var($Exception, e, $catch());
			$init($PolicyFile);
			if ($PolicyFile::debug != nullptr) {
				$nc($PolicyFile::debug)->println($$str({"Debug info only. Error reading policy "_s, e}));
				e->printStackTrace();
			}
		}
		++n;
	}
	return $of($Boolean::valueOf(loaded_policy));
}

PolicyFile$4::PolicyFile$4() {
}

$Class* PolicyFile$4::load$($String* name, bool initialize) {
	$loadClass(PolicyFile$4, name, initialize, &_PolicyFile$4_ClassInfo_, allocate$PolicyFile$4);
	return class$;
}

$Class* PolicyFile$4::class$ = nullptr;

		} // provider
	} // security
} // sun