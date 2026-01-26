#include <jdk/internal/logger/DefaultLoggerFinder$1.h>

#include <java/lang/ClassLoader.h>
#include <java/lang/Module.h>
#include <jdk/internal/logger/DefaultLoggerFinder.h>
#include <jdk/internal/misc/VM.h>
#include <jcpp.h>

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Module = ::java::lang::Module;
using $VM = ::jdk::internal::misc::VM;

namespace jdk {
	namespace internal {
		namespace logger {

$FieldInfo _DefaultLoggerFinder$1_FieldInfo_[] = {
	{"val$m", "Ljava/lang/Module;", nullptr, $FINAL | $SYNTHETIC, $field(DefaultLoggerFinder$1, val$m)},
	{}
};

$MethodInfo _DefaultLoggerFinder$1_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Module;)V", nullptr, 0, $method(DefaultLoggerFinder$1, init$, void, $Module*)},
	{"run", "()Ljava/lang/Boolean;", nullptr, $PUBLIC, $virtualMethod(DefaultLoggerFinder$1, run, $Object*)},
	{}
};

$EnclosingMethodInfo _DefaultLoggerFinder$1_EnclosingMethodInfo_ = {
	"jdk.internal.logger.DefaultLoggerFinder",
	"isSystem",
	"(Ljava/lang/Module;)Z"
};

$InnerClassInfo _DefaultLoggerFinder$1_InnerClassesInfo_[] = {
	{"jdk.internal.logger.DefaultLoggerFinder$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _DefaultLoggerFinder$1_ClassInfo_ = {
	$ACC_SUPER,
	"jdk.internal.logger.DefaultLoggerFinder$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_DefaultLoggerFinder$1_FieldInfo_,
	_DefaultLoggerFinder$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Boolean;>;",
	&_DefaultLoggerFinder$1_EnclosingMethodInfo_,
	_DefaultLoggerFinder$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"jdk.internal.logger.DefaultLoggerFinder"
};

$Object* allocate$DefaultLoggerFinder$1($Class* clazz) {
	return $of($alloc(DefaultLoggerFinder$1));
}

void DefaultLoggerFinder$1::init$($Module* val$m) {
	$set(this, val$m, val$m);
}

$Object* DefaultLoggerFinder$1::run() {
	return $of($Boolean::valueOf($VM::isSystemDomainLoader($($nc(this->val$m)->getClassLoader()))));
}

DefaultLoggerFinder$1::DefaultLoggerFinder$1() {
}

$Class* DefaultLoggerFinder$1::load$($String* name, bool initialize) {
	$loadClass(DefaultLoggerFinder$1, name, initialize, &_DefaultLoggerFinder$1_ClassInfo_, allocate$DefaultLoggerFinder$1);
	return class$;
}

$Class* DefaultLoggerFinder$1::class$ = nullptr;

		} // logger
	} // internal
} // jdk