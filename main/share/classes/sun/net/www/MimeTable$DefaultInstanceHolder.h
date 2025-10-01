#ifndef _sun_net_www_MimeTable$DefaultInstanceHolder_h_
#define _sun_net_www_MimeTable$DefaultInstanceHolder_h_
//$ class sun.net.www.MimeTable$DefaultInstanceHolder
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace net {
		namespace www {
			class MimeTable;
		}
	}
}

namespace sun {
	namespace net {
		namespace www {

class MimeTable$DefaultInstanceHolder : public ::java::lang::Object {
	$class(MimeTable$DefaultInstanceHolder, 0, ::java::lang::Object)
public:
	MimeTable$DefaultInstanceHolder();
	void init$();
	static ::sun::net::www::MimeTable* getDefaultInstance();
	static ::sun::net::www::MimeTable* defaultInstance;
};

		} // www
	} // net
} // sun

#endif // _sun_net_www_MimeTable$DefaultInstanceHolder_h_