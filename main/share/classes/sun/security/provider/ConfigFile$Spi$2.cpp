#include <sun/security/provider/ConfigFile$Spi$2.h>

#include <java/io/IOException.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/SecurityException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/security/provider/ConfigFile$Spi.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityException = ::java::lang::SecurityException;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $ConfigFile$Spi = ::sun::security::provider::ConfigFile$Spi;

namespace sun {
	namespace security {
		namespace provider {

$FieldInfo _ConfigFile$Spi$2_FieldInfo_[] = {
	{"this$0", "Lsun/security/provider/ConfigFile$Spi;", nullptr, $FINAL | $SYNTHETIC, $field(ConfigFile$Spi$2, this$0)},
	{}
};

$MethodInfo _ConfigFile$Spi$2_MethodInfo_[] = {
	{"<init>", "(Lsun/security/provider/ConfigFile$Spi;)V", nullptr, 0, $method(static_cast<void(ConfigFile$Spi$2::*)($ConfigFile$Spi*)>(&ConfigFile$Spi$2::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ConfigFile$Spi$2_EnclosingMethodInfo_ = {
	"sun.security.provider.ConfigFile$Spi",
	"engineRefresh",
	"()V"
};

$InnerClassInfo _ConfigFile$Spi$2_InnerClassesInfo_[] = {
	{"sun.security.provider.ConfigFile$Spi", "sun.security.provider.ConfigFile", "Spi", $PUBLIC | $STATIC | $FINAL},
	{"sun.security.provider.ConfigFile$Spi$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ConfigFile$Spi$2_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.provider.ConfigFile$Spi$2",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_ConfigFile$Spi$2_FieldInfo_,
	_ConfigFile$Spi$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
	&_ConfigFile$Spi$2_EnclosingMethodInfo_,
	_ConfigFile$Spi$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.provider.ConfigFile"
};

$Object* allocate$ConfigFile$Spi$2($Class* clazz) {
	return $of($alloc(ConfigFile$Spi$2));
}

void ConfigFile$Spi$2::init$($ConfigFile$Spi* this$0) {
	$set(this, this$0, this$0);
}

$Object* ConfigFile$Spi$2::run() {
	$useLocalCurrentObjectStackCache();
	try {
		this->this$0->init();
	} catch ($IOException&) {
		$var($IOException, ioe, $catch());
		$throwNew($SecurityException, $(ioe->getLocalizedMessage()), ioe);
	}
	return $of(nullptr);
}

ConfigFile$Spi$2::ConfigFile$Spi$2() {
}

$Class* ConfigFile$Spi$2::load$($String* name, bool initialize) {
	$loadClass(ConfigFile$Spi$2, name, initialize, &_ConfigFile$Spi$2_ClassInfo_, allocate$ConfigFile$Spi$2);
	return class$;
}

$Class* ConfigFile$Spi$2::class$ = nullptr;

		} // provider
	} // security
} // sun