#include <java/security/SecureClassLoader$1.h>

#include <java/lang/ClassLoader.h>
#include <java/security/CodeSource.h>
#include <java/security/PermissionCollection.h>
#include <java/security/Principal.h>
#include <java/security/ProtectionDomain.h>
#include <java/security/SecureClassLoader$CodeSourceKey.h>
#include <java/security/SecureClassLoader$DebugHolder.h>
#include <java/security/SecureClassLoader.h>
#include <sun/security/util/Debug.h>
#include <jcpp.h>

using $PrincipalArray = $Array<::java::security::Principal>;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CodeSource = ::java::security::CodeSource;
using $PermissionCollection = ::java::security::PermissionCollection;
using $ProtectionDomain = ::java::security::ProtectionDomain;
using $SecureClassLoader = ::java::security::SecureClassLoader;
using $SecureClassLoader$CodeSourceKey = ::java::security::SecureClassLoader$CodeSourceKey;
using $SecureClassLoader$DebugHolder = ::java::security::SecureClassLoader$DebugHolder;
using $Debug = ::sun::security::util::Debug;

namespace java {
	namespace security {

$FieldInfo _SecureClassLoader$1_FieldInfo_[] = {
	{"this$0", "Ljava/security/SecureClassLoader;", nullptr, $FINAL | $SYNTHETIC, $field(SecureClassLoader$1, this$0)},
	{"val$cs", "Ljava/security/CodeSource;", nullptr, $FINAL | $SYNTHETIC, $field(SecureClassLoader$1, val$cs)},
	{}
};

$MethodInfo _SecureClassLoader$1_MethodInfo_[] = {
	{"<init>", "(Ljava/security/SecureClassLoader;Ljava/security/CodeSource;)V", nullptr, 0, $method(static_cast<void(SecureClassLoader$1::*)($SecureClassLoader*,$CodeSource*)>(&SecureClassLoader$1::init$))},
	{"apply", "(Ljava/security/SecureClassLoader$CodeSourceKey;)Ljava/security/ProtectionDomain;", nullptr, $PUBLIC},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$EnclosingMethodInfo _SecureClassLoader$1_EnclosingMethodInfo_ = {
	"java.security.SecureClassLoader",
	"getProtectionDomain",
	"(Ljava/security/CodeSource;)Ljava/security/ProtectionDomain;"
};

$InnerClassInfo _SecureClassLoader$1_InnerClassesInfo_[] = {
	{"java.security.SecureClassLoader$1", nullptr, nullptr, 0},
	{"java.security.SecureClassLoader$CodeSourceKey", "java.security.SecureClassLoader", "CodeSourceKey", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _SecureClassLoader$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.security.SecureClassLoader$1",
	"java.lang.Object",
	"java.util.function.Function",
	_SecureClassLoader$1_FieldInfo_,
	_SecureClassLoader$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/function/Function<Ljava/security/SecureClassLoader$CodeSourceKey;Ljava/security/ProtectionDomain;>;",
	&_SecureClassLoader$1_EnclosingMethodInfo_,
	_SecureClassLoader$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.security.SecureClassLoader"
};

$Object* allocate$SecureClassLoader$1($Class* clazz) {
	return $of($alloc(SecureClassLoader$1));
}

void SecureClassLoader$1::init$($SecureClassLoader* this$0, $CodeSource* val$cs) {
	$set(this, this$0, this$0);
	$set(this, val$cs, val$cs);
}

$ProtectionDomain* SecureClassLoader$1::apply($SecureClassLoader$CodeSourceKey* key) {
	$useLocalCurrentObjectStackCache();
	$var($PermissionCollection, perms, this->this$0->getPermissions(this->val$cs));
	$var($ProtectionDomain, pd, $new($ProtectionDomain, this->val$cs, perms, this->this$0, nullptr));
	$init($SecureClassLoader$DebugHolder);
	if ($SecureClassLoader$DebugHolder::debug != nullptr) {
		$nc($SecureClassLoader$DebugHolder::debug)->println($$str({" getPermissions "_s, pd}));
		$nc($SecureClassLoader$DebugHolder::debug)->println(""_s);
	}
	return pd;
}

$Object* SecureClassLoader$1::apply(Object$* key) {
	return $of(this->apply($cast($SecureClassLoader$CodeSourceKey, key)));
}

SecureClassLoader$1::SecureClassLoader$1() {
}

$Class* SecureClassLoader$1::load$($String* name, bool initialize) {
	$loadClass(SecureClassLoader$1, name, initialize, &_SecureClassLoader$1_ClassInfo_, allocate$SecureClassLoader$1);
	return class$;
}

$Class* SecureClassLoader$1::class$ = nullptr;

	} // security
} // java