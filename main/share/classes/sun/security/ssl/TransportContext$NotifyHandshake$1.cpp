#include <sun/security/ssl/TransportContext$NotifyHandshake$1.h>
#include <javax/net/ssl/HandshakeCompletedEvent.h>
#include <javax/net/ssl/HandshakeCompletedListener.h>
#include <sun/security/ssl/TransportContext$NotifyHandshake.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HandshakeCompletedListener = ::javax::net::ssl::HandshakeCompletedListener;
using $TransportContext$NotifyHandshake = ::sun::security::ssl::TransportContext$NotifyHandshake;

namespace sun {
	namespace security {
		namespace ssl {

void TransportContext$NotifyHandshake$1::init$($TransportContext$NotifyHandshake* this$0, $HandshakeCompletedListener* val$listener) {
	$set(this, this$0, this$0);
	$set(this, val$listener, val$listener);
}

$Object* TransportContext$NotifyHandshake$1::run() {
	$nc(this->val$listener)->handshakeCompleted(this->this$0->event);
	return nullptr;
}

TransportContext$NotifyHandshake$1::TransportContext$NotifyHandshake$1() {
}

$Class* TransportContext$NotifyHandshake$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/security/ssl/TransportContext$NotifyHandshake;", nullptr, $FINAL | $SYNTHETIC, $field(TransportContext$NotifyHandshake$1, this$0)},
		{"val$listener", "Ljavax/net/ssl/HandshakeCompletedListener;", nullptr, $FINAL | $SYNTHETIC, $field(TransportContext$NotifyHandshake$1, val$listener)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/security/ssl/TransportContext$NotifyHandshake;Ljavax/net/ssl/HandshakeCompletedListener;)V", "()V", 0, $method(TransportContext$NotifyHandshake$1, init$, void, $TransportContext$NotifyHandshake*, $HandshakeCompletedListener*)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(TransportContext$NotifyHandshake$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.security.ssl.TransportContext$NotifyHandshake",
		"run",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.TransportContext$NotifyHandshake", "sun.security.ssl.TransportContext", "NotifyHandshake", $PRIVATE | $STATIC},
		{"sun.security.ssl.TransportContext$NotifyHandshake$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.ssl.TransportContext$NotifyHandshake$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.ssl.TransportContext"
	};
	$loadClass(TransportContext$NotifyHandshake$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TransportContext$NotifyHandshake$1);
	});
	return class$;
}

$Class* TransportContext$NotifyHandshake$1::class$ = nullptr;

		} // ssl
	} // security
} // sun