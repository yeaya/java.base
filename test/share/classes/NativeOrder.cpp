#include <NativeOrder.h>

#include <java/nio/ByteOrder.h>
#include <jcpp.h>

#undef BIG_ENDIAN
#undef LITTLE_ENDIAN

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteOrder = ::java::nio::ByteOrder;

$MethodInfo _NativeOrder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(NativeOrder::*)()>(&NativeOrder::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&NativeOrder::main)), "java.lang.Exception"},
	{}
};

$ClassInfo _NativeOrder_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"NativeOrder",
	"java.lang.Object",
	nullptr,
	nullptr,
	_NativeOrder_MethodInfo_
};

$Object* allocate$NativeOrder($Class* clazz) {
	return $of($alloc(NativeOrder));
}

void NativeOrder::init$() {
}

void NativeOrder::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($ByteOrder, bo, $ByteOrder::nativeOrder());
	$nc($System::err)->println($$str({"ByteOrder.nativeOrder:"_s, bo}));
	$var($String, arch, $System::getProperty("os.arch"_s));
	$nc($System::err)->println($$str({"os.arch:"_s, arch}));
	bool var$4 = ($nc(arch)->equals("i386"_s) && (bo != $ByteOrder::LITTLE_ENDIAN));
	bool var$3 = var$4 || ($nc(arch)->equals("amd64"_s) && (bo != $ByteOrder::LITTLE_ENDIAN));
	bool var$2 = var$3 || ($nc(arch)->equals("x86_64"_s) && (bo != $ByteOrder::LITTLE_ENDIAN));
	bool var$1 = var$2 || ($nc(arch)->equals("ppc64"_s) && (bo != $ByteOrder::BIG_ENDIAN));
	bool var$0 = var$1 || ($nc(arch)->equals("ppc64le"_s) && (bo != $ByteOrder::LITTLE_ENDIAN));
	if (var$0 || ($nc(arch)->equals("s390x"_s) && (bo != $ByteOrder::BIG_ENDIAN))) {
		$throwNew($Exception, "Wrong byte order"_s);
	}
	$nc($System::err)->println("test is OK"_s);
}

NativeOrder::NativeOrder() {
}

$Class* NativeOrder::load$($String* name, bool initialize) {
	$loadClass(NativeOrder, name, initialize, &_NativeOrder_ClassInfo_, allocate$NativeOrder);
	return class$;
}

$Class* NativeOrder::class$ = nullptr;