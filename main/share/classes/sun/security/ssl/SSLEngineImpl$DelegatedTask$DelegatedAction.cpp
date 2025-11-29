#include <sun/security/ssl/SSLEngineImpl$DelegatedTask$DelegatedAction.h>

#include <java/nio/ByteBuffer.h>
#include <java/util/Collection.h>
#include <java/util/Map$Entry.h>
#include <java/util/Queue.h>
#include <sun/security/ssl/HandshakeContext.h>
#include <sun/security/ssl/SSLEngineImpl$DelegatedTask.h>
#include <jcpp.h>

using $Byte = ::java::lang::Byte;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $Map$Entry = ::java::util::Map$Entry;
using $Queue = ::java::util::Queue;
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;

namespace sun {
	namespace security {
		namespace ssl {

$FieldInfo _SSLEngineImpl$DelegatedTask$DelegatedAction_FieldInfo_[] = {
	{"context", "Lsun/security/ssl/HandshakeContext;", nullptr, $FINAL, $field(SSLEngineImpl$DelegatedTask$DelegatedAction, context)},
	{}
};

$MethodInfo _SSLEngineImpl$DelegatedTask$DelegatedAction_MethodInfo_[] = {
	{"<init>", "(Lsun/security/ssl/HandshakeContext;)V", nullptr, 0, $method(static_cast<void(SSLEngineImpl$DelegatedTask$DelegatedAction::*)($HandshakeContext*)>(&SSLEngineImpl$DelegatedTask$DelegatedAction::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, nullptr, "java.lang.Exception"},
	{}
};

$InnerClassInfo _SSLEngineImpl$DelegatedTask$DelegatedAction_InnerClassesInfo_[] = {
	{"sun.security.ssl.SSLEngineImpl$DelegatedTask", "sun.security.ssl.SSLEngineImpl", "DelegatedTask", $PRIVATE | $STATIC},
	{"sun.security.ssl.SSLEngineImpl$DelegatedTask$DelegatedAction", "sun.security.ssl.SSLEngineImpl$DelegatedTask", "DelegatedAction", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _SSLEngineImpl$DelegatedTask$DelegatedAction_ClassInfo_ = {
	$ACC_SUPER,
	"sun.security.ssl.SSLEngineImpl$DelegatedTask$DelegatedAction",
	"java.lang.Object",
	"java.security.PrivilegedExceptionAction",
	_SSLEngineImpl$DelegatedTask$DelegatedAction_FieldInfo_,
	_SSLEngineImpl$DelegatedTask$DelegatedAction_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljava/lang/Void;>;",
	nullptr,
	_SSLEngineImpl$DelegatedTask$DelegatedAction_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.security.ssl.SSLEngineImpl"
};

$Object* allocate$SSLEngineImpl$DelegatedTask$DelegatedAction($Class* clazz) {
	return $of($alloc(SSLEngineImpl$DelegatedTask$DelegatedAction));
}

void SSLEngineImpl$DelegatedTask$DelegatedAction::init$($HandshakeContext* context) {
	$set(this, context, context);
}

$Object* SSLEngineImpl$DelegatedTask$DelegatedAction::run() {
	$useLocalCurrentObjectStackCache();
	while (!$nc($nc(this->context)->delegatedActions)->isEmpty()) {
		$var($Map$Entry, me, $cast($Map$Entry, $nc($nc(this->context)->delegatedActions)->poll()));
		if (me != nullptr) {
			int8_t var$0 = $nc(($cast($Byte, $(me->getKey()))))->byteValue();
			$nc(this->context)->dispatch(var$0, $cast($ByteBuffer, $(me->getValue())));
		}
	}
	return $of(nullptr);
}

SSLEngineImpl$DelegatedTask$DelegatedAction::SSLEngineImpl$DelegatedTask$DelegatedAction() {
}

$Class* SSLEngineImpl$DelegatedTask$DelegatedAction::load$($String* name, bool initialize) {
	$loadClass(SSLEngineImpl$DelegatedTask$DelegatedAction, name, initialize, &_SSLEngineImpl$DelegatedTask$DelegatedAction_ClassInfo_, allocate$SSLEngineImpl$DelegatedTask$DelegatedAction);
	return class$;
}

$Class* SSLEngineImpl$DelegatedTask$DelegatedAction::class$ = nullptr;

		} // ssl
	} // security
} // sun