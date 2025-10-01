#include <java/net/CookieStore.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/HttpCookie.h>
#include <java/net/URI.h>
#include <java/util/List.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HttpCookie = ::java::net::HttpCookie;
using $URI = ::java::net::URI;
using $List = ::java::util::List;

namespace java {
	namespace net {

$MethodInfo _CookieStore_MethodInfo_[] = {
	{"add", "(Ljava/net/URI;Ljava/net/HttpCookie;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"get", "(Ljava/net/URI;)Ljava/util/List;", "(Ljava/net/URI;)Ljava/util/List<Ljava/net/HttpCookie;>;", $PUBLIC | $ABSTRACT},
	{"getCookies", "()Ljava/util/List;", "()Ljava/util/List<Ljava/net/HttpCookie;>;", $PUBLIC | $ABSTRACT},
	{"getURIs", "()Ljava/util/List;", "()Ljava/util/List<Ljava/net/URI;>;", $PUBLIC | $ABSTRACT},
	{"remove", "(Ljava/net/URI;Ljava/net/HttpCookie;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"removeAll", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _CookieStore_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.net.CookieStore",
	nullptr,
	nullptr,
	nullptr,
	_CookieStore_MethodInfo_
};

$Object* allocate$CookieStore($Class* clazz) {
	return $of($alloc(CookieStore));
}

$Class* CookieStore::load$($String* name, bool initialize) {
	$loadClass(CookieStore, name, initialize, &_CookieStore_ClassInfo_, allocate$CookieStore);
	return class$;
}

$Class* CookieStore::class$ = nullptr;

	} // net
} // java