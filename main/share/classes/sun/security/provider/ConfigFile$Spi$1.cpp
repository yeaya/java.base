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
using $URIParameter = ::java::security::URIParameter;
using $Configuration$Parameters = ::javax::security::auth::login::Configuration$Parameters;
using $ConfigFile$Spi = ::sun::security::provider::ConfigFile$Spi;

namespace sun {
	namespace security {
		namespace provider {

void ConfigFile$Spi$1::init$($ConfigFile$Spi* this$0, $Configuration$Parameters* val$params) {
	$set(this, this$0, this$0);
	$set(this, val$params, val$params);
}

$Object* ConfigFile$Spi$1::run() {
	$useLocalObjectStack();
	if (this->val$params == nullptr) {
		this->this$0->init();
	} else {
		if (!($instanceOf($URIParameter, this->val$params))) {
			$throwNew($IllegalArgumentException, $$str({"Unrecognized parameter: "_s, this->val$params}));
		}
		$var($URIParameter, uriParam, $cast($URIParameter, this->val$params));
		$set(this->this$0, url, $$nc($nc(uriParam)->getURI())->toURL());
		this->this$0->init();
	}
	return nullptr;
}

ConfigFile$Spi$1::ConfigFile$Spi$1() {
}

$Class* ConfigFile$Spi$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/security/provider/ConfigFile$Spi;", nullptr, $FINAL | $SYNTHETIC, $field(ConfigFile$Spi$1, this$0)},
		{"val$params", "Ljavax/security/auth/login/Configuration$Parameters;", nullptr, $FINAL | $SYNTHETIC, $field(ConfigFile$Spi$1, val$params)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/security/provider/ConfigFile$Spi;Ljavax/security/auth/login/Configuration$Parameters;)V", "()V", 0, $method(ConfigFile$Spi$1, init$, void, $ConfigFile$Spi*, $Configuration$Parameters*)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(ConfigFile$Spi$1, run, $Object*), "java.io.IOException"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.security.provider.ConfigFile$Spi",
		"<init>",
		"(Ljavax/security/auth/login/Configuration$Parameters;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.provider.ConfigFile$Spi", "sun.security.provider.ConfigFile", "Spi", $PUBLIC | $STATIC | $FINAL},
		{"sun.security.provider.ConfigFile$Spi$1", nullptr, nullptr, 0},
		{"javax.security.auth.login.Configuration$Parameters", "javax.security.auth.login.Configuration", "Parameters", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.provider.ConfigFile$Spi$1",
		"java.lang.Object",
		"java.security.PrivilegedExceptionAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljava/lang/Void;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.provider.ConfigFile"
	};
	$loadClass(ConfigFile$Spi$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ConfigFile$Spi$1);
	});
	return class$;
}

$Class* ConfigFile$Spi$1::class$ = nullptr;

		} // provider
	} // security
} // sun