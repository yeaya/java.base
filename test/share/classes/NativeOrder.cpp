#include <NativeOrder.h>
#include <java/nio/ByteOrder.h>
#include <jcpp.h>

#undef BIG_ENDIAN
#undef LITTLE_ENDIAN

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteOrder = ::java::nio::ByteOrder;

void NativeOrder::init$() {
}

void NativeOrder::main($StringArray* args) {
	$useLocalObjectStack();
	$var($ByteOrder, bo, $ByteOrder::nativeOrder());
	$nc($System::err)->println($$str({"ByteOrder.nativeOrder:"_s, bo}));
	$var($String, arch, $System::getProperty("os.arch"_s));
	$System::err->println($$str({"os.arch:"_s, arch}));
	bool var$4 = $nc(arch)->equals("i386"_s) && (bo != $ByteOrder::LITTLE_ENDIAN);
	bool var$3 = var$4 || (arch->equals("amd64"_s) && (bo != $ByteOrder::LITTLE_ENDIAN));
	bool var$2 = var$3 || (arch->equals("x86_64"_s) && (bo != $ByteOrder::LITTLE_ENDIAN));
	bool var$1 = var$2 || (arch->equals("ppc64"_s) && (bo != $ByteOrder::BIG_ENDIAN));
	bool var$0 = var$1 || (arch->equals("ppc64le"_s) && (bo != $ByteOrder::LITTLE_ENDIAN));
	if (var$0 || (arch->equals("s390x"_s) && (bo != $ByteOrder::BIG_ENDIAN))) {
		$throwNew($Exception, "Wrong byte order"_s);
	}
	$System::err->println("test is OK"_s);
}

NativeOrder::NativeOrder() {
}

$Class* NativeOrder::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(NativeOrder, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(NativeOrder, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"NativeOrder",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(NativeOrder, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NativeOrder);
	});
	return class$;
}

$Class* NativeOrder::class$ = nullptr;