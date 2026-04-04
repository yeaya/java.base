#include <sun/security/provider/ConfigFile$Spi$2.h>
#include <java/io/IOException.h>
#include <java/lang/SecurityException.h>
#include <sun/security/provider/ConfigFile$Spi.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityException = ::java::lang::SecurityException;
using $ConfigFile$Spi = ::sun::security::provider::ConfigFile$Spi;

namespace sun {
	namespace security {
		namespace provider {

void ConfigFile$Spi$2::init$($ConfigFile$Spi* this$0) {
	$set(this, this$0, this$0);
}

$Object* ConfigFile$Spi$2::run() {
	try {
		this->this$0->init();
	} catch ($IOException& ioe) {
		$throwNew($SecurityException, $(ioe->getLocalizedMessage()), ioe);
	}
	return nullptr;
}

ConfigFile$Spi$2::ConfigFile$Spi$2() {
}

$Class* ConfigFile$Spi$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/security/provider/ConfigFile$Spi;", nullptr, $FINAL | $SYNTHETIC, $field(ConfigFile$Spi$2, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/security/provider/ConfigFile$Spi;)V", nullptr, 0, $method(ConfigFile$Spi$2, init$, void, $ConfigFile$Spi*)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(ConfigFile$Spi$2, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.security.provider.ConfigFile$Spi",
		"engineRefresh",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.provider.ConfigFile$Spi", "sun.security.provider.ConfigFile", "Spi", $PUBLIC | $STATIC | $FINAL},
		{"sun.security.provider.ConfigFile$Spi$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.provider.ConfigFile$Spi$2",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.provider.ConfigFile"
	};
	$loadClass(ConfigFile$Spi$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ConfigFile$Spi$2);
	});
	return class$;
}

$Class* ConfigFile$Spi$2::class$ = nullptr;

		} // provider
	} // security
} // sun