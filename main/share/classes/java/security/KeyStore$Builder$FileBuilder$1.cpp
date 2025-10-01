#include <java/security/KeyStore$Builder$FileBuilder$1.h>

#include <java/io/File.h>
#include <java/io/FileInputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/KeyStore$Builder$FileBuilder.h>
#include <java/security/KeyStore$CallbackHandlerProtection.h>
#include <java/security/KeyStore$PasswordProtection.h>
#include <java/security/KeyStore$ProtectionParameter.h>
#include <java/security/KeyStore.h>
#include <java/security/KeyStoreException.h>
#include <java/security/Provider.h>
#include <java/security/UnrecoverableKeyException.h>
#include <javax/security/auth/callback/Callback.h>
#include <javax/security/auth/callback/CallbackHandler.h>
#include <javax/security/auth/callback/PasswordCallback.h>
#include <jcpp.h>

using $CallbackArray = $Array<::javax::security::auth::callback::Callback>;
using $File = ::java::io::File;
using $FileInputStream = ::java::io::FileInputStream;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $KeyStore = ::java::security::KeyStore;
using $KeyStore$Builder$FileBuilder = ::java::security::KeyStore$Builder$FileBuilder;
using $KeyStore$CallbackHandlerProtection = ::java::security::KeyStore$CallbackHandlerProtection;
using $KeyStore$PasswordProtection = ::java::security::KeyStore$PasswordProtection;
using $KeyStore$ProtectionParameter = ::java::security::KeyStore$ProtectionParameter;
using $KeyStoreException = ::java::security::KeyStoreException;
using $PrivilegedExceptionAction = ::java::security::PrivilegedExceptionAction;
using $Provider = ::java::security::Provider;
using $UnrecoverableKeyException = ::java::security::UnrecoverableKeyException;
using $Callback = ::javax::security::auth::callback::Callback;
using $CallbackHandler = ::javax::security::auth::callback::CallbackHandler;
using $PasswordCallback = ::javax::security::auth::callback::PasswordCallback;

