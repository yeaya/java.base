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

$FieldInfo _KeyStore$Builder$2$1_FieldInfo_[] = {
	{"this$0", "Ljava/security/KeyStore$Builder$2;", nullptr, $FINAL | $SYNTHETIC, $field(KeyStore$Builder$2$1, this$0)},
	{}
};

$MethodInfo _KeyStore$Builder$2$1_MethodInfo_[] = {
	{"<init>", "(Ljava/security/KeyStore$Builder$2;)V", nullptr, 0, $method(KeyStore$Builder$2$1, init$, void, $KeyStore$Builder$2*)},
	{"run", "()Ljava/security/KeyStore;", nullptr, $PUBLIC, $virtualMethod(KeyStore$Builder$2$1, run, $Object*), "java.lang.Exception"},
	{}
};

$EnclosingMethodInfo _KeyStore$Builder$2$1_EnclosingMethodInfo_ = {
	"java.security.KeyStore$Builder$2",
	nullptr,
	nullptr
};

$InnerClassInfo _KeyStore$Builder$2$1_InnerClassesInfo_[] = {
	{"java.security.KeyStore$Builder", "java.security.KeyStore", "Builder", $PUBLIC | $STATIC | $ABSTRACT},
	{"java.security.KeyStore$Builder$2", nullptr, nullptr, 0},
	{"java.security.KeyStore$Builder$2$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _KeyStore$Builder$2$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.security.KeyStore$Builder$2$1",
	"java.lang.Object",
	"java.security.PrivilegedExceptionAction",
	_KeyStore$Builder$2$1_FieldInfo_,
	_KeyStore$Builder$2$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljava/security/KeyStore;>;",
	&_KeyStore$Builder$2$1_EnclosingMethodInfo_,
	_KeyStore$Builder$2$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.security.KeyStore"
};

$Object* allocate$KeyStore$Builder$2$1($Class* clazz) {
	return $of($alloc(KeyStore$Builder$2$1));
}

void KeyStore$Builder$2$1::init$($KeyStore$Builder$2* this$0) {
	$set(this, this$0, this$0);
}

$Object* KeyStore$Builder$2$1::run() {
	$useLocalCurrentObjectStackCache();
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
	return $of(ks);
}

KeyStore$Builder$2$1::KeyStore$Builder$2$1() {
}

$Class* KeyStore$Builder$2$1::load$($String* name, bool initialize) {
	$loadClass(KeyStore$Builder$2$1, name, initialize, &_KeyStore$Builder$2$1_ClassInfo_, allocate$KeyStore$Builder$2$1);
	return class$;
}

$Class* KeyStore$Builder$2$1::class$ = nullptr;

	} // security
} // java