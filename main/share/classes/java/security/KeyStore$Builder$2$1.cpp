#include <java/security/KeyStore$Builder$2$1.h>
#include <java/io/IOException.h>
#include <java/security/KeyStore$Builder$2.h>
#include <java/security/KeyStore$CallbackHandlerProtection.h>
#include <java/security/KeyStore$LoadStoreParameter.h>
#include <java/security/KeyStore$ProtectionParameter.h>
#include <java/security/KeyStore$SimpleLoadStoreParameter.h>
#include <java/security/KeyStore.h>
#include <java/security/Provider.h>
#include <java/security/UnrecoverableKeyException.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $KeyStore = ::java::security::KeyStore;
using $KeyStore$Builder$2 = ::java::security::KeyStore$Builder$2;
using $KeyStore$CallbackHandlerProtection = ::java::security::KeyStore$CallbackHandlerProtection;
using $KeyStore$LoadStoreParameter = ::java::security::KeyStore$LoadStoreParameter;
using $KeyStore$SimpleLoadStoreParameter = ::java::security::KeyStore$SimpleLoadStoreParameter;
using $UnrecoverableKeyException = ::java::security::UnrecoverableKeyException;

namespace java {
	namespace security {

void KeyStore$Builder$2$1::init$($KeyStore$Builder$2* this$0) {
	$set(this, this$0, this$0);
}

$Object* KeyStore$Builder$2$1::run() {
	$useLocalObjectStack();
	$var($KeyStore, ks, nullptr);
	if (this->this$0->val$provider == nullptr) {
		$assign(ks, $KeyStore::getInstance(this->this$0->val$type));
	} else {
		$assign(ks, $KeyStore::getInstance(this->this$0->val$type, this->this$0->val$provider));
	}
	$var($KeyStore$LoadStoreParameter, param, $new($KeyStore$SimpleLoadStoreParameter, this->this$0->val$protection));
	if (!($instanceOf($KeyStore$CallbackHandlerProtection, this->this$0->val$protection))) {
		$nc(ks)->load(param);
	} else {
		int32_t tries = 0;
		while (true) {
			++tries;
			try {
				$nc(ks)->load(param);
				break;
			} catch ($IOException& e) {
				if ($instanceOf($UnrecoverableKeyException, $(e->getCause()))) {
					if (tries < 3) {
						continue;
					} else {
						$set(this->this$0, oldException, e);
					}
				}
				$throw(e);
			}
		}
	}
	this->this$0->getCalled = true;
	return ks;
}

KeyStore$Builder$2$1::KeyStore$Builder$2$1() {
}

$Class* KeyStore$Builder$2$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/security/KeyStore$Builder$2;", nullptr, $FINAL | $SYNTHETIC, $field(KeyStore$Builder$2$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/security/KeyStore$Builder$2;)V", nullptr, 0, $method(KeyStore$Builder$2$1, init$, void, $KeyStore$Builder$2*)},
		{"run", "()Ljava/security/KeyStore;", nullptr, $PUBLIC, $virtualMethod(KeyStore$Builder$2$1, run, $Object*), "java.lang.Exception"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.security.KeyStore$Builder$2",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.security.KeyStore$Builder", "java.security.KeyStore", "Builder", $PUBLIC | $STATIC | $ABSTRACT},
		{"java.security.KeyStore$Builder$2", nullptr, nullptr, 0},
		{"java.security.KeyStore$Builder$2$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.security.KeyStore$Builder$2$1",
		"java.lang.Object",
		"java.security.PrivilegedExceptionAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljava/security/KeyStore;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.security.KeyStore"
	};
	$loadClass(KeyStore$Builder$2$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(KeyStore$Builder$2$1);
	});
	return class$;
}

$Class* KeyStore$Builder$2$1::class$ = nullptr;

	} // security
} // java