#ifndef _sun_net_www_MessageHeader$HeaderIterator_h_
#define _sun_net_www_MessageHeader$HeaderIterator_h_
//$ class sun.net.www.MessageHeader$HeaderIterator
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

namespace sun {
	namespace net {
		namespace www {
			class MessageHeader;
		}
	}
}

namespace sun {
	namespace net {
		namespace www {

class $export MessageHeader$HeaderIterator : public ::java::util::Iterator {
	$class(MessageHeader$HeaderIterator, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	MessageHeader$HeaderIterator();
	void init$(::sun::net::www::MessageHeader* this$0, $String* k, Object$* lock);
	virtual bool hasNext() override;
	virtual $Object* next() override;
	virtual void remove() override;
	::sun::net::www::MessageHeader* this$0 = nullptr;
	int32_t index = 0;
	int32_t next$ = 0;
	$String* key = nullptr;
	bool haveNext = false;
	$Object* lock = nullptr;
};

		} // www
	} // net
} // sun

#endif // _sun_net_www_MessageHeader$HeaderIterator_h_