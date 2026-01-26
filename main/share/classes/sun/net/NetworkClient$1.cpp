#include <sun/net/NetworkClient$1.h>

#include <sun/net/NetworkClient.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace net {

$FieldInfo _NetworkClient$1_FieldInfo_[] = {
	{"val$encs", "[Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(NetworkClient$1, val$encs)},
	{"val$vals", "[I", nullptr, $FINAL | $SYNTHETIC, $field(NetworkClient$1, val$vals)},
	{}
};

$MethodInfo _NetworkClient$1_MethodInfo_[] = {
	{"<init>", "([I[Ljava/lang/String;)V", nullptr, 0, $method(NetworkClient$1, init$, void, $ints*, $StringArray*)},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(NetworkClient$1, run, $Object*)},
	{}
};

$EnclosingMethodInfo _NetworkClient$1_EnclosingMethodInfo_ = {
	"sun.net.NetworkClient",
	nullptr,
	nullptr
};

$InnerClassInfo _NetworkClient$1_InnerClassesInfo_[] = {
	{"sun.net.NetworkClient$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _NetworkClient$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.net.NetworkClient$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_NetworkClient$1_FieldInfo_,
	_NetworkClient$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
	&_NetworkClient$1_EnclosingMethodInfo_,
	_NetworkClient$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.net.NetworkClient"
};

$Object* allocate$NetworkClient$1($Class* clazz) {
	return $of($alloc(NetworkClient$1));
}

void NetworkClient$1::init$($ints* val$vals, $StringArray* val$encs) {
	$set(this, val$vals, val$vals);
	$set(this, val$encs, val$encs);
}

$Object* NetworkClient$1::run() {
	$useLocalCurrentObjectStackCache();
	$nc(this->val$vals)->set(0, $nc($($Integer::getInteger("sun.net.client.defaultReadTimeout"_s, 0)))->intValue());
	$nc(this->val$vals)->set(1, $nc($($Integer::getInteger("sun.net.client.defaultConnectTimeout"_s, 0)))->intValue());
	$nc(this->val$encs)->set(0, $($System::getProperty("file.encoding"_s, "ISO8859_1"_s)));
	return $of(nullptr);
}

NetworkClient$1::NetworkClient$1() {
}

$Class* NetworkClient$1::load$($String* name, bool initialize) {
	$loadClass(NetworkClient$1, name, initialize, &_NetworkClient$1_ClassInfo_, allocate$NetworkClient$1);
	return class$;
}

$Class* NetworkClient$1::class$ = nullptr;

	} // net
} // sun