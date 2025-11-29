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

$FieldInfo _AuthCacheImpl_FieldInfo_[] = {
	{"hashtable", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/String;Ljava/util/LinkedList<Lsun/net/www/protocol/http/AuthCacheValue;>;>;", 0, $field(AuthCacheImpl, hashtable)},
	{}
};

$MethodInfo _AuthCacheImpl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AuthCacheImpl::*)()>(&AuthCacheImpl::init$))},
	{"get", "(Ljava/lang/String;Ljava/lang/String;)Lsun/net/www/protocol/http/AuthCacheValue;", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"put", "(Ljava/lang/String;Lsun/net/www/protocol/http/AuthCacheValue;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"remove", "(Ljava/lang/String;Lsun/net/www/protocol/http/AuthCacheValue;)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"setMap", "(Ljava/util/HashMap;)V", "(Ljava/util/HashMap<Ljava/lang/String;Ljava/util/LinkedList<Lsun/net/www/protocol/http/AuthCacheValue;>;>;)V", $PUBLIC},
	{}
};

$ClassInfo _AuthCacheImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.net.www.protocol.http.AuthCacheImpl",
	"java.lang.Object",
	"sun.net.www.protocol.http.AuthCache",
	_AuthCacheImpl_FieldInfo_,
	_AuthCacheImpl_MethodInfo_
};

$Object* allocate$AuthCacheImpl($Class* clazz) {
	return $of($alloc(AuthCacheImpl));
}

void AuthCacheImpl::init$() {
	$set(this, hashtable, $new($HashMap));
}

void AuthCacheImpl::setMap($HashMap* map) {
	$set(this, hashtable, map);
}

void AuthCacheImpl::put($String* pkey, $AuthCacheValue* value) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($LinkedList, list, $cast($LinkedList, $nc(this->hashtable)->get(pkey)));
		$var($String, skey, $nc(value)->getPath());
		if (list == nullptr) {
			$assign(list, $new($LinkedList));
			$nc(this->hashtable)->put(pkey, list);
		}
		$var($ListIterator, iter, $nc(list)->listIterator());
		while ($nc(iter)->hasNext()) {
			$var($AuthenticationInfo, inf, $cast($AuthenticationInfo, iter->next()));
			if ($nc(inf)->path == nullptr || $nc($nc(inf)->path)->startsWith(skey)) {
				iter->remove();
			}
		}
		$nc(iter)->add(value);
	}
}

$AuthCacheValue* AuthCacheImpl::get($String* pkey, $String* skey) {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		$var($AuthenticationInfo, result, nullptr);
		$var($LinkedList, list, $cast($LinkedList, $nc(this->hashtable)->get(pkey)));
		if (list == nullptr || $nc(list)->size() == 0) {
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
		$useLocalCurrentObjectStackCache();
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
	$loadClass(AuthCacheImpl, name, initialize, &_AuthCacheImpl_ClassInfo_, allocate$AuthCacheImpl);
	return class$;
}

$Class* AuthCacheImpl::class$ = nullptr;

				} // http
			} // protocol
		} // www
	} // net
} // sun