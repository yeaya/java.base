#include <sun/net/www/protocol/http/AuthCacheImpl.h>
#include <java/util/AbstractList.h>
#include <java/util/HashMap.h>
#include <java/util/LinkedList.h>
#include <java/util/ListIterator.h>
#include <sun/net/www/protocol/http/AuthCacheValue.h>
#include <sun/net/www/protocol/http/AuthenticationInfo.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HashMap = ::java::util::HashMap;
using $LinkedList = ::java::util::LinkedList;
using $ListIterator = ::java::util::ListIterator;
using $AuthCacheValue = ::sun::net::www::protocol::http::AuthCacheValue;
using $AuthenticationInfo = ::sun::net::www::protocol::http::AuthenticationInfo;

namespace sun {
	namespace net {
		namespace www {
			namespace protocol {
				namespace http {

void AuthCacheImpl::init$() {
	$set(this, hashtable, $new($HashMap));
}

void AuthCacheImpl::setMap($HashMap* map) {
	$set(this, hashtable, map);
}

void AuthCacheImpl::put($String* pkey, $AuthCacheValue* value) {
	$synchronized(this) {
		$useLocalObjectStack();
		$var($LinkedList, list, $cast($LinkedList, $nc(this->hashtable)->get(pkey)));
		$var($String, skey, $nc(value)->getPath());
		if (list == nullptr) {
			$assign(list, $new($LinkedList));
			this->hashtable->put(pkey, list);
		}
		$var($ListIterator, iter, $nc(list)->listIterator());
		while ($nc(iter)->hasNext()) {
			$var($AuthenticationInfo, inf, $cast($AuthenticationInfo, iter->next()));
			if ($nc(inf)->path == nullptr || inf->path->startsWith(skey)) {
				iter->remove();
			}
		}
		iter->add(value);
	}
}

$AuthCacheValue* AuthCacheImpl::get($String* pkey, $String* skey) {
	$synchronized(this) {
		$useLocalObjectStack();
		$var($AuthenticationInfo, result, nullptr);
		$var($LinkedList, list, $cast($LinkedList, $nc(this->hashtable)->get(pkey)));
		if (list == nullptr || list->size() == 0) {
			return nullptr;
		}
		if (skey == nullptr) {
			return $cast($AuthenticationInfo, $nc(list)->get(0));
		}
		$var($ListIterator, iter, $nc(list)->listIterator());
		while ($nc(iter)->hasNext()) {
			$var($AuthenticationInfo, inf, $cast($AuthenticationInfo, iter->next()));
			if ($nc(skey)->startsWith($nc(inf)->path)) {
				return inf;
			}
		}
		return nullptr;
	}
}

void AuthCacheImpl::remove($String* pkey, $AuthCacheValue* entry) {
	$synchronized(this) {
		$useLocalObjectStack();
		$var($LinkedList, list, $cast($LinkedList, $nc(this->hashtable)->get(pkey)));
		if (list == nullptr) {
			return;
		}
		if (entry == nullptr) {
			$nc(list)->clear();
			return;
		}
		$var($ListIterator, iter, $nc(list)->listIterator());
		while ($nc(iter)->hasNext()) {
			$var($AuthenticationInfo, inf, $cast($AuthenticationInfo, iter->next()));
			if ($nc($of(entry))->equals(inf)) {
				iter->remove();
			}
		}
	}
}

AuthCacheImpl::AuthCacheImpl() {
}

$Class* AuthCacheImpl::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"hashtable", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/String;Ljava/util/LinkedList<Lsun/net/www/protocol/http/AuthCacheValue;>;>;", 0, $field(AuthCacheImpl, hashtable)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AuthCacheImpl, init$, void)},
		{"get", "(Ljava/lang/String;Ljava/lang/String;)Lsun/net/www/protocol/http/AuthCacheValue;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(AuthCacheImpl, get, $AuthCacheValue*, $String*, $String*)},
		{"put", "(Ljava/lang/String;Lsun/net/www/protocol/http/AuthCacheValue;)V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(AuthCacheImpl, put, void, $String*, $AuthCacheValue*)},
		{"remove", "(Ljava/lang/String;Lsun/net/www/protocol/http/AuthCacheValue;)V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(AuthCacheImpl, remove, void, $String*, $AuthCacheValue*)},
		{"setMap", "(Ljava/util/HashMap;)V", "(Ljava/util/HashMap<Ljava/lang/String;Ljava/util/LinkedList<Lsun/net/www/protocol/http/AuthCacheValue;>;>;)V", $PUBLIC, $virtualMethod(AuthCacheImpl, setMap, void, $HashMap*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.net.www.protocol.http.AuthCacheImpl",
		"java.lang.Object",
		"sun.net.www.protocol.http.AuthCache",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(AuthCacheImpl, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AuthCacheImpl);
	});
	return class$;
}

$Class* AuthCacheImpl::class$ = nullptr;

				} // http
			} // protocol
		} // www
	} // net
} // sun