#include <sun/nio/ch/UnixDomainSocketsUtil.h>

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/charset/Charset.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <jdk/internal/util/StaticProperty.h>
#include <sun/net/NetProperties.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $Charset = ::java::nio::charset::Charset;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $StaticProperty = ::jdk::internal::util::StaticProperty;
using $NetProperties = ::sun::net::NetProperties;

namespace sun {
	namespace nio {
		namespace ch {

class UnixDomainSocketsUtil$$Lambda$lambda$getTempDir$0 : public $PrivilegedAction {
	$class(UnixDomainSocketsUtil$$Lambda$lambda$getTempDir$0, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$() {
	}
	virtual $Object* run() override {
		 return $of(UnixDomainSocketsUtil::lambda$getTempDir$0());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<UnixDomainSocketsUtil$$Lambda$lambda$getTempDir$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo UnixDomainSocketsUtil$$Lambda$lambda$getTempDir$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(UnixDomainSocketsUtil$$Lambda$lambda$getTempDir$0::*)()>(&UnixDomainSocketsUtil$$Lambda$lambda$getTempDir$0::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo UnixDomainSocketsUtil$$Lambda$lambda$getTempDir$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.nio.ch.UnixDomainSocketsUtil$$Lambda$lambda$getTempDir$0",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	methodInfos
};
$Class* UnixDomainSocketsUtil$$Lambda$lambda$getTempDir$0::load$($String* name, bool initialize) {
	$loadClass(UnixDomainSocketsUtil$$Lambda$lambda$getTempDir$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* UnixDomainSocketsUtil$$Lambda$lambda$getTempDir$0::class$ = nullptr;

$MethodInfo _UnixDomainSocketsUtil_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(UnixDomainSocketsUtil::*)()>(&UnixDomainSocketsUtil::init$))},
	{"getCharset", "()Ljava/nio/charset/Charset;", nullptr, $STATIC, $method(static_cast<$Charset*(*)()>(&UnixDomainSocketsUtil::getCharset))},
	{"getTempDir", "()Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)()>(&UnixDomainSocketsUtil::getTempDir))},
	{"lambda$getTempDir$0", "()Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$String*(*)()>(&UnixDomainSocketsUtil::lambda$getTempDir$0))},
	{}
};

$ClassInfo _UnixDomainSocketsUtil_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.ch.UnixDomainSocketsUtil",
	"java.lang.Object",
	nullptr,
	nullptr,
	_UnixDomainSocketsUtil_MethodInfo_
};

$Object* allocate$UnixDomainSocketsUtil($Class* clazz) {
	return $of($alloc(UnixDomainSocketsUtil));
}

void UnixDomainSocketsUtil::init$() {
}

$Charset* UnixDomainSocketsUtil::getCharset() {
	return $Charset::defaultCharset();
}

$String* UnixDomainSocketsUtil::getTempDir() {
	$load(UnixDomainSocketsUtil);
	$beforeCallerSensitive();
	$var($PrivilegedAction, action, static_cast<$PrivilegedAction*>($new(UnixDomainSocketsUtil$$Lambda$lambda$getTempDir$0)));
	return $cast($String, $AccessController::doPrivileged(action));
}

$String* UnixDomainSocketsUtil::lambda$getTempDir$0() {
	$var($String, s, $NetProperties::get("jdk.net.unixdomain.tmpdir"_s));
	if (s != nullptr && s->length() > 0) {
		return s;
	} else {
		return $StaticProperty::javaIoTmpDir();
	}
}

UnixDomainSocketsUtil::UnixDomainSocketsUtil() {
}

$Class* UnixDomainSocketsUtil::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(UnixDomainSocketsUtil$$Lambda$lambda$getTempDir$0::classInfo$.name)) {
			return UnixDomainSocketsUtil$$Lambda$lambda$getTempDir$0::load$(name, initialize);
		}
	}
	$loadClass(UnixDomainSocketsUtil, name, initialize, &_UnixDomainSocketsUtil_ClassInfo_, allocate$UnixDomainSocketsUtil);
	return class$;
}

$Class* UnixDomainSocketsUtil::class$ = nullptr;

		} // ch
	} // nio
} // sun