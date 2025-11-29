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

$FieldInfo _TransportContext$NotifyHandshake$1_FieldInfo_[] = {
	{"this$0", "Lsun/security/ssl/TransportContext$NotifyHandshake;", nullptr, $FINAL | $SYNTHETIC, $field(TransportContext$NotifyHandshake$1, this$0)},
	{"val$listener", "Ljavax/net/ssl/HandshakeCompletedListener;", nullptr, $FINAL | $SYNTHETIC, $field(TransportContext$NotifyHandshake$1, val$listener)},
	{}
};

$MethodInfo _TransportContext$NotifyHandshake$1_MethodInfo_[] = {
	{"<init>", "(Lsun/security/ssl/TransportContext$NotifyHandshake;Ljavax/net/ssl/HandshakeCompletedListener;)V", "()V", 0, $method(static_cast<void(TransportContext$NotifyHandshake$1::*)($TransportContext$NotifyHandshake*,$HandshakeCompletedListener*)>(&TransportContext$NotifyHandshake$1::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _TransportContext$NotifyHandshake$1_EnclosingMethodInfo_ = {
	"sun.security.ssl.TransportContext$NotifyHandshake",
	"run",
	"()V"
};

$InnerClassInfo _TransportContext$NotifyHandshake$1_InnerClassesInfo_[] = {
	{"sun.security.ssl.TransportContext$NotifyHandshake", "sun.security.ssl.TransportContext", "NotifyHandshake", $PRIVATE | $STATIC},
	{"sun.security.ssl.TransportContext$NotifyHandshake$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TransportContext$NotifyHandshake$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.ssl.TransportContext$NotifyHandshake$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_TransportContext$NotifyHandshake$1_FieldInfo_,
	_TransportContext$NotifyHandshake$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
	&_TransportContext$NotifyHandshake$1_EnclosingMethodInfo_,
	_TransportContext$NotifyHandshake$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.TransportContext"
};

$Object* allocate$TransportContext$NotifyHandshake$1($Class* clazz) {
	return $of($alloc(TransportContext$NotifyHandshake$1));
}

void TransportContext$NotifyHandshake$1::init$($TransportContext$NotifyHandshake* this$0, $HandshakeCompletedListener* val$listener) {
	$set(this, this$0, this$0);
	$set(this, val$listener, val$listener);
}

$Object* TransportContext$NotifyHandshake$1::run() {
	$nc(this->val$listener)->handshakeCompleted(this->this$0->event);
	return $of(nullptr);
}

TransportContext$NotifyHandshake$1::TransportContext$NotifyHandshake$1() {
}

$Class* TransportContext$NotifyHandshake$1::load$($String* name, bool initialize) {
	$loadClass(TransportContext$NotifyHandshake$1, name, initialize, &_TransportContext$NotifyHandshake$1_ClassInfo_, allocate$TransportContext$NotifyHandshake$1);
	return class$;
}

$Class* TransportContext$NotifyHandshake$1::class$ = nullptr;

		} // ssl
	} // security
} // sun