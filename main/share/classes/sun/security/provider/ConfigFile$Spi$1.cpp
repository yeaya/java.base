#include <sun/security/provider/ConfigFile$Spi$1.h>

#include <java/net/URI.h>
#include <java/net/URL.h>
#include <java/security/URIParameter.h>
#include <javax/security/auth/login/Configuration$Parameters.h>
#include <sun/security/provider/ConfigFile$Spi.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URI = ::java::net::URI;
using $URIParameter = ::java::security::URIParameter;
using $Configuration$Parameters = ::javax::security::auth::login::Configuration$Parameters;
using $ConfigFile$Spi = ::sun::security::provider::ConfigFile$Spi;

namespace sun {
	namespace security {
		namespace provider {

$FieldInfo _ConfigFile$Spi$1_FieldInfo_[] = {
	{"this$0", "Lsun/security/provider/ConfigFile$Spi;", nullptr, $FINAL | $SYNTHETIC, $field(ConfigFile$Spi$1, this$0)},
	{"val$params", "Ljavax/security/auth/login/Configuration$Parameters;", nullptr, $FINAL | $SYNTHETIC, $field(ConfigFile$Spi$1, val$params)},
	{}
};

$MethodInfo _ConfigFile$Spi$1_MethodInfo_[] = {
	{"<init>", "(Lsun/security/provider/ConfigFile$Spi;Ljavax/security/auth/login/Configuration$Parameters;)V", "()V", 0, $method(static_cast<void(ConfigFile$Spi$1::*)($ConfigFile$Spi*,$Configuration$Parameters*)>(&ConfigFile$Spi$1::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$EnclosingMethodInfo _ConfigFile$Spi$1_EnclosingMethodInfo_ = {
	"sun.security.provider.ConfigFile$Spi",
	"<init>",
	"(Ljavax/security/auth/login/Configuration$Parameters;)V"
};

$InnerClassInfo _ConfigFile$Spi$1_InnerClassesInfo_[] = {
	{"sun.security.provider.ConfigFile$Spi", "sun.security.provider.ConfigFile", "Spi", $PUBLIC | $STATIC | $FINAL},
	{"sun.security.provider.ConfigFile$Spi$1", nullptr, nullptr, 0},
	{"javax.security.auth.login.Configuration$Parameters", "javax.security.auth.login.Configuration", "Parameters", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ConfigFile$Spi$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.provider.ConfigFile$Spi$1",
	"java.lang.Object",
	"java.security.PrivilegedExceptionAction",
	_ConfigFile$Spi$1_FieldInfo_,
	_ConfigFile$Spi$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljava/lang/Void;>;",
	&_ConfigFile$Spi$1_EnclosingMethodInfo_,
	_ConfigFile$Spi$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.provider.ConfigFile"
};

$Object* allocate$ConfigFile$Spi$1($Class* clazz) {
	return $of($alloc(ConfigFile$Spi$1));
}

void ConfigFile$Spi$1::init$($ConfigFile$Spi* this$0, $Configuration$Parameters* val$params) {
	$set(this, this$0, this$0);
	$set(this, val$params, val$params);
}

$Object* ConfigFile$Spi$1::run() {
	$useLocalCurrentObjectStackCache();
	if (this->val$params == nullptr) {
		this->this$0->init();
	} else {
		if (!($instanceOf($URIParameter, this->val$params))) {
			$throwNew($IllegalArgumentException, $$str({"Unrecognized parameter: "_s, this->val$params}));
		}
		$var($URIParameter, uriParam, $cast($URIParameter, this->val$params));
		$set(this->this$0, url, $nc($($nc(uriParam)->getURI()))->toURL());
		this->this$0->init();
	}
	return $of(nullptr);
}

ConfigFile$Spi$1::ConfigFile$Spi$1() {
}

$Class* ConfigFile$Spi$1::load$($String* name, bool initialize) {
	$loadClass(ConfigFile$Spi$1, name, initialize, &_ConfigFile$Spi$1_ClassInfo_, allocate$ConfigFile$Spi$1);
	return class$;
}

$Class* ConfigFile$Spi$1::class$ = nullptr;

		} // provider
	} // security
} // sun