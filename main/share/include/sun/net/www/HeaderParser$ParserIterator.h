#ifndef _sun_net_www_HeaderParser$ParserIterator_h_
#define _sun_net_www_HeaderParser$ParserIterator_h_
//$ class sun.net.www.HeaderParser$ParserIterator
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

namespace sun {
	namespace net {
		namespace www {
			class HeaderParser;
		}
	}
}

namespace sun {
	namespace net {
		namespace www {

class $import HeaderParser$ParserIterator : public ::java::util::Iterator {
	$class(HeaderParser$ParserIterator, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	HeaderParser$ParserIterator();
	void init$(::sun::net::www::HeaderParser* this$0, bool returnValue);
	virtual bool hasNext() override;
	virtual $Object* next() override;
	virtual void remove() override;
	::sun::net::www::HeaderParser* this$0 = nullptr;
	int32_t index = 0;
	bool returnsValue = false;
};

		} // www
	} // net
} // sun

#endif // _sun_net_www_HeaderParser$ParserIterator_h_