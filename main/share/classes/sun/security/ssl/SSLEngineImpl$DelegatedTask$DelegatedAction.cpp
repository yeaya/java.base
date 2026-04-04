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
using $HandshakeContext = ::sun::security::ssl::HandshakeContext;

namespace sun {
	namespace security {
		namespace ssl {

void SSLEngineImpl$DelegatedTask$DelegatedAction::init$($HandshakeContext* context) {
	$set(this, context, context);
}

$Object* SSLEngineImpl$DelegatedTask$DelegatedAction::run() {
	$useLocalObjectStack();
	while (!$nc($nc(this->context)->delegatedActions)->isEmpty()) {
		$var($Map$Entry, me, $cast($Map$Entry, this->context->delegatedActions->poll()));
		if (me != nullptr) {
			int8_t var$0 = $$sure($Byte, me->getKey())->byteValue();
			this->context->dispatch(var$0, $$cast($ByteBuffer, me->getValue()));
		}
	}
	return nullptr;
}

SSLEngineImpl$DelegatedTask$DelegatedAction::SSLEngineImpl$DelegatedTask$DelegatedAction() {
}

$Class* SSLEngineImpl$DelegatedTask$DelegatedAction::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"context", "Lsun/security/ssl/HandshakeContext;", nullptr, $FINAL, $field(SSLEngineImpl$DelegatedTask$DelegatedAction, context)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/security/ssl/HandshakeContext;)V", nullptr, 0, $method(SSLEngineImpl$DelegatedTask$DelegatedAction, init$, void, $HandshakeContext*)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(SSLEngineImpl$DelegatedTask$DelegatedAction, run, $Object*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.SSLEngineImpl$DelegatedTask", "sun.security.ssl.SSLEngineImpl", "DelegatedTask", $PRIVATE | $STATIC},
		{"sun.security.ssl.SSLEngineImpl$DelegatedTask$DelegatedAction", "sun.security.ssl.SSLEngineImpl$DelegatedTask", "DelegatedAction", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.ssl.SSLEngineImpl$DelegatedTask$DelegatedAction",
		"java.lang.Object",
		"java.security.PrivilegedExceptionAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljava/lang/Void;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.ssl.SSLEngineImpl"
	};
	$loadClass(SSLEngineImpl$DelegatedTask$DelegatedAction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SSLEngineImpl$DelegatedTask$DelegatedAction);
	});
	return class$;
}

$Class* SSLEngineImpl$DelegatedTask$DelegatedAction::class$ = nullptr;

		} // ssl
	} // security
} // sun