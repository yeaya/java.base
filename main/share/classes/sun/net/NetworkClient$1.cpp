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

void NetworkClient$1::init$($ints* val$vals, $StringArray* val$encs) {
	$set(this, val$vals, val$vals);
	$set(this, val$encs, val$encs);
}

$Object* NetworkClient$1::run() {
	$useLocalObjectStack();
	$nc(this->val$vals)->set(0, $$nc($Integer::getInteger("sun.net.client.defaultReadTimeout"_s, 0))->intValue());
	this->val$vals->set(1, $$nc($Integer::getInteger("sun.net.client.defaultConnectTimeout"_s, 0))->intValue());
	$nc(this->val$encs)->set(0, $($System::getProperty("file.encoding"_s, "ISO8859_1"_s)));
	return nullptr;
}

NetworkClient$1::NetworkClient$1() {
}

$Class* NetworkClient$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$encs", "[Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(NetworkClient$1, val$encs)},
		{"val$vals", "[I", nullptr, $FINAL | $SYNTHETIC, $field(NetworkClient$1, val$vals)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([I[Ljava/lang/String;)V", nullptr, 0, $method(NetworkClient$1, init$, void, $ints*, $StringArray*)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(NetworkClient$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.net.NetworkClient",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.net.NetworkClient$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.net.NetworkClient$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.net.NetworkClient"
	};
	$loadClass(NetworkClient$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NetworkClient$1);
	});
	return class$;
}

$Class* NetworkClient$1::class$ = nullptr;

	} // net
} // sun