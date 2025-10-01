#ifndef _java_net_CookieManager$CookieComparator_h_
#define _java_net_CookieManager$CookieComparator_h_
//$ class java.net.CookieManager$CookieComparator
//$ extends java.util.Comparator

#include <java/util/Comparator.h>

namespace java {
	namespace net {
		class HttpCookie;
	}
}

namespace java {
	namespace net {

class $export CookieManager$CookieComparator : public ::java::util::Comparator {
	$class(CookieManager$CookieComparator, $NO_CLASS_INIT, ::java::util::Comparator)
public:
	CookieManager$CookieComparator();
	void init$();
	virtual int32_t compare(::java::net::HttpCookie* c1, ::java::net::HttpCookie* c2);
	virtual int32_t compare(Object$* c1, Object$* c2) override;
};

	} // net
} // java

#endif // _java_net_CookieManager$CookieComparator_h_