#include <sun/security/ssl/TransportContext$NotifyHandshake.h>
#include <java/security/AccessControlContext.h>
#include <java/security/AccessController.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <javax/net/ssl/HandshakeCompletedEvent.h>
#include <javax/net/ssl/HandshakeCompletedListener.h>
#include <sun/security/ssl/TransportContext$NotifyHandshake$1.h>
#include <sun/security/ssl/TransportContext.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessControlContext = ::java::security::AccessControlContext;
using $AccessController = ::java::security::AccessController;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $HandshakeCompletedEvent = ::javax::net::ssl::HandshakeCompletedEvent;
using $HandshakeCompletedListener = ::javax::net::ssl::HandshakeCompletedListener;
using $TransportContext$NotifyHandshake$1 = ::sun::security::ssl::TransportContext$NotifyHandshake$1;

namespace sun {
	namespace security {
		namespace ssl {

void TransportContext$NotifyHandshake::init$($Map* listeners, $HandshakeCompletedEvent* event) {
	$set(this, targets, $new($HashSet, $($nc(listeners)->entrySet())));
	$set(this, event, event);
}

void TransportContext$NotifyHandshake::run() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($Iterator, i$, $nc(this->targets)->iterator());
	for (; $nc(i$)->hasNext();) {
		$var($Map$Entry, entry, $cast($Map$Entry, i$->next()));
		{
			$var($HandshakeCompletedListener, listener, $cast($HandshakeCompletedListener, $nc(entry)->getKey()));
			$var($AccessControlContext, acc, $cast($AccessControlContext, entry->getValue()));
			$AccessController::doPrivileged($$new($TransportContext$NotifyHandshake$1, this, listener), acc);
		}
	}
}

TransportContext$NotifyHandshake::TransportContext$NotifyHandshake() {
}

$Class* TransportContext$NotifyHandshake::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"targets", "Ljava/util/Set;", "Ljava/util/Set<Ljava/util/Map$Entry<Ljavax/net/ssl/HandshakeCompletedListener;Ljava/security/AccessControlContext;>;>;", $PRIVATE | $FINAL, $field(TransportContext$NotifyHandshake, targets)},
		{"event", "Ljavax/net/ssl/HandshakeCompletedEvent;", nullptr, $PRIVATE | $FINAL, $field(TransportContext$NotifyHandshake, event)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/Map;Ljavax/net/ssl/HandshakeCompletedEvent;)V", "(Ljava/util/Map<Ljavax/net/ssl/HandshakeCompletedListener;Ljava/security/AccessControlContext;>;Ljavax/net/ssl/HandshakeCompletedEvent;)V", 0, $method(TransportContext$NotifyHandshake, init$, void, $Map*, $HandshakeCompletedEvent*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TransportContext$NotifyHandshake, run, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.TransportContext$NotifyHandshake", "sun.security.ssl.TransportContext", "NotifyHandshake", $PRIVATE | $STATIC},
		{"sun.security.ssl.TransportContext$NotifyHandshake$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.ssl.TransportContext$NotifyHandshake",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.ssl.TransportContext"
	};
	$loadClass(TransportContext$NotifyHandshake, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TransportContext$NotifyHandshake);
	});
	return class$;
}

$Class* TransportContext$NotifyHandshake::class$ = nullptr;

		} // ssl
	} // security
} // sun