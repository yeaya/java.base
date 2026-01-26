#include <FinalizeOverride.h>

#include <FinalizeOverride$Base.h>
#include <FinalizeOverride$NoOverride.h>
#include <FinalizeOverride$PrivateFinalize.h>
#include <FinalizeOverride$PublicFinalize.h>
#include <FinalizeOverride$SubSubclass.h>
#include <FinalizeOverride$Subclass.h>
#include <java/lang/InterruptedException.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/OpenOption.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/Paths.h>
#include <java/util/concurrent/atomic/AtomicInteger.h>
#include <jcpp.h>

using $FinalizeOverride$Base = ::FinalizeOverride$Base;
using $FinalizeOverride$NoOverride = ::FinalizeOverride$NoOverride;
using $FinalizeOverride$PrivateFinalize = ::FinalizeOverride$PrivateFinalize;
using $FinalizeOverride$PublicFinalize = ::FinalizeOverride$PublicFinalize;
using $FinalizeOverride$SubSubclass = ::FinalizeOverride$SubSubclass;
using $FinalizeOverride$Subclass = ::FinalizeOverride$Subclass;
using $OpenOptionArray = $Array<::java::nio::file::OpenOption>;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Files = ::java::nio::file::Files;
using $Path = ::java::nio::file::Path;
using $Paths = ::java::nio::file::Paths;
using $AtomicInteger = ::java::util::concurrent::atomic::AtomicInteger;

$FieldInfo _FinalizeOverride_FieldInfo_[] = {
	{"finalizedCount", "Ljava/util/concurrent/atomic/AtomicInteger;", nullptr, $PRIVATE | $STATIC, $staticField(FinalizeOverride, finalizedCount)},
	{"finalizedSum", "Ljava/util/concurrent/atomic/AtomicInteger;", nullptr, $PRIVATE | $STATIC, $staticField(FinalizeOverride, finalizedSum)},
	{"privateFinalizeInvoked", "Z", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(FinalizeOverride, privateFinalizeInvoked)},
	{}
};

$MethodInfo _FinalizeOverride_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FinalizeOverride, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(FinalizeOverride, main, void, $StringArray*), "java.io.IOException"},
	{"patchPrivateFinalize", "()V", nullptr, $STATIC, $staticMethod(FinalizeOverride, patchPrivateFinalize, void), "java.io.IOException"},
	{"test", "(Ljava/lang/Object;I)V", nullptr, $STATIC, $staticMethod(FinalizeOverride, test, void, Object$*, int32_t)},
	{}
};

$InnerClassInfo _FinalizeOverride_InnerClassesInfo_[] = {
	{"FinalizeOverride$NoOverride", "FinalizeOverride", "NoOverride", $STATIC},
	{"FinalizeOverride$PrivateFinalize", "FinalizeOverride", "PrivateFinalize", $STATIC},
	{"FinalizeOverride$SubSubclass", "FinalizeOverride", "SubSubclass", $STATIC},
	{"FinalizeOverride$Subclass", "FinalizeOverride", "Subclass", $STATIC},
	{"FinalizeOverride$PublicFinalize", "FinalizeOverride", "PublicFinalize", $STATIC},
	{"FinalizeOverride$Base", "FinalizeOverride", "Base", $STATIC},
	{}
};

$ClassInfo _FinalizeOverride_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"FinalizeOverride",
	"java.lang.Object",
	nullptr,
	_FinalizeOverride_FieldInfo_,
	_FinalizeOverride_MethodInfo_,
	nullptr,
	nullptr,
	_FinalizeOverride_InnerClassesInfo_,
	nullptr,
	nullptr,
	"FinalizeOverride$NoOverride,FinalizeOverride$PrivateFinalize,FinalizeOverride$SubSubclass,FinalizeOverride$Subclass,FinalizeOverride$PublicFinalize,FinalizeOverride$Base"
};

$Object* allocate$FinalizeOverride($Class* clazz) {
	return $of($alloc(FinalizeOverride));
}

