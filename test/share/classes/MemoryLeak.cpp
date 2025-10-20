#include <MemoryLeak.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/ThreadLocal.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ThreadLocal = ::java::lang::ThreadLocal;

$MethodInfo _MemoryLeak_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MemoryLeak::*)()>(&MemoryLeak::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&MemoryLeak::main))},
	{}
};

$ClassInfo _MemoryLeak_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"MemoryLeak",
	"java.lang.Object",
	nullptr,
	nullptr,
	_MemoryLeak_MethodInfo_
};

$Object* allocate$MemoryLeak($Class* clazz) {
	return $of($alloc(MemoryLeak));
}

void MemoryLeak::init$() {
}

void MemoryLeak::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < 0x0010C8E0; ++i) {
		$var($ThreadLocal, t, $new($ThreadLocal));
		t->set($$new($Object));
		t->set(nullptr);
	}
}

MemoryLeak::MemoryLeak() {
}

$Class* MemoryLeak::load$($String* name, bool initialize) {
	$loadClass(MemoryLeak, name, initialize, &_MemoryLeak_ClassInfo_, allocate$MemoryLeak);
	return class$;
}

$Class* MemoryLeak::class$ = nullptr;