namespace java {
	namespace security {

$FieldInfo _KeyStore$Builder$FileBuilder$1_FieldInfo_[] = {
	{"this$0", "Ljava/security/KeyStore$Builder$FileBuilder;", nullptr, $FINAL | $SYNTHETIC, $field(KeyStore$Builder$FileBuilder$1, this$0)},
	{}
};

$MethodInfo _KeyStore$Builder$FileBuilder$1_MethodInfo_[] = {
	{"<init>", "(Ljava/security/KeyStore$Builder$FileBuilder;)V", nullptr, 0, $method(static_cast<void(KeyStore$Builder$FileBuilder$1::*)($KeyStore$Builder$FileBuilder*)>(&KeyStore$Builder$FileBuilder$1::init$))},
	{"run", "()Ljava/security/KeyStore;", nullptr, $PUBLIC, nullptr, "java.lang.Exception"},
	{"run0", "()Ljava/security/KeyStore;", nullptr, $PUBLIC, nullptr, "java.lang.Exception"},
	{}
};

$EnclosingMethodInfo _KeyStore$Builder$FileBuilder$1_EnclosingMethodInfo_ = {
	"java.security.KeyStore$Builder$FileBuilder",
	"getKeyStore",
	"()Ljava/security/KeyStore;"
};

$InnerClassInfo _KeyStore$Builder$FileBuilder$1_InnerClassesInfo_[] = {
	{"java.security.KeyStore$Builder", "java.security.KeyStore", "Builder", $PUBLIC | $STATIC | $ABSTRACT},
	{"java.security.KeyStore$Builder$FileBuilder", "java.security.KeyStore$Builder", "FileBuilder", $PRIVATE | $STATIC | $FINAL},
	{"java.security.KeyStore$Builder$FileBuilder$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _KeyStore$Builder$FileBuilder$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.security.KeyStore$Builder$FileBuilder$1",
	"java.lang.Object",
	"java.security.PrivilegedExceptionAction",
	_KeyStore$Builder$FileBuilder$1_FieldInfo_,
	_KeyStore$Builder$FileBuilder$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljava/security/KeyStore;>;",
	&_KeyStore$Builder$FileBuilder$1_EnclosingMethodInfo_,
	_KeyStore$Builder$FileBuilder$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.security.KeyStore"
};

$Object* allocate$KeyStore$Builder$FileBuilder$1($Class* clazz) {
	return $of($alloc(KeyStore$Builder$FileBuilder$1));
}

void KeyStore$Builder$FileBuilder$1::init$($KeyStore$Builder$FileBuilder* this$0) {
	$set(this, this$0, this$0);
}

$Object* KeyStore$Builder$FileBuilder$1::run() {
	if (!($instanceOf($KeyStore$CallbackHandlerProtection, this->this$0->protection))) {
		return $of(run0());
	}
	int32_t tries = 0;
	while (true) {
		++tries;
		try {
			return $of(run0());
		} catch ($IOException&) {
			$var($IOException, e, $catch());
			if ((tries < 3) && ($instanceOf($UnrecoverableKeyException, $(e->getCause())))) {
				continue;
			}
			$throw(e);
		}
	}
	$shouldNotReachHere();
}

$KeyStore* KeyStore$Builder$FileBuilder$1::run0() {
	$var($KeyStore, ks, nullptr);
	$var($chars, password, nullptr);
	if ($instanceOf($KeyStore$PasswordProtection, this->this$0->protection)) {
		$assign(password, $nc(($cast($KeyStore$PasswordProtection, this->this$0->protection)))->getPassword());
		$set(this->this$0, keyProtection, this->this$0->protection);
	} else {
		$var($CallbackHandler, handler, $nc(($cast($KeyStore$CallbackHandlerProtection, this->this$0->protection)))->getCallbackHandler());
		$var($PasswordCallback, callback, $new($PasswordCallback, $$str({"Password for keystore "_s, $($nc(this->this$0->file)->getName())}), false));
		$nc(handler)->handle($$new($CallbackArray, {static_cast<$Callback*>(callback)}));
		$assign(password, callback->getPassword());
		if (password == nullptr) {
			$throwNew($KeyStoreException, "No password provided"_s);
		}
		callback->clearPassword();
		$set(this->this$0, keyProtection, $new($KeyStore$PasswordProtection, password));
	}
	if ($nc(this->this$0->type)->isEmpty()) {
		$assign(ks, $KeyStore::getInstance(this->this$0->file, password));
	} else {
		if (this->this$0->provider == nullptr) {
			$assign(ks, $KeyStore::getInstance(this->this$0->type));
		} else {
			$assign(ks, $KeyStore::getInstance(this->this$0->type, this->this$0->provider));
		}
		{
			$var($InputStream, in, $new($FileInputStream, this->this$0->file));
			{
				$var($Throwable, var$0, nullptr);
				try {
					try {
						$nc(ks)->load(in, password);
					} catch ($Throwable&) {
						$var($Throwable, t$, $catch());
						try {
							in->close();
						} catch ($Throwable&) {
							$var($Throwable, x2, $catch());
							t$->addSuppressed(x2);
						}
						$throw(t$);
					}
				} catch ($Throwable&) {
					$assign(var$0, $catch());
				} /*finally*/ {
					in->close();
				}
				if (var$0 != nullptr) {
					$throw(var$0);
				}
			}
		}
	}
	return ks;
}

KeyStore$Builder$FileBuilder$1::KeyStore$Builder$FileBuilder$1() {
}

$Class* KeyStore$Builder$FileBuilder$1::load$($String* name, bool initialize) {
	$loadClass(KeyStore$Builder$FileBuilder$1, name, initialize, &_KeyStore$Builder$FileBuilder$1_ClassInfo_, allocate$KeyStore$Builder$FileBuilder$1);
	return class$;
}

$Class* KeyStore$Builder$FileBuilder$1::class$ = nullptr;

	} // security
} // java