#include <Test8076596.h>

#include <Test8076596$1.h>
#include <java/io/Serializable.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <jcpp.h>

using $Test8076596$1 = ::Test8076596$1;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityManager = ::java::lang::SecurityManager;
using $Void = ::java::lang::Void;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;

class Test8076596$$Lambda$lambda$new$0 : public $PrivilegedAction {
	$class(Test8076596$$Lambda$lambda$new$0, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$() {
	}
	virtual $Object* run() override {
		 return $of(Test8076596::lambda$new$0());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Test8076596$$Lambda$lambda$new$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Test8076596$$Lambda$lambda$new$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Test8076596$$Lambda$lambda$new$0::*)()>(&Test8076596$$Lambda$lambda$new$0::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Test8076596$$Lambda$lambda$new$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"Test8076596$$Lambda$lambda$new$0",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	methodInfos
};
$Class* Test8076596$$Lambda$lambda$new$0::load$($String* name, bool initialize) {
	$loadClass(Test8076596$$Lambda$lambda$new$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Test8076596$$Lambda$lambda$new$0::class$ = nullptr;

$MethodInfo _Test8076596_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Test8076596::*)()>(&Test8076596::init$))},
	{"lambda$new$0", "()Ljava/lang/Void;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Void*(*)()>(&Test8076596::lambda$new$0))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Test8076596::main))},
	{}
};

$InnerClassInfo _Test8076596_InnerClassesInfo_[] = {
	{"Test8076596$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Test8076596_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Test8076596",
	"java.lang.SecurityManager",
	nullptr,
	nullptr,
	_Test8076596_MethodInfo_,
	nullptr,
	nullptr,
	_Test8076596_InnerClassesInfo_,
	nullptr,
	nullptr,
	"Test8076596$1"
};

$Object* allocate$Test8076596($Class* clazz) {
	return $of($alloc(Test8076596));
}

void Test8076596::init$() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$SecurityManager::init$();
	$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new(Test8076596$$Lambda$lambda$new$0)));
	$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($Test8076596$1, this)));
}

void Test8076596::main($StringArray* args) {
	$init(Test8076596);
}

$Void* Test8076596::lambda$new$0() {
	$init(Test8076596);
	return nullptr;
}

Test8076596::Test8076596() {
}

$Class* Test8076596::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Test8076596$$Lambda$lambda$new$0::classInfo$.name)) {
			return Test8076596$$Lambda$lambda$new$0::load$(name, initialize);
		}
	}
	$loadClass(Test8076596, name, initialize, &_Test8076596_ClassInfo_, allocate$Test8076596);
	return class$;
}

$Class* Test8076596::class$ = nullptr;