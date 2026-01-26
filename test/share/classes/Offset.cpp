#include <Offset.h>

#include <java/net/DatagramPacket.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $DatagramPacket = ::java::net::DatagramPacket;

$MethodInfo _Offset_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Offset, init$, void)},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Offset, main, void, $StringArray*), "java.lang.Exception"},
	{}
};

$ClassInfo _Offset_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Offset",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Offset_MethodInfo_
};

$Object* allocate$Offset($Class* clazz) {
	return $of($alloc(Offset));
}

void Offset::init$() {
}

void Offset::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	$var($bytes, b1, $new($bytes, 1024));
	$var($DatagramPacket, p, $new($DatagramPacket, b1, 512, 512));
	$var($bytes, b2, $new($bytes, 20));
	p->setData(b2);
	if (p->getOffset() != 0) {
		$throwNew($Exception, "setData(byte[]) didn\'t reset offset"_s);
	}
}

Offset::Offset() {
}

$Class* Offset::load$($String* name, bool initialize) {
	$loadClass(Offset, name, initialize, &_Offset_ClassInfo_, allocate$Offset);
	return class$;
}

$Class* Offset::class$ = nullptr;