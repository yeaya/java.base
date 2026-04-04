#include <sun/security/ssl/SSLSessionContextImpl$SessionCacheVisitor.h>
#include <java/util/AbstractCollection.h>
#include <java/util/ArrayList.h>
#include <java/util/Collections.h>
#include <java/util/Enumeration.h>
#include <java/util/Iterator.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <javax/net/ssl/SSLSession.h>
#include <sun/security/ssl/SSLSessionContextImpl.h>
#include <sun/security/ssl/SSLSessionImpl.h>
#include <sun/security/ssl/SessionId.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractCollection = ::java::util::AbstractCollection;
using $ArrayList = ::java::util::ArrayList;
using $Collections = ::java::util::Collections;
using $Enumeration = ::java::util::Enumeration;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $SSLSessionContextImpl = ::sun::security::ssl::SSLSessionContextImpl;
using $SSLSessionImpl = ::sun::security::ssl::SSLSessionImpl;
using $SessionId = ::sun::security::ssl::SessionId;

namespace sun {
	namespace security {
		namespace ssl {

void SSLSessionContextImpl$SessionCacheVisitor::init$($SSLSessionContextImpl* this$0) {
	$set(this, this$0, this$0);
	$set(this, ids, nullptr);
}

void SSLSessionContextImpl$SessionCacheVisitor::visit($Map* map) {
	$useLocalObjectStack();
	$set(this, ids, $new($ArrayList, $nc(map)->size()));
	{
		$var($Iterator, i$, $$nc(map->keySet())->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($SessionId, key, $cast($SessionId, i$->next()));
			{
				$var($SSLSessionImpl, value, $cast($SSLSessionImpl, map->get(key)));
				if (!this->this$0->isTimedout(value)) {
					this->ids->add($($nc(key)->getId()));
				}
			}
		}
	}
}

$Enumeration* SSLSessionContextImpl$SessionCacheVisitor::getSessionIds() {
	return this->ids != nullptr ? $Collections::enumeration($cast($AbstractCollection, this->ids)) : $Collections::emptyEnumeration();
}

SSLSessionContextImpl$SessionCacheVisitor::SSLSessionContextImpl$SessionCacheVisitor() {
}

$Class* SSLSessionContextImpl$SessionCacheVisitor::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/security/ssl/SSLSessionContextImpl;", nullptr, $FINAL | $SYNTHETIC, $field(SSLSessionContextImpl$SessionCacheVisitor, this$0)},
		{"ids", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<[B>;", 0, $field(SSLSessionContextImpl$SessionCacheVisitor, ids)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/security/ssl/SSLSessionContextImpl;)V", nullptr, $PRIVATE, $method(SSLSessionContextImpl$SessionCacheVisitor, init$, void, $SSLSessionContextImpl*)},
		{"getSessionIds", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<[B>;", 0, $method(SSLSessionContextImpl$SessionCacheVisitor, getSessionIds, $Enumeration*)},
		{"visit", "(Ljava/util/Map;)V", "(Ljava/util/Map<Lsun/security/ssl/SessionId;Lsun/security/ssl/SSLSessionImpl;>;)V", $PUBLIC, $virtualMethod(SSLSessionContextImpl$SessionCacheVisitor, visit, void, $Map*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.ssl.SSLSessionContextImpl$SessionCacheVisitor", "sun.security.ssl.SSLSessionContextImpl", "SessionCacheVisitor", $PRIVATE | $FINAL},
		{"sun.security.util.Cache$CacheVisitor", "sun.security.util.Cache", "CacheVisitor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.security.ssl.SSLSessionContextImpl$SessionCacheVisitor",
		"java.lang.Object",
		"sun.security.util.Cache$CacheVisitor",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Lsun/security/util/Cache$CacheVisitor<Lsun/security/ssl/SessionId;Lsun/security/ssl/SSLSessionImpl;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.ssl.SSLSessionContextImpl"
	};
	$loadClass(SSLSessionContextImpl$SessionCacheVisitor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SSLSessionContextImpl$SessionCacheVisitor);
	});
	return class$;
}

$Class* SSLSessionContextImpl$SessionCacheVisitor::class$ = nullptr;

		} // ssl
	} // security
} // sun