$AtomicInteger* FinalizeOverride::finalizedCount = nullptr;
$AtomicInteger* FinalizeOverride::finalizedSum = nullptr;
$volatile(bool) FinalizeOverride::privateFinalizeInvoked = false;

void FinalizeOverride::init$() {
}

void FinalizeOverride::main($StringArray* argvs) {
	$init(FinalizeOverride);
	$useLocalCurrentObjectStackCache();
	patchPrivateFinalize();
	test($$new($FinalizeOverride$Base, 10), 10);
	test($$new($FinalizeOverride$Subclass, 20), 0);
	test($$new($FinalizeOverride$SubSubclass, 30), 30);
	test($$new($FinalizeOverride$PublicFinalize, 40), 40 * 100 + 40);
	test($$new($FinalizeOverride$PrivateFinalize, 50), 50);
	test($$new($FinalizeOverride$NoOverride, 60), 60);
}

void FinalizeOverride::test(Object$* o$renamed, int32_t expected) {
	$init(FinalizeOverride);
	$useLocalCurrentObjectStackCache();
	$var($Object, o, o$renamed);
	int32_t count = $nc(FinalizeOverride::finalizedCount)->get();
	int32_t sum = $nc(FinalizeOverride::finalizedSum)->get();
	FinalizeOverride::privateFinalizeInvoked = false;
	$assign(o, nullptr);
	while ($nc(FinalizeOverride::finalizedCount)->get() != (count + 1)) {
		$System::gc();
		$System::runFinalization();
		try {
			$Thread::sleep(1000);
		} catch ($InterruptedException& e) {
			$nc($System::out)->println("Main thread interrupted, continuing execution."_s);
		}
	}
	if (FinalizeOverride::privateFinalizeInvoked) {
		$throwNew($RuntimeException, "private finalize method invoked"_s);
	}
	if ($nc(FinalizeOverride::finalizedCount)->get() != (count + 1)) {
		$throwNew($RuntimeException, $$str({"Unexpected count="_s, FinalizeOverride::finalizedCount, " expected="_s, $$str((count + 1))}));
	}
	if ($nc(FinalizeOverride::finalizedSum)->get() != (sum + expected)) {
		$throwNew($RuntimeException, $$str({"Unexpected sum="_s, FinalizeOverride::finalizedSum, " prev="_s, $$str(sum), " value="_s, $$str(expected)}));
	}
}

void FinalizeOverride::patchPrivateFinalize() {
	$init(FinalizeOverride);
	$useLocalCurrentObjectStackCache();
	$var($String, testClasses, $System::getProperty("test.classes"_s, "."_s));
	$var($Path, p, $Paths::get(testClasses, $$new($StringArray, {"FinalizeOverride$PrivateFinalize.class"_s})));
	$var($bytes, bytes, $Files::readAllBytes(p));
	int32_t len = "f_nal_ze"_s->length();
	for (int32_t i = 0; i < $nc(bytes)->length - len; ++i) {
		if (bytes->get(i) == u'f' && bytes->get(i + 1) == u'_' && bytes->get(i + 2) == u'n' && bytes->get(i + 3) == u'a' && bytes->get(i + 4) == u'l' && bytes->get(i + 5) == u'_' && bytes->get(i + 6) == u'z' && bytes->get(i + 7) == u'e') {
			bytes->set(i + 1, (int8_t)u'i');
			bytes->set(i + 5, (int8_t)u'i');
			break;
		}
	}
	$Files::write(p, bytes, $$new($OpenOptionArray, 0));
}

void clinit$FinalizeOverride($Class* class$) {
	$assignStatic(FinalizeOverride::finalizedCount, $new($AtomicInteger));
	$assignStatic(FinalizeOverride::finalizedSum, $new($AtomicInteger));
	FinalizeOverride::privateFinalizeInvoked = false;
}

FinalizeOverride::FinalizeOverride() {
}

$Class* FinalizeOverride::load$($String* name, bool initialize) {
	$loadClass(FinalizeOverride, name, initialize, &_FinalizeOverride_ClassInfo_, clinit$FinalizeOverride, allocate$FinalizeOverride);
	return class$;
}

$Class* FinalizeOverride::class$ = nullptr;